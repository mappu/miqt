#include <QRectF>
#include <qwt_point_mapper.h>
#include "gen_qwt_point_mapper.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPointMapper* QwtPointMapper_new() {
	return new (std::nothrow) QwtPointMapper();
}

void QwtPointMapper_setFlags(QwtPointMapper* self, int flags) {
	self->setFlags(static_cast<QwtPointMapper::TransformationFlags>(flags));
}

int QwtPointMapper_flags(const QwtPointMapper* self) {
	QwtPointMapper::TransformationFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QwtPointMapper_setFlag(QwtPointMapper* self, int param1) {
	self->setFlag(static_cast<QwtPointMapper::TransformationFlag>(param1));
}

bool QwtPointMapper_testFlag(const QwtPointMapper* self, int param1) {
	return self->testFlag(static_cast<QwtPointMapper::TransformationFlag>(param1));
}

void QwtPointMapper_setBoundingRect(QwtPointMapper* self, QRectF* boundingRect) {
	self->setBoundingRect(*boundingRect);
}

QRectF* QwtPointMapper_boundingRect(const QwtPointMapper* self) {
	return new QRectF(self->boundingRect());
}

void QwtPointMapper_setFlag2(QwtPointMapper* self, int param1, bool on) {
	self->setFlag(static_cast<QwtPointMapper::TransformationFlag>(param1), on);
}

void QwtPointMapper_delete(QwtPointMapper* self) {
	delete self;
}

