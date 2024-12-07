#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoWindowControl>
#include <qvideowindowcontrol.h>
#include "gen_qvideowindowcontrol.h"
#include "_cgo_export.h"

void QVideoWindowControl_virtbase(QVideoWindowControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QVideoWindowControl_MetaObject(const QVideoWindowControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoWindowControl_Metacast(QVideoWindowControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoWindowControl_Tr(const char* s) {
	QString _ret = QVideoWindowControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWindowControl_TrUtf8(const char* s) {
	QString _ret = QVideoWindowControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

uintptr_t QVideoWindowControl_WinId(const QVideoWindowControl* self) {
	WId _ret = self->winId();
	return static_cast<uintptr_t>(_ret);
}

void QVideoWindowControl_SetWinId(QVideoWindowControl* self, uintptr_t id) {
	self->setWinId(static_cast<WId>(id));
}

QRect* QVideoWindowControl_DisplayRect(const QVideoWindowControl* self) {
	return new QRect(self->displayRect());
}

void QVideoWindowControl_SetDisplayRect(QVideoWindowControl* self, QRect* rect) {
	self->setDisplayRect(*rect);
}

bool QVideoWindowControl_IsFullScreen(const QVideoWindowControl* self) {
	return self->isFullScreen();
}

void QVideoWindowControl_SetFullScreen(QVideoWindowControl* self, bool fullScreen) {
	self->setFullScreen(fullScreen);
}

void QVideoWindowControl_Repaint(QVideoWindowControl* self) {
	self->repaint();
}

QSize* QVideoWindowControl_NativeSize(const QVideoWindowControl* self) {
	return new QSize(self->nativeSize());
}

int QVideoWindowControl_AspectRatioMode(const QVideoWindowControl* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

void QVideoWindowControl_SetAspectRatioMode(QVideoWindowControl* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

int QVideoWindowControl_Brightness(const QVideoWindowControl* self) {
	return self->brightness();
}

void QVideoWindowControl_SetBrightness(QVideoWindowControl* self, int brightness) {
	self->setBrightness(static_cast<int>(brightness));
}

int QVideoWindowControl_Contrast(const QVideoWindowControl* self) {
	return self->contrast();
}

void QVideoWindowControl_SetContrast(QVideoWindowControl* self, int contrast) {
	self->setContrast(static_cast<int>(contrast));
}

int QVideoWindowControl_Hue(const QVideoWindowControl* self) {
	return self->hue();
}

void QVideoWindowControl_SetHue(QVideoWindowControl* self, int hue) {
	self->setHue(static_cast<int>(hue));
}

int QVideoWindowControl_Saturation(const QVideoWindowControl* self) {
	return self->saturation();
}

void QVideoWindowControl_SetSaturation(QVideoWindowControl* self, int saturation) {
	self->setSaturation(static_cast<int>(saturation));
}

void QVideoWindowControl_FullScreenChanged(QVideoWindowControl* self, bool fullScreen) {
	self->fullScreenChanged(fullScreen);
}

void QVideoWindowControl_connect_FullScreenChanged(QVideoWindowControl* self, intptr_t slot) {
	QVideoWindowControl::connect(self, static_cast<void (QVideoWindowControl::*)(bool)>(&QVideoWindowControl::fullScreenChanged), self, [=](bool fullScreen) {
		bool sigval1 = fullScreen;
		miqt_exec_callback_QVideoWindowControl_FullScreenChanged(slot, sigval1);
	});
}

void QVideoWindowControl_BrightnessChanged(QVideoWindowControl* self, int brightness) {
	self->brightnessChanged(static_cast<int>(brightness));
}

void QVideoWindowControl_connect_BrightnessChanged(QVideoWindowControl* self, intptr_t slot) {
	QVideoWindowControl::connect(self, static_cast<void (QVideoWindowControl::*)(int)>(&QVideoWindowControl::brightnessChanged), self, [=](int brightness) {
		int sigval1 = brightness;
		miqt_exec_callback_QVideoWindowControl_BrightnessChanged(slot, sigval1);
	});
}

void QVideoWindowControl_ContrastChanged(QVideoWindowControl* self, int contrast) {
	self->contrastChanged(static_cast<int>(contrast));
}

void QVideoWindowControl_connect_ContrastChanged(QVideoWindowControl* self, intptr_t slot) {
	QVideoWindowControl::connect(self, static_cast<void (QVideoWindowControl::*)(int)>(&QVideoWindowControl::contrastChanged), self, [=](int contrast) {
		int sigval1 = contrast;
		miqt_exec_callback_QVideoWindowControl_ContrastChanged(slot, sigval1);
	});
}

void QVideoWindowControl_HueChanged(QVideoWindowControl* self, int hue) {
	self->hueChanged(static_cast<int>(hue));
}

void QVideoWindowControl_connect_HueChanged(QVideoWindowControl* self, intptr_t slot) {
	QVideoWindowControl::connect(self, static_cast<void (QVideoWindowControl::*)(int)>(&QVideoWindowControl::hueChanged), self, [=](int hue) {
		int sigval1 = hue;
		miqt_exec_callback_QVideoWindowControl_HueChanged(slot, sigval1);
	});
}

void QVideoWindowControl_SaturationChanged(QVideoWindowControl* self, int saturation) {
	self->saturationChanged(static_cast<int>(saturation));
}

void QVideoWindowControl_connect_SaturationChanged(QVideoWindowControl* self, intptr_t slot) {
	QVideoWindowControl::connect(self, static_cast<void (QVideoWindowControl::*)(int)>(&QVideoWindowControl::saturationChanged), self, [=](int saturation) {
		int sigval1 = saturation;
		miqt_exec_callback_QVideoWindowControl_SaturationChanged(slot, sigval1);
	});
}

void QVideoWindowControl_NativeSizeChanged(QVideoWindowControl* self) {
	self->nativeSizeChanged();
}

void QVideoWindowControl_connect_NativeSizeChanged(QVideoWindowControl* self, intptr_t slot) {
	QVideoWindowControl::connect(self, static_cast<void (QVideoWindowControl::*)()>(&QVideoWindowControl::nativeSizeChanged), self, [=]() {
		miqt_exec_callback_QVideoWindowControl_NativeSizeChanged(slot);
	});
}

struct miqt_string QVideoWindowControl_Tr2(const char* s, const char* c) {
	QString _ret = QVideoWindowControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWindowControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoWindowControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWindowControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QVideoWindowControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWindowControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoWindowControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoWindowControl_Delete(QVideoWindowControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QVideoWindowControl*>( self );
	} else {
		delete self;
	}
}

