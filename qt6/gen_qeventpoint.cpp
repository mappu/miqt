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
	return new (std::nothrow) QEventPoint();
}

QEventPoint* QEventPoint_new2(int pointId, uint8_t state, struct miqt_qpointf scenePosition, struct miqt_qpointf globalPosition) {
	return new (std::nothrow) QEventPoint(static_cast<int>(pointId), static_cast<QEventPoint::State>(state), miqt_from_cabi<QPointF>(scenePosition), miqt_from_cabi<QPointF>(globalPosition));
}

QEventPoint* QEventPoint_new3(QEventPoint* other) {
	return new (std::nothrow) QEventPoint(*other);
}

QEventPoint* QEventPoint_new4(int id) {
	return new (std::nothrow) QEventPoint(static_cast<int>(id));
}

QEventPoint* QEventPoint_new5(int id, QPointingDevice* device) {
	return new (std::nothrow) QEventPoint(static_cast<int>(id), device);
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

struct miqt_qpointf QEventPoint_position(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->position());
}

struct miqt_qpointf QEventPoint_pressPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->pressPosition());
}

struct miqt_qpointf QEventPoint_grabPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->grabPosition());
}

struct miqt_qpointf QEventPoint_lastPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->lastPosition());
}

struct miqt_qpointf QEventPoint_scenePosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->scenePosition());
}

struct miqt_qpointf QEventPoint_scenePressPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->scenePressPosition());
}

struct miqt_qpointf QEventPoint_sceneGrabPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->sceneGrabPosition());
}

struct miqt_qpointf QEventPoint_sceneLastPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->sceneLastPosition());
}

struct miqt_qpointf QEventPoint_globalPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->globalPosition());
}

struct miqt_qpointf QEventPoint_globalPressPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->globalPressPosition());
}

struct miqt_qpointf QEventPoint_globalGrabPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->globalGrabPosition());
}

struct miqt_qpointf QEventPoint_globalLastPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->globalLastPosition());
}

struct miqt_qpointf QEventPoint_normalizedPosition(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->normalizedPosition());
}

struct miqt_qpointf QEventPoint_pos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->pos());
}

struct miqt_qpointf QEventPoint_startPos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->startPos());
}

struct miqt_qpointf QEventPoint_scenePos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->scenePos());
}

struct miqt_qpointf QEventPoint_startScenePos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->startScenePos());
}

struct miqt_qpointf QEventPoint_screenPos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->screenPos());
}

struct miqt_qpointf QEventPoint_startScreenPos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->startScreenPos());
}

struct miqt_qpointf QEventPoint_startNormalizedPos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->startNormalizedPos());
}

struct miqt_qpointf QEventPoint_normalizedPos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->normalizedPos());
}

struct miqt_qpointf QEventPoint_lastPos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->lastPos());
}

struct miqt_qpointf QEventPoint_lastScenePos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->lastScenePos());
}

struct miqt_qpointf QEventPoint_lastScreenPos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->lastScreenPos());
}

struct miqt_qpointf QEventPoint_lastNormalizedPos(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->lastNormalizedPos());
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

struct miqt_qsizef QEventPoint_ellipseDiameters(const QEventPoint* self) {
	return miqt_to_cabi<struct miqt_qsizef>(self->ellipseDiameters());
}

bool QEventPoint_isAccepted(const QEventPoint* self) {
	return self->isAccepted();
}

void QEventPoint_setAccepted(QEventPoint* self) {
	self->setAccepted();
}

void QEventPoint_setAcceptedWithAccepted(QEventPoint* self, bool accepted) {
	self->setAccepted(accepted);
}

void QEventPoint_delete(QEventPoint* self) {
	delete self;
}

