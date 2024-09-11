#include <QPixelFormat>
#include "qpixelformat.h"

#include "gen_qpixelformat.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPixelFormat* QPixelFormat_new() {
	return new QPixelFormat();
}

QPixelFormat* QPixelFormat_new2(uintptr_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, uintptr_t alphaUsage, uintptr_t alphaPosition, uintptr_t premultiplied, uintptr_t typeInterpretation) {
	return new QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), static_cast<uchar>(firstSize), static_cast<uchar>(secondSize), static_cast<uchar>(thirdSize), static_cast<uchar>(fourthSize), static_cast<uchar>(fifthSize), static_cast<uchar>(alphaSize), static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation));
}

QPixelFormat* QPixelFormat_new3(QPixelFormat* param1) {
	return new QPixelFormat(*param1);
}

QPixelFormat* QPixelFormat_new4(uintptr_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, uintptr_t alphaUsage, uintptr_t alphaPosition, uintptr_t premultiplied, uintptr_t typeInterpretation, uintptr_t byteOrder) {
	return new QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), static_cast<uchar>(firstSize), static_cast<uchar>(secondSize), static_cast<uchar>(thirdSize), static_cast<uchar>(fourthSize), static_cast<uchar>(fifthSize), static_cast<uchar>(alphaSize), static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation), static_cast<QPixelFormat::ByteOrder>(byteOrder));
}

QPixelFormat* QPixelFormat_new5(uintptr_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, uintptr_t alphaUsage, uintptr_t alphaPosition, uintptr_t premultiplied, uintptr_t typeInterpretation, uintptr_t byteOrder, unsigned char subEnum) {
	return new QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), static_cast<uchar>(firstSize), static_cast<uchar>(secondSize), static_cast<uchar>(thirdSize), static_cast<uchar>(fourthSize), static_cast<uchar>(fifthSize), static_cast<uchar>(alphaSize), static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation), static_cast<QPixelFormat::ByteOrder>(byteOrder), static_cast<uchar>(subEnum));
}

uintptr_t QPixelFormat_ColorModel(const QPixelFormat* self) {
	QPixelFormat::ColorModel ret = self->colorModel();
	return static_cast<uintptr_t>(ret);
}

unsigned char QPixelFormat_ChannelCount(const QPixelFormat* self) {
	return self->channelCount();
}

unsigned char QPixelFormat_RedSize(const QPixelFormat* self) {
	return self->redSize();
}

unsigned char QPixelFormat_GreenSize(const QPixelFormat* self) {
	return self->greenSize();
}

unsigned char QPixelFormat_BlueSize(const QPixelFormat* self) {
	return self->blueSize();
}

unsigned char QPixelFormat_CyanSize(const QPixelFormat* self) {
	return self->cyanSize();
}

unsigned char QPixelFormat_MagentaSize(const QPixelFormat* self) {
	return self->magentaSize();
}

unsigned char QPixelFormat_YellowSize(const QPixelFormat* self) {
	return self->yellowSize();
}

unsigned char QPixelFormat_BlackSize(const QPixelFormat* self) {
	return self->blackSize();
}

unsigned char QPixelFormat_HueSize(const QPixelFormat* self) {
	return self->hueSize();
}

unsigned char QPixelFormat_SaturationSize(const QPixelFormat* self) {
	return self->saturationSize();
}

unsigned char QPixelFormat_LightnessSize(const QPixelFormat* self) {
	return self->lightnessSize();
}

unsigned char QPixelFormat_BrightnessSize(const QPixelFormat* self) {
	return self->brightnessSize();
}

unsigned char QPixelFormat_AlphaSize(const QPixelFormat* self) {
	return self->alphaSize();
}

unsigned char QPixelFormat_BitsPerPixel(const QPixelFormat* self) {
	return self->bitsPerPixel();
}

uintptr_t QPixelFormat_AlphaUsage(const QPixelFormat* self) {
	QPixelFormat::AlphaUsage ret = self->alphaUsage();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QPixelFormat_AlphaPosition(const QPixelFormat* self) {
	QPixelFormat::AlphaPosition ret = self->alphaPosition();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QPixelFormat_Premultiplied(const QPixelFormat* self) {
	QPixelFormat::AlphaPremultiplied ret = self->premultiplied();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QPixelFormat_TypeInterpretation(const QPixelFormat* self) {
	QPixelFormat::TypeInterpretation ret = self->typeInterpretation();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QPixelFormat_ByteOrder(const QPixelFormat* self) {
	QPixelFormat::ByteOrder ret = self->byteOrder();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QPixelFormat_YuvLayout(const QPixelFormat* self) {
	QPixelFormat::YUVLayout ret = self->yuvLayout();
	return static_cast<uintptr_t>(ret);
}

unsigned char QPixelFormat_SubEnum(const QPixelFormat* self) {
	return self->subEnum();
}

void QPixelFormat_Delete(QPixelFormat* self) {
	delete self;
}

