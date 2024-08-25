#include "gen_qgesturerecognizer.h"
#include "qgesturerecognizer.h"

#include <QGesture>
#include <QGestureRecognizer>
#include <QObject>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGesture* QGestureRecognizer_Create(QGestureRecognizer* self, QObject* target) {
	return self->create(target);
}

void QGestureRecognizer_Reset(QGestureRecognizer* self, QGesture* state) {
	self->reset(state);
}

void QGestureRecognizer_OperatorAssign(QGestureRecognizer* self, QGestureRecognizer* param1) {
	self->operator=(*param1);
}

void QGestureRecognizer_Delete(QGestureRecognizer* self) {
	delete self;
}

