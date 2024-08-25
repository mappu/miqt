#include "gen_qelapsedtimer.h"
#include "qelapsedtimer.h"

#include <QElapsedTimer>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QElapsedTimer* QElapsedTimer_new() {
	return new QElapsedTimer();
}

bool QElapsedTimer_IsMonotonic() {
	return QElapsedTimer::isMonotonic();
}

void QElapsedTimer_Start(QElapsedTimer* self) {
	self->start();
}

int64_t QElapsedTimer_Restart(QElapsedTimer* self) {
	return self->restart();
}

void QElapsedTimer_Invalidate(QElapsedTimer* self) {
	self->invalidate();
}

bool QElapsedTimer_IsValid(QElapsedTimer* self) {
	return self->isValid();
}

int64_t QElapsedTimer_NsecsElapsed(QElapsedTimer* self) {
	return self->nsecsElapsed();
}

int64_t QElapsedTimer_Elapsed(QElapsedTimer* self) {
	return self->elapsed();
}

bool QElapsedTimer_HasExpired(QElapsedTimer* self, int64_t timeout) {
	return self->hasExpired((qint64)(timeout));
}

int64_t QElapsedTimer_MsecsSinceReference(QElapsedTimer* self) {
	return self->msecsSinceReference();
}

int64_t QElapsedTimer_MsecsTo(QElapsedTimer* self, QElapsedTimer* other) {
	return self->msecsTo(*other);
}

int64_t QElapsedTimer_SecsTo(QElapsedTimer* self, QElapsedTimer* other) {
	return self->secsTo(*other);
}

bool QElapsedTimer_OperatorEqual(QElapsedTimer* self, QElapsedTimer* other) {
	return self->operator==(*other);
}

bool QElapsedTimer_OperatorNotEqual(QElapsedTimer* self, QElapsedTimer* other) {
	return self->operator!=(*other);
}

void QElapsedTimer_Delete(QElapsedTimer* self) {
	delete self;
}

