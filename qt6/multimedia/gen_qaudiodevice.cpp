#include <QAudioDevice>
#include <QAudioFormat>
#include <QByteArray>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiodevice.h>
#include "gen_qaudiodevice.h"
#include "_cgo_export.h"

QAudioDevice* QAudioDevice_new() {
	return new QAudioDevice();
}

QAudioDevice* QAudioDevice_new2(QAudioDevice* other) {
	return new QAudioDevice(*other);
}

void QAudioDevice_Swap(QAudioDevice* self, QAudioDevice* other) {
	self->swap(*other);
}

void QAudioDevice_OperatorAssign(QAudioDevice* self, QAudioDevice* other) {
	self->operator=(*other);
}

bool QAudioDevice_OperatorEqual(const QAudioDevice* self, QAudioDevice* other) {
	return (*self == *other);
}

bool QAudioDevice_OperatorNotEqual(const QAudioDevice* self, QAudioDevice* other) {
	return (*self != *other);
}

bool QAudioDevice_IsNull(const QAudioDevice* self) {
	return self->isNull();
}

struct miqt_string QAudioDevice_Id(const QAudioDevice* self) {
	QByteArray _qb = self->id();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioDevice_Description(const QAudioDevice* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioDevice_IsDefault(const QAudioDevice* self) {
	return self->isDefault();
}

int QAudioDevice_Mode(const QAudioDevice* self) {
	QAudioDevice::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

bool QAudioDevice_IsFormatSupported(const QAudioDevice* self, QAudioFormat* format) {
	return self->isFormatSupported(*format);
}

QAudioFormat* QAudioDevice_PreferredFormat(const QAudioDevice* self) {
	return new QAudioFormat(self->preferredFormat());
}

int QAudioDevice_MinimumSampleRate(const QAudioDevice* self) {
	return self->minimumSampleRate();
}

int QAudioDevice_MaximumSampleRate(const QAudioDevice* self) {
	return self->maximumSampleRate();
}

int QAudioDevice_MinimumChannelCount(const QAudioDevice* self) {
	return self->minimumChannelCount();
}

int QAudioDevice_MaximumChannelCount(const QAudioDevice* self) {
	return self->maximumChannelCount();
}

struct miqt_array /* of uint16_t */  QAudioDevice_SupportedSampleFormats(const QAudioDevice* self) {
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

uint32_t QAudioDevice_ChannelConfiguration(const QAudioDevice* self) {
	QAudioFormat::ChannelConfig _ret = self->channelConfiguration();
	return static_cast<uint32_t>(_ret);
}

void QAudioDevice_Delete(QAudioDevice* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAudioDevice*>( self );
	} else {
		delete self;
	}
}

