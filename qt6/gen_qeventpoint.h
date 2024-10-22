#ifndef GEN_QEVENTPOINT_H
#define GEN_QEVENTPOINT_H

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
void QEventPoint_OperatorAssign(QEventPoint* self, QEventPoint* other);
bool QEventPoint_OperatorEqual(const QEventPoint* self, QEventPoint* other);
bool QEventPoint_OperatorNotEqual(const QEventPoint* self, QEventPoint* other);
void QEventPoint_Swap(QEventPoint* self, QEventPoint* other);
QPointF* QEventPoint_Position(const QEventPoint* self);
QPointF* QEventPoint_PressPosition(const QEventPoint* self);
QPointF* QEventPoint_GrabPosition(const QEventPoint* self);
QPointF* QEventPoint_LastPosition(const QEventPoint* self);
QPointF* QEventPoint_ScenePosition(const QEventPoint* self);
QPointF* QEventPoint_ScenePressPosition(const QEventPoint* self);
QPointF* QEventPoint_SceneGrabPosition(const QEventPoint* self);
QPointF* QEventPoint_SceneLastPosition(const QEventPoint* self);
QPointF* QEventPoint_GlobalPosition(const QEventPoint* self);
QPointF* QEventPoint_GlobalPressPosition(const QEventPoint* self);
QPointF* QEventPoint_GlobalGrabPosition(const QEventPoint* self);
QPointF* QEventPoint_GlobalLastPosition(const QEventPoint* self);
QPointF* QEventPoint_NormalizedPosition(const QEventPoint* self);
QPointF* QEventPoint_Pos(const QEventPoint* self);
QPointF* QEventPoint_StartPos(const QEventPoint* self);
QPointF* QEventPoint_ScenePos(const QEventPoint* self);
QPointF* QEventPoint_StartScenePos(const QEventPoint* self);
QPointF* QEventPoint_ScreenPos(const QEventPoint* self);
QPointF* QEventPoint_StartScreenPos(const QEventPoint* self);
QPointF* QEventPoint_StartNormalizedPos(const QEventPoint* self);
QPointF* QEventPoint_NormalizedPos(const QEventPoint* self);
QPointF* QEventPoint_LastPos(const QEventPoint* self);
QPointF* QEventPoint_LastScenePos(const QEventPoint* self);
QPointF* QEventPoint_LastScreenPos(const QEventPoint* self);
QPointF* QEventPoint_LastNormalizedPos(const QEventPoint* self);
QVector2D* QEventPoint_Velocity(const QEventPoint* self);
uint8_t QEventPoint_State(const QEventPoint* self);
QPointingDevice* QEventPoint_Device(const QEventPoint* self);
int QEventPoint_Id(const QEventPoint* self);
QPointingDeviceUniqueId* QEventPoint_UniqueId(const QEventPoint* self);
unsigned long QEventPoint_Timestamp(const QEventPoint* self);
unsigned long QEventPoint_LastTimestamp(const QEventPoint* self);
unsigned long QEventPoint_PressTimestamp(const QEventPoint* self);
double QEventPoint_TimeHeld(const QEventPoint* self);
double QEventPoint_Pressure(const QEventPoint* self);
double QEventPoint_Rotation(const QEventPoint* self);
QSizeF* QEventPoint_EllipseDiameters(const QEventPoint* self);
bool QEventPoint_IsAccepted(const QEventPoint* self);
void QEventPoint_SetAccepted(QEventPoint* self);
void QEventPoint_SetAccepted1(QEventPoint* self, bool accepted);
void QEventPoint_Delete(QEventPoint* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
