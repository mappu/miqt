#include <QVector>
#include <qwt_spline.h>
#include "gen_qwt_spline.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtSpline* QwtSpline_new() {
	return new (std::nothrow) QwtSpline();
}

QwtSpline* QwtSpline_new2(QwtSpline* param1) {
	return new (std::nothrow) QwtSpline(*param1);
}

void QwtSpline_operatorAssign(QwtSpline* self, QwtSpline* param1) {
	self->operator=(*param1);
}

void QwtSpline_setSplineType(QwtSpline* self, int splineType) {
	self->setSplineType(static_cast<QwtSpline::SplineType>(splineType));
}

int QwtSpline_splineType(const QwtSpline* self) {
	QwtSpline::SplineType _ret = self->splineType();
	return static_cast<int>(_ret);
}

void QwtSpline_reset(QwtSpline* self) {
	self->reset();
}

bool QwtSpline_isValid(const QwtSpline* self) {
	return self->isValid();
}

double QwtSpline_value(const QwtSpline* self, double x) {
	return self->value(static_cast<double>(x));
}

struct miqt_array /* of double */  QwtSpline_coefficientsA(const QwtSpline* self) {
	const QVector<double>& _ret = self->coefficientsA();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of double */  QwtSpline_coefficientsB(const QwtSpline* self) {
	const QVector<double>& _ret = self->coefficientsB();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of double */  QwtSpline_coefficientsC(const QwtSpline* self) {
	const QVector<double>& _ret = self->coefficientsC();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtSpline_delete(QwtSpline* self) {
	delete self;
}

