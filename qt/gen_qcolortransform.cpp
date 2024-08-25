#include "gen_qcolortransform.h"
#include "qcolortransform.h"

#include <QColor>
#include <QColorTransform>
#include <QRgba64>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QColorTransform* QColorTransform_new() {
	return new QColorTransform();
}

QColorTransform* QColorTransform_new2(QColorTransform* colorTransform) {
	return new QColorTransform(*colorTransform);
}

void QColorTransform_OperatorAssign(QColorTransform* self, QColorTransform* other) {
	self->operator=(*other);
}

void QColorTransform_Swap(QColorTransform* self, QColorTransform* other) {
	self->swap(*other);
}

unsigned int QColorTransform_Map(QColorTransform* self, unsigned int argb) {
	return self->map(static_cast<QRgb>(argb));
}

QRgba64* QColorTransform_MapWithRgba64(QColorTransform* self, QRgba64* rgba64) {
	QRgba64 ret = self->map(*rgba64);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRgba64*>(new QRgba64(ret));
}

QColor* QColorTransform_MapWithColor(QColorTransform* self, QColor* color) {
	QColor ret = self->map(*color);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QColorTransform_Delete(QColorTransform* self) {
	delete self;
}

