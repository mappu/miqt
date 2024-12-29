#include <QRgba64>
#include <qrgba64.h>
#include "gen_qrgba64.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QRgba64* QRgba64_new() {
	return new QRgba64();
}

QRgba64* QRgba64_new2(QRgba64* param1) {
	return new QRgba64(*param1);
}

QRgba64* QRgba64_FromRgba64(unsigned long long c) {
	return new QRgba64(QRgba64::fromRgba64(static_cast<quint64>(c)));
}

QRgba64* QRgba64_FromRgba642(uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
	return new QRgba64(QRgba64::fromRgba64(static_cast<quint16>(red), static_cast<quint16>(green), static_cast<quint16>(blue), static_cast<quint16>(alpha)));
}

QRgba64* QRgba64_FromRgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	return new QRgba64(QRgba64::fromRgba(static_cast<quint8>(red), static_cast<quint8>(green), static_cast<quint8>(blue), static_cast<quint8>(alpha)));
}

QRgba64* QRgba64_FromArgb32(unsigned int rgb) {
	return new QRgba64(QRgba64::fromArgb32(static_cast<uint>(rgb)));
}

bool QRgba64_IsOpaque(const QRgba64* self) {
	return self->isOpaque();
}

bool QRgba64_IsTransparent(const QRgba64* self) {
	return self->isTransparent();
}

uint16_t QRgba64_Red(const QRgba64* self) {
	quint16 _ret = self->red();
	return static_cast<uint16_t>(_ret);
}

uint16_t QRgba64_Green(const QRgba64* self) {
	quint16 _ret = self->green();
	return static_cast<uint16_t>(_ret);
}

uint16_t QRgba64_Blue(const QRgba64* self) {
	quint16 _ret = self->blue();
	return static_cast<uint16_t>(_ret);
}

uint16_t QRgba64_Alpha(const QRgba64* self) {
	quint16 _ret = self->alpha();
	return static_cast<uint16_t>(_ret);
}

void QRgba64_SetRed(QRgba64* self, uint16_t _red) {
	self->setRed(static_cast<quint16>(_red));
}

void QRgba64_SetGreen(QRgba64* self, uint16_t _green) {
	self->setGreen(static_cast<quint16>(_green));
}

void QRgba64_SetBlue(QRgba64* self, uint16_t _blue) {
	self->setBlue(static_cast<quint16>(_blue));
}

void QRgba64_SetAlpha(QRgba64* self, uint16_t _alpha) {
	self->setAlpha(static_cast<quint16>(_alpha));
}

unsigned char QRgba64_Red8(const QRgba64* self) {
	quint8 _ret = self->red8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_Green8(const QRgba64* self) {
	quint8 _ret = self->green8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_Blue8(const QRgba64* self) {
	quint8 _ret = self->blue8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_Alpha8(const QRgba64* self) {
	quint8 _ret = self->alpha8();
	return static_cast<unsigned char>(_ret);
}

unsigned int QRgba64_ToArgb32(const QRgba64* self) {
	uint _ret = self->toArgb32();
	return static_cast<unsigned int>(_ret);
}

uint16_t QRgba64_ToRgb16(const QRgba64* self) {
	ushort _ret = self->toRgb16();
	return static_cast<uint16_t>(_ret);
}

QRgba64* QRgba64_Premultiplied(const QRgba64* self) {
	return new QRgba64(self->premultiplied());
}

QRgba64* QRgba64_Unpremultiplied(const QRgba64* self) {
	return new QRgba64(self->unpremultiplied());
}

void QRgba64_OperatorAssign(QRgba64* self, unsigned long long _rgba) {
	self->operator=(static_cast<quint64>(_rgba));
}

void QRgba64_Delete(QRgba64* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QRgba64*>( self );
	} else {
		delete self;
	}
}

