#include <QEvent>
#include <QGesture>
#include <QGestureRecognizer>
#include <QObject>
#include "qgesturerecognizer.h"
#include "gen_qgesturerecognizer.h"
#include "_cgo_export.h"

QGesture* QGestureRecognizer_Create(QGestureRecognizer* self, QObject* target) {
	return self->create(target);
}

int QGestureRecognizer_Recognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event) {
	QGestureRecognizer::Result _ret = self->recognize(state, watched, event);
	return static_cast<int>(_ret);
}

void QGestureRecognizer_Reset(QGestureRecognizer* self, QGesture* state) {
	self->reset(state);
}

int QGestureRecognizer_RegisterRecognizer(QGestureRecognizer* recognizer) {
	Qt::GestureType _ret = QGestureRecognizer::registerRecognizer(recognizer);
	return static_cast<int>(_ret);
}

void QGestureRecognizer_UnregisterRecognizer(int typeVal) {
	QGestureRecognizer::unregisterRecognizer(static_cast<Qt::GestureType>(typeVal));
}

void QGestureRecognizer_OperatorAssign(QGestureRecognizer* self, QGestureRecognizer* param1) {
	self->operator=(*param1);
}

void QGestureRecognizer_Delete(QGestureRecognizer* self) {
	delete self;
}

