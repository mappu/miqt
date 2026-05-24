#include <QVector>
#include <qwt_samples.h>
#include "gen_qwt_samples.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtIntervalSample* QwtIntervalSample_new() {
	return new (std::nothrow) QwtIntervalSample();
}

QwtIntervalSample* QwtIntervalSample_new2(double param1, QwtInterval* param2) {
	return new (std::nothrow) QwtIntervalSample(static_cast<double>(param1), *param2);
}

QwtIntervalSample* QwtIntervalSample_new3(double value, double min, double max) {
	return new (std::nothrow) QwtIntervalSample(static_cast<double>(value), static_cast<double>(min), static_cast<double>(max));
}

QwtIntervalSample* QwtIntervalSample_new4(QwtIntervalSample* param1) {
	return new (std::nothrow) QwtIntervalSample(*param1);
}

bool QwtIntervalSample_operatorEqual(const QwtIntervalSample* self, QwtIntervalSample* param1) {
	return (*self == *param1);
}

bool QwtIntervalSample_operatorNotEqual(const QwtIntervalSample* self, QwtIntervalSample* param1) {
	return (*self != *param1);
}

double QwtIntervalSample_value(const QwtIntervalSample* self) {
	return self->value;
}

void QwtIntervalSample_setValue(QwtIntervalSample* self, double value) {
	self->value = static_cast<double>(value);
}

QwtInterval* QwtIntervalSample_interval(const QwtIntervalSample* self) {
	return new QwtInterval(self->interval);
}

void QwtIntervalSample_setInterval(QwtIntervalSample* self, QwtInterval* interval) {
	self->interval = *interval;
}

void QwtIntervalSample_delete(QwtIntervalSample* self) {
	delete self;
}

QwtSetSample* QwtSetSample_new() {
	return new (std::nothrow) QwtSetSample();
}

QwtSetSample* QwtSetSample_new2(double param1) {
	return new (std::nothrow) QwtSetSample(static_cast<double>(param1));
}

QwtSetSample* QwtSetSample_new3(QwtSetSample* param1) {
	return new (std::nothrow) QwtSetSample(*param1);
}

QwtSetSample* QwtSetSample_new4(double param1, struct miqt_array /* of double */  param2) {
	QVector<double> param2_QList;
	param2_QList.reserve(param2.len);
	double* param2_arr = static_cast<double*>(param2.data);
	for(size_t i = 0; i < param2.len; ++i) {
		param2_QList.push_back(static_cast<double>(param2_arr[i]));
	}
	return new (std::nothrow) QwtSetSample(static_cast<double>(param1), param2_QList);
}

bool QwtSetSample_operatorEqual(const QwtSetSample* self, QwtSetSample* other) {
	return (*self == *other);
}

bool QwtSetSample_operatorNotEqual(const QwtSetSample* self, QwtSetSample* other) {
	return (*self != *other);
}

double QwtSetSample_added(const QwtSetSample* self) {
	return self->added();
}

double QwtSetSample_value(const QwtSetSample* self) {
	return self->value;
}

void QwtSetSample_setValue(QwtSetSample* self, double value) {
	self->value = static_cast<double>(value);
}

void QwtSetSample_setSet(QwtSetSample* self, struct miqt_array /* of double */  set) {
	QVector<double> set_QList;
	set_QList.reserve(set.len);
	double* set_arr = static_cast<double*>(set.data);
	for(size_t i = 0; i < set.len; ++i) {
		set_QList.push_back(static_cast<double>(set_arr[i]));
	}
	self->set = set_QList;
}

void QwtSetSample_operatorAssign(QwtSetSample* self, QwtSetSample* param1) {
	self->operator=(*param1);
}

void QwtSetSample_delete(QwtSetSample* self) {
	delete self;
}

QwtOHLCSample* QwtOHLCSample_new() {
	return new (std::nothrow) QwtOHLCSample();
}

QwtOHLCSample* QwtOHLCSample_new2(QwtOHLCSample* param1) {
	return new (std::nothrow) QwtOHLCSample(*param1);
}

QwtOHLCSample* QwtOHLCSample_new3(double time) {
	return new (std::nothrow) QwtOHLCSample(static_cast<double>(time));
}

QwtOHLCSample* QwtOHLCSample_new4(double time, double open) {
	return new (std::nothrow) QwtOHLCSample(static_cast<double>(time), static_cast<double>(open));
}

QwtOHLCSample* QwtOHLCSample_new5(double time, double open, double high) {
	return new (std::nothrow) QwtOHLCSample(static_cast<double>(time), static_cast<double>(open), static_cast<double>(high));
}

QwtOHLCSample* QwtOHLCSample_new6(double time, double open, double high, double low) {
	return new (std::nothrow) QwtOHLCSample(static_cast<double>(time), static_cast<double>(open), static_cast<double>(high), static_cast<double>(low));
}

QwtOHLCSample* QwtOHLCSample_new7(double time, double open, double high, double low, double close) {
	return new (std::nothrow) QwtOHLCSample(static_cast<double>(time), static_cast<double>(open), static_cast<double>(high), static_cast<double>(low), static_cast<double>(close));
}

QwtInterval* QwtOHLCSample_boundingInterval(const QwtOHLCSample* self) {
	return new QwtInterval(self->boundingInterval());
}

bool QwtOHLCSample_isValid(const QwtOHLCSample* self) {
	return self->isValid();
}

double QwtOHLCSample_time(const QwtOHLCSample* self) {
	return self->time;
}

void QwtOHLCSample_setTime(QwtOHLCSample* self, double time) {
	self->time = static_cast<double>(time);
}

double QwtOHLCSample_open(const QwtOHLCSample* self) {
	return self->open;
}

void QwtOHLCSample_setOpen(QwtOHLCSample* self, double open) {
	self->open = static_cast<double>(open);
}

double QwtOHLCSample_high(const QwtOHLCSample* self) {
	return self->high;
}

void QwtOHLCSample_setHigh(QwtOHLCSample* self, double high) {
	self->high = static_cast<double>(high);
}

double QwtOHLCSample_low(const QwtOHLCSample* self) {
	return self->low;
}

void QwtOHLCSample_setLow(QwtOHLCSample* self, double low) {
	self->low = static_cast<double>(low);
}

double QwtOHLCSample_close(const QwtOHLCSample* self) {
	return self->close;
}

void QwtOHLCSample_setClose(QwtOHLCSample* self, double close) {
	self->close = static_cast<double>(close);
}

void QwtOHLCSample_delete(QwtOHLCSample* self) {
	delete self;
}

