#include "gen_qcolorspace.h"
#include "qcolorspace.h"

#include <QByteArray>
#include <QColorSpace>
#include <QColorTransform>
#include <QPointF>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QColorSpace* QColorSpace_new() {
	return new QColorSpace();
}

QColorSpace* QColorSpace_new2(QColorSpace* colorSpace) {
	return new QColorSpace(*colorSpace);
}

void QColorSpace_OperatorAssign(QColorSpace* self, QColorSpace* colorSpace) {
	self->operator=(*colorSpace);
}

void QColorSpace_Swap(QColorSpace* self, QColorSpace* colorSpace) {
	self->swap(*colorSpace);
}

float QColorSpace_Gamma(QColorSpace* self) {
	return self->gamma();
}

void QColorSpace_SetPrimaries(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint) {
	self->setPrimaries(*whitePoint, *redPoint, *greenPoint, *bluePoint);
}

bool QColorSpace_IsValid(QColorSpace* self) {
	return self->isValid();
}

QColorSpace* QColorSpace_FromIccProfile(QByteArray* iccProfile) {
	QColorSpace ret = QColorSpace::fromIccProfile(*iccProfile);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorSpace*>(new QColorSpace(ret));
}

QByteArray* QColorSpace_IccProfile(QColorSpace* self) {
	QByteArray ret = self->iccProfile();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QColorTransform* QColorSpace_TransformationToColorSpace(QColorSpace* self, QColorSpace* colorspace) {
	QColorTransform ret = self->transformationToColorSpace(*colorspace);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorTransform*>(new QColorTransform(ret));
}

void QColorSpace_Delete(QColorSpace* self) {
	delete self;
}

