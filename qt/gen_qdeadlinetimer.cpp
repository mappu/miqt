#include <QDeadlineTimer>
#include <qdeadlinetimer.h>
#include "gen_qdeadlinetimer.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QDeadlineTimer* QDeadlineTimer_new() {
	return new QDeadlineTimer();
}

QDeadlineTimer* QDeadlineTimer_new2(int param1) {
	return new QDeadlineTimer(static_cast<QDeadlineTimer::ForeverConstant>(param1));
}

QDeadlineTimer* QDeadlineTimer_new3(long long msecs) {
	return new QDeadlineTimer(static_cast<qint64>(msecs));
}

QDeadlineTimer* QDeadlineTimer_new4(QDeadlineTimer* param1) {
	return new QDeadlineTimer(*param1);
}

QDeadlineTimer* QDeadlineTimer_new5(int type_) {
	return new QDeadlineTimer(static_cast<Qt::TimerType>(type_));
}

QDeadlineTimer* QDeadlineTimer_new6(int param1, int type_) {
	return new QDeadlineTimer(static_cast<QDeadlineTimer::ForeverConstant>(param1), static_cast<Qt::TimerType>(type_));
}

QDeadlineTimer* QDeadlineTimer_new7(long long msecs, int type) {
	return new QDeadlineTimer(static_cast<qint64>(msecs), static_cast<Qt::TimerType>(type));
}

void QDeadlineTimer_swap(QDeadlineTimer* self, QDeadlineTimer* other) {
	self->swap(*other);
}

bool QDeadlineTimer_isForever(const QDeadlineTimer* self) {
	return self->isForever();
}

bool QDeadlineTimer_hasExpired(const QDeadlineTimer* self) {
	return self->hasExpired();
}

int QDeadlineTimer_timerType(const QDeadlineTimer* self) {
	Qt::TimerType _ret = self->timerType();
	return static_cast<int>(_ret);
}

void QDeadlineTimer_setTimerType(QDeadlineTimer* self, int type) {
	self->setTimerType(static_cast<Qt::TimerType>(type));
}

long long QDeadlineTimer_remainingTime(const QDeadlineTimer* self) {
	qint64 _ret = self->remainingTime();
	return static_cast<long long>(_ret);
}

long long QDeadlineTimer_remainingTimeNSecs(const QDeadlineTimer* self) {
	qint64 _ret = self->remainingTimeNSecs();
	return static_cast<long long>(_ret);
}

void QDeadlineTimer_setRemainingTime(QDeadlineTimer* self, long long msecs) {
	self->setRemainingTime(static_cast<qint64>(msecs));
}

void QDeadlineTimer_setPreciseRemainingTime(QDeadlineTimer* self, long long secs) {
	self->setPreciseRemainingTime(static_cast<qint64>(secs));
}

long long QDeadlineTimer_deadline(const QDeadlineTimer* self) {
	qint64 _ret = self->deadline();
	return static_cast<long long>(_ret);
}

long long QDeadlineTimer_deadlineNSecs(const QDeadlineTimer* self) {
	qint64 _ret = self->deadlineNSecs();
	return static_cast<long long>(_ret);
}

void QDeadlineTimer_setDeadline(QDeadlineTimer* self, long long msecs) {
	self->setDeadline(static_cast<qint64>(msecs));
}

void QDeadlineTimer_setPreciseDeadline(QDeadlineTimer* self, long long secs) {
	self->setPreciseDeadline(static_cast<qint64>(secs));
}

QDeadlineTimer* QDeadlineTimer_addNSecs(QDeadlineTimer* dt, long long nsecs) {
	return new QDeadlineTimer(QDeadlineTimer::addNSecs(*dt, static_cast<qint64>(nsecs)));
}

QDeadlineTimer* QDeadlineTimer_current() {
	return new QDeadlineTimer(QDeadlineTimer::current());
}

QDeadlineTimer* QDeadlineTimer_operatorPlusAssign(QDeadlineTimer* self, long long msecs) {
	QDeadlineTimer& _ret = self->operator+=(static_cast<qint64>(msecs));
	// Cast returned reference into pointer
	return &_ret;
}

QDeadlineTimer* QDeadlineTimer_operatorMinusAssign(QDeadlineTimer* self, long long msecs) {
	QDeadlineTimer& _ret = self->operator-=(static_cast<qint64>(msecs));
	// Cast returned reference into pointer
	return &_ret;
}

void QDeadlineTimer_operatorAssign(QDeadlineTimer* self, QDeadlineTimer* param1) {
	self->operator=(*param1);
}

void QDeadlineTimer_setRemainingTime2(QDeadlineTimer* self, long long msecs, int type) {
	self->setRemainingTime(static_cast<qint64>(msecs), static_cast<Qt::TimerType>(type));
}

void QDeadlineTimer_setPreciseRemainingTime2(QDeadlineTimer* self, long long secs, long long nsecs) {
	self->setPreciseRemainingTime(static_cast<qint64>(secs), static_cast<qint64>(nsecs));
}

void QDeadlineTimer_setPreciseRemainingTime3(QDeadlineTimer* self, long long secs, long long nsecs, int type) {
	self->setPreciseRemainingTime(static_cast<qint64>(secs), static_cast<qint64>(nsecs), static_cast<Qt::TimerType>(type));
}

void QDeadlineTimer_setDeadline2(QDeadlineTimer* self, long long msecs, int timerType) {
	self->setDeadline(static_cast<qint64>(msecs), static_cast<Qt::TimerType>(timerType));
}

void QDeadlineTimer_setPreciseDeadline2(QDeadlineTimer* self, long long secs, long long nsecs) {
	self->setPreciseDeadline(static_cast<qint64>(secs), static_cast<qint64>(nsecs));
}

void QDeadlineTimer_setPreciseDeadline3(QDeadlineTimer* self, long long secs, long long nsecs, int type) {
	self->setPreciseDeadline(static_cast<qint64>(secs), static_cast<qint64>(nsecs), static_cast<Qt::TimerType>(type));
}

QDeadlineTimer* QDeadlineTimer_current1(int timerType) {
	return new QDeadlineTimer(QDeadlineTimer::current(static_cast<Qt::TimerType>(timerType)));
}

void QDeadlineTimer_delete(QDeadlineTimer* self) {
	delete self;
}

