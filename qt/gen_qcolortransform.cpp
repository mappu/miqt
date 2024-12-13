#include <QColor>
#include <QColorTransform>
#include <QRgba64>
#include <qcolortransform.h>
#include "gen_qcolortransform.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

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

unsigned int QColorTransform_Map(const QColorTransform* self, unsigned int argb) {
	QRgb _ret = self->map(static_cast<QRgb>(argb));
	return static_cast<unsigned int>(_ret);
}

QRgba64* QColorTransform_MapWithRgba64(const QColorTransform* self, QRgba64* rgba64) {
	return new QRgba64(self->map(*rgba64));
}

QColor* QColorTransform_MapWithColor(const QColorTransform* self, QColor* color) {
	return new QColor(self->map(*color));
}

void QColorTransform_Delete(QColorTransform* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QColorTransform*>( self );
	} else {
		delete self;
	}
}

