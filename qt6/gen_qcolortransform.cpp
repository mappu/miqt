#include <QColor>
#include <QColorTransform>
#include <QRgba64>
#include <qcolortransform.h>
#include "gen_qcolortransform.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QColorTransform* QColorTransform_new() {
	return new QColorTransform();
}

QColorTransform* QColorTransform_new2(QColorTransform* colorTransform) {
	return new QColorTransform(*colorTransform);
}

void QColorTransform_operatorAssign(QColorTransform* self, QColorTransform* other) {
	self->operator=(*other);
}

void QColorTransform_swap(QColorTransform* self, QColorTransform* other) {
	self->swap(*other);
}

bool QColorTransform_isIdentity(const QColorTransform* self) {
	return self->isIdentity();
}

unsigned int QColorTransform_map(const QColorTransform* self, unsigned int argb) {
	QRgb _ret = self->map(static_cast<QRgb>(argb));
	return static_cast<unsigned int>(_ret);
}

QRgba64* QColorTransform_mapWithRgba64(const QColorTransform* self, QRgba64* rgba64) {
	return new QRgba64(self->map(*rgba64));
}

QColor* QColorTransform_mapWithColor(const QColorTransform* self, QColor* color) {
	return new QColor(self->map(*color));
}

void QColorTransform_delete(QColorTransform* self) {
	delete self;
}

