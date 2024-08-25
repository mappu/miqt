#ifndef GEN_QGRAPHICSSCENEEVENT_H
#define GEN_QGRAPHICSSCENEEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsSceneContextMenuEvent;
class QGraphicsSceneDragDropEvent;
class QGraphicsSceneEvent;
class QGraphicsSceneHelpEvent;
class QGraphicsSceneHoverEvent;
class QGraphicsSceneMouseEvent;
class QGraphicsSceneMoveEvent;
class QGraphicsSceneResizeEvent;
class QGraphicsSceneWheelEvent;
class QMimeData;
class QPoint;
class QPointF;
class QSizeF;
class QWidget;
#else
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneEvent QGraphicsSceneEvent;
typedef struct QGraphicsSceneHelpEvent QGraphicsSceneHelpEvent;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneMoveEvent QGraphicsSceneMoveEvent;
typedef struct QGraphicsSceneResizeEvent QGraphicsSceneResizeEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QMimeData QMimeData;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QSizeF QSizeF;
typedef struct QWidget QWidget;
#endif

QWidget* QGraphicsSceneEvent_Widget(QGraphicsSceneEvent* self);
void QGraphicsSceneEvent_SetWidget(QGraphicsSceneEvent* self, QWidget* widget);
void QGraphicsSceneEvent_Delete(QGraphicsSceneEvent* self);

QPointF* QGraphicsSceneMouseEvent_Pos(QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetPos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_ScenePos(QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_ScreenPos(QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos);
QPointF* QGraphicsSceneMouseEvent_LastPos(QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetLastPos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_LastScenePos(QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetLastScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_LastScreenPos(QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetLastScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos);
void QGraphicsSceneMouseEvent_Delete(QGraphicsSceneMouseEvent* self);

QPointF* QGraphicsSceneWheelEvent_Pos(QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetPos(QGraphicsSceneWheelEvent* self, QPointF* pos);
QPointF* QGraphicsSceneWheelEvent_ScenePos(QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetScenePos(QGraphicsSceneWheelEvent* self, QPointF* pos);
QPoint* QGraphicsSceneWheelEvent_ScreenPos(QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetScreenPos(QGraphicsSceneWheelEvent* self, QPoint* pos);
int QGraphicsSceneWheelEvent_Delta(QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetDelta(QGraphicsSceneWheelEvent* self, int delta);
void QGraphicsSceneWheelEvent_Delete(QGraphicsSceneWheelEvent* self);

QPointF* QGraphicsSceneContextMenuEvent_Pos(QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetPos(QGraphicsSceneContextMenuEvent* self, QPointF* pos);
QPointF* QGraphicsSceneContextMenuEvent_ScenePos(QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetScenePos(QGraphicsSceneContextMenuEvent* self, QPointF* pos);
QPoint* QGraphicsSceneContextMenuEvent_ScreenPos(QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetScreenPos(QGraphicsSceneContextMenuEvent* self, QPoint* pos);
void QGraphicsSceneContextMenuEvent_Delete(QGraphicsSceneContextMenuEvent* self);

QPointF* QGraphicsSceneHoverEvent_Pos(QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetPos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPointF* QGraphicsSceneHoverEvent_ScenePos(QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPoint* QGraphicsSceneHoverEvent_ScreenPos(QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos);
QPointF* QGraphicsSceneHoverEvent_LastPos(QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetLastPos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPointF* QGraphicsSceneHoverEvent_LastScenePos(QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetLastScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPoint* QGraphicsSceneHoverEvent_LastScreenPos(QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetLastScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos);
void QGraphicsSceneHoverEvent_Delete(QGraphicsSceneHoverEvent* self);

QPointF* QGraphicsSceneHelpEvent_ScenePos(QGraphicsSceneHelpEvent* self);
void QGraphicsSceneHelpEvent_SetScenePos(QGraphicsSceneHelpEvent* self, QPointF* pos);
QPoint* QGraphicsSceneHelpEvent_ScreenPos(QGraphicsSceneHelpEvent* self);
void QGraphicsSceneHelpEvent_SetScreenPos(QGraphicsSceneHelpEvent* self, QPoint* pos);
void QGraphicsSceneHelpEvent_Delete(QGraphicsSceneHelpEvent* self);

QPointF* QGraphicsSceneDragDropEvent_Pos(QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetPos(QGraphicsSceneDragDropEvent* self, QPointF* pos);
QPointF* QGraphicsSceneDragDropEvent_ScenePos(QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetScenePos(QGraphicsSceneDragDropEvent* self, QPointF* pos);
QPoint* QGraphicsSceneDragDropEvent_ScreenPos(QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetScreenPos(QGraphicsSceneDragDropEvent* self, QPoint* pos);
void QGraphicsSceneDragDropEvent_AcceptProposedAction(QGraphicsSceneDragDropEvent* self);
QWidget* QGraphicsSceneDragDropEvent_Source(QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetSource(QGraphicsSceneDragDropEvent* self, QWidget* source);
QMimeData* QGraphicsSceneDragDropEvent_MimeData(QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetMimeData(QGraphicsSceneDragDropEvent* self, QMimeData* data);
void QGraphicsSceneDragDropEvent_Delete(QGraphicsSceneDragDropEvent* self);

QGraphicsSceneResizeEvent* QGraphicsSceneResizeEvent_new();
QSizeF* QGraphicsSceneResizeEvent_OldSize(QGraphicsSceneResizeEvent* self);
void QGraphicsSceneResizeEvent_SetOldSize(QGraphicsSceneResizeEvent* self, QSizeF* size);
QSizeF* QGraphicsSceneResizeEvent_NewSize(QGraphicsSceneResizeEvent* self);
void QGraphicsSceneResizeEvent_SetNewSize(QGraphicsSceneResizeEvent* self, QSizeF* size);
void QGraphicsSceneResizeEvent_Delete(QGraphicsSceneResizeEvent* self);

QGraphicsSceneMoveEvent* QGraphicsSceneMoveEvent_new();
QPointF* QGraphicsSceneMoveEvent_OldPos(QGraphicsSceneMoveEvent* self);
void QGraphicsSceneMoveEvent_SetOldPos(QGraphicsSceneMoveEvent* self, QPointF* pos);
QPointF* QGraphicsSceneMoveEvent_NewPos(QGraphicsSceneMoveEvent* self);
void QGraphicsSceneMoveEvent_SetNewPos(QGraphicsSceneMoveEvent* self, QPointF* pos);
void QGraphicsSceneMoveEvent_Delete(QGraphicsSceneMoveEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
