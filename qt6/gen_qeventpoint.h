#pragma once
#ifndef MIQT_QT6_GEN_QEVENTPOINT_H
#define MIQT_QT6_GEN_QEVENTPOINT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEventPoint;
class QPointF;
class QPointingDevice;
class QPointingDeviceUniqueId;
class QSizeF;
class QVector2D;
#else
typedef struct QEventPoint QEventPoint;
typedef struct QPointF QPointF;
typedef struct QPointingDevice QPointingDevice;
typedef struct QPointingDeviceUniqueId QPointingDeviceUniqueId;
typedef struct QSizeF QSizeF;
typedef struct QVector2D QVector2D;
#endif

QEventPoint* QEventPoint_new();
QEventPoint* QEventPoint_new2(int pointId, uint8_t state, QPointF* scenePosition, QPointF* globalPosition);
QEventPoint* QEventPoint_new3(QEventPoint* other);
QEventPoint* QEventPoint_new4(int id);
QEventPoint* QEventPoint_new5(int id, QPointingDevice* device);
void QEventPoint_operatorAssign(QEventPoint* self, QEventPoint* other);
bool QEventPoint_operatorEqual(const QEventPoint* self, QEventPoint* other);
bool QEventPoint_operatorNotEqual(const QEventPoint* self, QEventPoint* other);
void QEventPoint_swap(QEventPoint* self, QEventPoint* other);
QPointF* QEventPoint_position(const QEventPoint* self);
QPointF* QEventPoint_pressPosition(const QEventPoint* self);
QPointF* QEventPoint_grabPosition(const QEventPoint* self);
QPointF* QEventPoint_lastPosition(const QEventPoint* self);
QPointF* QEventPoint_scenePosition(const QEventPoint* self);
QPointF* QEventPoint_scenePressPosition(const QEventPoint* self);
QPointF* QEventPoint_sceneGrabPosition(const QEventPoint* self);
QPointF* QEventPoint_sceneLastPosition(const QEventPoint* self);
QPointF* QEventPoint_globalPosition(const QEventPoint* self);
QPointF* QEventPoint_globalPressPosition(const QEventPoint* self);
QPointF* QEventPoint_globalGrabPosition(const QEventPoint* self);
QPointF* QEventPoint_globalLastPosition(const QEventPoint* self);
QPointF* QEventPoint_normalizedPosition(const QEventPoint* self);
QPointF* QEventPoint_pos(const QEventPoint* self);
QPointF* QEventPoint_startPos(const QEventPoint* self);
QPointF* QEventPoint_scenePos(const QEventPoint* self);
QPointF* QEventPoint_startScenePos(const QEventPoint* self);
QPointF* QEventPoint_screenPos(const QEventPoint* self);
QPointF* QEventPoint_startScreenPos(const QEventPoint* self);
QPointF* QEventPoint_startNormalizedPos(const QEventPoint* self);
QPointF* QEventPoint_normalizedPos(const QEventPoint* self);
QPointF* QEventPoint_lastPos(const QEventPoint* self);
QPointF* QEventPoint_lastScenePos(const QEventPoint* self);
QPointF* QEventPoint_lastScreenPos(const QEventPoint* self);
QPointF* QEventPoint_lastNormalizedPos(const QEventPoint* self);
QVector2D* QEventPoint_velocity(const QEventPoint* self);
uint8_t QEventPoint_state(const QEventPoint* self);
QPointingDevice* QEventPoint_device(const QEventPoint* self);
int QEventPoint_id(const QEventPoint* self);
QPointingDeviceUniqueId* QEventPoint_uniqueId(const QEventPoint* self);
unsigned long QEventPoint_timestamp(const QEventPoint* self);
unsigned long QEventPoint_lastTimestamp(const QEventPoint* self);
unsigned long QEventPoint_pressTimestamp(const QEventPoint* self);
double QEventPoint_timeHeld(const QEventPoint* self);
double QEventPoint_pressure(const QEventPoint* self);
double QEventPoint_rotation(const QEventPoint* self);
QSizeF* QEventPoint_ellipseDiameters(const QEventPoint* self);
bool QEventPoint_isAccepted(const QEventPoint* self);
void QEventPoint_setAccepted(QEventPoint* self);
void QEventPoint_setAcceptedWithAccepted(QEventPoint* self, bool accepted);
void QEventPoint_delete(QEventPoint* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
