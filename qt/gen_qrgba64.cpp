#include <QRgba64>
#include <qrgba64.h>
#include "gen_qrgba64.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

struct miqt_qrgba64 QRgba64_new() {
	return miqt_to_cabi<struct miqt_qrgba64>(QRgba64());
}

struct miqt_qrgba64 QRgba64_new2(struct miqt_qrgba64 param1) {
	return miqt_to_cabi<struct miqt_qrgba64>(QRgba64(miqt_from_cabi<QRgba64>(param1)));
}

struct miqt_qrgba64 QRgba64_fromRgba64(unsigned long long c) {
	return miqt_to_cabi<struct miqt_qrgba64>(QRgba64::fromRgba64(static_cast<quint64>(c)));
}

struct miqt_qrgba64 QRgba64_fromRgba642(unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha) {
	return miqt_to_cabi<struct miqt_qrgba64>(QRgba64::fromRgba64(static_cast<quint16>(red), static_cast<quint16>(green), static_cast<quint16>(blue), static_cast<quint16>(alpha)));
}

struct miqt_qrgba64 QRgba64_fromRgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	return miqt_to_cabi<struct miqt_qrgba64>(QRgba64::fromRgba(static_cast<quint8>(red), static_cast<quint8>(green), static_cast<quint8>(blue), static_cast<quint8>(alpha)));
}

struct miqt_qrgba64 QRgba64_fromArgb32(unsigned int rgb) {
	return miqt_to_cabi<struct miqt_qrgba64>(QRgba64::fromArgb32(static_cast<uint>(rgb)));
}

bool QRgba64_isOpaque(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	return self->isOpaque();
}

bool QRgba64_isTransparent(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	return self->isTransparent();
}

unsigned short QRgba64_red(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	quint16 _ret = self->red();
	return static_cast<unsigned short>(_ret);
}

unsigned short QRgba64_green(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	quint16 _ret = self->green();
	return static_cast<unsigned short>(_ret);
}

unsigned short QRgba64_blue(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	quint16 _ret = self->blue();
	return static_cast<unsigned short>(_ret);
}

unsigned short QRgba64_alpha(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	quint16 _ret = self->alpha();
	return static_cast<unsigned short>(_ret);
}

void QRgba64_setRed(QRgba64* self, unsigned short _red) {
	self->setRed(static_cast<quint16>(_red));
}

void QRgba64_setGreen(QRgba64* self, unsigned short _green) {
	self->setGreen(static_cast<quint16>(_green));
}

void QRgba64_setBlue(QRgba64* self, unsigned short _blue) {
	self->setBlue(static_cast<quint16>(_blue));
}

void QRgba64_setAlpha(QRgba64* self, unsigned short _alpha) {
	self->setAlpha(static_cast<quint16>(_alpha));
}

unsigned char QRgba64_red8(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	quint8 _ret = self->red8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_green8(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	quint8 _ret = self->green8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_blue8(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	quint8 _ret = self->blue8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_alpha8(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	quint8 _ret = self->alpha8();
	return static_cast<unsigned char>(_ret);
}

unsigned int QRgba64_toArgb32(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	uint _ret = self->toArgb32();
	return static_cast<unsigned int>(_ret);
}

unsigned short QRgba64_toRgb16(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	ushort _ret = self->toRgb16();
	return static_cast<unsigned short>(_ret);
}

struct miqt_qrgba64 QRgba64_premultiplied(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	return miqt_to_cabi<struct miqt_qrgba64>(self->premultiplied());
}

struct miqt_qrgba64 QRgba64_unpremultiplied(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	return miqt_to_cabi<struct miqt_qrgba64>(self->unpremultiplied());
}

unsigned long long QRgba64_ToUnsignedLongLong(struct miqt_qrgba64 self_cabi) {
	const QRgba64 self_val = miqt_from_cabi<QRgba64>(self_cabi);
	const QRgba64* self = &self_val;
	quint64 _ret = self->operator unsigned long long();
	return static_cast<unsigned long long>(_ret);
}

void QRgba64_operatorAssign(QRgba64* self, unsigned long long _rgba) {
	self->operator=(static_cast<quint64>(_rgba));
}

