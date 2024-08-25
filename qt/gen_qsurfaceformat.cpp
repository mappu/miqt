#include "gen_qsurfaceformat.h"
#include "qsurfaceformat.h"

#include <QSurfaceFormat>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSurfaceFormat* QSurfaceFormat_new() {
	return new QSurfaceFormat();
}

QSurfaceFormat* QSurfaceFormat_new2(QSurfaceFormat* other) {
	return new QSurfaceFormat(*other);
}

void QSurfaceFormat_OperatorAssign(QSurfaceFormat* self, QSurfaceFormat* other) {
	self->operator=(*other);
}

void QSurfaceFormat_SetDepthBufferSize(QSurfaceFormat* self, int size) {
	self->setDepthBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_DepthBufferSize(QSurfaceFormat* self) {
	return self->depthBufferSize();
}

void QSurfaceFormat_SetStencilBufferSize(QSurfaceFormat* self, int size) {
	self->setStencilBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_StencilBufferSize(QSurfaceFormat* self) {
	return self->stencilBufferSize();
}

void QSurfaceFormat_SetRedBufferSize(QSurfaceFormat* self, int size) {
	self->setRedBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_RedBufferSize(QSurfaceFormat* self) {
	return self->redBufferSize();
}

void QSurfaceFormat_SetGreenBufferSize(QSurfaceFormat* self, int size) {
	self->setGreenBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_GreenBufferSize(QSurfaceFormat* self) {
	return self->greenBufferSize();
}

void QSurfaceFormat_SetBlueBufferSize(QSurfaceFormat* self, int size) {
	self->setBlueBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_BlueBufferSize(QSurfaceFormat* self) {
	return self->blueBufferSize();
}

void QSurfaceFormat_SetAlphaBufferSize(QSurfaceFormat* self, int size) {
	self->setAlphaBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_AlphaBufferSize(QSurfaceFormat* self) {
	return self->alphaBufferSize();
}

void QSurfaceFormat_SetSamples(QSurfaceFormat* self, int numSamples) {
	self->setSamples(static_cast<int>(numSamples));
}

int QSurfaceFormat_Samples(QSurfaceFormat* self) {
	return self->samples();
}

bool QSurfaceFormat_HasAlpha(QSurfaceFormat* self) {
	return self->hasAlpha();
}

void QSurfaceFormat_SetMajorVersion(QSurfaceFormat* self, int majorVersion) {
	self->setMajorVersion(static_cast<int>(majorVersion));
}

int QSurfaceFormat_MajorVersion(QSurfaceFormat* self) {
	return self->majorVersion();
}

void QSurfaceFormat_SetMinorVersion(QSurfaceFormat* self, int minorVersion) {
	self->setMinorVersion(static_cast<int>(minorVersion));
}

int QSurfaceFormat_MinorVersion(QSurfaceFormat* self) {
	return self->minorVersion();
}

void QSurfaceFormat_SetVersion(QSurfaceFormat* self, int major, int minor) {
	self->setVersion(static_cast<int>(major), static_cast<int>(minor));
}

bool QSurfaceFormat_Stereo(QSurfaceFormat* self) {
	return self->stereo();
}

void QSurfaceFormat_SetStereo(QSurfaceFormat* self, bool enable) {
	self->setStereo(enable);
}

int QSurfaceFormat_SwapInterval(QSurfaceFormat* self) {
	return self->swapInterval();
}

void QSurfaceFormat_SetSwapInterval(QSurfaceFormat* self, int interval) {
	self->setSwapInterval(static_cast<int>(interval));
}

void QSurfaceFormat_SetDefaultFormat(QSurfaceFormat* format) {
	QSurfaceFormat::setDefaultFormat(*format);
}

QSurfaceFormat* QSurfaceFormat_DefaultFormat() {
	QSurfaceFormat ret = QSurfaceFormat::defaultFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSurfaceFormat*>(new QSurfaceFormat(ret));
}

void QSurfaceFormat_Delete(QSurfaceFormat* self) {
	delete self;
}

