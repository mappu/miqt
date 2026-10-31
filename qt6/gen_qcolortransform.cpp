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
	return new (std::nothrow) QColorTransform();
}

QColorTransform* QColorTransform_new2(QColorTransform* colorTransform) {
	return new (std::nothrow) QColorTransform(*colorTransform);
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

struct miqt_qrgba64 QColorTransform_mapWithRgba64(const QColorTransform* self, struct miqt_qrgba64 rgba64) {
	return miqt_to_cabi<struct miqt_qrgba64>(self->map(miqt_from_cabi<QRgba64>(rgba64)));
}

struct miqt_qcolor QColorTransform_mapWithColor(const QColorTransform* self, struct miqt_qcolor color) {
	return miqt_to_cabi<struct miqt_qcolor>(self->map(miqt_from_cabi<QColor>(color)));
}

void QColorTransform_delete(QColorTransform* self) {
	delete self;
}

