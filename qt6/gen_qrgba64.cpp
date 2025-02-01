#include <QRgba64>
#include <qrgba64.h>
#include "gen_qrgba64.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QRgba64* QRgba64_new() {
	return new QRgba64();
}

QRgba64* QRgba64_new2(QRgba64* param1) {
	return new QRgba64(*param1);
}

QRgba64* QRgba64_fromRgba64(unsigned long long c) {
	return new QRgba64(QRgba64::fromRgba64(static_cast<quint64>(c)));
}

QRgba64* QRgba64_fromRgba642(uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
	return new QRgba64(QRgba64::fromRgba64(static_cast<quint16>(red), static_cast<quint16>(green), static_cast<quint16>(blue), static_cast<quint16>(alpha)));
}

QRgba64* QRgba64_fromRgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	return new QRgba64(QRgba64::fromRgba(static_cast<quint8>(red), static_cast<quint8>(green), static_cast<quint8>(blue), static_cast<quint8>(alpha)));
}

QRgba64* QRgba64_fromArgb32(unsigned int rgb) {
	return new QRgba64(QRgba64::fromArgb32(static_cast<uint>(rgb)));
}

bool QRgba64_isOpaque(const QRgba64* self) {
	return self->isOpaque();
}

bool QRgba64_isTransparent(const QRgba64* self) {
	return self->isTransparent();
}

uint16_t QRgba64_red(const QRgba64* self) {
	quint16 _ret = self->red();
	return static_cast<uint16_t>(_ret);
}

uint16_t QRgba64_green(const QRgba64* self) {
	quint16 _ret = self->green();
	return static_cast<uint16_t>(_ret);
}

uint16_t QRgba64_blue(const QRgba64* self) {
	quint16 _ret = self->blue();
	return static_cast<uint16_t>(_ret);
}

uint16_t QRgba64_alpha(const QRgba64* self) {
	quint16 _ret = self->alpha();
	return static_cast<uint16_t>(_ret);
}

void QRgba64_setRed(QRgba64* self, uint16_t _red) {
	self->setRed(static_cast<quint16>(_red));
}

void QRgba64_setGreen(QRgba64* self, uint16_t _green) {
	self->setGreen(static_cast<quint16>(_green));
}

void QRgba64_setBlue(QRgba64* self, uint16_t _blue) {
	self->setBlue(static_cast<quint16>(_blue));
}

void QRgba64_setAlpha(QRgba64* self, uint16_t _alpha) {
	self->setAlpha(static_cast<quint16>(_alpha));
}

unsigned char QRgba64_red8(const QRgba64* self) {
	quint8 _ret = self->red8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_green8(const QRgba64* self) {
	quint8 _ret = self->green8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_blue8(const QRgba64* self) {
	quint8 _ret = self->blue8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_alpha8(const QRgba64* self) {
	quint8 _ret = self->alpha8();
	return static_cast<unsigned char>(_ret);
}

unsigned int QRgba64_toArgb32(const QRgba64* self) {
	uint _ret = self->toArgb32();
	return static_cast<unsigned int>(_ret);
}

uint16_t QRgba64_toRgb16(const QRgba64* self) {
	ushort _ret = self->toRgb16();
	return static_cast<uint16_t>(_ret);
}

QRgba64* QRgba64_premultiplied(const QRgba64* self) {
	return new QRgba64(self->premultiplied());
}

QRgba64* QRgba64_unpremultiplied(const QRgba64* self) {
	return new QRgba64(self->unpremultiplied());
}

unsigned long long QRgba64_ToUnsignedLongLong(const QRgba64* self) {
	quint64 _ret = self->operator unsigned long long();
	return static_cast<unsigned long long>(_ret);
}

void QRgba64_operatorAssign(QRgba64* self, unsigned long long _rgba) {
	self->operator=(static_cast<quint64>(_rgba));
}

void QRgba64_delete(QRgba64* self) {
	delete self;
}

