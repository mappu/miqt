#include <qwt_scale_map.h>
#include "gen_qwt_scale_map.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtScaleMap* QwtScaleMap_new() {
	return new (std::nothrow) QwtScaleMap();
}

void QwtScaleMap_setTransformation(QwtScaleMap* self, QwtTransform* transformation) {
	self->setTransformation(transformation);
}

QwtTransform* QwtScaleMap_transformation(const QwtScaleMap* self) {
	return (QwtTransform*) self->transformation();
}

void QwtScaleMap_setPaintInterval(QwtScaleMap* self, double p1, double p2) {
	self->setPaintInterval(static_cast<double>(p1), static_cast<double>(p2));
}

void QwtScaleMap_setScaleInterval(QwtScaleMap* self, double s1, double s2) {
	self->setScaleInterval(static_cast<double>(s1), static_cast<double>(s2));
}

double QwtScaleMap_transform(const QwtScaleMap* self, double s) {
	return self->transform(static_cast<double>(s));
}

double QwtScaleMap_invTransform(const QwtScaleMap* self, double p) {
	return self->invTransform(static_cast<double>(p));
}

double QwtScaleMap_p1(const QwtScaleMap* self) {
	return self->p1();
}

double QwtScaleMap_p2(const QwtScaleMap* self) {
	return self->p2();
}

double QwtScaleMap_s1(const QwtScaleMap* self) {
	return self->s1();
}

double QwtScaleMap_s2(const QwtScaleMap* self) {
	return self->s2();
}

double QwtScaleMap_pDist(const QwtScaleMap* self) {
	return self->pDist();
}

double QwtScaleMap_sDist(const QwtScaleMap* self) {
	return self->sDist();
}

bool QwtScaleMap_isInverting(const QwtScaleMap* self) {
	return self->isInverting();
}

void QwtScaleMap_delete(QwtScaleMap* self) {
	delete self;
}

