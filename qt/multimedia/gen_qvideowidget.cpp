#include <QAbstractVideoSurface>
#include <QMediaObject>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoWidget>
#include <QWidget>
#include <qvideowidget.h>
#include "gen_qvideowidget.h"
#include "_cgo_export.h"

QVideoWidget* QVideoWidget_new(QWidget* parent) {
	return new QVideoWidget(parent);
}

QVideoWidget* QVideoWidget_new2() {
	return new QVideoWidget();
}

QMetaObject* QVideoWidget_MetaObject(const QVideoWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoWidget_Metacast(QVideoWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoWidget_Tr(const char* s) {
	QString _ret = QVideoWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_TrUtf8(const char* s) {
	QString _ret = QVideoWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QVideoWidget_MediaObject(const QVideoWidget* self) {
	return self->mediaObject();
}

QAbstractVideoSurface* QVideoWidget_VideoSurface(const QVideoWidget* self) {
	return self->videoSurface();
}

int QVideoWidget_AspectRatioMode(const QVideoWidget* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

int QVideoWidget_Brightness(const QVideoWidget* self) {
	return self->brightness();
}

int QVideoWidget_Contrast(const QVideoWidget* self) {
	return self->contrast();
}

int QVideoWidget_Hue(const QVideoWidget* self) {
	return self->hue();
}

int QVideoWidget_Saturation(const QVideoWidget* self) {
	return self->saturation();
}

QSize* QVideoWidget_SizeHint(const QVideoWidget* self) {
	return new QSize(self->sizeHint());
}

void QVideoWidget_SetFullScreen(QVideoWidget* self, bool fullScreen) {
	self->setFullScreen(fullScreen);
}

void QVideoWidget_SetAspectRatioMode(QVideoWidget* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_SetBrightness(QVideoWidget* self, int brightness) {
	self->setBrightness(static_cast<int>(brightness));
}

void QVideoWidget_SetContrast(QVideoWidget* self, int contrast) {
	self->setContrast(static_cast<int>(contrast));
}

void QVideoWidget_SetHue(QVideoWidget* self, int hue) {
	self->setHue(static_cast<int>(hue));
}

void QVideoWidget_SetSaturation(QVideoWidget* self, int saturation) {
	self->setSaturation(static_cast<int>(saturation));
}

void QVideoWidget_FullScreenChanged(QVideoWidget* self, bool fullScreen) {
	self->fullScreenChanged(fullScreen);
}

void QVideoWidget_connect_FullScreenChanged(QVideoWidget* self, intptr_t slot) {
	QVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(bool)>(&QVideoWidget::fullScreenChanged), self, [=](bool fullScreen) {
		bool sigval1 = fullScreen;
		miqt_exec_callback_QVideoWidget_FullScreenChanged(slot, sigval1);
	});
}

void QVideoWidget_BrightnessChanged(QVideoWidget* self, int brightness) {
	self->brightnessChanged(static_cast<int>(brightness));
}

void QVideoWidget_connect_BrightnessChanged(QVideoWidget* self, intptr_t slot) {
	QVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::brightnessChanged), self, [=](int brightness) {
		int sigval1 = brightness;
		miqt_exec_callback_QVideoWidget_BrightnessChanged(slot, sigval1);
	});
}

void QVideoWidget_ContrastChanged(QVideoWidget* self, int contrast) {
	self->contrastChanged(static_cast<int>(contrast));
}

void QVideoWidget_connect_ContrastChanged(QVideoWidget* self, intptr_t slot) {
	QVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::contrastChanged), self, [=](int contrast) {
		int sigval1 = contrast;
		miqt_exec_callback_QVideoWidget_ContrastChanged(slot, sigval1);
	});
}

void QVideoWidget_HueChanged(QVideoWidget* self, int hue) {
	self->hueChanged(static_cast<int>(hue));
}

void QVideoWidget_connect_HueChanged(QVideoWidget* self, intptr_t slot) {
	QVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::hueChanged), self, [=](int hue) {
		int sigval1 = hue;
		miqt_exec_callback_QVideoWidget_HueChanged(slot, sigval1);
	});
}

void QVideoWidget_SaturationChanged(QVideoWidget* self, int saturation) {
	self->saturationChanged(static_cast<int>(saturation));
}

void QVideoWidget_connect_SaturationChanged(QVideoWidget* self, intptr_t slot) {
	QVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::saturationChanged), self, [=](int saturation) {
		int sigval1 = saturation;
		miqt_exec_callback_QVideoWidget_SaturationChanged(slot, sigval1);
	});
}

struct miqt_string QVideoWidget_Tr2(const char* s, const char* c) {
	QString _ret = QVideoWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QVideoWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoWidget_Delete(QVideoWidget* self) {
	delete self;
}

