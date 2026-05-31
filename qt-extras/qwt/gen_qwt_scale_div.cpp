#include <QList>
#include <qwt_scale_div.h>
#include "gen_qwt_scale_div.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtScaleDiv* QwtScaleDiv_new() {
	return new (std::nothrow) QwtScaleDiv();
}

QwtScaleDiv* QwtScaleDiv_new2(QwtInterval* param1, struct miqt_array /* of double */  param2) {
	QList<double> param2_QList;
	param2_QList.reserve(param2.len);
	double* param2_arr = static_cast<double*>(param2.data);
	for(size_t i = 0; i < param2.len; ++i) {
		param2_QList.push_back(static_cast<double>(param2_arr[i]));
	}
	return new (std::nothrow) QwtScaleDiv(*param1, &param2_QList);
}

QwtScaleDiv* QwtScaleDiv_new3(double lowerBound, double upperBound, struct miqt_array /* of double */  param3) {
	QList<double> param3_QList;
	param3_QList.reserve(param3.len);
	double* param3_arr = static_cast<double*>(param3.data);
	for(size_t i = 0; i < param3.len; ++i) {
		param3_QList.push_back(static_cast<double>(param3_arr[i]));
	}
	return new (std::nothrow) QwtScaleDiv(static_cast<double>(lowerBound), static_cast<double>(upperBound), &param3_QList);
}

QwtScaleDiv* QwtScaleDiv_new4(double lowerBound, double upperBound, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks, struct miqt_array /* of double */  majorTicks) {
	QList<double> minorTicks_QList;
	minorTicks_QList.reserve(minorTicks.len);
	double* minorTicks_arr = static_cast<double*>(minorTicks.data);
	for(size_t i = 0; i < minorTicks.len; ++i) {
		minorTicks_QList.push_back(static_cast<double>(minorTicks_arr[i]));
	}
	QList<double> mediumTicks_QList;
	mediumTicks_QList.reserve(mediumTicks.len);
	double* mediumTicks_arr = static_cast<double*>(mediumTicks.data);
	for(size_t i = 0; i < mediumTicks.len; ++i) {
		mediumTicks_QList.push_back(static_cast<double>(mediumTicks_arr[i]));
	}
	QList<double> majorTicks_QList;
	majorTicks_QList.reserve(majorTicks.len);
	double* majorTicks_arr = static_cast<double*>(majorTicks.data);
	for(size_t i = 0; i < majorTicks.len; ++i) {
		majorTicks_QList.push_back(static_cast<double>(majorTicks_arr[i]));
	}
	return new (std::nothrow) QwtScaleDiv(static_cast<double>(lowerBound), static_cast<double>(upperBound), minorTicks_QList, mediumTicks_QList, majorTicks_QList);
}

QwtScaleDiv* QwtScaleDiv_new5(QwtScaleDiv* param1) {
	return new (std::nothrow) QwtScaleDiv(*param1);
}

QwtScaleDiv* QwtScaleDiv_new6(double lowerBound) {
	return new (std::nothrow) QwtScaleDiv(static_cast<double>(lowerBound));
}

QwtScaleDiv* QwtScaleDiv_new7(double lowerBound, double upperBound) {
	return new (std::nothrow) QwtScaleDiv(static_cast<double>(lowerBound), static_cast<double>(upperBound));
}

bool QwtScaleDiv_operatorEqual(const QwtScaleDiv* self, QwtScaleDiv* param1) {
	return (*self == *param1);
}

bool QwtScaleDiv_operatorNotEqual(const QwtScaleDiv* self, QwtScaleDiv* param1) {
	return (*self != *param1);
}

void QwtScaleDiv_setInterval(QwtScaleDiv* self, double lowerBound, double upperBound) {
	self->setInterval(static_cast<double>(lowerBound), static_cast<double>(upperBound));
}

void QwtScaleDiv_setIntervalWithInterval(QwtScaleDiv* self, QwtInterval* interval) {
	self->setInterval(*interval);
}

QwtInterval* QwtScaleDiv_interval(const QwtScaleDiv* self) {
	return new QwtInterval(self->interval());
}

void QwtScaleDiv_setLowerBound(QwtScaleDiv* self, double lowerBound) {
	self->setLowerBound(static_cast<double>(lowerBound));
}

double QwtScaleDiv_lowerBound(const QwtScaleDiv* self) {
	return self->lowerBound();
}

void QwtScaleDiv_setUpperBound(QwtScaleDiv* self, double upperBound) {
	self->setUpperBound(static_cast<double>(upperBound));
}

double QwtScaleDiv_upperBound(const QwtScaleDiv* self) {
	return self->upperBound();
}

double QwtScaleDiv_range(const QwtScaleDiv* self) {
	return self->range();
}

bool QwtScaleDiv_contains(const QwtScaleDiv* self, double value) {
	return self->contains(static_cast<double>(value));
}

void QwtScaleDiv_setTicks(QwtScaleDiv* self, int tickType, struct miqt_array /* of double */  param2) {
	QList<double> param2_QList;
	param2_QList.reserve(param2.len);
	double* param2_arr = static_cast<double*>(param2.data);
	for(size_t i = 0; i < param2.len; ++i) {
		param2_QList.push_back(static_cast<double>(param2_arr[i]));
	}
	self->setTicks(static_cast<int>(tickType), param2_QList);
}

struct miqt_array /* of double */  QwtScaleDiv_ticks(const QwtScaleDiv* self, int tickType) {
	QList<double> _ret = self->ticks(static_cast<int>(tickType));
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

bool QwtScaleDiv_isEmpty(const QwtScaleDiv* self) {
	return self->isEmpty();
}

bool QwtScaleDiv_isIncreasing(const QwtScaleDiv* self) {
	return self->isIncreasing();
}

void QwtScaleDiv_invert(QwtScaleDiv* self) {
	self->invert();
}

QwtScaleDiv* QwtScaleDiv_inverted(const QwtScaleDiv* self) {
	return new QwtScaleDiv(self->inverted());
}

QwtScaleDiv* QwtScaleDiv_bounded(const QwtScaleDiv* self, double lowerBound, double upperBound) {
	return new QwtScaleDiv(self->bounded(static_cast<double>(lowerBound), static_cast<double>(upperBound)));
}

void QwtScaleDiv_operatorAssign(QwtScaleDiv* self, QwtScaleDiv* param1) {
	self->operator=(*param1);
}

void QwtScaleDiv_delete(QwtScaleDiv* self) {
	delete self;
}

