#include <QPixelFormat>
#include <qpixelformat.h>
#include "gen_qpixelformat.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPixelFormat* QPixelFormat_new() {
	return new QPixelFormat();
}

QPixelFormat* QPixelFormat_new2(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation) {
	return new QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), static_cast<uchar>(firstSize), static_cast<uchar>(secondSize), static_cast<uchar>(thirdSize), static_cast<uchar>(fourthSize), static_cast<uchar>(fifthSize), static_cast<uchar>(alphaSize), static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation));
}

QPixelFormat* QPixelFormat_new3(QPixelFormat* param1) {
	return new QPixelFormat(*param1);
}

QPixelFormat* QPixelFormat_new4(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation, int byteOrder) {
	return new QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), static_cast<uchar>(firstSize), static_cast<uchar>(secondSize), static_cast<uchar>(thirdSize), static_cast<uchar>(fourthSize), static_cast<uchar>(fifthSize), static_cast<uchar>(alphaSize), static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation), static_cast<QPixelFormat::ByteOrder>(byteOrder));
}

QPixelFormat* QPixelFormat_new5(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation, int byteOrder, unsigned char subEnum) {
	return new QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), static_cast<uchar>(firstSize), static_cast<uchar>(secondSize), static_cast<uchar>(thirdSize), static_cast<uchar>(fourthSize), static_cast<uchar>(fifthSize), static_cast<uchar>(alphaSize), static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation), static_cast<QPixelFormat::ByteOrder>(byteOrder), static_cast<uchar>(subEnum));
}

int QPixelFormat_colorModel(const QPixelFormat* self) {
	QPixelFormat::ColorModel _ret = self->colorModel();
	return static_cast<int>(_ret);
}

unsigned char QPixelFormat_channelCount(const QPixelFormat* self) {
	uchar _ret = self->channelCount();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_redSize(const QPixelFormat* self) {
	uchar _ret = self->redSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_greenSize(const QPixelFormat* self) {
	uchar _ret = self->greenSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_blueSize(const QPixelFormat* self) {
	uchar _ret = self->blueSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_cyanSize(const QPixelFormat* self) {
	uchar _ret = self->cyanSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_magentaSize(const QPixelFormat* self) {
	uchar _ret = self->magentaSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_yellowSize(const QPixelFormat* self) {
	uchar _ret = self->yellowSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_blackSize(const QPixelFormat* self) {
	uchar _ret = self->blackSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_hueSize(const QPixelFormat* self) {
	uchar _ret = self->hueSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_saturationSize(const QPixelFormat* self) {
	uchar _ret = self->saturationSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_lightnessSize(const QPixelFormat* self) {
	uchar _ret = self->lightnessSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_brightnessSize(const QPixelFormat* self) {
	uchar _ret = self->brightnessSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_alphaSize(const QPixelFormat* self) {
	uchar _ret = self->alphaSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_bitsPerPixel(const QPixelFormat* self) {
	uchar _ret = self->bitsPerPixel();
	return static_cast<unsigned char>(_ret);
}

int QPixelFormat_alphaUsage(const QPixelFormat* self) {
	QPixelFormat::AlphaUsage _ret = self->alphaUsage();
	return static_cast<int>(_ret);
}

int QPixelFormat_alphaPosition(const QPixelFormat* self) {
	QPixelFormat::AlphaPosition _ret = self->alphaPosition();
	return static_cast<int>(_ret);
}

int QPixelFormat_premultiplied(const QPixelFormat* self) {
	QPixelFormat::AlphaPremultiplied _ret = self->premultiplied();
	return static_cast<int>(_ret);
}

int QPixelFormat_typeInterpretation(const QPixelFormat* self) {
	QPixelFormat::TypeInterpretation _ret = self->typeInterpretation();
	return static_cast<int>(_ret);
}

int QPixelFormat_byteOrder(const QPixelFormat* self) {
	QPixelFormat::ByteOrder _ret = self->byteOrder();
	return static_cast<int>(_ret);
}

int QPixelFormat_yuvLayout(const QPixelFormat* self) {
	QPixelFormat::YUVLayout _ret = self->yuvLayout();
	return static_cast<int>(_ret);
}

unsigned char QPixelFormat_subEnum(const QPixelFormat* self) {
	uchar _ret = self->subEnum();
	return static_cast<unsigned char>(_ret);
}

void QPixelFormat_delete(QPixelFormat* self) {
	delete self;
}

