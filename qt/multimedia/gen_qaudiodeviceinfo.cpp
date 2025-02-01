#include <QAudioDeviceInfo>
#include <QAudioFormat>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiodeviceinfo.h>
#include "gen_qaudiodeviceinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QAudioDeviceInfo* QAudioDeviceInfo_new() {
	return new QAudioDeviceInfo();
}

QAudioDeviceInfo* QAudioDeviceInfo_new2(QAudioDeviceInfo* other) {
	return new QAudioDeviceInfo(*other);
}

void QAudioDeviceInfo_operatorAssign(QAudioDeviceInfo* self, QAudioDeviceInfo* other) {
	self->operator=(*other);
}

bool QAudioDeviceInfo_operatorEqual(const QAudioDeviceInfo* self, QAudioDeviceInfo* other) {
	return (*self == *other);
}

bool QAudioDeviceInfo_operatorNotEqual(const QAudioDeviceInfo* self, QAudioDeviceInfo* other) {
	return (*self != *other);
}

bool QAudioDeviceInfo_isNull(const QAudioDeviceInfo* self) {
	return self->isNull();
}

struct miqt_string QAudioDeviceInfo_deviceName(const QAudioDeviceInfo* self) {
	QString _ret = self->deviceName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioDeviceInfo_isFormatSupported(const QAudioDeviceInfo* self, QAudioFormat* format) {
	return self->isFormatSupported(*format);
}

QAudioFormat* QAudioDeviceInfo_preferredFormat(const QAudioDeviceInfo* self) {
	return new QAudioFormat(self->preferredFormat());
}

QAudioFormat* QAudioDeviceInfo_nearestFormat(const QAudioDeviceInfo* self, QAudioFormat* format) {
	return new QAudioFormat(self->nearestFormat(*format));
}

struct miqt_array /* of struct miqt_string */  QAudioDeviceInfo_supportedCodecs(const QAudioDeviceInfo* self) {
	QStringList _ret = self->supportedCodecs();
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

struct miqt_array /* of int */  QAudioDeviceInfo_supportedSampleRates(const QAudioDeviceInfo* self) {
	QList<int> _ret = self->supportedSampleRates();
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

struct miqt_array /* of int */  QAudioDeviceInfo_supportedChannelCounts(const QAudioDeviceInfo* self) {
	QList<int> _ret = self->supportedChannelCounts();
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

struct miqt_array /* of int */  QAudioDeviceInfo_supportedSampleSizes(const QAudioDeviceInfo* self) {
	QList<int> _ret = self->supportedSampleSizes();
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

struct miqt_array /* of int */  QAudioDeviceInfo_supportedByteOrders(const QAudioDeviceInfo* self) {
	QList<QAudioFormat::Endian> _ret = self->supportedByteOrders();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QAudioFormat::Endian _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QAudioDeviceInfo_supportedSampleTypes(const QAudioDeviceInfo* self) {
	QList<QAudioFormat::SampleType> _ret = self->supportedSampleTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QAudioFormat::SampleType _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QAudioDeviceInfo_realm(const QAudioDeviceInfo* self) {
	QString _ret = self->realm();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioDeviceInfo* QAudioDeviceInfo_defaultInputDevice() {
	return new QAudioDeviceInfo(QAudioDeviceInfo::defaultInputDevice());
}

QAudioDeviceInfo* QAudioDeviceInfo_defaultOutputDevice() {
	return new QAudioDeviceInfo(QAudioDeviceInfo::defaultOutputDevice());
}

struct miqt_array /* of QAudioDeviceInfo* */  QAudioDeviceInfo_availableDevices(int mode) {
	QList<QAudioDeviceInfo> _ret = QAudioDeviceInfo::availableDevices(static_cast<QAudio::Mode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QAudioDeviceInfo** _arr = static_cast<QAudioDeviceInfo**>(malloc(sizeof(QAudioDeviceInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QAudioDeviceInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAudioDeviceInfo_delete(QAudioDeviceInfo* self) {
	delete self;
}

