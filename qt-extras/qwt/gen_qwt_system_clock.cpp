#include <qwt_system_clock.h>
#include "gen_qwt_system_clock.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtSystemClock* QwtSystemClock_new() {
	return new (std::nothrow) QwtSystemClock();
}

bool QwtSystemClock_isNull(const QwtSystemClock* self) {
	return self->isNull();
}

void QwtSystemClock_start(QwtSystemClock* self) {
	self->start();
}

double QwtSystemClock_restart(QwtSystemClock* self) {
	return self->restart();
}

double QwtSystemClock_elapsed(const QwtSystemClock* self) {
	return self->elapsed();
}

void QwtSystemClock_operatorAssign(QwtSystemClock* self, QwtSystemClock* param1) {
	self->operator=(*param1);
}

void QwtSystemClock_delete(QwtSystemClock* self) {
	delete self;
}

