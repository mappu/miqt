#include <QByteArray>
#include <QColorSpace>
#include <QColorTransform>
#include <QPointF>
#include "qcolorspace.h"

#include "gen_qcolorspace.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

uintptr_t QColorSpace_Primaries(QColorSpace* self) {
	QColorSpace::Primaries ret = const_cast<const QColorSpace*>(self)->primaries();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QColorSpace_TransferFunction(QColorSpace* self) {
	QColorSpace::TransferFunction ret = const_cast<const QColorSpace*>(self)->transferFunction();
	return static_cast<uintptr_t>(ret);
}

float QColorSpace_Gamma(QColorSpace* self) {
	return const_cast<const QColorSpace*>(self)->gamma();
}

void QColorSpace_SetTransferFunction(QColorSpace* self, uintptr_t transferFunction) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_WithTransferFunction(QColorSpace* self, uintptr_t transferFunction) {
	QColorSpace ret = const_cast<const QColorSpace*>(self)->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorSpace*>(new QColorSpace(ret));
}

void QColorSpace_SetPrimaries(QColorSpace* self, uintptr_t primariesId) {
	self->setPrimaries(static_cast<QColorSpace::Primaries>(primariesId));
}

void QColorSpace_SetPrimaries2(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint) {
	self->setPrimaries(*whitePoint, *redPoint, *greenPoint, *bluePoint);
}

bool QColorSpace_IsValid(QColorSpace* self) {
	return const_cast<const QColorSpace*>(self)->isValid();
}

QColorSpace* QColorSpace_FromIccProfile(QByteArray* iccProfile) {
	QColorSpace ret = QColorSpace::fromIccProfile(*iccProfile);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorSpace*>(new QColorSpace(ret));
}

QByteArray* QColorSpace_IccProfile(QColorSpace* self) {
	QByteArray ret = const_cast<const QColorSpace*>(self)->iccProfile();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QColorTransform* QColorSpace_TransformationToColorSpace(QColorSpace* self, QColorSpace* colorspace) {
	QColorTransform ret = const_cast<const QColorSpace*>(self)->transformationToColorSpace(*colorspace);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorTransform*>(new QColorTransform(ret));
}

void QColorSpace_SetTransferFunction2(QColorSpace* self, uintptr_t transferFunction, float gamma) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_WithTransferFunction2(QColorSpace* self, uintptr_t transferFunction, float gamma) {
	QColorSpace ret = const_cast<const QColorSpace*>(self)->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorSpace*>(new QColorSpace(ret));
}

void QColorSpace_Delete(QColorSpace* self) {
	delete self;
}

