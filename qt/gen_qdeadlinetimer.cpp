#include "gen_qdeadlinetimer.h"
#include "qdeadlinetimer.h"

#include <QDeadlineTimer>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDeadlineTimer* QDeadlineTimer_new(QDeadlineTimer* param1) {
	return new QDeadlineTimer(*param1);
}

void QDeadlineTimer_Swap(QDeadlineTimer* self, QDeadlineTimer* other) {
	self->swap(*other);
}

bool QDeadlineTimer_IsForever(QDeadlineTimer* self) {
	return self->isForever();
}

bool QDeadlineTimer_HasExpired(QDeadlineTimer* self) {
	return self->hasExpired();
}

int64_t QDeadlineTimer_RemainingTime(QDeadlineTimer* self) {
	return self->remainingTime();
}

int64_t QDeadlineTimer_RemainingTimeNSecs(QDeadlineTimer* self) {
	return self->remainingTimeNSecs();
}

int64_t QDeadlineTimer_Deadline(QDeadlineTimer* self) {
	return self->deadline();
}

int64_t QDeadlineTimer_DeadlineNSecs(QDeadlineTimer* self) {
	return self->deadlineNSecs();
}

QDeadlineTimer* QDeadlineTimer_AddNSecs(QDeadlineTimer* dt, int64_t nsecs) {
	QDeadlineTimer ret = QDeadlineTimer::addNSecs(*dt, (qint64)(nsecs));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDeadlineTimer*>(new QDeadlineTimer(ret));
}

QDeadlineTimer* QDeadlineTimer_OperatorPlusAssign(QDeadlineTimer* self, int64_t msecs) {
	QDeadlineTimer& ret = self->operator+=((qint64)(msecs));
	// Cast returned reference into pointer
	return &ret;
}

QDeadlineTimer* QDeadlineTimer_OperatorMinusAssign(QDeadlineTimer* self, int64_t msecs) {
	QDeadlineTimer& ret = self->operator-=((qint64)(msecs));
	// Cast returned reference into pointer
	return &ret;
}

void QDeadlineTimer_OperatorAssign(QDeadlineTimer* self, QDeadlineTimer* param1) {
	self->operator=(*param1);
}

void QDeadlineTimer_Delete(QDeadlineTimer* self) {
	delete self;
}

