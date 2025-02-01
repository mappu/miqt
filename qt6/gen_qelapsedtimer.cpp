#include <QElapsedTimer>
#include <qelapsedtimer.h>
#include "gen_qelapsedtimer.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QElapsedTimer* QElapsedTimer_new() {
	return new QElapsedTimer();
}

int QElapsedTimer_clockType() {
	QElapsedTimer::ClockType _ret = QElapsedTimer::clockType();
	return static_cast<int>(_ret);
}

bool QElapsedTimer_isMonotonic() {
	return QElapsedTimer::isMonotonic();
}

void QElapsedTimer_start(QElapsedTimer* self) {
	self->start();
}

long long QElapsedTimer_restart(QElapsedTimer* self) {
	qint64 _ret = self->restart();
	return static_cast<long long>(_ret);
}

void QElapsedTimer_invalidate(QElapsedTimer* self) {
	self->invalidate();
}

bool QElapsedTimer_isValid(const QElapsedTimer* self) {
	return self->isValid();
}

long long QElapsedTimer_nsecsElapsed(const QElapsedTimer* self) {
	qint64 _ret = self->nsecsElapsed();
	return static_cast<long long>(_ret);
}

long long QElapsedTimer_elapsed(const QElapsedTimer* self) {
	qint64 _ret = self->elapsed();
	return static_cast<long long>(_ret);
}

bool QElapsedTimer_hasExpired(const QElapsedTimer* self, long long timeout) {
	return self->hasExpired(static_cast<qint64>(timeout));
}

long long QElapsedTimer_msecsSinceReference(const QElapsedTimer* self) {
	qint64 _ret = self->msecsSinceReference();
	return static_cast<long long>(_ret);
}

long long QElapsedTimer_msecsTo(const QElapsedTimer* self, QElapsedTimer* other) {
	qint64 _ret = self->msecsTo(*other);
	return static_cast<long long>(_ret);
}

long long QElapsedTimer_secsTo(const QElapsedTimer* self, QElapsedTimer* other) {
	qint64 _ret = self->secsTo(*other);
	return static_cast<long long>(_ret);
}

void QElapsedTimer_delete(QElapsedTimer* self) {
	delete self;
}

