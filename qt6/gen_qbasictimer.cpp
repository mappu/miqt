#include <QBasicTimer>
#include <QObject>
#include <qbasictimer.h>
#include "gen_qbasictimer.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QBasicTimer* QBasicTimer_new() {
	return new QBasicTimer();
}

void QBasicTimer_swap(QBasicTimer* self, QBasicTimer* other) {
	self->swap(*other);
}

bool QBasicTimer_isActive(const QBasicTimer* self) {
	return self->isActive();
}

int QBasicTimer_timerId(const QBasicTimer* self) {
	return self->timerId();
}

void QBasicTimer_start(QBasicTimer* self, int msec, QObject* obj) {
	self->start(static_cast<int>(msec), obj);
}

void QBasicTimer_start2(QBasicTimer* self, int msec, int timerType, QObject* obj) {
	self->start(static_cast<int>(msec), static_cast<Qt::TimerType>(timerType), obj);
}

void QBasicTimer_stop(QBasicTimer* self) {
	self->stop();
}

void QBasicTimer_delete(QBasicTimer* self) {
	delete self;
}

