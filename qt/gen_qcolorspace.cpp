#include <QByteArray>
#include <QColorSpace>
#include <QColorTransform>
#include <QPointF>
#include <qcolorspace.h>
#include "gen_qcolorspace.h"
#include "_cgo_export.h"

QColorSpace* QColorSpace_new() {
	return new QColorSpace();
}

QColorSpace* QColorSpace_new2(int namedColorSpace) {
	return new QColorSpace(static_cast<QColorSpace::NamedColorSpace>(namedColorSpace));
}

QColorSpace* QColorSpace_new3(int primaries, int transferFunction) {
	return new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_new4(int primaries, float gamma) {
	return new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new5(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, int transferFunction) {
	return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_new6(QColorSpace* colorSpace) {
	return new QColorSpace(*colorSpace);
}

QColorSpace* QColorSpace_new7(int primaries, int transferFunction, float gamma) {
	return new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new8(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, int transferFunction, float gamma) {
	return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

void QColorSpace_OperatorAssign(QColorSpace* self, QColorSpace* colorSpace) {
	self->operator=(*colorSpace);
}

void QColorSpace_Swap(QColorSpace* self, QColorSpace* colorSpace) {
	self->swap(*colorSpace);
}

int QColorSpace_Primaries(const QColorSpace* self) {
	QColorSpace::Primaries _ret = self->primaries();
	return static_cast<int>(_ret);
}

int QColorSpace_TransferFunction(const QColorSpace* self) {
	QColorSpace::TransferFunction _ret = self->transferFunction();
	return static_cast<int>(_ret);
}

float QColorSpace_Gamma(const QColorSpace* self) {
	return self->gamma();
}

void QColorSpace_SetTransferFunction(QColorSpace* self, int transferFunction) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_WithTransferFunction(const QColorSpace* self, int transferFunction) {
	return new QColorSpace(self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction)));
}

void QColorSpace_SetPrimaries(QColorSpace* self, int primariesId) {
	self->setPrimaries(static_cast<QColorSpace::Primaries>(primariesId));
}

void QColorSpace_SetPrimaries2(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint) {
	self->setPrimaries(*whitePoint, *redPoint, *greenPoint, *bluePoint);
}

bool QColorSpace_IsValid(const QColorSpace* self) {
	return self->isValid();
}

QColorSpace* QColorSpace_FromIccProfile(struct miqt_string iccProfile) {
	QByteArray iccProfile_QByteArray(iccProfile.data, iccProfile.len);
	return new QColorSpace(QColorSpace::fromIccProfile(iccProfile_QByteArray));
}

struct miqt_string QColorSpace_IccProfile(const QColorSpace* self) {
	QByteArray _qb = self->iccProfile();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QColorTransform* QColorSpace_TransformationToColorSpace(const QColorSpace* self, QColorSpace* colorspace) {
	return new QColorTransform(self->transformationToColorSpace(*colorspace));
}

void QColorSpace_SetTransferFunction2(QColorSpace* self, int transferFunction, float gamma) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_WithTransferFunction2(const QColorSpace* self, int transferFunction, float gamma) {
	return new QColorSpace(self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma)));
}

void QColorSpace_Delete(QColorSpace* self) {
	delete self;
}

