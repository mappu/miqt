#include <QList>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoEncoderSettings>
#include <QVideoEncoderSettingsControl>
#include <qvideoencodersettingscontrol.h>
#include "gen_qvideoencodersettingscontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QVideoEncoderSettingsControl_virtbase(QVideoEncoderSettingsControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QVideoEncoderSettingsControl_metaObject(const QVideoEncoderSettingsControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoEncoderSettingsControl_metacast(QVideoEncoderSettingsControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoEncoderSettingsControl_tr(const char* s) {
	QString _ret = QVideoEncoderSettingsControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoEncoderSettingsControl_trUtf8(const char* s) {
	QString _ret = QVideoEncoderSettingsControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QSize* */  QVideoEncoderSettingsControl_supportedResolutions(const QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings, bool* continuous) {
	QList<QSize> _ret = self->supportedResolutions(*settings, continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of double */  QVideoEncoderSettingsControl_supportedFrameRates(const QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings, bool* continuous) {
	QList<qreal> _ret = self->supportedFrameRates(*settings, continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QVideoEncoderSettingsControl_supportedVideoCodecs(const QVideoEncoderSettingsControl* self) {
	QStringList _ret = self->supportedVideoCodecs();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QVideoEncoderSettingsControl_videoCodecDescription(const QVideoEncoderSettingsControl* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	QString _ret = self->videoCodecDescription(codec_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVideoEncoderSettings* QVideoEncoderSettingsControl_videoSettings(const QVideoEncoderSettingsControl* self) {
	return new QVideoEncoderSettings(self->videoSettings());
}

void QVideoEncoderSettingsControl_setVideoSettings(QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings) {
	self->setVideoSettings(*settings);
}

struct miqt_string QVideoEncoderSettingsControl_tr2(const char* s, const char* c) {
	QString _ret = QVideoEncoderSettingsControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoEncoderSettingsControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoEncoderSettingsControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoEncoderSettingsControl_trUtf82(const char* s, const char* c) {
	QString _ret = QVideoEncoderSettingsControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoEncoderSettingsControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoEncoderSettingsControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoEncoderSettingsControl_delete(QVideoEncoderSettingsControl* self) {
	delete self;
}

