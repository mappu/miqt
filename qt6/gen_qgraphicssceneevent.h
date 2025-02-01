#pragma once
#ifndef MIQT_QT6_GEN_QGRAPHICSSCENEEVENT_H
#define MIQT_QT6_GEN_QGRAPHICSSCENEEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
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
typedef struct QEvent QEvent;
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

QGraphicsSceneEvent* QGraphicsSceneEvent_new(int type);
void QGraphicsSceneEvent_virtbase(QGraphicsSceneEvent* src, QEvent** outptr_QEvent);
QWidget* QGraphicsSceneEvent_widget(const QGraphicsSceneEvent* self);
void QGraphicsSceneEvent_setWidget(QGraphicsSceneEvent* self, QWidget* widget);
unsigned long long QGraphicsSceneEvent_timestamp(const QGraphicsSceneEvent* self);
void QGraphicsSceneEvent_setTimestamp(QGraphicsSceneEvent* self, unsigned long long ts);
bool QGraphicsSceneEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QGraphicsSceneEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QGraphicsSceneEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QGraphicsSceneEvent_virtualbase_clone(const void* self);
void QGraphicsSceneEvent_delete(QGraphicsSceneEvent* self);

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new();
QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new2(int type);
void QGraphicsSceneMouseEvent_virtbase(QGraphicsSceneMouseEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent);
QPointF* QGraphicsSceneMouseEvent_pos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setPos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_scenePos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_screenPos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos);
QPointF* QGraphicsSceneMouseEvent_buttonDownPos(const QGraphicsSceneMouseEvent* self, int button);
void QGraphicsSceneMouseEvent_setButtonDownPos(QGraphicsSceneMouseEvent* self, int button, QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_buttonDownScenePos(const QGraphicsSceneMouseEvent* self, int button);
void QGraphicsSceneMouseEvent_setButtonDownScenePos(QGraphicsSceneMouseEvent* self, int button, QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_buttonDownScreenPos(const QGraphicsSceneMouseEvent* self, int button);
void QGraphicsSceneMouseEvent_setButtonDownScreenPos(QGraphicsSceneMouseEvent* self, int button, QPoint* pos);
QPointF* QGraphicsSceneMouseEvent_lastPos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setLastPos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_lastScenePos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setLastScenePos(QGraphicsSceneMouseEvent* self, QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_lastScreenPos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setLastScreenPos(QGraphicsSceneMouseEvent* self, QPoint* pos);
int QGraphicsSceneMouseEvent_buttons(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setButtons(QGraphicsSceneMouseEvent* self, int buttons);
int QGraphicsSceneMouseEvent_button(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setButton(QGraphicsSceneMouseEvent* self, int button);
int QGraphicsSceneMouseEvent_modifiers(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setModifiers(QGraphicsSceneMouseEvent* self, int modifiers);
int QGraphicsSceneMouseEvent_source(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setSource(QGraphicsSceneMouseEvent* self, int source);
int QGraphicsSceneMouseEvent_flags(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_setFlags(QGraphicsSceneMouseEvent* self, int flags);
bool QGraphicsSceneMouseEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QGraphicsSceneMouseEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QGraphicsSceneMouseEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QGraphicsSceneMouseEvent_virtualbase_clone(const void* self);
void QGraphicsSceneMouseEvent_delete(QGraphicsSceneMouseEvent* self);

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new();
QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new2(int type);
void QGraphicsSceneWheelEvent_virtbase(QGraphicsSceneWheelEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent);
QPointF* QGraphicsSceneWheelEvent_pos(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_setPos(QGraphicsSceneWheelEvent* self, QPointF* pos);
QPointF* QGraphicsSceneWheelEvent_scenePos(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_setScenePos(QGraphicsSceneWheelEvent* self, QPointF* pos);
QPoint* QGraphicsSceneWheelEvent_screenPos(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_setScreenPos(QGraphicsSceneWheelEvent* self, QPoint* pos);
int QGraphicsSceneWheelEvent_buttons(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_setButtons(QGraphicsSceneWheelEvent* self, int buttons);
int QGraphicsSceneWheelEvent_modifiers(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_setModifiers(QGraphicsSceneWheelEvent* self, int modifiers);
int QGraphicsSceneWheelEvent_delta(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_setDelta(QGraphicsSceneWheelEvent* self, int delta);
int QGraphicsSceneWheelEvent_orientation(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_setOrientation(QGraphicsSceneWheelEvent* self, int orientation);
int QGraphicsSceneWheelEvent_phase(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_setPhase(QGraphicsSceneWheelEvent* self, int scrollPhase);
QPoint* QGraphicsSceneWheelEvent_pixelDelta(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_setPixelDelta(QGraphicsSceneWheelEvent* self, QPoint* delta);
bool QGraphicsSceneWheelEvent_isInverted(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_setInverted(QGraphicsSceneWheelEvent* self, bool inverted);
bool QGraphicsSceneWheelEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QGraphicsSceneWheelEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QGraphicsSceneWheelEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QGraphicsSceneWheelEvent_virtualbase_clone(const void* self);
void QGraphicsSceneWheelEvent_delete(QGraphicsSceneWheelEvent* self);

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new();
QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new2(int type);
void QGraphicsSceneContextMenuEvent_virtbase(QGraphicsSceneContextMenuEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent);
QPointF* QGraphicsSceneContextMenuEvent_pos(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_setPos(QGraphicsSceneContextMenuEvent* self, QPointF* pos);
QPointF* QGraphicsSceneContextMenuEvent_scenePos(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_setScenePos(QGraphicsSceneContextMenuEvent* self, QPointF* pos);
QPoint* QGraphicsSceneContextMenuEvent_screenPos(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_setScreenPos(QGraphicsSceneContextMenuEvent* self, QPoint* pos);
int QGraphicsSceneContextMenuEvent_modifiers(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_setModifiers(QGraphicsSceneContextMenuEvent* self, int modifiers);
int QGraphicsSceneContextMenuEvent_reason(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_setReason(QGraphicsSceneContextMenuEvent* self, int reason);
bool QGraphicsSceneContextMenuEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QGraphicsSceneContextMenuEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QGraphicsSceneContextMenuEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QGraphicsSceneContextMenuEvent_virtualbase_clone(const void* self);
void QGraphicsSceneContextMenuEvent_delete(QGraphicsSceneContextMenuEvent* self);

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new();
QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new2(int type);
void QGraphicsSceneHoverEvent_virtbase(QGraphicsSceneHoverEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent);
QPointF* QGraphicsSceneHoverEvent_pos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_setPos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPointF* QGraphicsSceneHoverEvent_scenePos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_setScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPoint* QGraphicsSceneHoverEvent_screenPos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_setScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos);
QPointF* QGraphicsSceneHoverEvent_lastPos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_setLastPos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPointF* QGraphicsSceneHoverEvent_lastScenePos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_setLastScenePos(QGraphicsSceneHoverEvent* self, QPointF* pos);
QPoint* QGraphicsSceneHoverEvent_lastScreenPos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_setLastScreenPos(QGraphicsSceneHoverEvent* self, QPoint* pos);
int QGraphicsSceneHoverEvent_modifiers(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_setModifiers(QGraphicsSceneHoverEvent* self, int modifiers);
bool QGraphicsSceneHoverEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QGraphicsSceneHoverEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QGraphicsSceneHoverEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QGraphicsSceneHoverEvent_virtualbase_clone(const void* self);
void QGraphicsSceneHoverEvent_delete(QGraphicsSceneHoverEvent* self);

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new();
QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new2(int type);
void QGraphicsSceneHelpEvent_virtbase(QGraphicsSceneHelpEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent);
QPointF* QGraphicsSceneHelpEvent_scenePos(const QGraphicsSceneHelpEvent* self);
void QGraphicsSceneHelpEvent_setScenePos(QGraphicsSceneHelpEvent* self, QPointF* pos);
QPoint* QGraphicsSceneHelpEvent_screenPos(const QGraphicsSceneHelpEvent* self);
void QGraphicsSceneHelpEvent_setScreenPos(QGraphicsSceneHelpEvent* self, QPoint* pos);
bool QGraphicsSceneHelpEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QGraphicsSceneHelpEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QGraphicsSceneHelpEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QGraphicsSceneHelpEvent_virtualbase_clone(const void* self);
void QGraphicsSceneHelpEvent_delete(QGraphicsSceneHelpEvent* self);

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new();
QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new2(int type);
void QGraphicsSceneDragDropEvent_virtbase(QGraphicsSceneDragDropEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent);
QPointF* QGraphicsSceneDragDropEvent_pos(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_setPos(QGraphicsSceneDragDropEvent* self, QPointF* pos);
QPointF* QGraphicsSceneDragDropEvent_scenePos(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_setScenePos(QGraphicsSceneDragDropEvent* self, QPointF* pos);
QPoint* QGraphicsSceneDragDropEvent_screenPos(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_setScreenPos(QGraphicsSceneDragDropEvent* self, QPoint* pos);
int QGraphicsSceneDragDropEvent_buttons(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_setButtons(QGraphicsSceneDragDropEvent* self, int buttons);
int QGraphicsSceneDragDropEvent_modifiers(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_setModifiers(QGraphicsSceneDragDropEvent* self, int modifiers);
int QGraphicsSceneDragDropEvent_possibleActions(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_setPossibleActions(QGraphicsSceneDragDropEvent* self, int actions);
int QGraphicsSceneDragDropEvent_proposedAction(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_setProposedAction(QGraphicsSceneDragDropEvent* self, int action);
void QGraphicsSceneDragDropEvent_acceptProposedAction(QGraphicsSceneDragDropEvent* self);
int QGraphicsSceneDragDropEvent_dropAction(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_setDropAction(QGraphicsSceneDragDropEvent* self, int action);
QWidget* QGraphicsSceneDragDropEvent_source(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_setSource(QGraphicsSceneDragDropEvent* self, QWidget* source);
QMimeData* QGraphicsSceneDragDropEvent_mimeData(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_setMimeData(QGraphicsSceneDragDropEvent* self, QMimeData* data);
bool QGraphicsSceneDragDropEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QGraphicsSceneDragDropEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QGraphicsSceneDragDropEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QGraphicsSceneDragDropEvent_virtualbase_clone(const void* self);
void QGraphicsSceneDragDropEvent_delete(QGraphicsSceneDragDropEvent* self);

QGraphicsSceneResizeEvent* QGraphicsSceneResizeEvent_new();
void QGraphicsSceneResizeEvent_virtbase(QGraphicsSceneResizeEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent);
QSizeF* QGraphicsSceneResizeEvent_oldSize(const QGraphicsSceneResizeEvent* self);
void QGraphicsSceneResizeEvent_setOldSize(QGraphicsSceneResizeEvent* self, QSizeF* size);
QSizeF* QGraphicsSceneResizeEvent_newSize(const QGraphicsSceneResizeEvent* self);
void QGraphicsSceneResizeEvent_setNewSize(QGraphicsSceneResizeEvent* self, QSizeF* size);
bool QGraphicsSceneResizeEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QGraphicsSceneResizeEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QGraphicsSceneResizeEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QGraphicsSceneResizeEvent_virtualbase_clone(const void* self);
void QGraphicsSceneResizeEvent_delete(QGraphicsSceneResizeEvent* self);

QGraphicsSceneMoveEvent* QGraphicsSceneMoveEvent_new();
void QGraphicsSceneMoveEvent_virtbase(QGraphicsSceneMoveEvent* src, QGraphicsSceneEvent** outptr_QGraphicsSceneEvent);
QPointF* QGraphicsSceneMoveEvent_oldPos(const QGraphicsSceneMoveEvent* self);
void QGraphicsSceneMoveEvent_setOldPos(QGraphicsSceneMoveEvent* self, QPointF* pos);
QPointF* QGraphicsSceneMoveEvent_newPos(const QGraphicsSceneMoveEvent* self);
void QGraphicsSceneMoveEvent_setNewPos(QGraphicsSceneMoveEvent* self, QPointF* pos);
bool QGraphicsSceneMoveEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QGraphicsSceneMoveEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QGraphicsSceneMoveEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QGraphicsSceneMoveEvent_virtualbase_clone(const void* self);
void QGraphicsSceneMoveEvent_delete(QGraphicsSceneMoveEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
