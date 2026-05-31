#include <QBitArray>
#include <QRect>
#include <qwt_pixel_matrix.h>
#include "gen_qwt_pixel_matrix.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPixelMatrix* QwtPixelMatrix_new(QRect* rect) {
	return new (std::nothrow) QwtPixelMatrix(*rect);
}

QwtPixelMatrix* QwtPixelMatrix_new2(QwtPixelMatrix* param1) {
	return new (std::nothrow) QwtPixelMatrix(*param1);
}

void QwtPixelMatrix_virtbase(QwtPixelMatrix* src, QBitArray** outptr_QBitArray) {
	*outptr_QBitArray = static_cast<QBitArray*>(src);
}

void QwtPixelMatrix_setRect(QwtPixelMatrix* self, QRect* rect) {
	self->setRect(*rect);
}

QRect* QwtPixelMatrix_rect(const QwtPixelMatrix* self) {
	return new QRect(self->rect());
}

bool QwtPixelMatrix_testPixel(const QwtPixelMatrix* self, int x, int y) {
	return self->testPixel(static_cast<int>(x), static_cast<int>(y));
}

bool QwtPixelMatrix_testAndSetPixel(QwtPixelMatrix* self, int x, int y, bool on) {
	return self->testAndSetPixel(static_cast<int>(x), static_cast<int>(y), on);
}

int QwtPixelMatrix_index(const QwtPixelMatrix* self, int x, int y) {
	return self->index(static_cast<int>(x), static_cast<int>(y));
}

void QwtPixelMatrix_operatorAssign(QwtPixelMatrix* self, QwtPixelMatrix* param1) {
	self->operator=(*param1);
}

void QwtPixelMatrix_delete(QwtPixelMatrix* self) {
	delete self;
}

