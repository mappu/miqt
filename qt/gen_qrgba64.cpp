#include <QRgba64>
#include "qrgba64.h"

#include "gen_qrgba64.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRgba64* QRgba64_new() {
	return new QRgba64();
}

QRgba64* QRgba64_new2(QRgba64* param1) {
	return new QRgba64(*param1);
}

QRgba64* QRgba64_FromRgba64(unsigned long long c) {
	QRgba64 ret = QRgba64::fromRgba64(static_cast<quint64>(c));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRgba64*>(new QRgba64(ret));
}

QRgba64* QRgba64_FromRgba642(uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
	QRgba64 ret = QRgba64::fromRgba64(static_cast<quint16>(red), static_cast<quint16>(green), static_cast<quint16>(blue), static_cast<quint16>(alpha));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRgba64*>(new QRgba64(ret));
}

QRgba64* QRgba64_FromRgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	QRgba64 ret = QRgba64::fromRgba(static_cast<quint8>(red), static_cast<quint8>(green), static_cast<quint8>(blue), static_cast<quint8>(alpha));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRgba64*>(new QRgba64(ret));
}

QRgba64* QRgba64_FromArgb32(unsigned int rgb) {
	QRgba64 ret = QRgba64::fromArgb32(static_cast<uint>(rgb));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRgba64*>(new QRgba64(ret));
}

bool QRgba64_IsOpaque(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->isOpaque();
}

bool QRgba64_IsTransparent(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->isTransparent();
}

uint16_t QRgba64_Red(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->red();
}

uint16_t QRgba64_Green(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->green();
}

uint16_t QRgba64_Blue(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->blue();
}

uint16_t QRgba64_Alpha(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->alpha();
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

unsigned char QRgba64_Red8(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->red8();
}

unsigned char QRgba64_Green8(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->green8();
}

unsigned char QRgba64_Blue8(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->blue8();
}

unsigned char QRgba64_Alpha8(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->alpha8();
}

unsigned int QRgba64_ToArgb32(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->toArgb32();
}

uint16_t QRgba64_ToRgb16(QRgba64* self) {
	return const_cast<const QRgba64*>(self)->toRgb16();
}

QRgba64* QRgba64_Premultiplied(QRgba64* self) {
	QRgba64 ret = const_cast<const QRgba64*>(self)->premultiplied();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRgba64*>(new QRgba64(ret));
}

QRgba64* QRgba64_Unpremultiplied(QRgba64* self) {
	QRgba64 ret = const_cast<const QRgba64*>(self)->unpremultiplied();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRgba64*>(new QRgba64(ret));
}

void QRgba64_OperatorAssign(QRgba64* self, unsigned long long _rgba) {
	self->operator=(static_cast<quint64>(_rgba));
}

void QRgba64_Delete(QRgba64* self) {
	delete self;
}

