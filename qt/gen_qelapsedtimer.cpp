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

int QElapsedTimer_ClockType() {
	QElapsedTimer::ClockType _ret = QElapsedTimer::clockType();
	return static_cast<int>(_ret);
}

bool QElapsedTimer_IsMonotonic() {
	return QElapsedTimer::isMonotonic();
}

void QElapsedTimer_Start(QElapsedTimer* self) {
	self->start();
}

long long QElapsedTimer_Restart(QElapsedTimer* self) {
	qint64 _ret = self->restart();
	return static_cast<long long>(_ret);
}

void QElapsedTimer_Invalidate(QElapsedTimer* self) {
	self->invalidate();
}

bool QElapsedTimer_IsValid(const QElapsedTimer* self) {
	return self->isValid();
}

long long QElapsedTimer_NsecsElapsed(const QElapsedTimer* self) {
	qint64 _ret = self->nsecsElapsed();
	return static_cast<long long>(_ret);
}

long long QElapsedTimer_Elapsed(const QElapsedTimer* self) {
	qint64 _ret = self->elapsed();
	return static_cast<long long>(_ret);
}

bool QElapsedTimer_HasExpired(const QElapsedTimer* self, long long timeout) {
	return self->hasExpired(static_cast<qint64>(timeout));
}

long long QElapsedTimer_MsecsSinceReference(const QElapsedTimer* self) {
	qint64 _ret = self->msecsSinceReference();
	return static_cast<long long>(_ret);
}

long long QElapsedTimer_MsecsTo(const QElapsedTimer* self, QElapsedTimer* other) {
	qint64 _ret = self->msecsTo(*other);
	return static_cast<long long>(_ret);
}

long long QElapsedTimer_SecsTo(const QElapsedTimer* self, QElapsedTimer* other) {
	qint64 _ret = self->secsTo(*other);
	return static_cast<long long>(_ret);
}

bool QElapsedTimer_OperatorEqual(const QElapsedTimer* self, QElapsedTimer* other) {
	return (*self == *other);
}

bool QElapsedTimer_OperatorNotEqual(const QElapsedTimer* self, QElapsedTimer* other) {
	return (*self != *other);
}

void QElapsedTimer_Delete(QElapsedTimer* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QElapsedTimer*>( self );
	} else {
		delete self;
	}
}

