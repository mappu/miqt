#include <QCameraImageProcessing>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameraimageprocessing.h>
#include "gen_qcameraimageprocessing.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QCameraImageProcessing_virtbase(QCameraImageProcessing* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QCameraImageProcessing_metaObject(const QCameraImageProcessing* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraImageProcessing_metacast(QCameraImageProcessing* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraImageProcessing_tr(const char* s) {
	QString _ret = QCameraImageProcessing::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessing_trUtf8(const char* s) {
	QString _ret = QCameraImageProcessing::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraImageProcessing_isAvailable(const QCameraImageProcessing* self) {
	return self->isAvailable();
}

int QCameraImageProcessing_whiteBalanceMode(const QCameraImageProcessing* self) {
	QCameraImageProcessing::WhiteBalanceMode _ret = self->whiteBalanceMode();
	return static_cast<int>(_ret);
}

void QCameraImageProcessing_setWhiteBalanceMode(QCameraImageProcessing* self, int mode) {
	self->setWhiteBalanceMode(static_cast<QCameraImageProcessing::WhiteBalanceMode>(mode));
}

bool QCameraImageProcessing_isWhiteBalanceModeSupported(const QCameraImageProcessing* self, int mode) {
	return self->isWhiteBalanceModeSupported(static_cast<QCameraImageProcessing::WhiteBalanceMode>(mode));
}

double QCameraImageProcessing_manualWhiteBalance(const QCameraImageProcessing* self) {
	qreal _ret = self->manualWhiteBalance();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_setManualWhiteBalance(QCameraImageProcessing* self, double colorTemperature) {
	self->setManualWhiteBalance(static_cast<qreal>(colorTemperature));
}

double QCameraImageProcessing_brightness(const QCameraImageProcessing* self) {
	qreal _ret = self->brightness();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_setBrightness(QCameraImageProcessing* self, double value) {
	self->setBrightness(static_cast<qreal>(value));
}

double QCameraImageProcessing_contrast(const QCameraImageProcessing* self) {
	qreal _ret = self->contrast();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_setContrast(QCameraImageProcessing* self, double value) {
	self->setContrast(static_cast<qreal>(value));
}

double QCameraImageProcessing_saturation(const QCameraImageProcessing* self) {
	qreal _ret = self->saturation();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_setSaturation(QCameraImageProcessing* self, double value) {
	self->setSaturation(static_cast<qreal>(value));
}

double QCameraImageProcessing_sharpeningLevel(const QCameraImageProcessing* self) {
	qreal _ret = self->sharpeningLevel();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_setSharpeningLevel(QCameraImageProcessing* self, double value) {
	self->setSharpeningLevel(static_cast<qreal>(value));
}

double QCameraImageProcessing_denoisingLevel(const QCameraImageProcessing* self) {
	qreal _ret = self->denoisingLevel();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_setDenoisingLevel(QCameraImageProcessing* self, double value) {
	self->setDenoisingLevel(static_cast<qreal>(value));
}

int QCameraImageProcessing_colorFilter(const QCameraImageProcessing* self) {
	QCameraImageProcessing::ColorFilter _ret = self->colorFilter();
	return static_cast<int>(_ret);
}

void QCameraImageProcessing_setColorFilter(QCameraImageProcessing* self, int filter) {
	self->setColorFilter(static_cast<QCameraImageProcessing::ColorFilter>(filter));
}

bool QCameraImageProcessing_isColorFilterSupported(const QCameraImageProcessing* self, int filter) {
	return self->isColorFilterSupported(static_cast<QCameraImageProcessing::ColorFilter>(filter));
}

struct miqt_string QCameraImageProcessing_tr2(const char* s, const char* c) {
	QString _ret = QCameraImageProcessing::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessing_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraImageProcessing::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessing_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraImageProcessing::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessing_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraImageProcessing::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

