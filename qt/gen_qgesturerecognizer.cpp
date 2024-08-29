#include <QEvent>
#include <QGesture>
#include <QGestureRecognizer>
#include <QObject>
#include "qgesturerecognizer.h"

#include "gen_qgesturerecognizer.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGesture* QGestureRecognizer_Create(QGestureRecognizer* self, QObject* target) {
	return self->create(target);
}

int QGestureRecognizer_Recognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event) {
	QGestureRecognizer::Result ret = self->recognize(state, watched, event);
	return static_cast<int>(ret);
}

void QGestureRecognizer_Reset(QGestureRecognizer* self, QGesture* state) {
	self->reset(state);
}

uintptr_t QGestureRecognizer_RegisterRecognizer(QGestureRecognizer* recognizer) {
	Qt::GestureType ret = QGestureRecognizer::registerRecognizer(recognizer);
	return static_cast<uintptr_t>(ret);
}

void QGestureRecognizer_UnregisterRecognizer(uintptr_t typeVal) {
	QGestureRecognizer::unregisterRecognizer(static_cast<Qt::GestureType>(typeVal));
}

void QGestureRecognizer_OperatorAssign(QGestureRecognizer* self, QGestureRecognizer* param1) {
	self->operator=(*param1);
}

void QGestureRecognizer_Delete(QGestureRecognizer* self) {
	delete self;
}

