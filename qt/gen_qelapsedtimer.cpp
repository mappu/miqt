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

bool QElapsedTimer_IsValid(QElapsedTimer* self) {
	return const_cast<const QElapsedTimer*>(self)->isValid();
}

long long QElapsedTimer_NsecsElapsed(QElapsedTimer* self) {
	return const_cast<const QElapsedTimer*>(self)->nsecsElapsed();
}

long long QElapsedTimer_Elapsed(QElapsedTimer* self) {
	return const_cast<const QElapsedTimer*>(self)->elapsed();
}

bool QElapsedTimer_HasExpired(QElapsedTimer* self, long long timeout) {
	return const_cast<const QElapsedTimer*>(self)->hasExpired(static_cast<qint64>(timeout));
}

long long QElapsedTimer_MsecsSinceReference(QElapsedTimer* self) {
	return const_cast<const QElapsedTimer*>(self)->msecsSinceReference();
}

long long QElapsedTimer_MsecsTo(QElapsedTimer* self, QElapsedTimer* other) {
	return const_cast<const QElapsedTimer*>(self)->msecsTo(*other);
}

long long QElapsedTimer_SecsTo(QElapsedTimer* self, QElapsedTimer* other) {
	return const_cast<const QElapsedTimer*>(self)->secsTo(*other);
}

bool QElapsedTimer_OperatorEqual(QElapsedTimer* self, QElapsedTimer* other) {
	return const_cast<const QElapsedTimer*>(self)->operator==(*other);
}

bool QElapsedTimer_OperatorNotEqual(QElapsedTimer* self, QElapsedTimer* other) {
	return const_cast<const QElapsedTimer*>(self)->operator!=(*other);
}

void QElapsedTimer_Delete(QElapsedTimer* self) {
	delete self;
}

