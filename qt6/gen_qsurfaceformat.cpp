#include <QColorSpace>
#include <QPair>
#include <QSurfaceFormat>
#include <qsurfaceformat.h>
#include "gen_qsurfaceformat.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSurfaceFormat* QSurfaceFormat_new() {
	return new QSurfaceFormat();
}

QSurfaceFormat* QSurfaceFormat_new2(int options) {
	return new QSurfaceFormat(static_cast<QSurfaceFormat::FormatOptions>(options));
}

QSurfaceFormat* QSurfaceFormat_new3(QSurfaceFormat* other) {
	return new QSurfaceFormat(*other);
}

void QSurfaceFormat_operatorAssign(QSurfaceFormat* self, QSurfaceFormat* other) {
	self->operator=(*other);
}

void QSurfaceFormat_setDepthBufferSize(QSurfaceFormat* self, int size) {
	self->setDepthBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_depthBufferSize(const QSurfaceFormat* self) {
	return self->depthBufferSize();
}

void QSurfaceFormat_setStencilBufferSize(QSurfaceFormat* self, int size) {
	self->setStencilBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_stencilBufferSize(const QSurfaceFormat* self) {
	return self->stencilBufferSize();
}

void QSurfaceFormat_setRedBufferSize(QSurfaceFormat* self, int size) {
	self->setRedBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_redBufferSize(const QSurfaceFormat* self) {
	return self->redBufferSize();
}

void QSurfaceFormat_setGreenBufferSize(QSurfaceFormat* self, int size) {
	self->setGreenBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_greenBufferSize(const QSurfaceFormat* self) {
	return self->greenBufferSize();
}

void QSurfaceFormat_setBlueBufferSize(QSurfaceFormat* self, int size) {
	self->setBlueBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_blueBufferSize(const QSurfaceFormat* self) {
	return self->blueBufferSize();
}

void QSurfaceFormat_setAlphaBufferSize(QSurfaceFormat* self, int size) {
	self->setAlphaBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_alphaBufferSize(const QSurfaceFormat* self) {
	return self->alphaBufferSize();
}

void QSurfaceFormat_setSamples(QSurfaceFormat* self, int numSamples) {
	self->setSamples(static_cast<int>(numSamples));
}

int QSurfaceFormat_samples(const QSurfaceFormat* self) {
	return self->samples();
}

void QSurfaceFormat_setSwapBehavior(QSurfaceFormat* self, int behavior) {
	self->setSwapBehavior(static_cast<QSurfaceFormat::SwapBehavior>(behavior));
}

int QSurfaceFormat_swapBehavior(const QSurfaceFormat* self) {
	QSurfaceFormat::SwapBehavior _ret = self->swapBehavior();
	return static_cast<int>(_ret);
}

bool QSurfaceFormat_hasAlpha(const QSurfaceFormat* self) {
	return self->hasAlpha();
}

void QSurfaceFormat_setProfile(QSurfaceFormat* self, int profile) {
	self->setProfile(static_cast<QSurfaceFormat::OpenGLContextProfile>(profile));
}

int QSurfaceFormat_profile(const QSurfaceFormat* self) {
	QSurfaceFormat::OpenGLContextProfile _ret = self->profile();
	return static_cast<int>(_ret);
}

void QSurfaceFormat_setRenderableType(QSurfaceFormat* self, int type) {
	self->setRenderableType(static_cast<QSurfaceFormat::RenderableType>(type));
}

int QSurfaceFormat_renderableType(const QSurfaceFormat* self) {
	QSurfaceFormat::RenderableType _ret = self->renderableType();
	return static_cast<int>(_ret);
}

void QSurfaceFormat_setMajorVersion(QSurfaceFormat* self, int majorVersion) {
	self->setMajorVersion(static_cast<int>(majorVersion));
}

int QSurfaceFormat_majorVersion(const QSurfaceFormat* self) {
	return self->majorVersion();
}

void QSurfaceFormat_setMinorVersion(QSurfaceFormat* self, int minorVersion) {
	self->setMinorVersion(static_cast<int>(minorVersion));
}

int QSurfaceFormat_minorVersion(const QSurfaceFormat* self) {
	return self->minorVersion();
}

struct miqt_map /* tuple of int and int */  QSurfaceFormat_version(const QSurfaceFormat* self) {
	QPair<int, int> _ret = self->version();
	// Convert QPair<> from C++ memory to manually-managed C memory
	int* _first_arr = static_cast<int*>(malloc(sizeof(int)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

void QSurfaceFormat_setVersion(QSurfaceFormat* self, int major, int minor) {
	self->setVersion(static_cast<int>(major), static_cast<int>(minor));
}

bool QSurfaceFormat_stereo(const QSurfaceFormat* self) {
	return self->stereo();
}

void QSurfaceFormat_setStereo(QSurfaceFormat* self, bool enable) {
	self->setStereo(enable);
}

void QSurfaceFormat_setOptions(QSurfaceFormat* self, int options) {
	self->setOptions(static_cast<QSurfaceFormat::FormatOptions>(options));
}

void QSurfaceFormat_setOption(QSurfaceFormat* self, int option) {
	self->setOption(static_cast<QSurfaceFormat::FormatOption>(option));
}

bool QSurfaceFormat_testOption(const QSurfaceFormat* self, int option) {
	return self->testOption(static_cast<QSurfaceFormat::FormatOption>(option));
}

int QSurfaceFormat_options(const QSurfaceFormat* self) {
	QSurfaceFormat::FormatOptions _ret = self->options();
	return static_cast<int>(_ret);
}

int QSurfaceFormat_swapInterval(const QSurfaceFormat* self) {
	return self->swapInterval();
}

void QSurfaceFormat_setSwapInterval(QSurfaceFormat* self, int interval) {
	self->setSwapInterval(static_cast<int>(interval));
}

QColorSpace* QSurfaceFormat_colorSpace(const QSurfaceFormat* self) {
	const QColorSpace& _ret = self->colorSpace();
	// Cast returned reference into pointer
	return const_cast<QColorSpace*>(&_ret);
}

void QSurfaceFormat_setColorSpace(QSurfaceFormat* self, QColorSpace* colorSpace) {
	self->setColorSpace(*colorSpace);
}

void QSurfaceFormat_setColorSpaceWithColorSpace(QSurfaceFormat* self, int colorSpace) {
	self->setColorSpace(static_cast<QSurfaceFormat::ColorSpace>(colorSpace));
}

void QSurfaceFormat_setDefaultFormat(QSurfaceFormat* format) {
	QSurfaceFormat::setDefaultFormat(*format);
}

QSurfaceFormat* QSurfaceFormat_defaultFormat() {
	return new QSurfaceFormat(QSurfaceFormat::defaultFormat());
}

void QSurfaceFormat_setOption2(QSurfaceFormat* self, int option, bool on) {
	self->setOption(static_cast<QSurfaceFormat::FormatOption>(option), on);
}

void QSurfaceFormat_delete(QSurfaceFormat* self) {
	delete self;
}

