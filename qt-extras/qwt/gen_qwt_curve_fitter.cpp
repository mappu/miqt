#include <qwt_curve_fitter.h>
#include "gen_qwt_curve_fitter.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QwtCurveFitter_delete(QwtCurveFitter* self) {
	delete self;
}

QwtSplineCurveFitter* QwtSplineCurveFitter_new() {
	return new (std::nothrow) QwtSplineCurveFitter();
}

void QwtSplineCurveFitter_virtbase(QwtSplineCurveFitter* src, QwtCurveFitter** outptr_QwtCurveFitter) {
	*outptr_QwtCurveFitter = static_cast<QwtCurveFitter*>(src);
}

void QwtSplineCurveFitter_setFitMode(QwtSplineCurveFitter* self, int fitMode) {
	self->setFitMode(static_cast<QwtSplineCurveFitter::FitMode>(fitMode));
}

int QwtSplineCurveFitter_fitMode(const QwtSplineCurveFitter* self) {
	QwtSplineCurveFitter::FitMode _ret = self->fitMode();
	return static_cast<int>(_ret);
}

void QwtSplineCurveFitter_setSpline(QwtSplineCurveFitter* self, QwtSpline* spline) {
	self->setSpline(*spline);
}

QwtSpline* QwtSplineCurveFitter_spline(const QwtSplineCurveFitter* self) {
	const QwtSpline& _ret = self->spline();
	// Cast returned reference into pointer
	return const_cast<QwtSpline*>(&_ret);
}

QwtSpline* QwtSplineCurveFitter_spline2(QwtSplineCurveFitter* self) {
	QwtSpline& _ret = self->spline();
	// Cast returned reference into pointer
	return &_ret;
}

void QwtSplineCurveFitter_setSplineSize(QwtSplineCurveFitter* self, int splineSize) {
	self->setSplineSize(static_cast<int>(splineSize));
}

int QwtSplineCurveFitter_splineSize(const QwtSplineCurveFitter* self) {
	return self->splineSize();
}

void QwtSplineCurveFitter_delete(QwtSplineCurveFitter* self) {
	delete self;
}

QwtWeedingCurveFitter* QwtWeedingCurveFitter_new() {
	return new (std::nothrow) QwtWeedingCurveFitter();
}

QwtWeedingCurveFitter* QwtWeedingCurveFitter_new2(double tolerance) {
	return new (std::nothrow) QwtWeedingCurveFitter(static_cast<double>(tolerance));
}

void QwtWeedingCurveFitter_virtbase(QwtWeedingCurveFitter* src, QwtCurveFitter** outptr_QwtCurveFitter) {
	*outptr_QwtCurveFitter = static_cast<QwtCurveFitter*>(src);
}

void QwtWeedingCurveFitter_setTolerance(QwtWeedingCurveFitter* self, double tolerance) {
	self->setTolerance(static_cast<double>(tolerance));
}

double QwtWeedingCurveFitter_tolerance(const QwtWeedingCurveFitter* self) {
	return self->tolerance();
}

void QwtWeedingCurveFitter_setChunkSize(QwtWeedingCurveFitter* self, unsigned int chunkSize) {
	self->setChunkSize(static_cast<uint>(chunkSize));
}

unsigned int QwtWeedingCurveFitter_chunkSize(const QwtWeedingCurveFitter* self) {
	uint _ret = self->chunkSize();
	return static_cast<unsigned int>(_ret);
}

void QwtWeedingCurveFitter_delete(QwtWeedingCurveFitter* self) {
	delete self;
}

