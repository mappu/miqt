#include <QSurfaceFormat>
#include "qsurfaceformat.h"
#include "gen_qsurfaceformat.h"
#include "_cgo_export.h"

QSurfaceFormat* QSurfaceFormat_new() {
	return new QSurfaceFormat();
}

QSurfaceFormat* QSurfaceFormat_new2(int options) {
	return new QSurfaceFormat(static_cast<QSurfaceFormat::FormatOptions>(options));
}

QSurfaceFormat* QSurfaceFormat_new3(QSurfaceFormat* other) {
	return new QSurfaceFormat(*other);
}

void QSurfaceFormat_OperatorAssign(QSurfaceFormat* self, QSurfaceFormat* other) {
	self->operator=(*other);
}

void QSurfaceFormat_SetDepthBufferSize(QSurfaceFormat* self, int size) {
	self->setDepthBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_DepthBufferSize(const QSurfaceFormat* self) {
	return self->depthBufferSize();
}

void QSurfaceFormat_SetStencilBufferSize(QSurfaceFormat* self, int size) {
	self->setStencilBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_StencilBufferSize(const QSurfaceFormat* self) {
	return self->stencilBufferSize();
}

void QSurfaceFormat_SetRedBufferSize(QSurfaceFormat* self, int size) {
	self->setRedBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_RedBufferSize(const QSurfaceFormat* self) {
	return self->redBufferSize();
}

void QSurfaceFormat_SetGreenBufferSize(QSurfaceFormat* self, int size) {
	self->setGreenBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_GreenBufferSize(const QSurfaceFormat* self) {
	return self->greenBufferSize();
}

void QSurfaceFormat_SetBlueBufferSize(QSurfaceFormat* self, int size) {
	self->setBlueBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_BlueBufferSize(const QSurfaceFormat* self) {
	return self->blueBufferSize();
}

void QSurfaceFormat_SetAlphaBufferSize(QSurfaceFormat* self, int size) {
	self->setAlphaBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_AlphaBufferSize(const QSurfaceFormat* self) {
	return self->alphaBufferSize();
}

void QSurfaceFormat_SetSamples(QSurfaceFormat* self, int numSamples) {
	self->setSamples(static_cast<int>(numSamples));
}

int QSurfaceFormat_Samples(const QSurfaceFormat* self) {
	return self->samples();
}

void QSurfaceFormat_SetSwapBehavior(QSurfaceFormat* self, uintptr_t behavior) {
	self->setSwapBehavior(static_cast<QSurfaceFormat::SwapBehavior>(behavior));
}

uintptr_t QSurfaceFormat_SwapBehavior(const QSurfaceFormat* self) {
	QSurfaceFormat::SwapBehavior _ret = self->swapBehavior();
	return static_cast<uintptr_t>(_ret);
}

bool QSurfaceFormat_HasAlpha(const QSurfaceFormat* self) {
	return self->hasAlpha();
}

void QSurfaceFormat_SetProfile(QSurfaceFormat* self, uintptr_t profile) {
	self->setProfile(static_cast<QSurfaceFormat::OpenGLContextProfile>(profile));
}

uintptr_t QSurfaceFormat_Profile(const QSurfaceFormat* self) {
	QSurfaceFormat::OpenGLContextProfile _ret = self->profile();
	return static_cast<uintptr_t>(_ret);
}

void QSurfaceFormat_SetRenderableType(QSurfaceFormat* self, uintptr_t typeVal) {
	self->setRenderableType(static_cast<QSurfaceFormat::RenderableType>(typeVal));
}

uintptr_t QSurfaceFormat_RenderableType(const QSurfaceFormat* self) {
	QSurfaceFormat::RenderableType _ret = self->renderableType();
	return static_cast<uintptr_t>(_ret);
}

void QSurfaceFormat_SetMajorVersion(QSurfaceFormat* self, int majorVersion) {
	self->setMajorVersion(static_cast<int>(majorVersion));
}

int QSurfaceFormat_MajorVersion(const QSurfaceFormat* self) {
	return self->majorVersion();
}

void QSurfaceFormat_SetMinorVersion(QSurfaceFormat* self, int minorVersion) {
	self->setMinorVersion(static_cast<int>(minorVersion));
}

int QSurfaceFormat_MinorVersion(const QSurfaceFormat* self) {
	return self->minorVersion();
}

void QSurfaceFormat_SetVersion(QSurfaceFormat* self, int major, int minor) {
	self->setVersion(static_cast<int>(major), static_cast<int>(minor));
}

bool QSurfaceFormat_Stereo(const QSurfaceFormat* self) {
	return self->stereo();
}

void QSurfaceFormat_SetStereo(QSurfaceFormat* self, bool enable) {
	self->setStereo(enable);
}

void QSurfaceFormat_SetOption(QSurfaceFormat* self, int opt) {
	self->setOption(static_cast<QSurfaceFormat::FormatOptions>(opt));
}

bool QSurfaceFormat_TestOption(const QSurfaceFormat* self, int opt) {
	return self->testOption(static_cast<QSurfaceFormat::FormatOptions>(opt));
}

void QSurfaceFormat_SetOptions(QSurfaceFormat* self, int options) {
	self->setOptions(static_cast<QSurfaceFormat::FormatOptions>(options));
}

void QSurfaceFormat_SetOptionWithOption(QSurfaceFormat* self, uintptr_t option) {
	self->setOption(static_cast<QSurfaceFormat::FormatOption>(option));
}

bool QSurfaceFormat_TestOptionWithOption(const QSurfaceFormat* self, uintptr_t option) {
	return self->testOption(static_cast<QSurfaceFormat::FormatOption>(option));
}

int QSurfaceFormat_Options(const QSurfaceFormat* self) {
	QSurfaceFormat::FormatOptions _ret = self->options();
	return static_cast<int>(_ret);
}

int QSurfaceFormat_SwapInterval(const QSurfaceFormat* self) {
	return self->swapInterval();
}

void QSurfaceFormat_SetSwapInterval(QSurfaceFormat* self, int interval) {
	self->setSwapInterval(static_cast<int>(interval));
}

uintptr_t QSurfaceFormat_ColorSpace(const QSurfaceFormat* self) {
	QSurfaceFormat::ColorSpace _ret = self->colorSpace();
	return static_cast<uintptr_t>(_ret);
}

void QSurfaceFormat_SetColorSpace(QSurfaceFormat* self, uintptr_t colorSpace) {
	self->setColorSpace(static_cast<QSurfaceFormat::ColorSpace>(colorSpace));
}

void QSurfaceFormat_SetDefaultFormat(QSurfaceFormat* format) {
	QSurfaceFormat::setDefaultFormat(*format);
}

QSurfaceFormat* QSurfaceFormat_DefaultFormat() {
	return new QSurfaceFormat(QSurfaceFormat::defaultFormat());
}

void QSurfaceFormat_SetOption2(QSurfaceFormat* self, uintptr_t option, bool on) {
	self->setOption(static_cast<QSurfaceFormat::FormatOption>(option), on);
}

void QSurfaceFormat_Delete(QSurfaceFormat* self) {
	delete self;
}

