#include <QEventPoint>
#include <QPointF>
#include <QPointingDevice>
#include <QPointingDeviceUniqueId>
#include <QSizeF>
#include <QVector2D>
#include <qeventpoint.h>
#include "gen_qeventpoint.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QEventPoint* QEventPoint_new() {
	return new QEventPoint();
}

QEventPoint* QEventPoint_new2(int pointId, uint8_t state, QPointF* scenePosition, QPointF* globalPosition) {
	return new QEventPoint(static_cast<int>(pointId), static_cast<QEventPoint::State>(state), *scenePosition, *globalPosition);
}

QEventPoint* QEventPoint_new3(QEventPoint* other) {
	return new QEventPoint(*other);
}

QEventPoint* QEventPoint_new4(int id) {
	return new QEventPoint(static_cast<int>(id));
}

QEventPoint* QEventPoint_new5(int id, QPointingDevice* device) {
	return new QEventPoint(static_cast<int>(id), device);
}

void QEventPoint_operatorAssign(QEventPoint* self, QEventPoint* other) {
	self->operator=(*other);
}

bool QEventPoint_operatorEqual(const QEventPoint* self, QEventPoint* other) {
	return (*self == *other);
}

bool QEventPoint_operatorNotEqual(const QEventPoint* self, QEventPoint* other) {
	return (*self != *other);
}

void QEventPoint_swap(QEventPoint* self, QEventPoint* other) {
	self->swap(*other);
}

QPointF* QEventPoint_position(const QEventPoint* self) {
	return new QPointF(self->position());
}

QPointF* QEventPoint_pressPosition(const QEventPoint* self) {
	return new QPointF(self->pressPosition());
}

QPointF* QEventPoint_grabPosition(const QEventPoint* self) {
	return new QPointF(self->grabPosition());
}

QPointF* QEventPoint_lastPosition(const QEventPoint* self) {
	return new QPointF(self->lastPosition());
}

QPointF* QEventPoint_scenePosition(const QEventPoint* self) {
	return new QPointF(self->scenePosition());
}

QPointF* QEventPoint_scenePressPosition(const QEventPoint* self) {
	return new QPointF(self->scenePressPosition());
}

QPointF* QEventPoint_sceneGrabPosition(const QEventPoint* self) {
	return new QPointF(self->sceneGrabPosition());
}

QPointF* QEventPoint_sceneLastPosition(const QEventPoint* self) {
	return new QPointF(self->sceneLastPosition());
}

QPointF* QEventPoint_globalPosition(const QEventPoint* self) {
	return new QPointF(self->globalPosition());
}

QPointF* QEventPoint_globalPressPosition(const QEventPoint* self) {
	return new QPointF(self->globalPressPosition());
}

QPointF* QEventPoint_globalGrabPosition(const QEventPoint* self) {
	return new QPointF(self->globalGrabPosition());
}

QPointF* QEventPoint_globalLastPosition(const QEventPoint* self) {
	return new QPointF(self->globalLastPosition());
}

QPointF* QEventPoint_normalizedPosition(const QEventPoint* self) {
	return new QPointF(self->normalizedPosition());
}

QPointF* QEventPoint_pos(const QEventPoint* self) {
	return new QPointF(self->pos());
}

QPointF* QEventPoint_startPos(const QEventPoint* self) {
	return new QPointF(self->startPos());
}

QPointF* QEventPoint_scenePos(const QEventPoint* self) {
	return new QPointF(self->scenePos());
}

QPointF* QEventPoint_startScenePos(const QEventPoint* self) {
	return new QPointF(self->startScenePos());
}

QPointF* QEventPoint_screenPos(const QEventPoint* self) {
	return new QPointF(self->screenPos());
}

QPointF* QEventPoint_startScreenPos(const QEventPoint* self) {
	return new QPointF(self->startScreenPos());
}

QPointF* QEventPoint_startNormalizedPos(const QEventPoint* self) {
	return new QPointF(self->startNormalizedPos());
}

QPointF* QEventPoint_normalizedPos(const QEventPoint* self) {
	return new QPointF(self->normalizedPos());
}

QPointF* QEventPoint_lastPos(const QEventPoint* self) {
	return new QPointF(self->lastPos());
}

QPointF* QEventPoint_lastScenePos(const QEventPoint* self) {
	return new QPointF(self->lastScenePos());
}

QPointF* QEventPoint_lastScreenPos(const QEventPoint* self) {
	return new QPointF(self->lastScreenPos());
}

QPointF* QEventPoint_lastNormalizedPos(const QEventPoint* self) {
	return new QPointF(self->lastNormalizedPos());
}

QVector2D* QEventPoint_velocity(const QEventPoint* self) {
	return new QVector2D(self->velocity());
}

uint8_t QEventPoint_state(const QEventPoint* self) {
	QEventPoint::State _ret = self->state();
	return static_cast<uint8_t>(_ret);
}

QPointingDevice* QEventPoint_device(const QEventPoint* self) {
	return (QPointingDevice*) self->device();
}

int QEventPoint_id(const QEventPoint* self) {
	return self->id();
}

QPointingDeviceUniqueId* QEventPoint_uniqueId(const QEventPoint* self) {
	return new QPointingDeviceUniqueId(self->uniqueId());
}

unsigned long QEventPoint_timestamp(const QEventPoint* self) {
	ulong _ret = self->timestamp();
	return static_cast<unsigned long>(_ret);
}

unsigned long QEventPoint_lastTimestamp(const QEventPoint* self) {
	ulong _ret = self->lastTimestamp();
	return static_cast<unsigned long>(_ret);
}

unsigned long QEventPoint_pressTimestamp(const QEventPoint* self) {
	ulong _ret = self->pressTimestamp();
	return static_cast<unsigned long>(_ret);
}

double QEventPoint_timeHeld(const QEventPoint* self) {
	qreal _ret = self->timeHeld();
	return static_cast<double>(_ret);
}

double QEventPoint_pressure(const QEventPoint* self) {
	qreal _ret = self->pressure();
	return static_cast<double>(_ret);
}

double QEventPoint_rotation(const QEventPoint* self) {
	qreal _ret = self->rotation();
	return static_cast<double>(_ret);
}

QSizeF* QEventPoint_ellipseDiameters(const QEventPoint* self) {
	return new QSizeF(self->ellipseDiameters());
}

bool QEventPoint_isAccepted(const QEventPoint* self) {
	return self->isAccepted();
}

void QEventPoint_setAccepted(QEventPoint* self) {
	self->setAccepted();
}

void QEventPoint_setAccepted1(QEventPoint* self, bool accepted) {
	self->setAccepted(accepted);
}

void QEventPoint_delete(QEventPoint* self) {
	delete self;
}

