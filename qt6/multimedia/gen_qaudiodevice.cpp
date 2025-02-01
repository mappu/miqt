#include <QAudioDevice>
#include <QAudioFormat>
#include <QByteArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiodevice.h>
#include "gen_qaudiodevice.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QAudioDevice* QAudioDevice_new() {
	return new QAudioDevice();
}

QAudioDevice* QAudioDevice_new2(QAudioDevice* other) {
	return new QAudioDevice(*other);
}

void QAudioDevice_swap(QAudioDevice* self, QAudioDevice* other) {
	self->swap(*other);
}

void QAudioDevice_operatorAssign(QAudioDevice* self, QAudioDevice* other) {
	self->operator=(*other);
}

bool QAudioDevice_operatorEqual(const QAudioDevice* self, QAudioDevice* other) {
	return (*self == *other);
}

bool QAudioDevice_operatorNotEqual(const QAudioDevice* self, QAudioDevice* other) {
	return (*self != *other);
}

bool QAudioDevice_isNull(const QAudioDevice* self) {
	return self->isNull();
}

struct miqt_string QAudioDevice_id(const QAudioDevice* self) {
	QByteArray _qb = self->id();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDevice_description(const QAudioDevice* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioDevice_isDefault(const QAudioDevice* self) {
	return self->isDefault();
}

int QAudioDevice_mode(const QAudioDevice* self) {
	QAudioDevice::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

bool QAudioDevice_isFormatSupported(const QAudioDevice* self, QAudioFormat* format) {
	return self->isFormatSupported(*format);
}

QAudioFormat* QAudioDevice_preferredFormat(const QAudioDevice* self) {
	return new QAudioFormat(self->preferredFormat());
}

int QAudioDevice_minimumSampleRate(const QAudioDevice* self) {
	return self->minimumSampleRate();
}

int QAudioDevice_maximumSampleRate(const QAudioDevice* self) {
	return self->maximumSampleRate();
}

int QAudioDevice_minimumChannelCount(const QAudioDevice* self) {
	return self->minimumChannelCount();
}

int QAudioDevice_maximumChannelCount(const QAudioDevice* self) {
	return self->maximumChannelCount();
}

struct miqt_array /* of uint16_t */  QAudioDevice_supportedSampleFormats(const QAudioDevice* self) {
	QList<QAudioFormat::SampleFormat> _ret = self->supportedSampleFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	uint16_t* _arr = static_cast<uint16_t*>(malloc(sizeof(uint16_t) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QAudioFormat::SampleFormat _lv_ret = _ret[i];
		_arr[i] = static_cast<uint16_t>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

uint32_t QAudioDevice_channelConfiguration(const QAudioDevice* self) {
	QAudioFormat::ChannelConfig _ret = self->channelConfiguration();
	return static_cast<uint32_t>(_ret);
}

void QAudioDevice_delete(QAudioDevice* self) {
	delete self;
}

