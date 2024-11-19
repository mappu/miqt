#include <QCameraImageProcessing>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameraimageprocessing.h>
#include "gen_qcameraimageprocessing.h"
#include "_cgo_export.h"

QMetaObject* QCameraImageProcessing_MetaObject(const QCameraImageProcessing* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraImageProcessing_Metacast(QCameraImageProcessing* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraImageProcessing_Tr(const char* s) {
	QString _ret = QCameraImageProcessing::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessing_TrUtf8(const char* s) {
	QString _ret = QCameraImageProcessing::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraImageProcessing_IsAvailable(const QCameraImageProcessing* self) {
	return self->isAvailable();
}

int QCameraImageProcessing_WhiteBalanceMode(const QCameraImageProcessing* self) {
	QCameraImageProcessing::WhiteBalanceMode _ret = self->whiteBalanceMode();
	return static_cast<int>(_ret);
}

void QCameraImageProcessing_SetWhiteBalanceMode(QCameraImageProcessing* self, int mode) {
	self->setWhiteBalanceMode(static_cast<QCameraImageProcessing::WhiteBalanceMode>(mode));
}

bool QCameraImageProcessing_IsWhiteBalanceModeSupported(const QCameraImageProcessing* self, int mode) {
	return self->isWhiteBalanceModeSupported(static_cast<QCameraImageProcessing::WhiteBalanceMode>(mode));
}

double QCameraImageProcessing_ManualWhiteBalance(const QCameraImageProcessing* self) {
	qreal _ret = self->manualWhiteBalance();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_SetManualWhiteBalance(QCameraImageProcessing* self, double colorTemperature) {
	self->setManualWhiteBalance(static_cast<qreal>(colorTemperature));
}

double QCameraImageProcessing_Brightness(const QCameraImageProcessing* self) {
	qreal _ret = self->brightness();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_SetBrightness(QCameraImageProcessing* self, double value) {
	self->setBrightness(static_cast<qreal>(value));
}

double QCameraImageProcessing_Contrast(const QCameraImageProcessing* self) {
	qreal _ret = self->contrast();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_SetContrast(QCameraImageProcessing* self, double value) {
	self->setContrast(static_cast<qreal>(value));
}

double QCameraImageProcessing_Saturation(const QCameraImageProcessing* self) {
	qreal _ret = self->saturation();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_SetSaturation(QCameraImageProcessing* self, double value) {
	self->setSaturation(static_cast<qreal>(value));
}

double QCameraImageProcessing_SharpeningLevel(const QCameraImageProcessing* self) {
	qreal _ret = self->sharpeningLevel();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_SetSharpeningLevel(QCameraImageProcessing* self, double value) {
	self->setSharpeningLevel(static_cast<qreal>(value));
}

double QCameraImageProcessing_DenoisingLevel(const QCameraImageProcessing* self) {
	qreal _ret = self->denoisingLevel();
	return static_cast<double>(_ret);
}

void QCameraImageProcessing_SetDenoisingLevel(QCameraImageProcessing* self, double value) {
	self->setDenoisingLevel(static_cast<qreal>(value));
}

int QCameraImageProcessing_ColorFilter(const QCameraImageProcessing* self) {
	QCameraImageProcessing::ColorFilter _ret = self->colorFilter();
	return static_cast<int>(_ret);
}

void QCameraImageProcessing_SetColorFilter(QCameraImageProcessing* self, int filter) {
	self->setColorFilter(static_cast<QCameraImageProcessing::ColorFilter>(filter));
}

bool QCameraImageProcessing_IsColorFilterSupported(const QCameraImageProcessing* self, int filter) {
	return self->isColorFilterSupported(static_cast<QCameraImageProcessing::ColorFilter>(filter));
}

struct miqt_string QCameraImageProcessing_Tr2(const char* s, const char* c) {
	QString _ret = QCameraImageProcessing::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessing_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraImageProcessing::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessing_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraImageProcessing::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageProcessing_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraImageProcessing::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

