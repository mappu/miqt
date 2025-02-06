#include <QAbstractGraphicsShapeItem>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QCursor>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEffect>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsObject>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsTransform>
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
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QTextCursor>
#include <QTextDocument>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicsitem.h>
#include "gen_qgraphicsitem.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGraphicsItem_advance(QGraphicsItem*, intptr_t, int);
QRectF* miqt_exec_callback_QGraphicsItem_boundingRect(const QGraphicsItem*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsItem_shape(const QGraphicsItem*, intptr_t);
bool miqt_exec_callback_QGraphicsItem_contains(const QGraphicsItem*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsItem_collidesWithItem(const QGraphicsItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsItem_collidesWithPath(const QGraphicsItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsItem_isObscuredBy(const QGraphicsItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsItem_opaqueArea(const QGraphicsItem*, intptr_t);
void miqt_exec_callback_QGraphicsItem_paint(QGraphicsItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QGraphicsItem_type(const QGraphicsItem*, intptr_t);
bool miqt_exec_callback_QGraphicsItem_sceneEventFilter(QGraphicsItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsItem_sceneEvent(QGraphicsItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsItem_contextMenuEvent(QGraphicsItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsItem_dragEnterEvent(QGraphicsItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItem_dragLeaveEvent(QGraphicsItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItem_dragMoveEvent(QGraphicsItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItem_dropEvent(QGraphicsItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItem_focusInEvent(QGraphicsItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsItem_focusOutEvent(QGraphicsItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsItem_hoverEnterEvent(QGraphicsItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItem_hoverMoveEvent(QGraphicsItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItem_hoverLeaveEvent(QGraphicsItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItem_keyPressEvent(QGraphicsItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsItem_keyReleaseEvent(QGraphicsItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsItem_mousePressEvent(QGraphicsItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItem_mouseMoveEvent(QGraphicsItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItem_mouseReleaseEvent(QGraphicsItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItem_mouseDoubleClickEvent(QGraphicsItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItem_wheelEvent(QGraphicsItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsItem_inputMethodEvent(QGraphicsItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsItem_inputMethodQuery(const QGraphicsItem*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsItem_itemChange(QGraphicsItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsItem_supportsExtension(const QGraphicsItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsItem_setExtension(QGraphicsItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsItem_extension(const QGraphicsItem*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsObject_parentChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_opacityChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_visibleChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_enabledChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_xChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_yChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_zChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_rotationChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_scaleChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_childrenChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_widthChanged(intptr_t);
void miqt_exec_callback_QGraphicsObject_heightChanged(intptr_t);
bool miqt_exec_callback_QGraphicsObject_event(QGraphicsObject*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsObject_eventFilter(QGraphicsObject*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsObject_timerEvent(QGraphicsObject*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsObject_childEvent(QGraphicsObject*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsObject_customEvent(QGraphicsObject*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsObject_connectNotify(QGraphicsObject*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsObject_disconnectNotify(QGraphicsObject*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsObject_advance(QGraphicsObject*, intptr_t, int);
QRectF* miqt_exec_callback_QGraphicsObject_boundingRect(const QGraphicsObject*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsObject_shape(const QGraphicsObject*, intptr_t);
bool miqt_exec_callback_QGraphicsObject_contains(const QGraphicsObject*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsObject_collidesWithItem(const QGraphicsObject*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsObject_collidesWithPath(const QGraphicsObject*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsObject_isObscuredBy(const QGraphicsObject*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsObject_opaqueArea(const QGraphicsObject*, intptr_t);
void miqt_exec_callback_QGraphicsObject_paint(QGraphicsObject*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QGraphicsObject_type(const QGraphicsObject*, intptr_t);
bool miqt_exec_callback_QGraphicsObject_sceneEventFilter(QGraphicsObject*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsObject_sceneEvent(QGraphicsObject*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsObject_contextMenuEvent(QGraphicsObject*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsObject_dragEnterEvent(QGraphicsObject*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsObject_dragLeaveEvent(QGraphicsObject*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsObject_dragMoveEvent(QGraphicsObject*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsObject_dropEvent(QGraphicsObject*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsObject_focusInEvent(QGraphicsObject*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsObject_focusOutEvent(QGraphicsObject*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsObject_hoverEnterEvent(QGraphicsObject*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsObject_hoverMoveEvent(QGraphicsObject*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsObject_hoverLeaveEvent(QGraphicsObject*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsObject_keyPressEvent(QGraphicsObject*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsObject_keyReleaseEvent(QGraphicsObject*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsObject_mousePressEvent(QGraphicsObject*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsObject_mouseMoveEvent(QGraphicsObject*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsObject_mouseReleaseEvent(QGraphicsObject*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsObject_mouseDoubleClickEvent(QGraphicsObject*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsObject_wheelEvent(QGraphicsObject*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsObject_inputMethodEvent(QGraphicsObject*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsObject_inputMethodQuery(const QGraphicsObject*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsObject_itemChange(QGraphicsObject*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsObject_supportsExtension(const QGraphicsObject*, intptr_t, int);
void miqt_exec_callback_QGraphicsObject_setExtension(QGraphicsObject*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsObject_extension(const QGraphicsObject*, intptr_t, QVariant*);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_isObscuredBy(const QAbstractGraphicsShapeItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QAbstractGraphicsShapeItem_opaqueArea(const QAbstractGraphicsShapeItem*, intptr_t);
void miqt_exec_callback_QAbstractGraphicsShapeItem_advance(QAbstractGraphicsShapeItem*, intptr_t, int);
QRectF* miqt_exec_callback_QAbstractGraphicsShapeItem_boundingRect(const QAbstractGraphicsShapeItem*, intptr_t);
QPainterPath* miqt_exec_callback_QAbstractGraphicsShapeItem_shape(const QAbstractGraphicsShapeItem*, intptr_t);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_contains(const QAbstractGraphicsShapeItem*, intptr_t, QPointF*);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_collidesWithItem(const QAbstractGraphicsShapeItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_collidesWithPath(const QAbstractGraphicsShapeItem*, intptr_t, QPainterPath*, int);
void miqt_exec_callback_QAbstractGraphicsShapeItem_paint(QAbstractGraphicsShapeItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QAbstractGraphicsShapeItem_type(const QAbstractGraphicsShapeItem*, intptr_t);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_sceneEventFilter(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_sceneEvent(QAbstractGraphicsShapeItem*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_contextMenuEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_dragEnterEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_dragLeaveEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_dragMoveEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_dropEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_focusInEvent(QAbstractGraphicsShapeItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_focusOutEvent(QAbstractGraphicsShapeItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_hoverEnterEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_hoverMoveEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_hoverLeaveEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_keyPressEvent(QAbstractGraphicsShapeItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_keyReleaseEvent(QAbstractGraphicsShapeItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_mousePressEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_mouseMoveEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_mouseReleaseEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_mouseDoubleClickEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_wheelEvent(QAbstractGraphicsShapeItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QAbstractGraphicsShapeItem_inputMethodEvent(QAbstractGraphicsShapeItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QAbstractGraphicsShapeItem_inputMethodQuery(const QAbstractGraphicsShapeItem*, intptr_t, int);
QVariant* miqt_exec_callback_QAbstractGraphicsShapeItem_itemChange(QAbstractGraphicsShapeItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QAbstractGraphicsShapeItem_supportsExtension(const QAbstractGraphicsShapeItem*, intptr_t, int);
void miqt_exec_callback_QAbstractGraphicsShapeItem_setExtension(QAbstractGraphicsShapeItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QAbstractGraphicsShapeItem_extension(const QAbstractGraphicsShapeItem*, intptr_t, QVariant*);
QRectF* miqt_exec_callback_QGraphicsPathItem_boundingRect(const QGraphicsPathItem*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsPathItem_shape(const QGraphicsPathItem*, intptr_t);
bool miqt_exec_callback_QGraphicsPathItem_contains(const QGraphicsPathItem*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsPathItem_paint(QGraphicsPathItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsPathItem_isObscuredBy(const QGraphicsPathItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsPathItem_opaqueArea(const QGraphicsPathItem*, intptr_t);
int miqt_exec_callback_QGraphicsPathItem_type(const QGraphicsPathItem*, intptr_t);
bool miqt_exec_callback_QGraphicsPathItem_supportsExtension(const QGraphicsPathItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsPathItem_setExtension(QGraphicsPathItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsPathItem_extension(const QGraphicsPathItem*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsPathItem_advance(QGraphicsPathItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsPathItem_collidesWithItem(const QGraphicsPathItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsPathItem_collidesWithPath(const QGraphicsPathItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsPathItem_sceneEventFilter(QGraphicsPathItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsPathItem_sceneEvent(QGraphicsPathItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsPathItem_contextMenuEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsPathItem_dragEnterEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPathItem_dragLeaveEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPathItem_dragMoveEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPathItem_dropEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPathItem_focusInEvent(QGraphicsPathItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPathItem_focusOutEvent(QGraphicsPathItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPathItem_hoverEnterEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPathItem_hoverMoveEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPathItem_hoverLeaveEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPathItem_keyPressEvent(QGraphicsPathItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPathItem_keyReleaseEvent(QGraphicsPathItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPathItem_mousePressEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPathItem_mouseMoveEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPathItem_mouseReleaseEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPathItem_mouseDoubleClickEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPathItem_wheelEvent(QGraphicsPathItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsPathItem_inputMethodEvent(QGraphicsPathItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsPathItem_inputMethodQuery(const QGraphicsPathItem*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsPathItem_itemChange(QGraphicsPathItem*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsRectItem_boundingRect(const QGraphicsRectItem*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsRectItem_shape(const QGraphicsRectItem*, intptr_t);
bool miqt_exec_callback_QGraphicsRectItem_contains(const QGraphicsRectItem*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsRectItem_paint(QGraphicsRectItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsRectItem_isObscuredBy(const QGraphicsRectItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsRectItem_opaqueArea(const QGraphicsRectItem*, intptr_t);
int miqt_exec_callback_QGraphicsRectItem_type(const QGraphicsRectItem*, intptr_t);
bool miqt_exec_callback_QGraphicsRectItem_supportsExtension(const QGraphicsRectItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsRectItem_setExtension(QGraphicsRectItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsRectItem_extension(const QGraphicsRectItem*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsRectItem_advance(QGraphicsRectItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsRectItem_collidesWithItem(const QGraphicsRectItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsRectItem_collidesWithPath(const QGraphicsRectItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsRectItem_sceneEventFilter(QGraphicsRectItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsRectItem_sceneEvent(QGraphicsRectItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsRectItem_contextMenuEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsRectItem_dragEnterEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsRectItem_dragLeaveEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsRectItem_dragMoveEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsRectItem_dropEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsRectItem_focusInEvent(QGraphicsRectItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsRectItem_focusOutEvent(QGraphicsRectItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsRectItem_hoverEnterEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsRectItem_hoverMoveEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsRectItem_hoverLeaveEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsRectItem_keyPressEvent(QGraphicsRectItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsRectItem_keyReleaseEvent(QGraphicsRectItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsRectItem_mousePressEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsRectItem_mouseMoveEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsRectItem_mouseReleaseEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsRectItem_mouseDoubleClickEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsRectItem_wheelEvent(QGraphicsRectItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsRectItem_inputMethodEvent(QGraphicsRectItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsRectItem_inputMethodQuery(const QGraphicsRectItem*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsRectItem_itemChange(QGraphicsRectItem*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsEllipseItem_boundingRect(const QGraphicsEllipseItem*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsEllipseItem_shape(const QGraphicsEllipseItem*, intptr_t);
bool miqt_exec_callback_QGraphicsEllipseItem_contains(const QGraphicsEllipseItem*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsEllipseItem_paint(QGraphicsEllipseItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsEllipseItem_isObscuredBy(const QGraphicsEllipseItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsEllipseItem_opaqueArea(const QGraphicsEllipseItem*, intptr_t);
int miqt_exec_callback_QGraphicsEllipseItem_type(const QGraphicsEllipseItem*, intptr_t);
bool miqt_exec_callback_QGraphicsEllipseItem_supportsExtension(const QGraphicsEllipseItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsEllipseItem_setExtension(QGraphicsEllipseItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsEllipseItem_extension(const QGraphicsEllipseItem*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsEllipseItem_advance(QGraphicsEllipseItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsEllipseItem_collidesWithItem(const QGraphicsEllipseItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsEllipseItem_collidesWithPath(const QGraphicsEllipseItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsEllipseItem_sceneEventFilter(QGraphicsEllipseItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsEllipseItem_sceneEvent(QGraphicsEllipseItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_contextMenuEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_dragEnterEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_dragLeaveEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_dragMoveEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_dropEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_focusInEvent(QGraphicsEllipseItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_focusOutEvent(QGraphicsEllipseItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_hoverEnterEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_hoverMoveEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_hoverLeaveEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_keyPressEvent(QGraphicsEllipseItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_keyReleaseEvent(QGraphicsEllipseItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_mousePressEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_mouseMoveEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_mouseReleaseEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_mouseDoubleClickEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_wheelEvent(QGraphicsEllipseItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsEllipseItem_inputMethodEvent(QGraphicsEllipseItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsEllipseItem_inputMethodQuery(const QGraphicsEllipseItem*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsEllipseItem_itemChange(QGraphicsEllipseItem*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsPolygonItem_boundingRect(const QGraphicsPolygonItem*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsPolygonItem_shape(const QGraphicsPolygonItem*, intptr_t);
bool miqt_exec_callback_QGraphicsPolygonItem_contains(const QGraphicsPolygonItem*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsPolygonItem_paint(QGraphicsPolygonItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsPolygonItem_isObscuredBy(const QGraphicsPolygonItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsPolygonItem_opaqueArea(const QGraphicsPolygonItem*, intptr_t);
int miqt_exec_callback_QGraphicsPolygonItem_type(const QGraphicsPolygonItem*, intptr_t);
bool miqt_exec_callback_QGraphicsPolygonItem_supportsExtension(const QGraphicsPolygonItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsPolygonItem_setExtension(QGraphicsPolygonItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsPolygonItem_extension(const QGraphicsPolygonItem*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsPolygonItem_advance(QGraphicsPolygonItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsPolygonItem_collidesWithItem(const QGraphicsPolygonItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsPolygonItem_collidesWithPath(const QGraphicsPolygonItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsPolygonItem_sceneEventFilter(QGraphicsPolygonItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsPolygonItem_sceneEvent(QGraphicsPolygonItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_contextMenuEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_dragEnterEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_dragLeaveEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_dragMoveEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_dropEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_focusInEvent(QGraphicsPolygonItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_focusOutEvent(QGraphicsPolygonItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_hoverEnterEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_hoverMoveEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_hoverLeaveEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_keyPressEvent(QGraphicsPolygonItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_keyReleaseEvent(QGraphicsPolygonItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_mousePressEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_mouseMoveEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_mouseReleaseEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_mouseDoubleClickEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_wheelEvent(QGraphicsPolygonItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsPolygonItem_inputMethodEvent(QGraphicsPolygonItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsPolygonItem_inputMethodQuery(const QGraphicsPolygonItem*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsPolygonItem_itemChange(QGraphicsPolygonItem*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsLineItem_boundingRect(const QGraphicsLineItem*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsLineItem_shape(const QGraphicsLineItem*, intptr_t);
bool miqt_exec_callback_QGraphicsLineItem_contains(const QGraphicsLineItem*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsLineItem_paint(QGraphicsLineItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsLineItem_isObscuredBy(const QGraphicsLineItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsLineItem_opaqueArea(const QGraphicsLineItem*, intptr_t);
int miqt_exec_callback_QGraphicsLineItem_type(const QGraphicsLineItem*, intptr_t);
bool miqt_exec_callback_QGraphicsLineItem_supportsExtension(const QGraphicsLineItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsLineItem_setExtension(QGraphicsLineItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsLineItem_extension(const QGraphicsLineItem*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsLineItem_advance(QGraphicsLineItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsLineItem_collidesWithItem(const QGraphicsLineItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsLineItem_collidesWithPath(const QGraphicsLineItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsLineItem_sceneEventFilter(QGraphicsLineItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsLineItem_sceneEvent(QGraphicsLineItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsLineItem_contextMenuEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsLineItem_dragEnterEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsLineItem_dragLeaveEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsLineItem_dragMoveEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsLineItem_dropEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsLineItem_focusInEvent(QGraphicsLineItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsLineItem_focusOutEvent(QGraphicsLineItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsLineItem_hoverEnterEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsLineItem_hoverMoveEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsLineItem_hoverLeaveEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsLineItem_keyPressEvent(QGraphicsLineItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsLineItem_keyReleaseEvent(QGraphicsLineItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsLineItem_mousePressEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsLineItem_mouseMoveEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsLineItem_mouseReleaseEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsLineItem_mouseDoubleClickEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsLineItem_wheelEvent(QGraphicsLineItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsLineItem_inputMethodEvent(QGraphicsLineItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsLineItem_inputMethodQuery(const QGraphicsLineItem*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsLineItem_itemChange(QGraphicsLineItem*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsPixmapItem_boundingRect(const QGraphicsPixmapItem*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsPixmapItem_shape(const QGraphicsPixmapItem*, intptr_t);
bool miqt_exec_callback_QGraphicsPixmapItem_contains(const QGraphicsPixmapItem*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsPixmapItem_paint(QGraphicsPixmapItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsPixmapItem_isObscuredBy(const QGraphicsPixmapItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsPixmapItem_opaqueArea(const QGraphicsPixmapItem*, intptr_t);
int miqt_exec_callback_QGraphicsPixmapItem_type(const QGraphicsPixmapItem*, intptr_t);
bool miqt_exec_callback_QGraphicsPixmapItem_supportsExtension(const QGraphicsPixmapItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsPixmapItem_setExtension(QGraphicsPixmapItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsPixmapItem_extension(const QGraphicsPixmapItem*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsPixmapItem_advance(QGraphicsPixmapItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsPixmapItem_collidesWithItem(const QGraphicsPixmapItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsPixmapItem_collidesWithPath(const QGraphicsPixmapItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsPixmapItem_sceneEventFilter(QGraphicsPixmapItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsPixmapItem_sceneEvent(QGraphicsPixmapItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_contextMenuEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_dragEnterEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_dragLeaveEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_dragMoveEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_dropEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_focusInEvent(QGraphicsPixmapItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_focusOutEvent(QGraphicsPixmapItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_hoverEnterEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_hoverMoveEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_hoverLeaveEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_keyPressEvent(QGraphicsPixmapItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_keyReleaseEvent(QGraphicsPixmapItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_mousePressEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_mouseMoveEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_mouseReleaseEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_mouseDoubleClickEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_wheelEvent(QGraphicsPixmapItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsPixmapItem_inputMethodEvent(QGraphicsPixmapItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsPixmapItem_inputMethodQuery(const QGraphicsPixmapItem*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsPixmapItem_itemChange(QGraphicsPixmapItem*, intptr_t, int, QVariant*);
void miqt_exec_callback_QGraphicsTextItem_linkActivated(intptr_t, struct miqt_string);
void miqt_exec_callback_QGraphicsTextItem_linkHovered(intptr_t, struct miqt_string);
QRectF* miqt_exec_callback_QGraphicsTextItem_boundingRect(const QGraphicsTextItem*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsTextItem_shape(const QGraphicsTextItem*, intptr_t);
bool miqt_exec_callback_QGraphicsTextItem_contains(const QGraphicsTextItem*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsTextItem_paint(QGraphicsTextItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsTextItem_isObscuredBy(const QGraphicsTextItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsTextItem_opaqueArea(const QGraphicsTextItem*, intptr_t);
int miqt_exec_callback_QGraphicsTextItem_type(const QGraphicsTextItem*, intptr_t);
bool miqt_exec_callback_QGraphicsTextItem_sceneEvent(QGraphicsTextItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsTextItem_mousePressEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsTextItem_mouseMoveEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsTextItem_mouseReleaseEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsTextItem_mouseDoubleClickEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsTextItem_contextMenuEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsTextItem_keyPressEvent(QGraphicsTextItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsTextItem_keyReleaseEvent(QGraphicsTextItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsTextItem_focusInEvent(QGraphicsTextItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsTextItem_focusOutEvent(QGraphicsTextItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsTextItem_dragEnterEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsTextItem_dragLeaveEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsTextItem_dragMoveEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsTextItem_dropEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsTextItem_inputMethodEvent(QGraphicsTextItem*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QGraphicsTextItem_hoverEnterEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsTextItem_hoverMoveEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsTextItem_hoverLeaveEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneHoverEvent*);
QVariant* miqt_exec_callback_QGraphicsTextItem_inputMethodQuery(const QGraphicsTextItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsTextItem_supportsExtension(const QGraphicsTextItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsTextItem_setExtension(QGraphicsTextItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsTextItem_extension(const QGraphicsTextItem*, intptr_t, QVariant*);
bool miqt_exec_callback_QGraphicsTextItem_event(QGraphicsTextItem*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsTextItem_eventFilter(QGraphicsTextItem*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsTextItem_timerEvent(QGraphicsTextItem*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsTextItem_childEvent(QGraphicsTextItem*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsTextItem_customEvent(QGraphicsTextItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsTextItem_connectNotify(QGraphicsTextItem*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsTextItem_disconnectNotify(QGraphicsTextItem*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsTextItem_advance(QGraphicsTextItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsTextItem_collidesWithItem(const QGraphicsTextItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsTextItem_collidesWithPath(const QGraphicsTextItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsTextItem_sceneEventFilter(QGraphicsTextItem*, intptr_t, QGraphicsItem*, QEvent*);
void miqt_exec_callback_QGraphicsTextItem_wheelEvent(QGraphicsTextItem*, intptr_t, QGraphicsSceneWheelEvent*);
QVariant* miqt_exec_callback_QGraphicsTextItem_itemChange(QGraphicsTextItem*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsSimpleTextItem_boundingRect(const QGraphicsSimpleTextItem*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsSimpleTextItem_shape(const QGraphicsSimpleTextItem*, intptr_t);
bool miqt_exec_callback_QGraphicsSimpleTextItem_contains(const QGraphicsSimpleTextItem*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsSimpleTextItem_paint(QGraphicsSimpleTextItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsSimpleTextItem_isObscuredBy(const QGraphicsSimpleTextItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsSimpleTextItem_opaqueArea(const QGraphicsSimpleTextItem*, intptr_t);
int miqt_exec_callback_QGraphicsSimpleTextItem_type(const QGraphicsSimpleTextItem*, intptr_t);
bool miqt_exec_callback_QGraphicsSimpleTextItem_supportsExtension(const QGraphicsSimpleTextItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsSimpleTextItem_setExtension(QGraphicsSimpleTextItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsSimpleTextItem_extension(const QGraphicsSimpleTextItem*, intptr_t, QVariant*);
void miqt_exec_callback_QGraphicsSimpleTextItem_advance(QGraphicsSimpleTextItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsSimpleTextItem_collidesWithItem(const QGraphicsSimpleTextItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsSimpleTextItem_collidesWithPath(const QGraphicsSimpleTextItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsSimpleTextItem_sceneEventFilter(QGraphicsSimpleTextItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsSimpleTextItem_sceneEvent(QGraphicsSimpleTextItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_contextMenuEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_dragEnterEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_dragLeaveEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_dragMoveEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_dropEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_focusInEvent(QGraphicsSimpleTextItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_focusOutEvent(QGraphicsSimpleTextItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_hoverEnterEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_hoverMoveEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_hoverLeaveEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_keyPressEvent(QGraphicsSimpleTextItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_keyReleaseEvent(QGraphicsSimpleTextItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_mousePressEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_mouseMoveEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_mouseReleaseEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_mouseDoubleClickEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_wheelEvent(QGraphicsSimpleTextItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsSimpleTextItem_inputMethodEvent(QGraphicsSimpleTextItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsSimpleTextItem_inputMethodQuery(const QGraphicsSimpleTextItem*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsSimpleTextItem_itemChange(QGraphicsSimpleTextItem*, intptr_t, int, QVariant*);
QRectF* miqt_exec_callback_QGraphicsItemGroup_boundingRect(const QGraphicsItemGroup*, intptr_t);
void miqt_exec_callback_QGraphicsItemGroup_paint(QGraphicsItemGroup*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
bool miqt_exec_callback_QGraphicsItemGroup_isObscuredBy(const QGraphicsItemGroup*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsItemGroup_opaqueArea(const QGraphicsItemGroup*, intptr_t);
int miqt_exec_callback_QGraphicsItemGroup_type(const QGraphicsItemGroup*, intptr_t);
void miqt_exec_callback_QGraphicsItemGroup_advance(QGraphicsItemGroup*, intptr_t, int);
QPainterPath* miqt_exec_callback_QGraphicsItemGroup_shape(const QGraphicsItemGroup*, intptr_t);
bool miqt_exec_callback_QGraphicsItemGroup_contains(const QGraphicsItemGroup*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsItemGroup_collidesWithItem(const QGraphicsItemGroup*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsItemGroup_collidesWithPath(const QGraphicsItemGroup*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsItemGroup_sceneEventFilter(QGraphicsItemGroup*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsItemGroup_sceneEvent(QGraphicsItemGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsItemGroup_contextMenuEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsItemGroup_dragEnterEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItemGroup_dragLeaveEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItemGroup_dragMoveEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItemGroup_dropEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsItemGroup_focusInEvent(QGraphicsItemGroup*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsItemGroup_focusOutEvent(QGraphicsItemGroup*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsItemGroup_hoverEnterEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItemGroup_hoverMoveEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItemGroup_hoverLeaveEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsItemGroup_keyPressEvent(QGraphicsItemGroup*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsItemGroup_keyReleaseEvent(QGraphicsItemGroup*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsItemGroup_mousePressEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItemGroup_mouseMoveEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItemGroup_mouseReleaseEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItemGroup_mouseDoubleClickEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsItemGroup_wheelEvent(QGraphicsItemGroup*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsItemGroup_inputMethodEvent(QGraphicsItemGroup*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsItemGroup_inputMethodQuery(const QGraphicsItemGroup*, intptr_t, int);
QVariant* miqt_exec_callback_QGraphicsItemGroup_itemChange(QGraphicsItemGroup*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsItemGroup_supportsExtension(const QGraphicsItemGroup*, intptr_t, int);
void miqt_exec_callback_QGraphicsItemGroup_setExtension(QGraphicsItemGroup*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsItemGroup_extension(const QGraphicsItemGroup*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsItem final : public QGraphicsItem {
public:

	MiqtVirtualQGraphicsItem(): QGraphicsItem() {};
	MiqtVirtualQGraphicsItem(QGraphicsItem* parent): QGraphicsItem(parent) {};

	virtual ~MiqtVirtualQGraphicsItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QRectF(); // Pure virtual, there is no base we can call
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsItem::extension(*variant));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsItem* QGraphicsItem_new() {
	return new MiqtVirtualQGraphicsItem();
}

QGraphicsItem* QGraphicsItem_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsItem(parent);
}

QGraphicsScene* QGraphicsItem_scene(const QGraphicsItem* self) {
	return self->scene();
}

QGraphicsItem* QGraphicsItem_parentItem(const QGraphicsItem* self) {
	return self->parentItem();
}

QGraphicsItem* QGraphicsItem_topLevelItem(const QGraphicsItem* self) {
	return self->topLevelItem();
}

QGraphicsObject* QGraphicsItem_parentObject(const QGraphicsItem* self) {
	return self->parentObject();
}

QGraphicsWidget* QGraphicsItem_parentWidget(const QGraphicsItem* self) {
	return self->parentWidget();
}

QGraphicsWidget* QGraphicsItem_topLevelWidget(const QGraphicsItem* self) {
	return self->topLevelWidget();
}

QGraphicsWidget* QGraphicsItem_window(const QGraphicsItem* self) {
	return self->window();
}

QGraphicsItem* QGraphicsItem_panel(const QGraphicsItem* self) {
	return self->panel();
}

void QGraphicsItem_setParentItem(QGraphicsItem* self, QGraphicsItem* parent) {
	self->setParentItem(parent);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsItem_childItems(const QGraphicsItem* self) {
	QList<QGraphicsItem *> _ret = self->childItems();
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

bool QGraphicsItem_isWidget(const QGraphicsItem* self) {
	return self->isWidget();
}

bool QGraphicsItem_isWindow(const QGraphicsItem* self) {
	return self->isWindow();
}

bool QGraphicsItem_isPanel(const QGraphicsItem* self) {
	return self->isPanel();
}

QGraphicsObject* QGraphicsItem_toGraphicsObject(QGraphicsItem* self) {
	return self->toGraphicsObject();
}

QGraphicsObject* QGraphicsItem_toGraphicsObject2(const QGraphicsItem* self) {
	return (QGraphicsObject*) self->toGraphicsObject();
}

QGraphicsItemGroup* QGraphicsItem_group(const QGraphicsItem* self) {
	return self->group();
}

void QGraphicsItem_setGroup(QGraphicsItem* self, QGraphicsItemGroup* group) {
	self->setGroup(group);
}

int QGraphicsItem_flags(const QGraphicsItem* self) {
	QGraphicsItem::GraphicsItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QGraphicsItem_setFlag(QGraphicsItem* self, int flag) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag));
}

void QGraphicsItem_setFlags(QGraphicsItem* self, int flags) {
	self->setFlags(static_cast<QGraphicsItem::GraphicsItemFlags>(flags));
}

int QGraphicsItem_cacheMode(const QGraphicsItem* self) {
	QGraphicsItem::CacheMode _ret = self->cacheMode();
	return static_cast<int>(_ret);
}

void QGraphicsItem_setCacheMode(QGraphicsItem* self, int mode) {
	self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode));
}

int QGraphicsItem_panelModality(const QGraphicsItem* self) {
	QGraphicsItem::PanelModality _ret = self->panelModality();
	return static_cast<int>(_ret);
}

void QGraphicsItem_setPanelModality(QGraphicsItem* self, int panelModality) {
	self->setPanelModality(static_cast<QGraphicsItem::PanelModality>(panelModality));
}

bool QGraphicsItem_isBlockedByModalPanel(const QGraphicsItem* self) {
	return self->isBlockedByModalPanel();
}

struct miqt_string QGraphicsItem_toolTip(const QGraphicsItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsItem_setToolTip(QGraphicsItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

QCursor* QGraphicsItem_cursor(const QGraphicsItem* self) {
	return new QCursor(self->cursor());
}

void QGraphicsItem_setCursor(QGraphicsItem* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

bool QGraphicsItem_hasCursor(const QGraphicsItem* self) {
	return self->hasCursor();
}

void QGraphicsItem_unsetCursor(QGraphicsItem* self) {
	self->unsetCursor();
}

bool QGraphicsItem_isVisible(const QGraphicsItem* self) {
	return self->isVisible();
}

bool QGraphicsItem_isVisibleTo(const QGraphicsItem* self, QGraphicsItem* parent) {
	return self->isVisibleTo(parent);
}

void QGraphicsItem_setVisible(QGraphicsItem* self, bool visible) {
	self->setVisible(visible);
}

void QGraphicsItem_hide(QGraphicsItem* self) {
	self->hide();
}

void QGraphicsItem_show(QGraphicsItem* self) {
	self->show();
}

bool QGraphicsItem_isEnabled(const QGraphicsItem* self) {
	return self->isEnabled();
}

void QGraphicsItem_setEnabled(QGraphicsItem* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QGraphicsItem_isSelected(const QGraphicsItem* self) {
	return self->isSelected();
}

void QGraphicsItem_setSelected(QGraphicsItem* self, bool selected) {
	self->setSelected(selected);
}

bool QGraphicsItem_acceptDrops(const QGraphicsItem* self) {
	return self->acceptDrops();
}

void QGraphicsItem_setAcceptDrops(QGraphicsItem* self, bool on) {
	self->setAcceptDrops(on);
}

double QGraphicsItem_opacity(const QGraphicsItem* self) {
	qreal _ret = self->opacity();
	return static_cast<double>(_ret);
}

double QGraphicsItem_effectiveOpacity(const QGraphicsItem* self) {
	qreal _ret = self->effectiveOpacity();
	return static_cast<double>(_ret);
}

void QGraphicsItem_setOpacity(QGraphicsItem* self, double opacity) {
	self->setOpacity(static_cast<qreal>(opacity));
}

QGraphicsEffect* QGraphicsItem_graphicsEffect(const QGraphicsItem* self) {
	return self->graphicsEffect();
}

void QGraphicsItem_setGraphicsEffect(QGraphicsItem* self, QGraphicsEffect* effect) {
	self->setGraphicsEffect(effect);
}

int QGraphicsItem_acceptedMouseButtons(const QGraphicsItem* self) {
	Qt::MouseButtons _ret = self->acceptedMouseButtons();
	return static_cast<int>(_ret);
}

void QGraphicsItem_setAcceptedMouseButtons(QGraphicsItem* self, int buttons) {
	self->setAcceptedMouseButtons(static_cast<Qt::MouseButtons>(buttons));
}

bool QGraphicsItem_acceptHoverEvents(const QGraphicsItem* self) {
	return self->acceptHoverEvents();
}

void QGraphicsItem_setAcceptHoverEvents(QGraphicsItem* self, bool enabled) {
	self->setAcceptHoverEvents(enabled);
}

bool QGraphicsItem_acceptTouchEvents(const QGraphicsItem* self) {
	return self->acceptTouchEvents();
}

void QGraphicsItem_setAcceptTouchEvents(QGraphicsItem* self, bool enabled) {
	self->setAcceptTouchEvents(enabled);
}

bool QGraphicsItem_filtersChildEvents(const QGraphicsItem* self) {
	return self->filtersChildEvents();
}

void QGraphicsItem_setFiltersChildEvents(QGraphicsItem* self, bool enabled) {
	self->setFiltersChildEvents(enabled);
}

bool QGraphicsItem_handlesChildEvents(const QGraphicsItem* self) {
	return self->handlesChildEvents();
}

void QGraphicsItem_setHandlesChildEvents(QGraphicsItem* self, bool enabled) {
	self->setHandlesChildEvents(enabled);
}

bool QGraphicsItem_isActive(const QGraphicsItem* self) {
	return self->isActive();
}

void QGraphicsItem_setActive(QGraphicsItem* self, bool active) {
	self->setActive(active);
}

bool QGraphicsItem_hasFocus(const QGraphicsItem* self) {
	return self->hasFocus();
}

void QGraphicsItem_setFocus(QGraphicsItem* self) {
	self->setFocus();
}

void QGraphicsItem_clearFocus(QGraphicsItem* self) {
	self->clearFocus();
}

QGraphicsItem* QGraphicsItem_focusProxy(const QGraphicsItem* self) {
	return self->focusProxy();
}

void QGraphicsItem_setFocusProxy(QGraphicsItem* self, QGraphicsItem* item) {
	self->setFocusProxy(item);
}

QGraphicsItem* QGraphicsItem_focusItem(const QGraphicsItem* self) {
	return self->focusItem();
}

QGraphicsItem* QGraphicsItem_focusScopeItem(const QGraphicsItem* self) {
	return self->focusScopeItem();
}

void QGraphicsItem_grabMouse(QGraphicsItem* self) {
	self->grabMouse();
}

void QGraphicsItem_ungrabMouse(QGraphicsItem* self) {
	self->ungrabMouse();
}

void QGraphicsItem_grabKeyboard(QGraphicsItem* self) {
	self->grabKeyboard();
}

void QGraphicsItem_ungrabKeyboard(QGraphicsItem* self) {
	self->ungrabKeyboard();
}

QPointF* QGraphicsItem_pos(const QGraphicsItem* self) {
	return new QPointF(self->pos());
}

double QGraphicsItem_x(const QGraphicsItem* self) {
	qreal _ret = self->x();
	return static_cast<double>(_ret);
}

void QGraphicsItem_setX(QGraphicsItem* self, double x) {
	self->setX(static_cast<qreal>(x));
}

double QGraphicsItem_y(const QGraphicsItem* self) {
	qreal _ret = self->y();
	return static_cast<double>(_ret);
}

void QGraphicsItem_setY(QGraphicsItem* self, double y) {
	self->setY(static_cast<qreal>(y));
}

QPointF* QGraphicsItem_scenePos(const QGraphicsItem* self) {
	return new QPointF(self->scenePos());
}

void QGraphicsItem_setPos(QGraphicsItem* self, QPointF* pos) {
	self->setPos(*pos);
}

void QGraphicsItem_setPos2(QGraphicsItem* self, double x, double y) {
	self->setPos(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QGraphicsItem_moveBy(QGraphicsItem* self, double dx, double dy) {
	self->moveBy(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsItem_ensureVisible(QGraphicsItem* self) {
	self->ensureVisible();
}

void QGraphicsItem_ensureVisible2(QGraphicsItem* self, double x, double y, double w, double h) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QTransform* QGraphicsItem_transform(const QGraphicsItem* self) {
	return new QTransform(self->transform());
}

QTransform* QGraphicsItem_sceneTransform(const QGraphicsItem* self) {
	return new QTransform(self->sceneTransform());
}

QTransform* QGraphicsItem_deviceTransform(const QGraphicsItem* self, QTransform* viewportTransform) {
	return new QTransform(self->deviceTransform(*viewportTransform));
}

QTransform* QGraphicsItem_itemTransform(const QGraphicsItem* self, QGraphicsItem* other) {
	return new QTransform(self->itemTransform(other));
}

void QGraphicsItem_setTransform(QGraphicsItem* self, QTransform* matrix) {
	self->setTransform(*matrix);
}

void QGraphicsItem_resetTransform(QGraphicsItem* self) {
	self->resetTransform();
}

void QGraphicsItem_setRotation(QGraphicsItem* self, double angle) {
	self->setRotation(static_cast<qreal>(angle));
}

double QGraphicsItem_rotation(const QGraphicsItem* self) {
	qreal _ret = self->rotation();
	return static_cast<double>(_ret);
}

void QGraphicsItem_setScale(QGraphicsItem* self, double scale) {
	self->setScale(static_cast<qreal>(scale));
}

double QGraphicsItem_scale(const QGraphicsItem* self) {
	qreal _ret = self->scale();
	return static_cast<double>(_ret);
}

struct miqt_array /* of QGraphicsTransform* */  QGraphicsItem_transformations(const QGraphicsItem* self) {
	QList<QGraphicsTransform *> _ret = self->transformations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsTransform** _arr = static_cast<QGraphicsTransform**>(malloc(sizeof(QGraphicsTransform*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsItem_setTransformations(QGraphicsItem* self, struct miqt_array /* of QGraphicsTransform* */  transformations) {
	QList<QGraphicsTransform *> transformations_QList;
	transformations_QList.reserve(transformations.len);
	QGraphicsTransform** transformations_arr = static_cast<QGraphicsTransform**>(transformations.data);
	for(size_t i = 0; i < transformations.len; ++i) {
		transformations_QList.push_back(transformations_arr[i]);
	}
	self->setTransformations(transformations_QList);
}

QPointF* QGraphicsItem_transformOriginPoint(const QGraphicsItem* self) {
	return new QPointF(self->transformOriginPoint());
}

void QGraphicsItem_setTransformOriginPoint(QGraphicsItem* self, QPointF* origin) {
	self->setTransformOriginPoint(*origin);
}

void QGraphicsItem_setTransformOriginPoint2(QGraphicsItem* self, double ax, double ay) {
	self->setTransformOriginPoint(static_cast<qreal>(ax), static_cast<qreal>(ay));
}

void QGraphicsItem_advance(QGraphicsItem* self, int phase) {
	self->advance(static_cast<int>(phase));
}

double QGraphicsItem_zValue(const QGraphicsItem* self) {
	qreal _ret = self->zValue();
	return static_cast<double>(_ret);
}

void QGraphicsItem_setZValue(QGraphicsItem* self, double z) {
	self->setZValue(static_cast<qreal>(z));
}

void QGraphicsItem_stackBefore(QGraphicsItem* self, QGraphicsItem* sibling) {
	self->stackBefore(sibling);
}

QRectF* QGraphicsItem_boundingRect(const QGraphicsItem* self) {
	return new QRectF(self->boundingRect());
}

QRectF* QGraphicsItem_childrenBoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->childrenBoundingRect());
}

QRectF* QGraphicsItem_sceneBoundingRect(const QGraphicsItem* self) {
	return new QRectF(self->sceneBoundingRect());
}

QPainterPath* QGraphicsItem_shape(const QGraphicsItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsItem_isClipped(const QGraphicsItem* self) {
	return self->isClipped();
}

QPainterPath* QGraphicsItem_clipPath(const QGraphicsItem* self) {
	return new QPainterPath(self->clipPath());
}

bool QGraphicsItem_contains(const QGraphicsItem* self, QPointF* point) {
	return self->contains(*point);
}

bool QGraphicsItem_collidesWithItem(const QGraphicsItem* self, QGraphicsItem* other, int mode) {
	return self->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsItem_collidesWithPath(const QGraphicsItem* self, QPainterPath* path, int mode) {
	return self->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsItem_collidingItems(const QGraphicsItem* self) {
	QList<QGraphicsItem *> _ret = self->collidingItems();
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

bool QGraphicsItem_isObscured(const QGraphicsItem* self) {
	return self->isObscured();
}

bool QGraphicsItem_isObscured2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return self->isObscured(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

bool QGraphicsItem_isObscuredBy(const QGraphicsItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItem_opaqueArea(const QGraphicsItem* self) {
	return new QPainterPath(self->opaqueArea());
}

QRegion* QGraphicsItem_boundingRegion(const QGraphicsItem* self, QTransform* itemToDeviceTransform) {
	return new QRegion(self->boundingRegion(*itemToDeviceTransform));
}

double QGraphicsItem_boundingRegionGranularity(const QGraphicsItem* self) {
	qreal _ret = self->boundingRegionGranularity();
	return static_cast<double>(_ret);
}

void QGraphicsItem_setBoundingRegionGranularity(QGraphicsItem* self, double granularity) {
	self->setBoundingRegionGranularity(static_cast<qreal>(granularity));
}

void QGraphicsItem_paint(QGraphicsItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsItem_update(QGraphicsItem* self) {
	self->update();
}

void QGraphicsItem_update2(QGraphicsItem* self, double x, double y, double width, double height) {
	self->update(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

void QGraphicsItem_scroll(QGraphicsItem* self, double dx, double dy) {
	self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QPointF* QGraphicsItem_mapToItem(const QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
	return new QPointF(self->mapToItem(item, *point));
}

QPointF* QGraphicsItem_mapToParent(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapToParent(*point));
}

QPointF* QGraphicsItem_mapToScene(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapToScene(*point));
}

QRectF* QGraphicsItem_mapRectToItem(const QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
	return new QRectF(self->mapRectToItem(item, *rect));
}

QRectF* QGraphicsItem_mapRectToParent(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectToParent(*rect));
}

QRectF* QGraphicsItem_mapRectToScene(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectToScene(*rect));
}

QPainterPath* QGraphicsItem_mapToItem4(const QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
	return new QPainterPath(self->mapToItem(item, *path));
}

QPainterPath* QGraphicsItem_mapToParentWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapToParent(*path));
}

QPainterPath* QGraphicsItem_mapToSceneWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapToScene(*path));
}

QPointF* QGraphicsItem_mapFromItem(const QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
	return new QPointF(self->mapFromItem(item, *point));
}

QPointF* QGraphicsItem_mapFromParent(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapFromParent(*point));
}

QPointF* QGraphicsItem_mapFromScene(const QGraphicsItem* self, QPointF* point) {
	return new QPointF(self->mapFromScene(*point));
}

QRectF* QGraphicsItem_mapRectFromItem(const QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
	return new QRectF(self->mapRectFromItem(item, *rect));
}

QRectF* QGraphicsItem_mapRectFromParent(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectFromParent(*rect));
}

QRectF* QGraphicsItem_mapRectFromScene(const QGraphicsItem* self, QRectF* rect) {
	return new QRectF(self->mapRectFromScene(*rect));
}

QPainterPath* QGraphicsItem_mapFromItem4(const QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
	return new QPainterPath(self->mapFromItem(item, *path));
}

QPainterPath* QGraphicsItem_mapFromParentWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapFromParent(*path));
}

QPainterPath* QGraphicsItem_mapFromSceneWithPath(const QGraphicsItem* self, QPainterPath* path) {
	return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsItem_mapToItem5(const QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
	return new QPointF(self->mapToItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_mapToParent2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapToParent(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_mapToScene2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapToScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QRectF* QGraphicsItem_mapRectToItem2(const QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_mapRectToParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_mapRectToScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectToScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QPointF* QGraphicsItem_mapFromItem5(const QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
	return new QPointF(self->mapFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_mapFromParent2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapFromParent(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_mapFromScene2(const QGraphicsItem* self, double x, double y) {
	return new QPointF(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QRectF* QGraphicsItem_mapRectFromItem2(const QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_mapRectFromParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_mapRectFromScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
	return new QRectF(self->mapRectFromScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

bool QGraphicsItem_isAncestorOf(const QGraphicsItem* self, QGraphicsItem* child) {
	return self->isAncestorOf(child);
}

QGraphicsItem* QGraphicsItem_commonAncestorItem(const QGraphicsItem* self, QGraphicsItem* other) {
	return self->commonAncestorItem(other);
}

bool QGraphicsItem_isUnderMouse(const QGraphicsItem* self) {
	return self->isUnderMouse();
}

QVariant* QGraphicsItem_data(const QGraphicsItem* self, int key) {
	return new QVariant(self->data(static_cast<int>(key)));
}

void QGraphicsItem_setData(QGraphicsItem* self, int key, QVariant* value) {
	self->setData(static_cast<int>(key), *value);
}

int QGraphicsItem_inputMethodHints(const QGraphicsItem* self) {
	Qt::InputMethodHints _ret = self->inputMethodHints();
	return static_cast<int>(_ret);
}

void QGraphicsItem_setInputMethodHints(QGraphicsItem* self, int hints) {
	self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

int QGraphicsItem_type(const QGraphicsItem* self) {
	return self->type();
}

void QGraphicsItem_installSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
	self->installSceneEventFilter(filterItem);
}

void QGraphicsItem_removeSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
	self->removeSceneEventFilter(filterItem);
}

void QGraphicsItem_setFlag2(QGraphicsItem* self, int flag, bool enabled) {
	self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag), enabled);
}

void QGraphicsItem_setCacheMode2(QGraphicsItem* self, int mode, QSize* cacheSize) {
	self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode), *cacheSize);
}

void QGraphicsItem_setFocus1(QGraphicsItem* self, int focusReason) {
	self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsItem_ensureVisible1(QGraphicsItem* self, QRectF* rect) {
	self->ensureVisible(*rect);
}

void QGraphicsItem_ensureVisible22(QGraphicsItem* self, QRectF* rect, int xmargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin));
}

void QGraphicsItem_ensureVisible3(QGraphicsItem* self, QRectF* rect, int xmargin, int ymargin) {
	self->ensureVisible(*rect, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsItem_ensureVisible5(QGraphicsItem* self, double x, double y, double w, double h, int xmargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin));
}

void QGraphicsItem_ensureVisible6(QGraphicsItem* self, double x, double y, double w, double h, int xmargin, int ymargin) {
	self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

QTransform* QGraphicsItem_itemTransform2(const QGraphicsItem* self, QGraphicsItem* other, bool* ok) {
	return new QTransform(self->itemTransform(other, ok));
}

void QGraphicsItem_setTransform2(QGraphicsItem* self, QTransform* matrix, bool combine) {
	self->setTransform(*matrix, combine);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsItem_collidingItems1(const QGraphicsItem* self, int mode) {
	QList<QGraphicsItem *> _ret = self->collidingItems(static_cast<Qt::ItemSelectionMode>(mode));
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

bool QGraphicsItem_isObscured1(const QGraphicsItem* self, QRectF* rect) {
	return self->isObscured(*rect);
}

void QGraphicsItem_update1(QGraphicsItem* self, QRectF* rect) {
	self->update(*rect);
}

void QGraphicsItem_scroll3(QGraphicsItem* self, double dx, double dy, QRectF* rect) {
	self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy), *rect);
}

bool QGraphicsItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

bool QGraphicsItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_shape();
}

bool QGraphicsItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_contains(point);
}

bool QGraphicsItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

bool QGraphicsItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_type();
}

bool QGraphicsItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_itemChange(change, value);
}

bool QGraphicsItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsItem*)(self) )->virtualbase_extension(variant);
}

void QGraphicsItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QGraphicsItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsItem*>( (QGraphicsItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsItem_delete(QGraphicsItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsObject final : public QGraphicsObject {
public:

	MiqtVirtualQGraphicsObject(): QGraphicsObject() {};
	MiqtVirtualQGraphicsObject(QGraphicsItem* parent): QGraphicsObject(parent) {};

	virtual ~MiqtVirtualQGraphicsObject() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* ev) override {
		if (handle__event == 0) {
			return QGraphicsObject::event(ev);
		}
		
		QEvent* sigval1 = ev;

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* ev) {

		return QGraphicsObject::event(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsObject::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsObject::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsObject::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsObject::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsObject::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsObject::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsObject::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsObject::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsObject::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsObject_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsObject::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsObject::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsObject_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsObject::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsObject::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsObject_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsObject::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QRectF(); // Pure virtual, there is no base we can call
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsObject_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsObject::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsObject_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsObject::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsObject::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsObject::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsObject::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsObject::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsObject::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsObject::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsObject::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsObject::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsObject::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsObject_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsObject::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsObject_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsObject::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsObject_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsObject::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsObject::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsObject::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsObject::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsObject::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsObject::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsObject::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsObject::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsObject::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsObject::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsObject::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsObject::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsObject::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsObject::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsObject::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsObject::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsObject::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsObject::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsObject::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsObject::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsObject::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsObject::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsObject::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsObject::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsObject::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsObject::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsObject::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsObject::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsObject::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsObject::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsObject::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsObject::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsObject::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsObject::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsObject::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsObject::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsObject::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsObject::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsObject::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsObject::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsObject_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsObject::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsObject::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsObject_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsObject::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsObject::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsObject_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsObject::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsObject::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsObject_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsObject::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsObject::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsObject_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsObject::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsObject::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsObject_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsObject::extension(*variant));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsObject_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsObject_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsObject_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsObject_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsObject_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QGraphicsObject_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsObject_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsObject_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsObject* QGraphicsObject_new() {
	return new MiqtVirtualQGraphicsObject();
}

QGraphicsObject* QGraphicsObject_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsObject(parent);
}

void QGraphicsObject_virtbase(QGraphicsObject* src, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(src);
}

QMetaObject* QGraphicsObject_metaObject(const QGraphicsObject* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsObject_metacast(QGraphicsObject* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsObject_tr(const char* s) {
	QString _ret = QGraphicsObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsObject_grabGesture(QGraphicsObject* self, int type) {
	self->grabGesture(static_cast<Qt::GestureType>(type));
}

void QGraphicsObject_ungrabGesture(QGraphicsObject* self, int type) {
	self->ungrabGesture(static_cast<Qt::GestureType>(type));
}

void QGraphicsObject_parentChanged(QGraphicsObject* self) {
	self->parentChanged();
}

void QGraphicsObject_connect_parentChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::parentChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_parentChanged(slot);
	});
}

void QGraphicsObject_opacityChanged(QGraphicsObject* self) {
	self->opacityChanged();
}

void QGraphicsObject_connect_opacityChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::opacityChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_opacityChanged(slot);
	});
}

void QGraphicsObject_visibleChanged(QGraphicsObject* self) {
	self->visibleChanged();
}

void QGraphicsObject_connect_visibleChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::visibleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_visibleChanged(slot);
	});
}

void QGraphicsObject_enabledChanged(QGraphicsObject* self) {
	self->enabledChanged();
}

void QGraphicsObject_connect_enabledChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::enabledChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_enabledChanged(slot);
	});
}

void QGraphicsObject_xChanged(QGraphicsObject* self) {
	self->xChanged();
}

void QGraphicsObject_connect_xChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::xChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_xChanged(slot);
	});
}

void QGraphicsObject_yChanged(QGraphicsObject* self) {
	self->yChanged();
}

void QGraphicsObject_connect_yChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::yChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_yChanged(slot);
	});
}

void QGraphicsObject_zChanged(QGraphicsObject* self) {
	self->zChanged();
}

void QGraphicsObject_connect_zChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::zChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_zChanged(slot);
	});
}

void QGraphicsObject_rotationChanged(QGraphicsObject* self) {
	self->rotationChanged();
}

void QGraphicsObject_connect_rotationChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::rotationChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_rotationChanged(slot);
	});
}

void QGraphicsObject_scaleChanged(QGraphicsObject* self) {
	self->scaleChanged();
}

void QGraphicsObject_connect_scaleChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::scaleChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_scaleChanged(slot);
	});
}

void QGraphicsObject_childrenChanged(QGraphicsObject* self) {
	self->childrenChanged();
}

void QGraphicsObject_connect_childrenChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::childrenChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_childrenChanged(slot);
	});
}

void QGraphicsObject_widthChanged(QGraphicsObject* self) {
	self->widthChanged();
}

void QGraphicsObject_connect_widthChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::widthChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_widthChanged(slot);
	});
}

void QGraphicsObject_heightChanged(QGraphicsObject* self) {
	self->heightChanged();
}

void QGraphicsObject_connect_heightChanged(QGraphicsObject* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject::connect(self, static_cast<void (QGraphicsObject::*)()>(&QGraphicsObject::heightChanged), self, [=]() {
		miqt_exec_callback_QGraphicsObject_heightChanged(slot);
	});
}

struct miqt_string QGraphicsObject_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsObject_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsObject_grabGesture2(QGraphicsObject* self, int type, int flags) {
	self->grabGesture(static_cast<Qt::GestureType>(type), static_cast<Qt::GestureFlags>(flags));
}

bool QGraphicsObject_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsObject_virtualbase_event(void* self, QEvent* ev) {
	return ( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_event(ev);
}

bool QGraphicsObject_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsObject_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsObject_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsObject_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsObject_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsObject_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsObject_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsObject_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsObject_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QGraphicsObject_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsObject_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsObject_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

bool QGraphicsObject_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsObject_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_shape();
}

bool QGraphicsObject_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsObject_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_contains(point);
}

bool QGraphicsObject_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsObject_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsObject_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsObject_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsObject_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsObject_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsObject_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsObject_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsObject_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

bool QGraphicsObject_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsObject_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_type();
}

bool QGraphicsObject_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsObject_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsObject_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsObject_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsObject_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsObject_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsObject_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsObject_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsObject_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsObject_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsObject_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsObject_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsObject_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsObject_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsObject_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsObject_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsObject_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsObject_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsObject_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsObject_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsObject_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsObject_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsObject_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsObject_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsObject_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsObject_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsObject_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_itemChange(change, value);
}

bool QGraphicsObject_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsObject_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsObject_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsObject_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsObject*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsObject_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsObject_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsObject*)(self) )->virtualbase_extension(variant);
}

void QGraphicsObject_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

QObject* QGraphicsObject_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsObject_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsObject_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsObject_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsObject_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsObject_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsObject_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsObject* self_cast = dynamic_cast<MiqtVirtualQGraphicsObject*>( (QGraphicsObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsObject_delete(QGraphicsObject* self) {
	delete self;
}

class MiqtVirtualQAbstractGraphicsShapeItem final : public QAbstractGraphicsShapeItem {
public:

	MiqtVirtualQAbstractGraphicsShapeItem(): QAbstractGraphicsShapeItem() {};
	MiqtVirtualQAbstractGraphicsShapeItem(QGraphicsItem* parent): QAbstractGraphicsShapeItem(parent) {};

	virtual ~MiqtVirtualQAbstractGraphicsShapeItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QAbstractGraphicsShapeItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QAbstractGraphicsShapeItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QAbstractGraphicsShapeItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QAbstractGraphicsShapeItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QAbstractGraphicsShapeItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QAbstractGraphicsShapeItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QAbstractGraphicsShapeItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QRectF(); // Pure virtual, there is no base we can call
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QAbstractGraphicsShapeItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QAbstractGraphicsShapeItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QAbstractGraphicsShapeItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QAbstractGraphicsShapeItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QAbstractGraphicsShapeItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QAbstractGraphicsShapeItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QAbstractGraphicsShapeItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QAbstractGraphicsShapeItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QAbstractGraphicsShapeItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QAbstractGraphicsShapeItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QAbstractGraphicsShapeItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QAbstractGraphicsShapeItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QAbstractGraphicsShapeItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QAbstractGraphicsShapeItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QAbstractGraphicsShapeItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QAbstractGraphicsShapeItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QAbstractGraphicsShapeItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QAbstractGraphicsShapeItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QAbstractGraphicsShapeItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QAbstractGraphicsShapeItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QAbstractGraphicsShapeItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QAbstractGraphicsShapeItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QAbstractGraphicsShapeItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QAbstractGraphicsShapeItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QAbstractGraphicsShapeItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QAbstractGraphicsShapeItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QAbstractGraphicsShapeItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QAbstractGraphicsShapeItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QAbstractGraphicsShapeItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QAbstractGraphicsShapeItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QAbstractGraphicsShapeItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QAbstractGraphicsShapeItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QAbstractGraphicsShapeItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QAbstractGraphicsShapeItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QAbstractGraphicsShapeItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QAbstractGraphicsShapeItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QAbstractGraphicsShapeItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QAbstractGraphicsShapeItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QAbstractGraphicsShapeItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QAbstractGraphicsShapeItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QAbstractGraphicsShapeItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QAbstractGraphicsShapeItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QAbstractGraphicsShapeItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QAbstractGraphicsShapeItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QAbstractGraphicsShapeItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QAbstractGraphicsShapeItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QAbstractGraphicsShapeItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QAbstractGraphicsShapeItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QAbstractGraphicsShapeItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QAbstractGraphicsShapeItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QAbstractGraphicsShapeItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QAbstractGraphicsShapeItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QAbstractGraphicsShapeItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QAbstractGraphicsShapeItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QAbstractGraphicsShapeItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QAbstractGraphicsShapeItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QAbstractGraphicsShapeItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QAbstractGraphicsShapeItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QAbstractGraphicsShapeItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QAbstractGraphicsShapeItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QAbstractGraphicsShapeItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QAbstractGraphicsShapeItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QAbstractGraphicsShapeItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QAbstractGraphicsShapeItem::extension(*variant));

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractGraphicsShapeItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractGraphicsShapeItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractGraphicsShapeItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractGraphicsShapeItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QAbstractGraphicsShapeItem* QAbstractGraphicsShapeItem_new() {
	return new MiqtVirtualQAbstractGraphicsShapeItem();
}

QAbstractGraphicsShapeItem* QAbstractGraphicsShapeItem_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQAbstractGraphicsShapeItem(parent);
}

void QAbstractGraphicsShapeItem_virtbase(QAbstractGraphicsShapeItem* src, QGraphicsItem** outptr_QGraphicsItem) {
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(src);
}

QPen* QAbstractGraphicsShapeItem_pen(const QAbstractGraphicsShapeItem* self) {
	return new QPen(self->pen());
}

void QAbstractGraphicsShapeItem_setPen(QAbstractGraphicsShapeItem* self, QPen* pen) {
	self->setPen(*pen);
}

QBrush* QAbstractGraphicsShapeItem_brush(const QAbstractGraphicsShapeItem* self) {
	return new QBrush(self->brush());
}

void QAbstractGraphicsShapeItem_setBrush(QAbstractGraphicsShapeItem* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QAbstractGraphicsShapeItem_isObscuredBy(const QAbstractGraphicsShapeItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QAbstractGraphicsShapeItem_opaqueArea(const QAbstractGraphicsShapeItem* self) {
	return new QPainterPath(self->opaqueArea());
}

bool QAbstractGraphicsShapeItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QAbstractGraphicsShapeItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QAbstractGraphicsShapeItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_opaqueArea();
}

bool QAbstractGraphicsShapeItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_advance(phase);
}

bool QAbstractGraphicsShapeItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QAbstractGraphicsShapeItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_shape();
}

bool QAbstractGraphicsShapeItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_contains(point);
}

bool QAbstractGraphicsShapeItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QAbstractGraphicsShapeItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QAbstractGraphicsShapeItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QAbstractGraphicsShapeItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_type();
}

bool QAbstractGraphicsShapeItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QAbstractGraphicsShapeItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_dropEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QAbstractGraphicsShapeItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QAbstractGraphicsShapeItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QAbstractGraphicsShapeItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QAbstractGraphicsShapeItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_itemChange(change, value);
}

bool QAbstractGraphicsShapeItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QAbstractGraphicsShapeItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QAbstractGraphicsShapeItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QAbstractGraphicsShapeItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QAbstractGraphicsShapeItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QAbstractGraphicsShapeItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQAbstractGraphicsShapeItem*)(self) )->virtualbase_extension(variant);
}

void QAbstractGraphicsShapeItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QAbstractGraphicsShapeItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QAbstractGraphicsShapeItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QAbstractGraphicsShapeItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractGraphicsShapeItem* self_cast = dynamic_cast<MiqtVirtualQAbstractGraphicsShapeItem*>( (QAbstractGraphicsShapeItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QAbstractGraphicsShapeItem_delete(QAbstractGraphicsShapeItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsPathItem final : public QGraphicsPathItem {
public:

	MiqtVirtualQGraphicsPathItem(): QGraphicsPathItem() {};
	MiqtVirtualQGraphicsPathItem(const QPainterPath& path): QGraphicsPathItem(path) {};
	MiqtVirtualQGraphicsPathItem(QGraphicsItem* parent): QGraphicsPathItem(parent) {};
	MiqtVirtualQGraphicsPathItem(const QPainterPath& path, QGraphicsItem* parent): QGraphicsPathItem(path, parent) {};

	virtual ~MiqtVirtualQGraphicsPathItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsPathItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsPathItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsPathItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsPathItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPathItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsPathItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsPathItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsPathItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsPathItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsPathItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsPathItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsPathItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsPathItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsPathItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPathItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsPathItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsPathItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsPathItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsPathItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsPathItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsPathItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsPathItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsPathItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsPathItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsPathItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPathItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsPathItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsPathItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsPathItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsPathItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsPathItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsPathItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsPathItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsPathItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsPathItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsPathItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsPathItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPathItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsPathItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsPathItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsPathItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsPathItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPathItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsPathItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPathItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsPathItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPathItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsPathItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPathItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsPathItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsPathItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsPathItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsPathItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsPathItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPathItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsPathItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPathItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsPathItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPathItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsPathItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsPathItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsPathItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsPathItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsPathItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPathItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsPathItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPathItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsPathItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPathItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsPathItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPathItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsPathItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsPathItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsPathItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPathItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsPathItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsPathItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPathItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsPathItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsPathItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPathItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsPathItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsPathItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsPathItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsPathItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsPathItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsPathItem* QGraphicsPathItem_new() {
	return new MiqtVirtualQGraphicsPathItem();
}

QGraphicsPathItem* QGraphicsPathItem_new2(QPainterPath* path) {
	return new MiqtVirtualQGraphicsPathItem(*path);
}

QGraphicsPathItem* QGraphicsPathItem_new3(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsPathItem(parent);
}

QGraphicsPathItem* QGraphicsPathItem_new4(QPainterPath* path, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsPathItem(*path, parent);
}

void QGraphicsPathItem_virtbase(QGraphicsPathItem* src, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem) {
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(src);
}

QPainterPath* QGraphicsPathItem_path(const QGraphicsPathItem* self) {
	return new QPainterPath(self->path());
}

void QGraphicsPathItem_setPath(QGraphicsPathItem* self, QPainterPath* path) {
	self->setPath(*path);
}

QRectF* QGraphicsPathItem_boundingRect(const QGraphicsPathItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPathItem_shape(const QGraphicsPathItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPathItem_contains(const QGraphicsPathItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPathItem_paint(QGraphicsPathItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPathItem_isObscuredBy(const QGraphicsPathItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPathItem_opaqueArea(const QGraphicsPathItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPathItem_type(const QGraphicsPathItem* self) {
	return self->type();
}

bool QGraphicsPathItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsPathItem_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsPathItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsPathItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_shape();
}

bool QGraphicsPathItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_contains(point);
}

bool QGraphicsPathItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsPathItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsPathItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsPathItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsPathItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsPathItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_type();
}

bool QGraphicsPathItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsPathItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsPathItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsPathItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_extension(variant);
}

bool QGraphicsPathItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsPathItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsPathItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsPathItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsPathItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsPathItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsPathItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsPathItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsPathItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsPathItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsPathItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsPathItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsPathItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsPathItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsPathItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsPathItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsPathItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsPathItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsPathItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsPathItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsPathItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsPathItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsPathItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsPathItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsPathItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsPathItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsPathItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsPathItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsPathItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsPathItem*)(self) )->virtualbase_itemChange(change, value);
}

void QGraphicsPathItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QGraphicsPathItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsPathItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsPathItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPathItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPathItem*>( (QGraphicsPathItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsPathItem_delete(QGraphicsPathItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsRectItem final : public QGraphicsRectItem {
public:

	MiqtVirtualQGraphicsRectItem(): QGraphicsRectItem() {};
	MiqtVirtualQGraphicsRectItem(const QRectF& rect): QGraphicsRectItem(rect) {};
	MiqtVirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h): QGraphicsRectItem(x, y, w, h) {};
	MiqtVirtualQGraphicsRectItem(QGraphicsItem* parent): QGraphicsRectItem(parent) {};
	MiqtVirtualQGraphicsRectItem(const QRectF& rect, QGraphicsItem* parent): QGraphicsRectItem(rect, parent) {};
	MiqtVirtualQGraphicsRectItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent): QGraphicsRectItem(x, y, w, h, parent) {};

	virtual ~MiqtVirtualQGraphicsRectItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsRectItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsRectItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsRectItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsRectItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsRectItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsRectItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsRectItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsRectItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsRectItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsRectItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsRectItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsRectItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsRectItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsRectItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsRectItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsRectItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsRectItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsRectItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsRectItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsRectItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsRectItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsRectItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsRectItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsRectItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsRectItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsRectItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsRectItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsRectItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsRectItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsRectItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsRectItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsRectItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsRectItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsRectItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsRectItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsRectItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsRectItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsRectItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsRectItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsRectItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsRectItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsRectItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsRectItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsRectItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsRectItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsRectItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsRectItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsRectItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsRectItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsRectItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsRectItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsRectItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsRectItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsRectItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsRectItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsRectItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsRectItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsRectItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsRectItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsRectItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsRectItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsRectItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsRectItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsRectItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsRectItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsRectItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsRectItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsRectItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsRectItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsRectItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsRectItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsRectItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsRectItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsRectItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsRectItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsRectItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsRectItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsRectItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsRectItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsRectItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsRectItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsRectItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsRectItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsRectItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsRectItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsRectItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsRectItem* QGraphicsRectItem_new() {
	return new MiqtVirtualQGraphicsRectItem();
}

QGraphicsRectItem* QGraphicsRectItem_new2(QRectF* rect) {
	return new MiqtVirtualQGraphicsRectItem(*rect);
}

QGraphicsRectItem* QGraphicsRectItem_new3(double x, double y, double w, double h) {
	return new MiqtVirtualQGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsRectItem* QGraphicsRectItem_new4(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsRectItem(parent);
}

QGraphicsRectItem* QGraphicsRectItem_new5(QRectF* rect, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsRectItem(*rect, parent);
}

QGraphicsRectItem* QGraphicsRectItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
}

void QGraphicsRectItem_virtbase(QGraphicsRectItem* src, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem) {
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(src);
}

QRectF* QGraphicsRectItem_rect(const QGraphicsRectItem* self) {
	return new QRectF(self->rect());
}

void QGraphicsRectItem_setRect(QGraphicsRectItem* self, QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsRectItem_setRect2(QGraphicsRectItem* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsRectItem_boundingRect(const QGraphicsRectItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsRectItem_shape(const QGraphicsRectItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsRectItem_contains(const QGraphicsRectItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsRectItem_paint(QGraphicsRectItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsRectItem_isObscuredBy(const QGraphicsRectItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsRectItem_opaqueArea(const QGraphicsRectItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsRectItem_type(const QGraphicsRectItem* self) {
	return self->type();
}

bool QGraphicsRectItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsRectItem_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsRectItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsRectItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_shape();
}

bool QGraphicsRectItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_contains(point);
}

bool QGraphicsRectItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsRectItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsRectItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsRectItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsRectItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsRectItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_type();
}

bool QGraphicsRectItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsRectItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsRectItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsRectItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_extension(variant);
}

bool QGraphicsRectItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsRectItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsRectItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsRectItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsRectItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsRectItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsRectItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsRectItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsRectItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsRectItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsRectItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsRectItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsRectItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsRectItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsRectItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsRectItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsRectItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsRectItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsRectItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsRectItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsRectItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsRectItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsRectItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsRectItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsRectItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsRectItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsRectItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsRectItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsRectItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsRectItem*)(self) )->virtualbase_itemChange(change, value);
}

void QGraphicsRectItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QGraphicsRectItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsRectItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsRectItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsRectItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsRectItem*>( (QGraphicsRectItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsRectItem_delete(QGraphicsRectItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsEllipseItem final : public QGraphicsEllipseItem {
public:

	MiqtVirtualQGraphicsEllipseItem(): QGraphicsEllipseItem() {};
	MiqtVirtualQGraphicsEllipseItem(const QRectF& rect): QGraphicsEllipseItem(rect) {};
	MiqtVirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h): QGraphicsEllipseItem(x, y, w, h) {};
	MiqtVirtualQGraphicsEllipseItem(QGraphicsItem* parent): QGraphicsEllipseItem(parent) {};
	MiqtVirtualQGraphicsEllipseItem(const QRectF& rect, QGraphicsItem* parent): QGraphicsEllipseItem(rect, parent) {};
	MiqtVirtualQGraphicsEllipseItem(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent): QGraphicsEllipseItem(x, y, w, h, parent) {};

	virtual ~MiqtVirtualQGraphicsEllipseItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsEllipseItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsEllipseItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsEllipseItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsEllipseItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsEllipseItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsEllipseItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsEllipseItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsEllipseItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsEllipseItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsEllipseItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsEllipseItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsEllipseItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsEllipseItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsEllipseItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsEllipseItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsEllipseItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsEllipseItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsEllipseItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsEllipseItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsEllipseItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsEllipseItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsEllipseItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsEllipseItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsEllipseItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsEllipseItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsEllipseItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsEllipseItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsEllipseItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsEllipseItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsEllipseItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsEllipseItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsEllipseItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsEllipseItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsEllipseItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsEllipseItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsEllipseItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsEllipseItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsEllipseItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsEllipseItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsEllipseItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsEllipseItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsEllipseItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsEllipseItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsEllipseItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsEllipseItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsEllipseItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsEllipseItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsEllipseItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsEllipseItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsEllipseItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsEllipseItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsEllipseItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsEllipseItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsEllipseItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsEllipseItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsEllipseItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsEllipseItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsEllipseItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsEllipseItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsEllipseItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsEllipseItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsEllipseItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsEllipseItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsEllipseItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsEllipseItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsEllipseItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsEllipseItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsEllipseItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsEllipseItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsEllipseItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsEllipseItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsEllipseItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsEllipseItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsEllipseItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsEllipseItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsEllipseItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsEllipseItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsEllipseItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsEllipseItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsEllipseItem* QGraphicsEllipseItem_new() {
	return new MiqtVirtualQGraphicsEllipseItem();
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new2(QRectF* rect) {
	return new MiqtVirtualQGraphicsEllipseItem(*rect);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new3(double x, double y, double w, double h) {
	return new MiqtVirtualQGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new4(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsEllipseItem(parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new5(QRectF* rect, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsEllipseItem(*rect, parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
}

void QGraphicsEllipseItem_virtbase(QGraphicsEllipseItem* src, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem) {
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(src);
}

QRectF* QGraphicsEllipseItem_rect(const QGraphicsEllipseItem* self) {
	return new QRectF(self->rect());
}

void QGraphicsEllipseItem_setRect(QGraphicsEllipseItem* self, QRectF* rect) {
	self->setRect(*rect);
}

void QGraphicsEllipseItem_setRect2(QGraphicsEllipseItem* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

int QGraphicsEllipseItem_startAngle(const QGraphicsEllipseItem* self) {
	return self->startAngle();
}

void QGraphicsEllipseItem_setStartAngle(QGraphicsEllipseItem* self, int angle) {
	self->setStartAngle(static_cast<int>(angle));
}

int QGraphicsEllipseItem_spanAngle(const QGraphicsEllipseItem* self) {
	return self->spanAngle();
}

void QGraphicsEllipseItem_setSpanAngle(QGraphicsEllipseItem* self, int angle) {
	self->setSpanAngle(static_cast<int>(angle));
}

QRectF* QGraphicsEllipseItem_boundingRect(const QGraphicsEllipseItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsEllipseItem_shape(const QGraphicsEllipseItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsEllipseItem_contains(const QGraphicsEllipseItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsEllipseItem_paint(QGraphicsEllipseItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsEllipseItem_isObscuredBy(const QGraphicsEllipseItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsEllipseItem_opaqueArea(const QGraphicsEllipseItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsEllipseItem_type(const QGraphicsEllipseItem* self) {
	return self->type();
}

bool QGraphicsEllipseItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsEllipseItem_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsEllipseItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsEllipseItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_shape();
}

bool QGraphicsEllipseItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_contains(point);
}

bool QGraphicsEllipseItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsEllipseItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsEllipseItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsEllipseItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsEllipseItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsEllipseItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_type();
}

bool QGraphicsEllipseItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsEllipseItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsEllipseItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsEllipseItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_extension(variant);
}

bool QGraphicsEllipseItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsEllipseItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsEllipseItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsEllipseItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsEllipseItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsEllipseItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsEllipseItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsEllipseItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsEllipseItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsEllipseItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsEllipseItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsEllipseItem*)(self) )->virtualbase_itemChange(change, value);
}

void QGraphicsEllipseItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QGraphicsEllipseItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsEllipseItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsEllipseItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsEllipseItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsEllipseItem*>( (QGraphicsEllipseItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsEllipseItem_delete(QGraphicsEllipseItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsPolygonItem final : public QGraphicsPolygonItem {
public:

	MiqtVirtualQGraphicsPolygonItem(): QGraphicsPolygonItem() {};
	MiqtVirtualQGraphicsPolygonItem(QGraphicsItem* parent): QGraphicsPolygonItem(parent) {};

	virtual ~MiqtVirtualQGraphicsPolygonItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsPolygonItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsPolygonItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsPolygonItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsPolygonItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsPolygonItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsPolygonItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsPolygonItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsPolygonItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsPolygonItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsPolygonItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsPolygonItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsPolygonItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsPolygonItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsPolygonItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsPolygonItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsPolygonItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsPolygonItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsPolygonItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsPolygonItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsPolygonItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsPolygonItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsPolygonItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsPolygonItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsPolygonItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsPolygonItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsPolygonItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsPolygonItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsPolygonItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsPolygonItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsPolygonItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsPolygonItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsPolygonItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsPolygonItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsPolygonItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsPolygonItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsPolygonItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPolygonItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsPolygonItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPolygonItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsPolygonItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPolygonItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsPolygonItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPolygonItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsPolygonItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsPolygonItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsPolygonItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsPolygonItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsPolygonItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPolygonItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsPolygonItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPolygonItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsPolygonItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPolygonItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsPolygonItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsPolygonItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsPolygonItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsPolygonItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsPolygonItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPolygonItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsPolygonItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPolygonItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsPolygonItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPolygonItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsPolygonItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPolygonItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsPolygonItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsPolygonItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsPolygonItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPolygonItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsPolygonItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsPolygonItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsPolygonItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsPolygonItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPolygonItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsPolygonItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsPolygonItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsPolygonItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsPolygonItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsPolygonItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsPolygonItem* QGraphicsPolygonItem_new() {
	return new MiqtVirtualQGraphicsPolygonItem();
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsPolygonItem(parent);
}

void QGraphicsPolygonItem_virtbase(QGraphicsPolygonItem* src, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem) {
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(src);
}

int QGraphicsPolygonItem_fillRule(const QGraphicsPolygonItem* self) {
	Qt::FillRule _ret = self->fillRule();
	return static_cast<int>(_ret);
}

void QGraphicsPolygonItem_setFillRule(QGraphicsPolygonItem* self, int rule) {
	self->setFillRule(static_cast<Qt::FillRule>(rule));
}

QRectF* QGraphicsPolygonItem_boundingRect(const QGraphicsPolygonItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPolygonItem_shape(const QGraphicsPolygonItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPolygonItem_contains(const QGraphicsPolygonItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPolygonItem_paint(QGraphicsPolygonItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPolygonItem_isObscuredBy(const QGraphicsPolygonItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPolygonItem_opaqueArea(const QGraphicsPolygonItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPolygonItem_type(const QGraphicsPolygonItem* self) {
	return self->type();
}

bool QGraphicsPolygonItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsPolygonItem_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsPolygonItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsPolygonItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_shape();
}

bool QGraphicsPolygonItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_contains(point);
}

bool QGraphicsPolygonItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsPolygonItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsPolygonItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsPolygonItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsPolygonItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsPolygonItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_type();
}

bool QGraphicsPolygonItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsPolygonItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsPolygonItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsPolygonItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_extension(variant);
}

bool QGraphicsPolygonItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsPolygonItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsPolygonItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsPolygonItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsPolygonItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsPolygonItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsPolygonItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsPolygonItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsPolygonItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsPolygonItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsPolygonItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsPolygonItem*)(self) )->virtualbase_itemChange(change, value);
}

void QGraphicsPolygonItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QGraphicsPolygonItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsPolygonItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsPolygonItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPolygonItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPolygonItem*>( (QGraphicsPolygonItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsPolygonItem_delete(QGraphicsPolygonItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsLineItem final : public QGraphicsLineItem {
public:

	MiqtVirtualQGraphicsLineItem(): QGraphicsLineItem() {};
	MiqtVirtualQGraphicsLineItem(const QLineF& line): QGraphicsLineItem(line) {};
	MiqtVirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2): QGraphicsLineItem(x1, y1, x2, y2) {};
	MiqtVirtualQGraphicsLineItem(QGraphicsItem* parent): QGraphicsLineItem(parent) {};
	MiqtVirtualQGraphicsLineItem(const QLineF& line, QGraphicsItem* parent): QGraphicsLineItem(line, parent) {};
	MiqtVirtualQGraphicsLineItem(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem* parent): QGraphicsLineItem(x1, y1, x2, y2, parent) {};

	virtual ~MiqtVirtualQGraphicsLineItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsLineItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsLineItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsLineItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsLineItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsLineItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsLineItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsLineItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsLineItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsLineItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsLineItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsLineItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsLineItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsLineItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsLineItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsLineItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsLineItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsLineItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsLineItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsLineItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsLineItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsLineItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsLineItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsLineItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsLineItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsLineItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsLineItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsLineItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsLineItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsLineItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsLineItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsLineItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsLineItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsLineItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsLineItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsLineItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsLineItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsLineItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsLineItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsLineItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsLineItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsLineItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsLineItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsLineItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsLineItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsLineItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsLineItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsLineItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsLineItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsLineItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsLineItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsLineItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsLineItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsLineItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsLineItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsLineItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsLineItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsLineItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsLineItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsLineItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsLineItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsLineItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsLineItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsLineItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsLineItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsLineItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsLineItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsLineItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsLineItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsLineItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsLineItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsLineItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsLineItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsLineItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsLineItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsLineItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsLineItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsLineItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsLineItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsLineItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsLineItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsLineItem* QGraphicsLineItem_new() {
	return new MiqtVirtualQGraphicsLineItem();
}

QGraphicsLineItem* QGraphicsLineItem_new2(QLineF* line) {
	return new MiqtVirtualQGraphicsLineItem(*line);
}

QGraphicsLineItem* QGraphicsLineItem_new3(double x1, double y1, double x2, double y2) {
	return new MiqtVirtualQGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QGraphicsLineItem* QGraphicsLineItem_new4(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsLineItem(parent);
}

QGraphicsLineItem* QGraphicsLineItem_new5(QLineF* line, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsLineItem(*line, parent);
}

QGraphicsLineItem* QGraphicsLineItem_new6(double x1, double y1, double x2, double y2, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), parent);
}

void QGraphicsLineItem_virtbase(QGraphicsLineItem* src, QGraphicsItem** outptr_QGraphicsItem) {
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(src);
}

QPen* QGraphicsLineItem_pen(const QGraphicsLineItem* self) {
	return new QPen(self->pen());
}

void QGraphicsLineItem_setPen(QGraphicsLineItem* self, QPen* pen) {
	self->setPen(*pen);
}

QLineF* QGraphicsLineItem_line(const QGraphicsLineItem* self) {
	return new QLineF(self->line());
}

void QGraphicsLineItem_setLine(QGraphicsLineItem* self, QLineF* line) {
	self->setLine(*line);
}

void QGraphicsLineItem_setLine2(QGraphicsLineItem* self, double x1, double y1, double x2, double y2) {
	self->setLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QRectF* QGraphicsLineItem_boundingRect(const QGraphicsLineItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsLineItem_shape(const QGraphicsLineItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsLineItem_contains(const QGraphicsLineItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsLineItem_paint(QGraphicsLineItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsLineItem_isObscuredBy(const QGraphicsLineItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsLineItem_opaqueArea(const QGraphicsLineItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsLineItem_type(const QGraphicsLineItem* self) {
	return self->type();
}

bool QGraphicsLineItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsLineItem_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsLineItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsLineItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_shape();
}

bool QGraphicsLineItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_contains(point);
}

bool QGraphicsLineItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsLineItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsLineItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsLineItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsLineItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsLineItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_type();
}

bool QGraphicsLineItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsLineItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsLineItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsLineItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_extension(variant);
}

bool QGraphicsLineItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsLineItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsLineItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsLineItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsLineItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsLineItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsLineItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsLineItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsLineItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsLineItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsLineItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsLineItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsLineItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsLineItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsLineItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsLineItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsLineItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsLineItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsLineItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsLineItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsLineItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsLineItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsLineItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsLineItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsLineItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsLineItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsLineItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsLineItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsLineItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsLineItem*)(self) )->virtualbase_itemChange(change, value);
}

void QGraphicsLineItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QGraphicsLineItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsLineItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsLineItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsLineItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsLineItem*>( (QGraphicsLineItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsLineItem_delete(QGraphicsLineItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsPixmapItem final : public QGraphicsPixmapItem {
public:

	MiqtVirtualQGraphicsPixmapItem(): QGraphicsPixmapItem() {};
	MiqtVirtualQGraphicsPixmapItem(const QPixmap& pixmap): QGraphicsPixmapItem(pixmap) {};
	MiqtVirtualQGraphicsPixmapItem(QGraphicsItem* parent): QGraphicsPixmapItem(parent) {};
	MiqtVirtualQGraphicsPixmapItem(const QPixmap& pixmap, QGraphicsItem* parent): QGraphicsPixmapItem(pixmap, parent) {};

	virtual ~MiqtVirtualQGraphicsPixmapItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsPixmapItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsPixmapItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsPixmapItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsPixmapItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsPixmapItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsPixmapItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsPixmapItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsPixmapItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsPixmapItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsPixmapItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsPixmapItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsPixmapItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsPixmapItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsPixmapItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsPixmapItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsPixmapItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsPixmapItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsPixmapItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsPixmapItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsPixmapItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsPixmapItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsPixmapItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsPixmapItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsPixmapItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsPixmapItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsPixmapItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsPixmapItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsPixmapItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsPixmapItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsPixmapItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsPixmapItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsPixmapItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsPixmapItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsPixmapItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsPixmapItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsPixmapItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsPixmapItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsPixmapItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsPixmapItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsPixmapItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsPixmapItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsPixmapItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsPixmapItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsPixmapItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsPixmapItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPixmapItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsPixmapItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPixmapItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsPixmapItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsPixmapItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsPixmapItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsPixmapItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsPixmapItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsPixmapItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsPixmapItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsPixmapItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsPixmapItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsPixmapItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsPixmapItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsPixmapItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsPixmapItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsPixmapItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsPixmapItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsPixmapItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsPixmapItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsPixmapItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsPixmapItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsPixmapItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsPixmapItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsPixmapItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsPixmapItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsPixmapItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsPixmapItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsPixmapItem* QGraphicsPixmapItem_new() {
	return new MiqtVirtualQGraphicsPixmapItem();
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new2(QPixmap* pixmap) {
	return new MiqtVirtualQGraphicsPixmapItem(*pixmap);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new3(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsPixmapItem(parent);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new4(QPixmap* pixmap, QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsPixmapItem(*pixmap, parent);
}

void QGraphicsPixmapItem_virtbase(QGraphicsPixmapItem* src, QGraphicsItem** outptr_QGraphicsItem) {
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(src);
}

QPixmap* QGraphicsPixmapItem_pixmap(const QGraphicsPixmapItem* self) {
	return new QPixmap(self->pixmap());
}

void QGraphicsPixmapItem_setPixmap(QGraphicsPixmapItem* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

int QGraphicsPixmapItem_transformationMode(const QGraphicsPixmapItem* self) {
	Qt::TransformationMode _ret = self->transformationMode();
	return static_cast<int>(_ret);
}

void QGraphicsPixmapItem_setTransformationMode(QGraphicsPixmapItem* self, int mode) {
	self->setTransformationMode(static_cast<Qt::TransformationMode>(mode));
}

QPointF* QGraphicsPixmapItem_offset(const QGraphicsPixmapItem* self) {
	return new QPointF(self->offset());
}

void QGraphicsPixmapItem_setOffset(QGraphicsPixmapItem* self, QPointF* offset) {
	self->setOffset(*offset);
}

void QGraphicsPixmapItem_setOffset2(QGraphicsPixmapItem* self, double x, double y) {
	self->setOffset(static_cast<qreal>(x), static_cast<qreal>(y));
}

QRectF* QGraphicsPixmapItem_boundingRect(const QGraphicsPixmapItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsPixmapItem_shape(const QGraphicsPixmapItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsPixmapItem_contains(const QGraphicsPixmapItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsPixmapItem_paint(QGraphicsPixmapItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsPixmapItem_isObscuredBy(const QGraphicsPixmapItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsPixmapItem_opaqueArea(const QGraphicsPixmapItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsPixmapItem_type(const QGraphicsPixmapItem* self) {
	return self->type();
}

int QGraphicsPixmapItem_shapeMode(const QGraphicsPixmapItem* self) {
	QGraphicsPixmapItem::ShapeMode _ret = self->shapeMode();
	return static_cast<int>(_ret);
}

void QGraphicsPixmapItem_setShapeMode(QGraphicsPixmapItem* self, int mode) {
	self->setShapeMode(static_cast<QGraphicsPixmapItem::ShapeMode>(mode));
}

bool QGraphicsPixmapItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsPixmapItem_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsPixmapItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsPixmapItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_shape();
}

bool QGraphicsPixmapItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_contains(point);
}

bool QGraphicsPixmapItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsPixmapItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsPixmapItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsPixmapItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsPixmapItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsPixmapItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_type();
}

bool QGraphicsPixmapItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsPixmapItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsPixmapItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsPixmapItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_extension(variant);
}

bool QGraphicsPixmapItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsPixmapItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsPixmapItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsPixmapItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsPixmapItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsPixmapItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsPixmapItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsPixmapItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsPixmapItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsPixmapItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsPixmapItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsPixmapItem*)(self) )->virtualbase_itemChange(change, value);
}

void QGraphicsPixmapItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QGraphicsPixmapItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsPixmapItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsPixmapItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsPixmapItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsPixmapItem*>( (QGraphicsPixmapItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsPixmapItem_delete(QGraphicsPixmapItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsTextItem final : public QGraphicsTextItem {
public:

	MiqtVirtualQGraphicsTextItem(): QGraphicsTextItem() {};
	MiqtVirtualQGraphicsTextItem(const QString& text): QGraphicsTextItem(text) {};
	MiqtVirtualQGraphicsTextItem(QGraphicsItem* parent): QGraphicsTextItem(parent) {};
	MiqtVirtualQGraphicsTextItem(const QString& text, QGraphicsItem* parent): QGraphicsTextItem(text, parent) {};

	virtual ~MiqtVirtualQGraphicsTextItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsTextItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsTextItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsTextItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsTextItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsTextItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsTextItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsTextItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsTextItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsTextItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsTextItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsTextItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsTextItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsTextItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsTextItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsTextItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsTextItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsTextItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsTextItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsTextItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsTextItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsTextItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsTextItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsTextItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsTextItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsTextItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsTextItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsTextItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsTextItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsTextItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsTextItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsTextItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsTextItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsTextItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsTextItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsTextItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsTextItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsTextItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsTextItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsTextItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsTextItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsTextItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsTextItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsTextItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsTextItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsTextItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsTextItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsTextItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsTextItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsTextItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsTextItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsTextItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsTextItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsTextItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsTextItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsTextItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsTextItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsTextItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsTextItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsTextItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsTextItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* ev) override {
		if (handle__event == 0) {
			return QGraphicsTextItem::event(ev);
		}
		
		QEvent* sigval1 = ev;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* ev) {

		return QGraphicsTextItem::event(ev);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGraphicsTextItem::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QGraphicsTextItem::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGraphicsTextItem::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QGraphicsTextItem::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QGraphicsTextItem::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QGraphicsTextItem::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGraphicsTextItem::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QGraphicsTextItem::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGraphicsTextItem::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsTextItem_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QGraphicsTextItem::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGraphicsTextItem::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGraphicsTextItem_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QGraphicsTextItem::disconnectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsTextItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsTextItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsTextItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsTextItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsTextItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsTextItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsTextItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsTextItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsTextItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsTextItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsTextItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsTextItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsTextItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsTextItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsTextItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsTextItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsTextItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsTextItem_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsTextItem_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsTextItem_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsTextItem_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QGraphicsTextItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsTextItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsTextItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsTextItem* QGraphicsTextItem_new() {
	return new MiqtVirtualQGraphicsTextItem();
}

QGraphicsTextItem* QGraphicsTextItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQGraphicsTextItem(text_QString);
}

QGraphicsTextItem* QGraphicsTextItem_new3(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsTextItem(parent);
}

QGraphicsTextItem* QGraphicsTextItem_new4(struct miqt_string text, QGraphicsItem* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQGraphicsTextItem(text_QString, parent);
}

void QGraphicsTextItem_virtbase(QGraphicsTextItem* src, QGraphicsObject** outptr_QGraphicsObject) {
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(src);
}

QMetaObject* QGraphicsTextItem_metaObject(const QGraphicsTextItem* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsTextItem_metacast(QGraphicsTextItem* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsTextItem_tr(const char* s) {
	QString _ret = QGraphicsTextItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_toHtml(const QGraphicsTextItem* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTextItem_setHtml(QGraphicsTextItem* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

struct miqt_string QGraphicsTextItem_toPlainText(const QGraphicsTextItem* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTextItem_setPlainText(QGraphicsTextItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

QFont* QGraphicsTextItem_font(const QGraphicsTextItem* self) {
	return new QFont(self->font());
}

void QGraphicsTextItem_setFont(QGraphicsTextItem* self, QFont* font) {
	self->setFont(*font);
}

void QGraphicsTextItem_setDefaultTextColor(QGraphicsTextItem* self, QColor* c) {
	self->setDefaultTextColor(*c);
}

QColor* QGraphicsTextItem_defaultTextColor(const QGraphicsTextItem* self) {
	return new QColor(self->defaultTextColor());
}

QRectF* QGraphicsTextItem_boundingRect(const QGraphicsTextItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsTextItem_shape(const QGraphicsTextItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsTextItem_contains(const QGraphicsTextItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsTextItem_paint(QGraphicsTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsTextItem_isObscuredBy(const QGraphicsTextItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsTextItem_opaqueArea(const QGraphicsTextItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsTextItem_type(const QGraphicsTextItem* self) {
	return self->type();
}

void QGraphicsTextItem_setTextWidth(QGraphicsTextItem* self, double width) {
	self->setTextWidth(static_cast<qreal>(width));
}

double QGraphicsTextItem_textWidth(const QGraphicsTextItem* self) {
	qreal _ret = self->textWidth();
	return static_cast<double>(_ret);
}

void QGraphicsTextItem_adjustSize(QGraphicsTextItem* self) {
	self->adjustSize();
}

void QGraphicsTextItem_setDocument(QGraphicsTextItem* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QGraphicsTextItem_document(const QGraphicsTextItem* self) {
	return self->document();
}

void QGraphicsTextItem_setTextInteractionFlags(QGraphicsTextItem* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QGraphicsTextItem_textInteractionFlags(const QGraphicsTextItem* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QGraphicsTextItem_setTabChangesFocus(QGraphicsTextItem* self, bool b) {
	self->setTabChangesFocus(b);
}

bool QGraphicsTextItem_tabChangesFocus(const QGraphicsTextItem* self) {
	return self->tabChangesFocus();
}

void QGraphicsTextItem_setOpenExternalLinks(QGraphicsTextItem* self, bool open) {
	self->setOpenExternalLinks(open);
}

bool QGraphicsTextItem_openExternalLinks(const QGraphicsTextItem* self) {
	return self->openExternalLinks();
}

void QGraphicsTextItem_setTextCursor(QGraphicsTextItem* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QGraphicsTextItem_textCursor(const QGraphicsTextItem* self) {
	return new QTextCursor(self->textCursor());
}

void QGraphicsTextItem_linkActivated(QGraphicsTextItem* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->linkActivated(param1_QString);
}

void QGraphicsTextItem_connect_linkActivated(QGraphicsTextItem* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem::connect(self, static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkActivated), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QGraphicsTextItem_linkActivated(slot, sigval1);
	});
}

void QGraphicsTextItem_linkHovered(QGraphicsTextItem* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->linkHovered(param1_QString);
}

void QGraphicsTextItem_connect_linkHovered(QGraphicsTextItem* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem::connect(self, static_cast<void (QGraphicsTextItem::*)(const QString&)>(&QGraphicsTextItem::linkHovered), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QGraphicsTextItem_linkHovered(slot, sigval1);
	});
}

struct miqt_string QGraphicsTextItem_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsTextItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTextItem_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTextItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsTextItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsTextItem_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsTextItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsTextItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_shape();
}

bool QGraphicsTextItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_contains(point);
}

bool QGraphicsTextItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsTextItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsTextItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsTextItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsTextItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsTextItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_type();
}

bool QGraphicsTextItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsTextItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsTextItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsTextItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsTextItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsTextItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsTextItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsTextItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsTextItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsTextItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsTextItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsTextItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsTextItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsTextItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsTextItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsTextItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsTextItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsTextItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsTextItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsTextItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsTextItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsTextItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsTextItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsTextItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_extension(variant);
}

bool QGraphicsTextItem_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_event(void* self, QEvent* ev) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_event(ev);
}

bool QGraphicsTextItem_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QGraphicsTextItem_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_timerEvent(event);
}

bool QGraphicsTextItem_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_childEvent(event);
}

bool QGraphicsTextItem_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_customEvent(event);
}

bool QGraphicsTextItem_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_connectNotify(signal);
}

bool QGraphicsTextItem_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_disconnectNotify(signal);
}

bool QGraphicsTextItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsTextItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsTextItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsTextItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsTextItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsTextItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsTextItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsTextItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsTextItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsTextItem*)(self) )->virtualbase_itemChange(change, value);
}

void QGraphicsTextItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

QObject* QGraphicsTextItem_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGraphicsTextItem_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGraphicsTextItem_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGraphicsTextItem_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGraphicsTextItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsTextItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsTextItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsTextItem*>( (QGraphicsTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsTextItem_delete(QGraphicsTextItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsSimpleTextItem final : public QGraphicsSimpleTextItem {
public:

	MiqtVirtualQGraphicsSimpleTextItem(): QGraphicsSimpleTextItem() {};
	MiqtVirtualQGraphicsSimpleTextItem(const QString& text): QGraphicsSimpleTextItem(text) {};
	MiqtVirtualQGraphicsSimpleTextItem(QGraphicsItem* parent): QGraphicsSimpleTextItem(parent) {};
	MiqtVirtualQGraphicsSimpleTextItem(const QString& text, QGraphicsItem* parent): QGraphicsSimpleTextItem(text, parent) {};

	virtual ~MiqtVirtualQGraphicsSimpleTextItem() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsSimpleTextItem::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsSimpleTextItem::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsSimpleTextItem::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsSimpleTextItem::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsSimpleTextItem::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsSimpleTextItem::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsSimpleTextItem::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsSimpleTextItem_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsSimpleTextItem::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsSimpleTextItem::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsSimpleTextItem::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsSimpleTextItem::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsSimpleTextItem::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsSimpleTextItem::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsSimpleTextItem::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsSimpleTextItem::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsSimpleTextItem::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsSimpleTextItem::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsSimpleTextItem_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsSimpleTextItem::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsSimpleTextItem::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsSimpleTextItem::extension(*variant));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsSimpleTextItem::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsSimpleTextItem_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsSimpleTextItem::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsSimpleTextItem::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsSimpleTextItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsSimpleTextItem::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsSimpleTextItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsSimpleTextItem::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsSimpleTextItem::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsSimpleTextItem::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsSimpleTextItem::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsSimpleTextItem::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsSimpleTextItem::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsSimpleTextItem::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSimpleTextItem::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsSimpleTextItem::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSimpleTextItem::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsSimpleTextItem::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSimpleTextItem::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsSimpleTextItem::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsSimpleTextItem::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsSimpleTextItem::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsSimpleTextItem::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsSimpleTextItem::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsSimpleTextItem::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsSimpleTextItem::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsSimpleTextItem::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsSimpleTextItem::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsSimpleTextItem::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsSimpleTextItem::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsSimpleTextItem::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsSimpleTextItem::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsSimpleTextItem::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsSimpleTextItem::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsSimpleTextItem::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsSimpleTextItem::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSimpleTextItem::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsSimpleTextItem::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSimpleTextItem::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsSimpleTextItem::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSimpleTextItem::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsSimpleTextItem::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsSimpleTextItem::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsSimpleTextItem::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsSimpleTextItem::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsSimpleTextItem::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsSimpleTextItem_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsSimpleTextItem::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsSimpleTextItem::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsSimpleTextItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsSimpleTextItem::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsSimpleTextItem_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsSimpleTextItem::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsSimpleTextItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsSimpleTextItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsSimpleTextItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsSimpleTextItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new() {
	return new MiqtVirtualQGraphicsSimpleTextItem();
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQGraphicsSimpleTextItem(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new3(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsSimpleTextItem(parent);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new4(struct miqt_string text, QGraphicsItem* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQGraphicsSimpleTextItem(text_QString, parent);
}

void QGraphicsSimpleTextItem_virtbase(QGraphicsSimpleTextItem* src, QAbstractGraphicsShapeItem** outptr_QAbstractGraphicsShapeItem) {
	*outptr_QAbstractGraphicsShapeItem = static_cast<QAbstractGraphicsShapeItem*>(src);
}

void QGraphicsSimpleTextItem_setText(QGraphicsSimpleTextItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

struct miqt_string QGraphicsSimpleTextItem_text(const QGraphicsSimpleTextItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsSimpleTextItem_setFont(QGraphicsSimpleTextItem* self, QFont* font) {
	self->setFont(*font);
}

QFont* QGraphicsSimpleTextItem_font(const QGraphicsSimpleTextItem* self) {
	return new QFont(self->font());
}

QRectF* QGraphicsSimpleTextItem_boundingRect(const QGraphicsSimpleTextItem* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsSimpleTextItem_shape(const QGraphicsSimpleTextItem* self) {
	return new QPainterPath(self->shape());
}

bool QGraphicsSimpleTextItem_contains(const QGraphicsSimpleTextItem* self, QPointF* point) {
	return self->contains(*point);
}

void QGraphicsSimpleTextItem_paint(QGraphicsSimpleTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsSimpleTextItem_isObscuredBy(const QGraphicsSimpleTextItem* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsSimpleTextItem_opaqueArea(const QGraphicsSimpleTextItem* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsSimpleTextItem_type(const QGraphicsSimpleTextItem* self) {
	return self->type();
}

bool QGraphicsSimpleTextItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsSimpleTextItem_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsSimpleTextItem_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsSimpleTextItem_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_shape();
}

bool QGraphicsSimpleTextItem_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_contains(point);
}

bool QGraphicsSimpleTextItem_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsSimpleTextItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsSimpleTextItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsSimpleTextItem_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsSimpleTextItem_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsSimpleTextItem_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_type();
}

bool QGraphicsSimpleTextItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsSimpleTextItem_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsSimpleTextItem_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsSimpleTextItem_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_extension(variant);
}

bool QGraphicsSimpleTextItem_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsSimpleTextItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsSimpleTextItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsSimpleTextItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsSimpleTextItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsSimpleTextItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsSimpleTextItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsSimpleTextItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsSimpleTextItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsSimpleTextItem_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsSimpleTextItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsSimpleTextItem*)(self) )->virtualbase_itemChange(change, value);
}

void QGraphicsSimpleTextItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QGraphicsSimpleTextItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsSimpleTextItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsSimpleTextItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsSimpleTextItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsSimpleTextItem*>( (QGraphicsSimpleTextItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsSimpleTextItem_delete(QGraphicsSimpleTextItem* self) {
	delete self;
}

class MiqtVirtualQGraphicsItemGroup final : public QGraphicsItemGroup {
public:

	MiqtVirtualQGraphicsItemGroup(): QGraphicsItemGroup() {};
	MiqtVirtualQGraphicsItemGroup(QGraphicsItem* parent): QGraphicsItemGroup(parent) {};

	virtual ~MiqtVirtualQGraphicsItemGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__boundingRect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (handle__boundingRect == 0) {
			return QGraphicsItemGroup::boundingRect();
		}
		

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_boundingRect(this, handle__boundingRect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRectF* virtualbase_boundingRect() const {

		return new QRectF(QGraphicsItemGroup::boundingRect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (handle__paint == 0) {
			QGraphicsItemGroup::paint(painter, option, widget);
			return;
		}
		
		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;

		miqt_exec_callback_QGraphicsItemGroup_paint(this, handle__paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_paint(QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {

		QGraphicsItemGroup::paint(painter, option, widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isObscuredBy = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (handle__isObscuredBy == 0) {
			return QGraphicsItemGroup::isObscuredBy(item);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) item;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_isObscuredBy(this, handle__isObscuredBy, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_isObscuredBy(QGraphicsItem* item) const {

		return QGraphicsItemGroup::isObscuredBy(item);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__opaqueArea = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (handle__opaqueArea == 0) {
			return QGraphicsItemGroup::opaqueArea();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_opaqueArea(this, handle__opaqueArea);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_opaqueArea() const {

		return new QPainterPath(QGraphicsItemGroup::opaqueArea());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (handle__type == 0) {
			return QGraphicsItemGroup::type();
		}
		

		int callback_return_value = miqt_exec_callback_QGraphicsItemGroup_type(this, handle__type);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_type() const {

		return QGraphicsItemGroup::type();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__advance = 0;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (handle__advance == 0) {
			QGraphicsItemGroup::advance(phase);
			return;
		}
		
		int sigval1 = phase;

		miqt_exec_callback_QGraphicsItemGroup_advance(this, handle__advance, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_advance(int phase) {

		QGraphicsItemGroup::advance(static_cast<int>(phase));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__shape = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (handle__shape == 0) {
			return QGraphicsItemGroup::shape();
		}
		

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_shape(this, handle__shape);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainterPath* virtualbase_shape() const {

		return new QPainterPath(QGraphicsItemGroup::shape());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (handle__contains == 0) {
			return QGraphicsItemGroup::contains(point);
		}
		
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_contains(this, handle__contains, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_contains(QPointF* point) const {

		return QGraphicsItemGroup::contains(*point);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithItem == 0) {
			return QGraphicsItemGroup::collidesWithItem(other, mode);
		}
		
		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_collidesWithItem(this, handle__collidesWithItem, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithItem(QGraphicsItem* other, int mode) const {

		return QGraphicsItemGroup::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__collidesWithPath = 0;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (handle__collidesWithPath == 0) {
			return QGraphicsItemGroup::collidesWithPath(path, mode);
		}
		
		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_collidesWithPath(this, handle__collidesWithPath, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_collidesWithPath(QPainterPath* path, int mode) const {

		return QGraphicsItemGroup::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (handle__sceneEventFilter == 0) {
			return QGraphicsItemGroup::sceneEventFilter(watched, event);
		}
		
		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_sceneEventFilter(this, handle__sceneEventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEventFilter(QGraphicsItem* watched, QEvent* event) {

		return QGraphicsItemGroup::sceneEventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sceneEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (handle__sceneEvent == 0) {
			return QGraphicsItemGroup::sceneEvent(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_sceneEvent(this, handle__sceneEvent, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_sceneEvent(QEvent* event) {

		return QGraphicsItemGroup::sceneEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QGraphicsItemGroup::contextMenuEvent(event);
			return;
		}
		
		QGraphicsSceneContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_contextMenuEvent(QGraphicsSceneContextMenuEvent* event) {

		QGraphicsItemGroup::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QGraphicsItemGroup::dragEnterEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragEnterEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QGraphicsItemGroup::dragLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragLeaveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QGraphicsItemGroup::dragMoveEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dragMoveEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QGraphicsItemGroup::dropEvent(event);
			return;
		}
		
		QGraphicsSceneDragDropEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_dropEvent(this, handle__dropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_dropEvent(QGraphicsSceneDragDropEvent* event) {

		QGraphicsItemGroup::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QGraphicsItemGroup::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_focusInEvent(this, handle__focusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusInEvent(QFocusEvent* event) {

		QGraphicsItemGroup::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QGraphicsItemGroup::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_focusOutEvent(this, handle__focusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_focusOutEvent(QFocusEvent* event) {

		QGraphicsItemGroup::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverEnterEvent == 0) {
			QGraphicsItemGroup::hoverEnterEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_hoverEnterEvent(this, handle__hoverEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverEnterEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItemGroup::hoverEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverMoveEvent == 0) {
			QGraphicsItemGroup::hoverMoveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_hoverMoveEvent(this, handle__hoverMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverMoveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItemGroup::hoverMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hoverLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (handle__hoverLeaveEvent == 0) {
			QGraphicsItemGroup::hoverLeaveEvent(event);
			return;
		}
		
		QGraphicsSceneHoverEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_hoverLeaveEvent(this, handle__hoverLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_hoverLeaveEvent(QGraphicsSceneHoverEvent* event) {

		QGraphicsItemGroup::hoverLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QGraphicsItemGroup::keyPressEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_keyPressEvent(this, handle__keyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyPressEvent(QKeyEvent* event) {

		QGraphicsItemGroup::keyPressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QGraphicsItemGroup::keyReleaseEvent(event);
			return;
		}
		
		QKeyEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_keyReleaseEvent(QKeyEvent* event) {

		QGraphicsItemGroup::keyReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QGraphicsItemGroup::mousePressEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_mousePressEvent(this, handle__mousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mousePressEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QGraphicsItemGroup::mouseMoveEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseMoveEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QGraphicsItemGroup::mouseReleaseEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QGraphicsItemGroup::mouseDoubleClickEvent(event);
			return;
		}
		
		QGraphicsSceneMouseEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) {

		QGraphicsItemGroup::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QGraphicsItemGroup::wheelEvent(event);
			return;
		}
		
		QGraphicsSceneWheelEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_wheelEvent(this, handle__wheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_wheelEvent(QGraphicsSceneWheelEvent* event) {

		QGraphicsItemGroup::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (handle__inputMethodEvent == 0) {
			QGraphicsItemGroup::inputMethodEvent(event);
			return;
		}
		
		QInputMethodEvent* sigval1 = event;

		miqt_exec_callback_QGraphicsItemGroup_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_inputMethodEvent(QInputMethodEvent* event) {

		QGraphicsItemGroup::inputMethodEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (handle__inputMethodQuery == 0) {
			return QGraphicsItemGroup::inputMethodQuery(query);
		}
		
		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_inputMethodQuery(this, handle__inputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_inputMethodQuery(int query) const {

		return new QVariant(QGraphicsItemGroup::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemChange = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (handle__itemChange == 0) {
			return QGraphicsItemGroup::itemChange(change, value);
		}
		
		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_itemChange(this, handle__itemChange, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_itemChange(int change, QVariant* value) {

		return new QVariant(QGraphicsItemGroup::itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportsExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (handle__supportsExtension == 0) {
			return QGraphicsItemGroup::supportsExtension(extension);
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);

		bool callback_return_value = miqt_exec_callback_QGraphicsItemGroup_supportsExtension(this, handle__supportsExtension, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_supportsExtension(int extension) const {

		return QGraphicsItemGroup::supportsExtension(static_cast<QGraphicsItem::Extension>(extension));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setExtension = 0;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (handle__setExtension == 0) {
			QGraphicsItemGroup::setExtension(extension, variant);
			return;
		}
		
		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);

		miqt_exec_callback_QGraphicsItemGroup_setExtension(this, handle__setExtension, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setExtension(int extension, QVariant* variant) {

		QGraphicsItemGroup::setExtension(static_cast<QGraphicsItem::Extension>(extension), *variant);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (handle__extension == 0) {
			return QGraphicsItemGroup::extension(variant);
		}
		
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);

		QVariant* callback_return_value = miqt_exec_callback_QGraphicsItemGroup_extension(this, handle__extension, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_extension(QVariant* variant) const {

		return new QVariant(QGraphicsItemGroup::extension(*variant));

	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsItemGroup_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsItemGroup_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsItemGroup_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsItemGroup_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsItemGroup* QGraphicsItemGroup_new() {
	return new MiqtVirtualQGraphicsItemGroup();
}

QGraphicsItemGroup* QGraphicsItemGroup_new2(QGraphicsItem* parent) {
	return new MiqtVirtualQGraphicsItemGroup(parent);
}

void QGraphicsItemGroup_virtbase(QGraphicsItemGroup* src, QGraphicsItem** outptr_QGraphicsItem) {
	*outptr_QGraphicsItem = static_cast<QGraphicsItem*>(src);
}

void QGraphicsItemGroup_addToGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
	self->addToGroup(item);
}

void QGraphicsItemGroup_removeFromGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
	self->removeFromGroup(item);
}

QRectF* QGraphicsItemGroup_boundingRect(const QGraphicsItemGroup* self) {
	return new QRectF(self->boundingRect());
}

void QGraphicsItemGroup_paint(QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

bool QGraphicsItemGroup_isObscuredBy(const QGraphicsItemGroup* self, QGraphicsItem* item) {
	return self->isObscuredBy(item);
}

QPainterPath* QGraphicsItemGroup_opaqueArea(const QGraphicsItemGroup* self) {
	return new QPainterPath(self->opaqueArea());
}

int QGraphicsItemGroup_type(const QGraphicsItemGroup* self) {
	return self->type();
}

bool QGraphicsItemGroup_override_virtual_boundingRect(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__boundingRect = slot;
	return true;
}

QRectF* QGraphicsItemGroup_virtualbase_boundingRect(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_boundingRect();
}

bool QGraphicsItemGroup_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paint = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_paint(painter, option, widget);
}

bool QGraphicsItemGroup_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isObscuredBy = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_isObscuredBy(item);
}

bool QGraphicsItemGroup_override_virtual_opaqueArea(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__opaqueArea = slot;
	return true;
}

QPainterPath* QGraphicsItemGroup_virtualbase_opaqueArea(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_opaqueArea();
}

bool QGraphicsItemGroup_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QGraphicsItemGroup_virtualbase_type(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_type();
}

bool QGraphicsItemGroup_override_virtual_advance(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__advance = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_advance(void* self, int phase) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_advance(phase);
}

bool QGraphicsItemGroup_override_virtual_shape(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__shape = slot;
	return true;
}

QPainterPath* QGraphicsItemGroup_virtualbase_shape(const void* self) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_shape();
}

bool QGraphicsItemGroup_override_virtual_contains(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contains = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_contains(const void* self, QPointF* point) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_contains(point);
}

bool QGraphicsItemGroup_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithItem = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_collidesWithItem(other, mode);
}

bool QGraphicsItemGroup_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__collidesWithPath = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_collidesWithPath(path, mode);
}

bool QGraphicsItemGroup_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEventFilter = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_sceneEventFilter(watched, event);
}

bool QGraphicsItemGroup_override_virtual_sceneEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sceneEvent = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_sceneEvent(void* self, QEvent* event) {
	return ( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_sceneEvent(event);
}

bool QGraphicsItemGroup_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_contextMenuEvent(event);
}

bool QGraphicsItemGroup_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_dragEnterEvent(event);
}

bool QGraphicsItemGroup_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_dragLeaveEvent(event);
}

bool QGraphicsItemGroup_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_dragMoveEvent(event);
}

bool QGraphicsItemGroup_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_dropEvent(event);
}

bool QGraphicsItemGroup_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusInEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_focusInEvent(event);
}

bool QGraphicsItemGroup_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_focusOutEvent(event);
}

bool QGraphicsItemGroup_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverEnterEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_hoverEnterEvent(event);
}

bool QGraphicsItemGroup_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverMoveEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_hoverMoveEvent(event);
}

bool QGraphicsItemGroup_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hoverLeaveEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_hoverLeaveEvent(event);
}

bool QGraphicsItemGroup_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_keyPressEvent(event);
}

bool QGraphicsItemGroup_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_keyReleaseEvent(event);
}

bool QGraphicsItemGroup_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_mousePressEvent(event);
}

bool QGraphicsItemGroup_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_mouseMoveEvent(event);
}

bool QGraphicsItemGroup_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_mouseReleaseEvent(event);
}

bool QGraphicsItemGroup_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_mouseDoubleClickEvent(event);
}

bool QGraphicsItemGroup_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wheelEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_wheelEvent(event);
}

bool QGraphicsItemGroup_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_inputMethodEvent(event);
}

bool QGraphicsItemGroup_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QGraphicsItemGroup_virtualbase_inputMethodQuery(const void* self, int query) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_inputMethodQuery(query);
}

bool QGraphicsItemGroup_override_virtual_itemChange(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemChange = slot;
	return true;
}

QVariant* QGraphicsItemGroup_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return ( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_itemChange(change, value);
}

bool QGraphicsItemGroup_override_virtual_supportsExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportsExtension = slot;
	return true;
}

bool QGraphicsItemGroup_virtualbase_supportsExtension(const void* self, int extension) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_supportsExtension(extension);
}

bool QGraphicsItemGroup_override_virtual_setExtension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setExtension = slot;
	return true;
}

void QGraphicsItemGroup_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	( (MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_setExtension(extension, variant);
}

bool QGraphicsItemGroup_override_virtual_extension(void* self, intptr_t slot) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__extension = slot;
	return true;
}

QVariant* QGraphicsItemGroup_virtualbase_extension(const void* self, QVariant* variant) {
	return ( (const MiqtVirtualQGraphicsItemGroup*)(self) )->virtualbase_extension(variant);
}

void QGraphicsItemGroup_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->updateMicroFocus();

}

void QGraphicsItemGroup_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addToIndex();

}

void QGraphicsItemGroup_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->removeFromIndex();

}

void QGraphicsItemGroup_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsItemGroup* self_cast = dynamic_cast<MiqtVirtualQGraphicsItemGroup*>( (QGraphicsItemGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->prepareGeometryChange();

}

void QGraphicsItemGroup_delete(QGraphicsItemGroup* self) {
	delete self;
}

