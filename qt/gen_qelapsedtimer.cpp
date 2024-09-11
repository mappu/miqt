#include <QElapsedTimer>
#include "qelapsedtimer.h"

#include "gen_qelapsedtimer.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QElapsedTimer* QElapsedTimer_new() {
	return new QElapsedTimer();
}

uintptr_t QElapsedTimer_ClockType() {
	QElapsedTimer::ClockType ret = QElapsedTimer::clockType();
	return static_cast<uintptr_t>(ret);
}

bool QElapsedTimer_IsMonotonic() {
	return QElapsedTimer::isMonotonic();
}

void QElapsedTimer_Start(QElapsedTimer* self) {
	self->start();
}

long long QElapsedTimer_Restart(QElapsedTimer* self) {
	return self->restart();
}

void QElapsedTimer_Invalidate(QElapsedTimer* self) {
	self->invalidate();
}

bool QElapsedTimer_IsValid(const QElapsedTimer* self) {
	return self->isValid();
}

long long QElapsedTimer_NsecsElapsed(const QElapsedTimer* self) {
	return self->nsecsElapsed();
}

long long QElapsedTimer_Elapsed(const QElapsedTimer* self) {
	return self->elapsed();
}

bool QElapsedTimer_HasExpired(const QElapsedTimer* self, long long timeout) {
	return self->hasExpired(static_cast<qint64>(timeout));
}

long long QElapsedTimer_MsecsSinceReference(const QElapsedTimer* self) {
	return self->msecsSinceReference();
}

long long QElapsedTimer_MsecsTo(const QElapsedTimer* self, QElapsedTimer* other) {
	return self->msecsTo(*other);
}

long long QElapsedTimer_SecsTo(const QElapsedTimer* self, QElapsedTimer* other) {
	return self->secsTo(*other);
}

bool QElapsedTimer_OperatorEqual(const QElapsedTimer* self, QElapsedTimer* other) {
	return self->operator==(*other);
}

bool QElapsedTimer_OperatorNotEqual(const QElapsedTimer* self, QElapsedTimer* other) {
	return self->operator!=(*other);
}

void QElapsedTimer_Delete(QElapsedTimer* self) {
	delete self;
}

