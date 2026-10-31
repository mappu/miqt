#include <QByteArray>
#include <QColorSpace>
#include <QColorTransform>
#include <QPointF>
#include <QVariant>
#include <qcolorspace.h>
#include "gen_qcolorspace.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QColorSpace* QColorSpace_new() {
	return new (std::nothrow) QColorSpace();
}

QColorSpace* QColorSpace_new2(int namedColorSpace) {
	return new (std::nothrow) QColorSpace(static_cast<QColorSpace::NamedColorSpace>(namedColorSpace));
}

QColorSpace* QColorSpace_new3(int primaries, int transferFunction) {
	return new (std::nothrow) QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_new4(int primaries, float gamma) {
	return new (std::nothrow) QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new5(struct miqt_qpointf whitePoint, struct miqt_qpointf redPoint, struct miqt_qpointf greenPoint, struct miqt_qpointf bluePoint, int transferFunction) {
	return new (std::nothrow) QColorSpace(miqt_from_cabi<QPointF>(whitePoint), miqt_from_cabi<QPointF>(redPoint), miqt_from_cabi<QPointF>(greenPoint), miqt_from_cabi<QPointF>(bluePoint), static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_new6(QColorSpace* colorSpace) {
	return new (std::nothrow) QColorSpace(*colorSpace);
}

QColorSpace* QColorSpace_new7(int primaries, int transferFunction, float gamma) {
	return new (std::nothrow) QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new8(struct miqt_qpointf whitePoint, struct miqt_qpointf redPoint, struct miqt_qpointf greenPoint, struct miqt_qpointf bluePoint, int transferFunction, float gamma) {
	return new (std::nothrow) QColorSpace(miqt_from_cabi<QPointF>(whitePoint), miqt_from_cabi<QPointF>(redPoint), miqt_from_cabi<QPointF>(greenPoint), miqt_from_cabi<QPointF>(bluePoint), static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

void QColorSpace_operatorAssign(QColorSpace* self, QColorSpace* colorSpace) {
	self->operator=(*colorSpace);
}

void QColorSpace_swap(QColorSpace* self, QColorSpace* colorSpace) {
	self->swap(*colorSpace);
}

int QColorSpace_primaries(const QColorSpace* self) {
	QColorSpace::Primaries _ret = self->primaries();
	return static_cast<int>(_ret);
}

int QColorSpace_transferFunction(const QColorSpace* self) {
	QColorSpace::TransferFunction _ret = self->transferFunction();
	return static_cast<int>(_ret);
}

float QColorSpace_gamma(const QColorSpace* self) {
	return self->gamma();
}

void QColorSpace_setTransferFunction(QColorSpace* self, int transferFunction) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_withTransferFunction(const QColorSpace* self, int transferFunction) {
	return new QColorSpace(self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction)));
}

void QColorSpace_setPrimaries(QColorSpace* self, int primariesId) {
	self->setPrimaries(static_cast<QColorSpace::Primaries>(primariesId));
}

void QColorSpace_setPrimaries2(QColorSpace* self, struct miqt_qpointf whitePoint, struct miqt_qpointf redPoint, struct miqt_qpointf greenPoint, struct miqt_qpointf bluePoint) {
	self->setPrimaries(miqt_from_cabi<QPointF>(whitePoint), miqt_from_cabi<QPointF>(redPoint), miqt_from_cabi<QPointF>(greenPoint), miqt_from_cabi<QPointF>(bluePoint));
}

bool QColorSpace_isValid(const QColorSpace* self) {
	return self->isValid();
}

QColorSpace* QColorSpace_fromIccProfile(struct miqt_string iccProfile) {
	QByteArray iccProfile_QByteArray(iccProfile.data, iccProfile.len);
	return new QColorSpace(QColorSpace::fromIccProfile(iccProfile_QByteArray));
}

struct miqt_string QColorSpace_iccProfile(const QColorSpace* self) {
	QByteArray _qb = self->iccProfile();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QColorTransform* QColorSpace_transformationToColorSpace(const QColorSpace* self, QColorSpace* colorspace) {
	return new QColorTransform(self->transformationToColorSpace(*colorspace));
}

QVariant* QColorSpace_ToQVariant(const QColorSpace* self) {
	return new QVariant(self->operator QVariant());
}

void QColorSpace_setTransferFunction2(QColorSpace* self, int transferFunction, float gamma) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_withTransferFunction2(const QColorSpace* self, int transferFunction, float gamma) {
	return new QColorSpace(self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma)));
}

void QColorSpace_delete(QColorSpace* self) {
	delete self;
}

