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

uintptr_t QPixelFormat_ColorModel(QPixelFormat* self) {
	QPixelFormat::ColorModel ret = const_cast<const QPixelFormat*>(self)->colorModel();
	return static_cast<uintptr_t>(ret);
}

unsigned char QPixelFormat_ChannelCount(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->channelCount();
}

unsigned char QPixelFormat_RedSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->redSize();
}

unsigned char QPixelFormat_GreenSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->greenSize();
}

unsigned char QPixelFormat_BlueSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->blueSize();
}

unsigned char QPixelFormat_CyanSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->cyanSize();
}

unsigned char QPixelFormat_MagentaSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->magentaSize();
}

unsigned char QPixelFormat_YellowSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->yellowSize();
}

unsigned char QPixelFormat_BlackSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->blackSize();
}

unsigned char QPixelFormat_HueSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->hueSize();
}

unsigned char QPixelFormat_SaturationSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->saturationSize();
}

unsigned char QPixelFormat_LightnessSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->lightnessSize();
}

unsigned char QPixelFormat_BrightnessSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->brightnessSize();
}

unsigned char QPixelFormat_AlphaSize(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->alphaSize();
}

unsigned char QPixelFormat_BitsPerPixel(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->bitsPerPixel();
}

uintptr_t QPixelFormat_AlphaUsage(QPixelFormat* self) {
	QPixelFormat::AlphaUsage ret = const_cast<const QPixelFormat*>(self)->alphaUsage();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QPixelFormat_AlphaPosition(QPixelFormat* self) {
	QPixelFormat::AlphaPosition ret = const_cast<const QPixelFormat*>(self)->alphaPosition();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QPixelFormat_Premultiplied(QPixelFormat* self) {
	QPixelFormat::AlphaPremultiplied ret = const_cast<const QPixelFormat*>(self)->premultiplied();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QPixelFormat_TypeInterpretation(QPixelFormat* self) {
	QPixelFormat::TypeInterpretation ret = const_cast<const QPixelFormat*>(self)->typeInterpretation();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QPixelFormat_ByteOrder(QPixelFormat* self) {
	QPixelFormat::ByteOrder ret = const_cast<const QPixelFormat*>(self)->byteOrder();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QPixelFormat_YuvLayout(QPixelFormat* self) {
	QPixelFormat::YUVLayout ret = const_cast<const QPixelFormat*>(self)->yuvLayout();
	return static_cast<uintptr_t>(ret);
}

unsigned char QPixelFormat_SubEnum(QPixelFormat* self) {
	return const_cast<const QPixelFormat*>(self)->subEnum();
}

void QPixelFormat_Delete(QPixelFormat* self) {
	delete self;
}

