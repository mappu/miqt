#include <QDeadlineTimer>
#include <qdeadlinetimer.h>
#include "gen_qdeadlinetimer.h"
#include "_cgo_export.h"

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

QDeadlineTimer* QDeadlineTimer_new7(long long msecs, int typeVal) {
	return new QDeadlineTimer(static_cast<qint64>(msecs), static_cast<Qt::TimerType>(typeVal));
}

void QDeadlineTimer_Swap(QDeadlineTimer* self, QDeadlineTimer* other) {
	self->swap(*other);
}

bool QDeadlineTimer_IsForever(const QDeadlineTimer* self) {
	return self->isForever();
}

bool QDeadlineTimer_HasExpired(const QDeadlineTimer* self) {
	return self->hasExpired();
}

int QDeadlineTimer_TimerType(const QDeadlineTimer* self) {
	Qt::TimerType _ret = self->timerType();
	return static_cast<int>(_ret);
}

void QDeadlineTimer_SetTimerType(QDeadlineTimer* self, int typeVal) {
	self->setTimerType(static_cast<Qt::TimerType>(typeVal));
}

long long QDeadlineTimer_RemainingTime(const QDeadlineTimer* self) {
	qint64 _ret = self->remainingTime();
	return static_cast<long long>(_ret);
}

long long QDeadlineTimer_RemainingTimeNSecs(const QDeadlineTimer* self) {
	qint64 _ret = self->remainingTimeNSecs();
	return static_cast<long long>(_ret);
}

void QDeadlineTimer_SetRemainingTime(QDeadlineTimer* self, long long msecs) {
	self->setRemainingTime(static_cast<qint64>(msecs));
}

void QDeadlineTimer_SetPreciseRemainingTime(QDeadlineTimer* self, long long secs) {
	self->setPreciseRemainingTime(static_cast<qint64>(secs));
}

long long QDeadlineTimer_Deadline(const QDeadlineTimer* self) {
	qint64 _ret = self->deadline();
	return static_cast<long long>(_ret);
}

long long QDeadlineTimer_DeadlineNSecs(const QDeadlineTimer* self) {
	qint64 _ret = self->deadlineNSecs();
	return static_cast<long long>(_ret);
}

void QDeadlineTimer_SetDeadline(QDeadlineTimer* self, long long msecs) {
	self->setDeadline(static_cast<qint64>(msecs));
}

void QDeadlineTimer_SetPreciseDeadline(QDeadlineTimer* self, long long secs) {
	self->setPreciseDeadline(static_cast<qint64>(secs));
}

QDeadlineTimer* QDeadlineTimer_AddNSecs(QDeadlineTimer* dt, long long nsecs) {
	return new QDeadlineTimer(QDeadlineTimer::addNSecs(*dt, static_cast<qint64>(nsecs)));
}

QDeadlineTimer* QDeadlineTimer_Current() {
	return new QDeadlineTimer(QDeadlineTimer::current());
}

QDeadlineTimer* QDeadlineTimer_OperatorPlusAssign(QDeadlineTimer* self, long long msecs) {
	QDeadlineTimer& _ret = self->operator+=(static_cast<qint64>(msecs));
	// Cast returned reference into pointer
	return &_ret;
}

QDeadlineTimer* QDeadlineTimer_OperatorMinusAssign(QDeadlineTimer* self, long long msecs) {
	QDeadlineTimer& _ret = self->operator-=(static_cast<qint64>(msecs));
	// Cast returned reference into pointer
	return &_ret;
}

void QDeadlineTimer_OperatorAssign(QDeadlineTimer* self, QDeadlineTimer* param1) {
	self->operator=(*param1);
}

void QDeadlineTimer_SetRemainingTime2(QDeadlineTimer* self, long long msecs, int typeVal) {
	self->setRemainingTime(static_cast<qint64>(msecs), static_cast<Qt::TimerType>(typeVal));
}

void QDeadlineTimer_SetPreciseRemainingTime2(QDeadlineTimer* self, long long secs, long long nsecs) {
	self->setPreciseRemainingTime(static_cast<qint64>(secs), static_cast<qint64>(nsecs));
}

void QDeadlineTimer_SetPreciseRemainingTime3(QDeadlineTimer* self, long long secs, long long nsecs, int typeVal) {
	self->setPreciseRemainingTime(static_cast<qint64>(secs), static_cast<qint64>(nsecs), static_cast<Qt::TimerType>(typeVal));
}

void QDeadlineTimer_SetDeadline2(QDeadlineTimer* self, long long msecs, int timerType) {
	self->setDeadline(static_cast<qint64>(msecs), static_cast<Qt::TimerType>(timerType));
}

void QDeadlineTimer_SetPreciseDeadline2(QDeadlineTimer* self, long long secs, long long nsecs) {
	self->setPreciseDeadline(static_cast<qint64>(secs), static_cast<qint64>(nsecs));
}

void QDeadlineTimer_SetPreciseDeadline3(QDeadlineTimer* self, long long secs, long long nsecs, int typeVal) {
	self->setPreciseDeadline(static_cast<qint64>(secs), static_cast<qint64>(nsecs), static_cast<Qt::TimerType>(typeVal));
}

QDeadlineTimer* QDeadlineTimer_Current1(int timerType) {
	return new QDeadlineTimer(QDeadlineTimer::current(static_cast<Qt::TimerType>(timerType)));
}

void QDeadlineTimer_Delete(QDeadlineTimer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QDeadlineTimer*>( self );
	} else {
		delete self;
	}
}

