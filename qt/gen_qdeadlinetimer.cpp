#include <QDeadlineTimer>
#include "qdeadlinetimer.h"

#include "gen_qdeadlinetimer.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDeadlineTimer* QDeadlineTimer_new() {
	return new QDeadlineTimer();
}

QDeadlineTimer* QDeadlineTimer_new2(uintptr_t param1) {
	return new QDeadlineTimer(static_cast<QDeadlineTimer::ForeverConstant>(param1));
}

QDeadlineTimer* QDeadlineTimer_new3(long long msecs) {
	return new QDeadlineTimer(static_cast<qint64>(msecs));
}

QDeadlineTimer* QDeadlineTimer_new4(QDeadlineTimer* param1) {
	return new QDeadlineTimer(*param1);
}

QDeadlineTimer* QDeadlineTimer_new5(uintptr_t type_) {
	return new QDeadlineTimer(static_cast<Qt::TimerType>(type_));
}

QDeadlineTimer* QDeadlineTimer_new6(uintptr_t param1, uintptr_t type_) {
	return new QDeadlineTimer(static_cast<QDeadlineTimer::ForeverConstant>(param1), static_cast<Qt::TimerType>(type_));
}

QDeadlineTimer* QDeadlineTimer_new7(long long msecs, uintptr_t typeVal) {
	return new QDeadlineTimer(static_cast<qint64>(msecs), static_cast<Qt::TimerType>(typeVal));
}

void QDeadlineTimer_Swap(QDeadlineTimer* self, QDeadlineTimer* other) {
	self->swap(*other);
}

bool QDeadlineTimer_IsForever(QDeadlineTimer* self) {
	return const_cast<const QDeadlineTimer*>(self)->isForever();
}

bool QDeadlineTimer_HasExpired(QDeadlineTimer* self) {
	return const_cast<const QDeadlineTimer*>(self)->hasExpired();
}

uintptr_t QDeadlineTimer_TimerType(QDeadlineTimer* self) {
	Qt::TimerType ret = const_cast<const QDeadlineTimer*>(self)->timerType();
	return static_cast<uintptr_t>(ret);
}

void QDeadlineTimer_SetTimerType(QDeadlineTimer* self, uintptr_t typeVal) {
	self->setTimerType(static_cast<Qt::TimerType>(typeVal));
}

long long QDeadlineTimer_RemainingTime(QDeadlineTimer* self) {
	return const_cast<const QDeadlineTimer*>(self)->remainingTime();
}

long long QDeadlineTimer_RemainingTimeNSecs(QDeadlineTimer* self) {
	return const_cast<const QDeadlineTimer*>(self)->remainingTimeNSecs();
}

void QDeadlineTimer_SetRemainingTime(QDeadlineTimer* self, long long msecs) {
	self->setRemainingTime(static_cast<qint64>(msecs));
}

void QDeadlineTimer_SetPreciseRemainingTime(QDeadlineTimer* self, long long secs) {
	self->setPreciseRemainingTime(static_cast<qint64>(secs));
}

long long QDeadlineTimer_Deadline(QDeadlineTimer* self) {
	return const_cast<const QDeadlineTimer*>(self)->deadline();
}

long long QDeadlineTimer_DeadlineNSecs(QDeadlineTimer* self) {
	return const_cast<const QDeadlineTimer*>(self)->deadlineNSecs();
}

void QDeadlineTimer_SetDeadline(QDeadlineTimer* self, long long msecs) {
	self->setDeadline(static_cast<qint64>(msecs));
}

void QDeadlineTimer_SetPreciseDeadline(QDeadlineTimer* self, long long secs) {
	self->setPreciseDeadline(static_cast<qint64>(secs));
}

QDeadlineTimer* QDeadlineTimer_AddNSecs(QDeadlineTimer* dt, long long nsecs) {
	QDeadlineTimer ret = QDeadlineTimer::addNSecs(*dt, static_cast<qint64>(nsecs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDeadlineTimer*>(new QDeadlineTimer(ret));
}

QDeadlineTimer* QDeadlineTimer_Current() {
	QDeadlineTimer ret = QDeadlineTimer::current();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDeadlineTimer*>(new QDeadlineTimer(ret));
}

QDeadlineTimer* QDeadlineTimer_OperatorPlusAssign(QDeadlineTimer* self, long long msecs) {
	QDeadlineTimer& ret = self->operator+=(static_cast<qint64>(msecs));
	// Cast returned reference into pointer
	return &ret;
}

QDeadlineTimer* QDeadlineTimer_OperatorMinusAssign(QDeadlineTimer* self, long long msecs) {
	QDeadlineTimer& ret = self->operator-=(static_cast<qint64>(msecs));
	// Cast returned reference into pointer
	return &ret;
}

void QDeadlineTimer_OperatorAssign(QDeadlineTimer* self, QDeadlineTimer* param1) {
	self->operator=(*param1);
}

void QDeadlineTimer_SetRemainingTime2(QDeadlineTimer* self, long long msecs, uintptr_t typeVal) {
	self->setRemainingTime(static_cast<qint64>(msecs), static_cast<Qt::TimerType>(typeVal));
}

void QDeadlineTimer_SetPreciseRemainingTime2(QDeadlineTimer* self, long long secs, long long nsecs) {
	self->setPreciseRemainingTime(static_cast<qint64>(secs), static_cast<qint64>(nsecs));
}

void QDeadlineTimer_SetPreciseRemainingTime3(QDeadlineTimer* self, long long secs, long long nsecs, uintptr_t typeVal) {
	self->setPreciseRemainingTime(static_cast<qint64>(secs), static_cast<qint64>(nsecs), static_cast<Qt::TimerType>(typeVal));
}

void QDeadlineTimer_SetDeadline2(QDeadlineTimer* self, long long msecs, uintptr_t timerType) {
	self->setDeadline(static_cast<qint64>(msecs), static_cast<Qt::TimerType>(timerType));
}

void QDeadlineTimer_SetPreciseDeadline2(QDeadlineTimer* self, long long secs, long long nsecs) {
	self->setPreciseDeadline(static_cast<qint64>(secs), static_cast<qint64>(nsecs));
}

void QDeadlineTimer_SetPreciseDeadline3(QDeadlineTimer* self, long long secs, long long nsecs, uintptr_t typeVal) {
	self->setPreciseDeadline(static_cast<qint64>(secs), static_cast<qint64>(nsecs), static_cast<Qt::TimerType>(typeVal));
}

QDeadlineTimer* QDeadlineTimer_Current1(uintptr_t timerType) {
	QDeadlineTimer ret = QDeadlineTimer::current(static_cast<Qt::TimerType>(timerType));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDeadlineTimer*>(new QDeadlineTimer(ret));
}

void QDeadlineTimer_Delete(QDeadlineTimer* self) {
	delete self;
}

