#include <QSurfaceFormat>
#include "qsurfaceformat.h"

#include "gen_qsurfaceformat.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

int QSurfaceFormat_DepthBufferSize(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->depthBufferSize();
}

void QSurfaceFormat_SetStencilBufferSize(QSurfaceFormat* self, int size) {
	self->setStencilBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_StencilBufferSize(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->stencilBufferSize();
}

void QSurfaceFormat_SetRedBufferSize(QSurfaceFormat* self, int size) {
	self->setRedBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_RedBufferSize(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->redBufferSize();
}

void QSurfaceFormat_SetGreenBufferSize(QSurfaceFormat* self, int size) {
	self->setGreenBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_GreenBufferSize(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->greenBufferSize();
}

void QSurfaceFormat_SetBlueBufferSize(QSurfaceFormat* self, int size) {
	self->setBlueBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_BlueBufferSize(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->blueBufferSize();
}

void QSurfaceFormat_SetAlphaBufferSize(QSurfaceFormat* self, int size) {
	self->setAlphaBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_AlphaBufferSize(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->alphaBufferSize();
}

void QSurfaceFormat_SetSamples(QSurfaceFormat* self, int numSamples) {
	self->setSamples(static_cast<int>(numSamples));
}

int QSurfaceFormat_Samples(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->samples();
}

void QSurfaceFormat_SetSwapBehavior(QSurfaceFormat* self, uintptr_t behavior) {
	self->setSwapBehavior(static_cast<QSurfaceFormat::SwapBehavior>(behavior));
}

uintptr_t QSurfaceFormat_SwapBehavior(QSurfaceFormat* self) {
	QSurfaceFormat::SwapBehavior ret = const_cast<const QSurfaceFormat*>(self)->swapBehavior();
	return static_cast<uintptr_t>(ret);
}

bool QSurfaceFormat_HasAlpha(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->hasAlpha();
}

void QSurfaceFormat_SetProfile(QSurfaceFormat* self, uintptr_t profile) {
	self->setProfile(static_cast<QSurfaceFormat::OpenGLContextProfile>(profile));
}

uintptr_t QSurfaceFormat_Profile(QSurfaceFormat* self) {
	QSurfaceFormat::OpenGLContextProfile ret = const_cast<const QSurfaceFormat*>(self)->profile();
	return static_cast<uintptr_t>(ret);
}

void QSurfaceFormat_SetRenderableType(QSurfaceFormat* self, uintptr_t typeVal) {
	self->setRenderableType(static_cast<QSurfaceFormat::RenderableType>(typeVal));
}

uintptr_t QSurfaceFormat_RenderableType(QSurfaceFormat* self) {
	QSurfaceFormat::RenderableType ret = const_cast<const QSurfaceFormat*>(self)->renderableType();
	return static_cast<uintptr_t>(ret);
}

void QSurfaceFormat_SetMajorVersion(QSurfaceFormat* self, int majorVersion) {
	self->setMajorVersion(static_cast<int>(majorVersion));
}

int QSurfaceFormat_MajorVersion(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->majorVersion();
}

void QSurfaceFormat_SetMinorVersion(QSurfaceFormat* self, int minorVersion) {
	self->setMinorVersion(static_cast<int>(minorVersion));
}

int QSurfaceFormat_MinorVersion(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->minorVersion();
}

void QSurfaceFormat_SetVersion(QSurfaceFormat* self, int major, int minor) {
	self->setVersion(static_cast<int>(major), static_cast<int>(minor));
}

bool QSurfaceFormat_Stereo(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->stereo();
}

void QSurfaceFormat_SetStereo(QSurfaceFormat* self, bool enable) {
	self->setStereo(enable);
}

void QSurfaceFormat_SetOption(QSurfaceFormat* self, int opt) {
	self->setOption(static_cast<QSurfaceFormat::FormatOptions>(opt));
}

bool QSurfaceFormat_TestOption(QSurfaceFormat* self, int opt) {
	return const_cast<const QSurfaceFormat*>(self)->testOption(static_cast<QSurfaceFormat::FormatOptions>(opt));
}

void QSurfaceFormat_SetOptions(QSurfaceFormat* self, int options) {
	self->setOptions(static_cast<QSurfaceFormat::FormatOptions>(options));
}

void QSurfaceFormat_SetOptionWithOption(QSurfaceFormat* self, uintptr_t option) {
	self->setOption(static_cast<QSurfaceFormat::FormatOption>(option));
}

bool QSurfaceFormat_TestOptionWithOption(QSurfaceFormat* self, uintptr_t option) {
	return const_cast<const QSurfaceFormat*>(self)->testOption(static_cast<QSurfaceFormat::FormatOption>(option));
}

int QSurfaceFormat_Options(QSurfaceFormat* self) {
	QSurfaceFormat::FormatOptions ret = const_cast<const QSurfaceFormat*>(self)->options();
	return static_cast<int>(ret);
}

int QSurfaceFormat_SwapInterval(QSurfaceFormat* self) {
	return const_cast<const QSurfaceFormat*>(self)->swapInterval();
}

void QSurfaceFormat_SetSwapInterval(QSurfaceFormat* self, int interval) {
	self->setSwapInterval(static_cast<int>(interval));
}

uintptr_t QSurfaceFormat_ColorSpace(QSurfaceFormat* self) {
	QSurfaceFormat::ColorSpace ret = const_cast<const QSurfaceFormat*>(self)->colorSpace();
	return static_cast<uintptr_t>(ret);
}

void QSurfaceFormat_SetColorSpace(QSurfaceFormat* self, uintptr_t colorSpace) {
	self->setColorSpace(static_cast<QSurfaceFormat::ColorSpace>(colorSpace));
}

void QSurfaceFormat_SetDefaultFormat(QSurfaceFormat* format) {
	QSurfaceFormat::setDefaultFormat(*format);
}

QSurfaceFormat* QSurfaceFormat_DefaultFormat() {
	QSurfaceFormat ret = QSurfaceFormat::defaultFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSurfaceFormat*>(new QSurfaceFormat(ret));
}

void QSurfaceFormat_SetOption2(QSurfaceFormat* self, uintptr_t option, bool on) {
	self->setOption(static_cast<QSurfaceFormat::FormatOption>(option), on);
}

void QSurfaceFormat_Delete(QSurfaceFormat* self) {
	delete self;
}

