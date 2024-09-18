#ifndef GEN_QGRAPHICSSCENEEVENT_H
#define GEN_QGRAPHICSSCENEEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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

QGraphicsSceneEvent* QGraphicsSceneEvent_new(int typeVal);
QWidget* QGraphicsSceneEvent_Widget(const QGraphicsSceneEvent* self);
void QGraphicsSceneEvent_SetWidget(QGraphicsSceneEvent* self, QWidget* widget);
void QGraphicsSceneEvent_Delete(QGraphicsSceneEvent* self);

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new();
QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new2(int typeVal);
QPointF* QGraphicsSceneMouseEvent_Pos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetPos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_ScenePos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_ScreenPos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos);
QPointF* QGraphicsSceneMouseEvent_ButtonDownPos(const QGraphicsSceneMouseEvent* self, int button);
void QGraphicsSceneMouseEvent_SetButtonDownPos(QGraphicsSceneMouseEvent* self, int button, QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_ButtonDownScenePos(const QGraphicsSceneMouseEvent* self, int button);
void QGraphicsSceneMouseEvent_SetButtonDownScenePos(QGraphicsSceneMouseEvent* self, int button, QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_ButtonDownScreenPos(const QGraphicsSceneMouseEvent* self, int button);
void QGraphicsSceneMouseEvent_SetButtonDownScreenPos(QGraphicsSceneMouseEvent* self, int button, QPoint* pos);
QPointF* QGraphicsSceneMouseEvent_LastPos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetLastPos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_LastScenePos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetLastScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_LastScreenPos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetLastScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos);
int QGraphicsSceneMouseEvent_Buttons(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetButtons(QGraphicsSceneMouseEvent* self, int buttons);
int QGraphicsSceneMouseEvent_Button(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetButton(QGraphicsSceneMouseEvent* self, int button);
int QGraphicsSceneMouseEvent_Modifiers(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetModifiers(QGraphicsSceneMouseEvent* self, int modifiers);
int QGraphicsSceneMouseEvent_Source(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetSource(QGraphicsSceneMouseEvent* self, int source);
int QGraphicsSceneMouseEvent_Flags(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetFlags(QGraphicsSceneMouseEvent* self, int flags);
void QGraphicsSceneMouseEvent_Delete(QGraphicsSceneMouseEvent* self);

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new();
QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new2(int typeVal);
QPointF* QGraphicsSceneWheelEvent_Pos(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetPos(QGraphicsSceneWheelEvent* self, QPointF* pos);
QPointF* QGraphicsSceneWheelEvent_ScenePos(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetScenePos(QGraphicsSceneWheelEvent* self, QPointF* pos);
QPoint* QGraphicsSceneWheelEvent_ScreenPos(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetScreenPos(QGraphicsSceneWheelEvent* self, QPoint* pos);
int QGraphicsSceneWheelEvent_Buttons(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetButtons(QGraphicsSceneWheelEvent* self, int buttons);
int QGraphicsSceneWheelEvent_Modifiers(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetModifiers(QGraphicsSceneWheelEvent* self, int modifiers);
int QGraphicsSceneWheelEvent_Delta(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetDelta(QGraphicsSceneWheelEvent* self, int delta);
int QGraphicsSceneWheelEvent_Orientation(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetOrientation(QGraphicsSceneWheelEvent* self, int orientation);
void QGraphicsSceneWheelEvent_Delete(QGraphicsSceneWheelEvent* self);

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new();
QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new2(int typeVal);
QPointF* QGraphicsSceneContextMenuEvent_Pos(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetPos(QGraphicsSceneContextMenuEvent* self, QPointF* pos);
QPointF* QGraphicsSceneContextMenuEvent_ScenePos(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetScenePos(QGraphicsSceneContextMenuEvent* self, QPointF* pos);
QPoint* QGraphicsSceneContextMenuEvent_ScreenPos(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetScreenPos(QGraphicsSceneContextMenuEvent* self, QPoint* pos);
int QGraphicsSceneContextMenuEvent_Modifiers(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetModifiers(QGraphicsSceneContextMenuEvent* self, int modifiers);
int QGraphicsSceneContextMenuEvent_Reason(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetReason(QGraphicsSceneContextMenuEvent* self, int reason);
void QGraphicsSceneContextMenuEvent_Delete(QGraphicsSceneContextMenuEvent* self);

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new();
QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new2(int typeVal);
QPointF* QGraphicsSceneHoverEvent_Pos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetPos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPointF* QGraphicsSceneHoverEvent_ScenePos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPoint* QGraphicsSceneHoverEvent_ScreenPos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos);
QPointF* QGraphicsSceneHoverEvent_LastPos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetLastPos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPointF* QGraphicsSceneHoverEvent_LastScenePos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetLastScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPoint* QGraphicsSceneHoverEvent_LastScreenPos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetLastScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos);
int QGraphicsSceneHoverEvent_Modifiers(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetModifiers(QGraphicsSceneHoverEvent* self, int modifiers);
void QGraphicsSceneHoverEvent_Delete(QGraphicsSceneHoverEvent* self);

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new();
QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new2(int typeVal);
QPointF* QGraphicsSceneHelpEvent_ScenePos(const QGraphicsSceneHelpEvent* self);
void QGraphicsSceneHelpEvent_SetScenePos(QGraphicsSceneHelpEvent* self, QPointF* pos);
QPoint* QGraphicsSceneHelpEvent_ScreenPos(const QGraphicsSceneHelpEvent* self);
void QGraphicsSceneHelpEvent_SetScreenPos(QGraphicsSceneHelpEvent* self, QPoint* pos);
void QGraphicsSceneHelpEvent_Delete(QGraphicsSceneHelpEvent* self);

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new();
QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new2(int typeVal);
QPointF* QGraphicsSceneDragDropEvent_Pos(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetPos(QGraphicsSceneDragDropEvent* self, QPointF* pos);
QPointF* QGraphicsSceneDragDropEvent_ScenePos(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetScenePos(QGraphicsSceneDragDropEvent* self, QPointF* pos);
QPoint* QGraphicsSceneDragDropEvent_ScreenPos(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetScreenPos(QGraphicsSceneDragDropEvent* self, QPoint* pos);
int QGraphicsSceneDragDropEvent_Buttons(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetButtons(QGraphicsSceneDragDropEvent* self, int buttons);
int QGraphicsSceneDragDropEvent_Modifiers(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetModifiers(QGraphicsSceneDragDropEvent* self, int modifiers);
int QGraphicsSceneDragDropEvent_PossibleActions(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetPossibleActions(QGraphicsSceneDragDropEvent* self, int actions);
int QGraphicsSceneDragDropEvent_ProposedAction(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetProposedAction(QGraphicsSceneDragDropEvent* self, int action);
void QGraphicsSceneDragDropEvent_AcceptProposedAction(QGraphicsSceneDragDropEvent* self);
int QGraphicsSceneDragDropEvent_DropAction(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetDropAction(QGraphicsSceneDragDropEvent* self, int action);
QWidget* QGraphicsSceneDragDropEvent_Source(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetSource(QGraphicsSceneDragDropEvent* self, QWidget* source);
QMimeData* QGraphicsSceneDragDropEvent_MimeData(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetMimeData(QGraphicsSceneDragDropEvent* self, QMimeData* data);
void QGraphicsSceneDragDropEvent_Delete(QGraphicsSceneDragDropEvent* self);

QGraphicsSceneResizeEvent* QGraphicsSceneResizeEvent_new();
QSizeF* QGraphicsSceneResizeEvent_OldSize(const QGraphicsSceneResizeEvent* self);
void QGraphicsSceneResizeEvent_SetOldSize(QGraphicsSceneResizeEvent* self, QSizeF* size);
QSizeF* QGraphicsSceneResizeEvent_NewSize(const QGraphicsSceneResizeEvent* self);
void QGraphicsSceneResizeEvent_SetNewSize(QGraphicsSceneResizeEvent* self, QSizeF* size);
void QGraphicsSceneResizeEvent_Delete(QGraphicsSceneResizeEvent* self);

QGraphicsSceneMoveEvent* QGraphicsSceneMoveEvent_new();
QPointF* QGraphicsSceneMoveEvent_OldPos(const QGraphicsSceneMoveEvent* self);
void QGraphicsSceneMoveEvent_SetOldPos(QGraphicsSceneMoveEvent* self, QPointF* pos);
QPointF* QGraphicsSceneMoveEvent_NewPos(const QGraphicsSceneMoveEvent* self);
void QGraphicsSceneMoveEvent_SetNewPos(QGraphicsSceneMoveEvent* self, QPointF* pos);
void QGraphicsSceneMoveEvent_Delete(QGraphicsSceneMoveEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
