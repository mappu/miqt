#include <QAbstractAudioDeviceInfo>
#include <QAbstractAudioInput>
#include <QAbstractAudioOutput>
#include <QAudioFormat>
#include <QIODevice>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiosystem.h>
#include "gen_qaudiosystem.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QAbstractAudioDeviceInfo_virtbase(QAbstractAudioDeviceInfo* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractAudioDeviceInfo_MetaObject(const QAbstractAudioDeviceInfo* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractAudioDeviceInfo_Metacast(QAbstractAudioDeviceInfo* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractAudioDeviceInfo_Tr(const char* s) {
	QString _ret = QAbstractAudioDeviceInfo::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioDeviceInfo_TrUtf8(const char* s) {
	QString _ret = QAbstractAudioDeviceInfo::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QAbstractAudioDeviceInfo_PreferredFormat(const QAbstractAudioDeviceInfo* self) {
	return new QAudioFormat(self->preferredFormat());
}

bool QAbstractAudioDeviceInfo_IsFormatSupported(const QAbstractAudioDeviceInfo* self, QAudioFormat* format) {
	return self->isFormatSupported(*format);
}

struct miqt_string QAbstractAudioDeviceInfo_DeviceName(const QAbstractAudioDeviceInfo* self) {
	QString _ret = self->deviceName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAbstractAudioDeviceInfo_SupportedCodecs(QAbstractAudioDeviceInfo* self) {
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

struct miqt_array /* of int */  QAbstractAudioDeviceInfo_SupportedSampleRates(QAbstractAudioDeviceInfo* self) {
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

struct miqt_array /* of int */  QAbstractAudioDeviceInfo_SupportedChannelCounts(QAbstractAudioDeviceInfo* self) {
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

struct miqt_array /* of int */  QAbstractAudioDeviceInfo_SupportedSampleSizes(QAbstractAudioDeviceInfo* self) {
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

struct miqt_array /* of int */  QAbstractAudioDeviceInfo_SupportedByteOrders(QAbstractAudioDeviceInfo* self) {
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

struct miqt_array /* of int */  QAbstractAudioDeviceInfo_SupportedSampleTypes(QAbstractAudioDeviceInfo* self) {
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

struct miqt_string QAbstractAudioDeviceInfo_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractAudioDeviceInfo::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioDeviceInfo_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioDeviceInfo::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioDeviceInfo_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractAudioDeviceInfo::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioDeviceInfo_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioDeviceInfo::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioDeviceInfo_Delete(QAbstractAudioDeviceInfo* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractAudioDeviceInfo*>( self );
	} else {
		delete self;
	}
}

void QAbstractAudioOutput_virtbase(QAbstractAudioOutput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractAudioOutput_MetaObject(const QAbstractAudioOutput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractAudioOutput_Metacast(QAbstractAudioOutput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractAudioOutput_Tr(const char* s) {
	QString _ret = QAbstractAudioOutput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioOutput_TrUtf8(const char* s) {
	QString _ret = QAbstractAudioOutput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioOutput_Start(QAbstractAudioOutput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAbstractAudioOutput_Start2(QAbstractAudioOutput* self) {
	return self->start();
}

void QAbstractAudioOutput_Stop(QAbstractAudioOutput* self) {
	self->stop();
}

void QAbstractAudioOutput_Reset(QAbstractAudioOutput* self) {
	self->reset();
}

void QAbstractAudioOutput_Suspend(QAbstractAudioOutput* self) {
	self->suspend();
}

void QAbstractAudioOutput_Resume(QAbstractAudioOutput* self) {
	self->resume();
}

int QAbstractAudioOutput_BytesFree(const QAbstractAudioOutput* self) {
	return self->bytesFree();
}

int QAbstractAudioOutput_PeriodSize(const QAbstractAudioOutput* self) {
	return self->periodSize();
}

void QAbstractAudioOutput_SetBufferSize(QAbstractAudioOutput* self, int value) {
	self->setBufferSize(static_cast<int>(value));
}

int QAbstractAudioOutput_BufferSize(const QAbstractAudioOutput* self) {
	return self->bufferSize();
}

void QAbstractAudioOutput_SetNotifyInterval(QAbstractAudioOutput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAbstractAudioOutput_NotifyInterval(const QAbstractAudioOutput* self) {
	return self->notifyInterval();
}

long long QAbstractAudioOutput_ProcessedUSecs(const QAbstractAudioOutput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAbstractAudioOutput_ElapsedUSecs(const QAbstractAudioOutput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAbstractAudioOutput_Error(const QAbstractAudioOutput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAbstractAudioOutput_State(const QAbstractAudioOutput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAbstractAudioOutput_SetFormat(QAbstractAudioOutput* self, QAudioFormat* fmt) {
	self->setFormat(*fmt);
}

QAudioFormat* QAbstractAudioOutput_Format(const QAbstractAudioOutput* self) {
	return new QAudioFormat(self->format());
}

void QAbstractAudioOutput_SetVolume(QAbstractAudioOutput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAbstractAudioOutput_Volume(const QAbstractAudioOutput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

struct miqt_string QAbstractAudioOutput_Category(const QAbstractAudioOutput* self) {
	QString _ret = self->category();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioOutput_SetCategory(QAbstractAudioOutput* self, struct miqt_string category) {
	QString category_QString = QString::fromUtf8(category.data, category.len);
	self->setCategory(category_QString);
}

void QAbstractAudioOutput_ErrorChanged(QAbstractAudioOutput* self, int error) {
	self->errorChanged(static_cast<QAudio::Error>(error));
}

void QAbstractAudioOutput_connect_ErrorChanged(QAbstractAudioOutput* self, intptr_t slot) {
	QAbstractAudioOutput::connect(self, static_cast<void (QAbstractAudioOutput::*)(QAudio::Error)>(&QAbstractAudioOutput::errorChanged), self, [=](QAudio::Error error) {
		QAudio::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QAbstractAudioOutput_ErrorChanged(slot, sigval1);
	});
}

void QAbstractAudioOutput_StateChanged(QAbstractAudioOutput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAbstractAudioOutput_connect_StateChanged(QAbstractAudioOutput* self, intptr_t slot) {
	QAbstractAudioOutput::connect(self, static_cast<void (QAbstractAudioOutput::*)(QAudio::State)>(&QAbstractAudioOutput::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAbstractAudioOutput_StateChanged(slot, sigval1);
	});
}

void QAbstractAudioOutput_Notify(QAbstractAudioOutput* self) {
	self->notify();
}

void QAbstractAudioOutput_connect_Notify(QAbstractAudioOutput* self, intptr_t slot) {
	QAbstractAudioOutput::connect(self, static_cast<void (QAbstractAudioOutput::*)()>(&QAbstractAudioOutput::notify), self, [=]() {
		miqt_exec_callback_QAbstractAudioOutput_Notify(slot);
	});
}

struct miqt_string QAbstractAudioOutput_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractAudioOutput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioOutput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioOutput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioOutput_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractAudioOutput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioOutput_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioOutput::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioOutput_Delete(QAbstractAudioOutput* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractAudioOutput*>( self );
	} else {
		delete self;
	}
}

void QAbstractAudioInput_virtbase(QAbstractAudioInput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractAudioInput_MetaObject(const QAbstractAudioInput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractAudioInput_Metacast(QAbstractAudioInput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractAudioInput_Tr(const char* s) {
	QString _ret = QAbstractAudioInput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioInput_TrUtf8(const char* s) {
	QString _ret = QAbstractAudioInput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioInput_Start(QAbstractAudioInput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAbstractAudioInput_Start2(QAbstractAudioInput* self) {
	return self->start();
}

void QAbstractAudioInput_Stop(QAbstractAudioInput* self) {
	self->stop();
}

void QAbstractAudioInput_Reset(QAbstractAudioInput* self) {
	self->reset();
}

void QAbstractAudioInput_Suspend(QAbstractAudioInput* self) {
	self->suspend();
}

void QAbstractAudioInput_Resume(QAbstractAudioInput* self) {
	self->resume();
}

int QAbstractAudioInput_BytesReady(const QAbstractAudioInput* self) {
	return self->bytesReady();
}

int QAbstractAudioInput_PeriodSize(const QAbstractAudioInput* self) {
	return self->periodSize();
}

void QAbstractAudioInput_SetBufferSize(QAbstractAudioInput* self, int value) {
	self->setBufferSize(static_cast<int>(value));
}

int QAbstractAudioInput_BufferSize(const QAbstractAudioInput* self) {
	return self->bufferSize();
}

void QAbstractAudioInput_SetNotifyInterval(QAbstractAudioInput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAbstractAudioInput_NotifyInterval(const QAbstractAudioInput* self) {
	return self->notifyInterval();
}

long long QAbstractAudioInput_ProcessedUSecs(const QAbstractAudioInput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAbstractAudioInput_ElapsedUSecs(const QAbstractAudioInput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAbstractAudioInput_Error(const QAbstractAudioInput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAbstractAudioInput_State(const QAbstractAudioInput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAbstractAudioInput_SetFormat(QAbstractAudioInput* self, QAudioFormat* fmt) {
	self->setFormat(*fmt);
}

QAudioFormat* QAbstractAudioInput_Format(const QAbstractAudioInput* self) {
	return new QAudioFormat(self->format());
}

void QAbstractAudioInput_SetVolume(QAbstractAudioInput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAbstractAudioInput_Volume(const QAbstractAudioInput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

void QAbstractAudioInput_ErrorChanged(QAbstractAudioInput* self, int error) {
	self->errorChanged(static_cast<QAudio::Error>(error));
}

void QAbstractAudioInput_connect_ErrorChanged(QAbstractAudioInput* self, intptr_t slot) {
	QAbstractAudioInput::connect(self, static_cast<void (QAbstractAudioInput::*)(QAudio::Error)>(&QAbstractAudioInput::errorChanged), self, [=](QAudio::Error error) {
		QAudio::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QAbstractAudioInput_ErrorChanged(slot, sigval1);
	});
}

void QAbstractAudioInput_StateChanged(QAbstractAudioInput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAbstractAudioInput_connect_StateChanged(QAbstractAudioInput* self, intptr_t slot) {
	QAbstractAudioInput::connect(self, static_cast<void (QAbstractAudioInput::*)(QAudio::State)>(&QAbstractAudioInput::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAbstractAudioInput_StateChanged(slot, sigval1);
	});
}

void QAbstractAudioInput_Notify(QAbstractAudioInput* self) {
	self->notify();
}

void QAbstractAudioInput_connect_Notify(QAbstractAudioInput* self, intptr_t slot) {
	QAbstractAudioInput::connect(self, static_cast<void (QAbstractAudioInput::*)()>(&QAbstractAudioInput::notify), self, [=]() {
		miqt_exec_callback_QAbstractAudioInput_Notify(slot);
	});
}

struct miqt_string QAbstractAudioInput_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractAudioInput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioInput_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioInput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioInput_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractAudioInput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioInput_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioInput::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioInput_Delete(QAbstractAudioInput* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractAudioInput*>( self );
	} else {
		delete self;
	}
}

