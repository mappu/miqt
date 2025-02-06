#include <QAudioEncoderSettings>
#include <QAudioEncoderSettingsControl>
#include <QList>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudioencodersettingscontrol.h>
#include "gen_qaudioencodersettingscontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QAudioEncoderSettingsControl_virtbase(QAudioEncoderSettingsControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QAudioEncoderSettingsControl_metaObject(const QAudioEncoderSettingsControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioEncoderSettingsControl_metacast(QAudioEncoderSettingsControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioEncoderSettingsControl_tr(const char* s) {
	QString _ret = QAudioEncoderSettingsControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioEncoderSettingsControl_trUtf8(const char* s) {
	QString _ret = QAudioEncoderSettingsControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAudioEncoderSettingsControl_supportedAudioCodecs(const QAudioEncoderSettingsControl* self) {
	QStringList _ret = self->supportedAudioCodecs();
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

struct miqt_string QAudioEncoderSettingsControl_codecDescription(const QAudioEncoderSettingsControl* self, struct miqt_string codecName) {
	QString codecName_QString = QString::fromUtf8(codecName.data, codecName.len);
	QString _ret = self->codecDescription(codecName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of int */  QAudioEncoderSettingsControl_supportedSampleRates(const QAudioEncoderSettingsControl* self, QAudioEncoderSettings* settings, bool* continuous) {
	QList<int> _ret = self->supportedSampleRates(*settings, continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAudioEncoderSettings* QAudioEncoderSettingsControl_audioSettings(const QAudioEncoderSettingsControl* self) {
	return new QAudioEncoderSettings(self->audioSettings());
}

void QAudioEncoderSettingsControl_setAudioSettings(QAudioEncoderSettingsControl* self, QAudioEncoderSettings* settings) {
	self->setAudioSettings(*settings);
}

struct miqt_string QAudioEncoderSettingsControl_tr2(const char* s, const char* c) {
	QString _ret = QAudioEncoderSettingsControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioEncoderSettingsControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioEncoderSettingsControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioEncoderSettingsControl_trUtf82(const char* s, const char* c) {
	QString _ret = QAudioEncoderSettingsControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioEncoderSettingsControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioEncoderSettingsControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioEncoderSettingsControl_delete(QAudioEncoderSettingsControl* self) {
	delete self;
}

