#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoWidgetControl>
#include <QWidget>
#include <qvideowidgetcontrol.h>
#include "gen_qvideowidgetcontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QVideoWidgetControl_FullScreenChanged(intptr_t, bool);
void miqt_exec_callback_QVideoWidgetControl_BrightnessChanged(intptr_t, int);
void miqt_exec_callback_QVideoWidgetControl_ContrastChanged(intptr_t, int);
void miqt_exec_callback_QVideoWidgetControl_HueChanged(intptr_t, int);
void miqt_exec_callback_QVideoWidgetControl_SaturationChanged(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QVideoWidgetControl_virtbase(QVideoWidgetControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QVideoWidgetControl_MetaObject(const QVideoWidgetControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoWidgetControl_Metacast(QVideoWidgetControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoWidgetControl_Tr(const char* s) {
	QString _ret = QVideoWidgetControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidgetControl_TrUtf8(const char* s) {
	QString _ret = QVideoWidgetControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QVideoWidgetControl_VideoWidget(QVideoWidgetControl* self) {
	return self->videoWidget();
}

int QVideoWidgetControl_AspectRatioMode(const QVideoWidgetControl* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

void QVideoWidgetControl_SetAspectRatioMode(QVideoWidgetControl* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

bool QVideoWidgetControl_IsFullScreen(const QVideoWidgetControl* self) {
	return self->isFullScreen();
}

void QVideoWidgetControl_SetFullScreen(QVideoWidgetControl* self, bool fullScreen) {
	self->setFullScreen(fullScreen);
}

int QVideoWidgetControl_Brightness(const QVideoWidgetControl* self) {
	return self->brightness();
}

void QVideoWidgetControl_SetBrightness(QVideoWidgetControl* self, int brightness) {
	self->setBrightness(static_cast<int>(brightness));
}

int QVideoWidgetControl_Contrast(const QVideoWidgetControl* self) {
	return self->contrast();
}

void QVideoWidgetControl_SetContrast(QVideoWidgetControl* self, int contrast) {
	self->setContrast(static_cast<int>(contrast));
}

int QVideoWidgetControl_Hue(const QVideoWidgetControl* self) {
	return self->hue();
}

void QVideoWidgetControl_SetHue(QVideoWidgetControl* self, int hue) {
	self->setHue(static_cast<int>(hue));
}

int QVideoWidgetControl_Saturation(const QVideoWidgetControl* self) {
	return self->saturation();
}

void QVideoWidgetControl_SetSaturation(QVideoWidgetControl* self, int saturation) {
	self->setSaturation(static_cast<int>(saturation));
}

void QVideoWidgetControl_FullScreenChanged(QVideoWidgetControl* self, bool fullScreen) {
	self->fullScreenChanged(fullScreen);
}

void QVideoWidgetControl_connect_FullScreenChanged(QVideoWidgetControl* self, intptr_t slot) {
	QVideoWidgetControl::connect(self, static_cast<void (QVideoWidgetControl::*)(bool)>(&QVideoWidgetControl::fullScreenChanged), self, [=](bool fullScreen) {
		bool sigval1 = fullScreen;
		miqt_exec_callback_QVideoWidgetControl_FullScreenChanged(slot, sigval1);
	});
}

void QVideoWidgetControl_BrightnessChanged(QVideoWidgetControl* self, int brightness) {
	self->brightnessChanged(static_cast<int>(brightness));
}

void QVideoWidgetControl_connect_BrightnessChanged(QVideoWidgetControl* self, intptr_t slot) {
	QVideoWidgetControl::connect(self, static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::brightnessChanged), self, [=](int brightness) {
		int sigval1 = brightness;
		miqt_exec_callback_QVideoWidgetControl_BrightnessChanged(slot, sigval1);
	});
}

void QVideoWidgetControl_ContrastChanged(QVideoWidgetControl* self, int contrast) {
	self->contrastChanged(static_cast<int>(contrast));
}

void QVideoWidgetControl_connect_ContrastChanged(QVideoWidgetControl* self, intptr_t slot) {
	QVideoWidgetControl::connect(self, static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::contrastChanged), self, [=](int contrast) {
		int sigval1 = contrast;
		miqt_exec_callback_QVideoWidgetControl_ContrastChanged(slot, sigval1);
	});
}

void QVideoWidgetControl_HueChanged(QVideoWidgetControl* self, int hue) {
	self->hueChanged(static_cast<int>(hue));
}

void QVideoWidgetControl_connect_HueChanged(QVideoWidgetControl* self, intptr_t slot) {
	QVideoWidgetControl::connect(self, static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::hueChanged), self, [=](int hue) {
		int sigval1 = hue;
		miqt_exec_callback_QVideoWidgetControl_HueChanged(slot, sigval1);
	});
}

void QVideoWidgetControl_SaturationChanged(QVideoWidgetControl* self, int saturation) {
	self->saturationChanged(static_cast<int>(saturation));
}

void QVideoWidgetControl_connect_SaturationChanged(QVideoWidgetControl* self, intptr_t slot) {
	QVideoWidgetControl::connect(self, static_cast<void (QVideoWidgetControl::*)(int)>(&QVideoWidgetControl::saturationChanged), self, [=](int saturation) {
		int sigval1 = saturation;
		miqt_exec_callback_QVideoWidgetControl_SaturationChanged(slot, sigval1);
	});
}

struct miqt_string QVideoWidgetControl_Tr2(const char* s, const char* c) {
	QString _ret = QVideoWidgetControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidgetControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoWidgetControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidgetControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QVideoWidgetControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidgetControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoWidgetControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoWidgetControl_Delete(QVideoWidgetControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QVideoWidgetControl*>( self );
	} else {
		delete self;
	}
}

