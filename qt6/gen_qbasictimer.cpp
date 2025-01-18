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

void QBasicTimer_Swap(QBasicTimer* self, QBasicTimer* other) {
	self->swap(*other);
}

bool QBasicTimer_IsActive(const QBasicTimer* self) {
	return self->isActive();
}

int QBasicTimer_TimerId(const QBasicTimer* self) {
	return self->timerId();
}

void QBasicTimer_Start(QBasicTimer* self, int msec, QObject* obj) {
	self->start(static_cast<int>(msec), obj);
}

void QBasicTimer_Start2(QBasicTimer* self, int msec, int timerType, QObject* obj) {
	self->start(static_cast<int>(msec), static_cast<Qt::TimerType>(timerType), obj);
}

void QBasicTimer_Stop(QBasicTimer* self) {
	self->stop();
}

void QBasicTimer_Delete(QBasicTimer* self) {
	delete self;
}

