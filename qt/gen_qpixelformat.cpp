#include "gen_qpixelformat.h"
#include "qpixelformat.h"

#include <QPixelFormat>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPixelFormat* QPixelFormat_new() {
	return new QPixelFormat();
}

QPixelFormat* QPixelFormat_new2(QPixelFormat* param1) {
	return new QPixelFormat(*param1);
}

unsigned char QPixelFormat_ChannelCount(QPixelFormat* self) {
	return self->channelCount();
}

unsigned char QPixelFormat_RedSize(QPixelFormat* self) {
	return self->redSize();
}

unsigned char QPixelFormat_GreenSize(QPixelFormat* self) {
	return self->greenSize();
}

unsigned char QPixelFormat_BlueSize(QPixelFormat* self) {
	return self->blueSize();
}

unsigned char QPixelFormat_CyanSize(QPixelFormat* self) {
	return self->cyanSize();
}

unsigned char QPixelFormat_MagentaSize(QPixelFormat* self) {
	return self->magentaSize();
}

unsigned char QPixelFormat_YellowSize(QPixelFormat* self) {
	return self->yellowSize();
}

unsigned char QPixelFormat_BlackSize(QPixelFormat* self) {
	return self->blackSize();
}

unsigned char QPixelFormat_HueSize(QPixelFormat* self) {
	return self->hueSize();
}

unsigned char QPixelFormat_SaturationSize(QPixelFormat* self) {
	return self->saturationSize();
}

unsigned char QPixelFormat_LightnessSize(QPixelFormat* self) {
	return self->lightnessSize();
}

unsigned char QPixelFormat_BrightnessSize(QPixelFormat* self) {
	return self->brightnessSize();
}

unsigned char QPixelFormat_AlphaSize(QPixelFormat* self) {
	return self->alphaSize();
}

unsigned char QPixelFormat_BitsPerPixel(QPixelFormat* self) {
	return self->bitsPerPixel();
}

unsigned char QPixelFormat_SubEnum(QPixelFormat* self) {
	return self->subEnum();
}

void QPixelFormat_Delete(QPixelFormat* self) {
	delete self;
}

