#include <QByteArray>
#include <QColorSpace>
#include <QColorTransform>
#include <QPointF>
#include "qcolorspace.h"
#include "gen_qcolorspace.h"
#include "_cgo_export.h"

QColorSpace* QColorSpace_new() {
	return new QColorSpace();
}

QColorSpace* QColorSpace_new2(uintptr_t namedColorSpace) {
	return new QColorSpace(static_cast<QColorSpace::NamedColorSpace>(namedColorSpace));
}

QColorSpace* QColorSpace_new3(uintptr_t primaries, uintptr_t transferFunction) {
	return new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_new4(uintptr_t primaries, float gamma) {
	return new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new5(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, uintptr_t transferFunction) {
	return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_new6(QColorSpace* colorSpace) {
	return new QColorSpace(*colorSpace);
}

QColorSpace* QColorSpace_new7(uintptr_t primaries, uintptr_t transferFunction, float gamma) {
	return new QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new8(QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, uintptr_t transferFunction, float gamma) {
	return new QColorSpace(*whitePoint, *redPoint, *greenPoint, *bluePoint, static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

void QColorSpace_OperatorAssign(QColorSpace* self, QColorSpace* colorSpace) {
	self->operator=(*colorSpace);
}

void QColorSpace_Swap(QColorSpace* self, QColorSpace* colorSpace) {
	self->swap(*colorSpace);
}

uintptr_t QColorSpace_Primaries(const QColorSpace* self) {
	QColorSpace::Primaries _ret = self->primaries();
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QColorSpace_TransferFunction(const QColorSpace* self) {
	QColorSpace::TransferFunction _ret = self->transferFunction();
	return static_cast<uintptr_t>(_ret);
}

float QColorSpace_Gamma(const QColorSpace* self) {
	return self->gamma();
}

void QColorSpace_SetTransferFunction(QColorSpace* self, uintptr_t transferFunction) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_WithTransferFunction(const QColorSpace* self, uintptr_t transferFunction) {
	QColorSpace _ret = self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorSpace*>(new QColorSpace(_ret));
}

void QColorSpace_SetPrimaries(QColorSpace* self, uintptr_t primariesId) {
	self->setPrimaries(static_cast<QColorSpace::Primaries>(primariesId));
}

void QColorSpace_SetPrimaries2(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint) {
	self->setPrimaries(*whitePoint, *redPoint, *greenPoint, *bluePoint);
}

bool QColorSpace_IsValid(const QColorSpace* self) {
	return self->isValid();
}

QColorSpace* QColorSpace_FromIccProfile(QByteArray* iccProfile) {
	QColorSpace _ret = QColorSpace::fromIccProfile(*iccProfile);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorSpace*>(new QColorSpace(_ret));
}

QByteArray* QColorSpace_IccProfile(const QColorSpace* self) {
	QByteArray _ret = self->iccProfile();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QColorTransform* QColorSpace_TransformationToColorSpace(const QColorSpace* self, QColorSpace* colorspace) {
	QColorTransform _ret = self->transformationToColorSpace(*colorspace);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorTransform*>(new QColorTransform(_ret));
}

void QColorSpace_SetTransferFunction2(QColorSpace* self, uintptr_t transferFunction, float gamma) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_WithTransferFunction2(const QColorSpace* self, uintptr_t transferFunction, float gamma) {
	QColorSpace _ret = self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorSpace*>(new QColorSpace(_ret));
}

void QColorSpace_Delete(QColorSpace* self) {
	delete self;
}

