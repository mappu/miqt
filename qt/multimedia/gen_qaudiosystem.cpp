#include <QAbstractAudioDeviceInfo>
#include <QAbstractAudioInput>
#include <QAbstractAudioOutput>
#include <QAudioFormat>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudiosystem.h>
#include "gen_qaudiosystem.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractAudioOutput_errorChanged(intptr_t, int);
void miqt_exec_callback_QAbstractAudioOutput_stateChanged(intptr_t, int);
void miqt_exec_callback_QAbstractAudioOutput_notify(intptr_t);
void miqt_exec_callback_QAbstractAudioInput_errorChanged(intptr_t, int);
void miqt_exec_callback_QAbstractAudioInput_stateChanged(intptr_t, int);
void miqt_exec_callback_QAbstractAudioInput_notify(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QAbstractAudioDeviceInfo_virtbase(QAbstractAudioDeviceInfo* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractAudioDeviceInfo_metaObject(const QAbstractAudioDeviceInfo* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractAudioDeviceInfo_metacast(QAbstractAudioDeviceInfo* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractAudioDeviceInfo_tr(const char* s) {
	QString _ret = QAbstractAudioDeviceInfo::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioDeviceInfo_trUtf8(const char* s) {
	QString _ret = QAbstractAudioDeviceInfo::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QAbstractAudioDeviceInfo_preferredFormat(const QAbstractAudioDeviceInfo* self) {
	return new QAudioFormat(self->preferredFormat());
}

bool QAbstractAudioDeviceInfo_isFormatSupported(const QAbstractAudioDeviceInfo* self, QAudioFormat* format) {
	return self->isFormatSupported(*format);
}

struct miqt_string QAbstractAudioDeviceInfo_deviceName(const QAbstractAudioDeviceInfo* self) {
	QString _ret = self->deviceName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAbstractAudioDeviceInfo_supportedCodecs(QAbstractAudioDeviceInfo* self) {
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

struct miqt_array /* of int */  QAbstractAudioDeviceInfo_supportedSampleRates(QAbstractAudioDeviceInfo* self) {
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

struct miqt_array /* of int */  QAbstractAudioDeviceInfo_supportedChannelCounts(QAbstractAudioDeviceInfo* self) {
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

struct miqt_array /* of int */  QAbstractAudioDeviceInfo_supportedSampleSizes(QAbstractAudioDeviceInfo* self) {
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

struct miqt_array /* of int */  QAbstractAudioDeviceInfo_supportedByteOrders(QAbstractAudioDeviceInfo* self) {
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

struct miqt_array /* of int */  QAbstractAudioDeviceInfo_supportedSampleTypes(QAbstractAudioDeviceInfo* self) {
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

struct miqt_string QAbstractAudioDeviceInfo_tr2(const char* s, const char* c) {
	QString _ret = QAbstractAudioDeviceInfo::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioDeviceInfo_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioDeviceInfo::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioDeviceInfo_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractAudioDeviceInfo::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioDeviceInfo_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioDeviceInfo::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioDeviceInfo_delete(QAbstractAudioDeviceInfo* self) {
	delete self;
}

void QAbstractAudioOutput_virtbase(QAbstractAudioOutput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractAudioOutput_metaObject(const QAbstractAudioOutput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractAudioOutput_metacast(QAbstractAudioOutput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractAudioOutput_tr(const char* s) {
	QString _ret = QAbstractAudioOutput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioOutput_trUtf8(const char* s) {
	QString _ret = QAbstractAudioOutput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioOutput_start(QAbstractAudioOutput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAbstractAudioOutput_start2(QAbstractAudioOutput* self) {
	return self->start();
}

void QAbstractAudioOutput_stop(QAbstractAudioOutput* self) {
	self->stop();
}

void QAbstractAudioOutput_reset(QAbstractAudioOutput* self) {
	self->reset();
}

void QAbstractAudioOutput_suspend(QAbstractAudioOutput* self) {
	self->suspend();
}

void QAbstractAudioOutput_resume(QAbstractAudioOutput* self) {
	self->resume();
}

int QAbstractAudioOutput_bytesFree(const QAbstractAudioOutput* self) {
	return self->bytesFree();
}

int QAbstractAudioOutput_periodSize(const QAbstractAudioOutput* self) {
	return self->periodSize();
}

void QAbstractAudioOutput_setBufferSize(QAbstractAudioOutput* self, int value) {
	self->setBufferSize(static_cast<int>(value));
}

int QAbstractAudioOutput_bufferSize(const QAbstractAudioOutput* self) {
	return self->bufferSize();
}

void QAbstractAudioOutput_setNotifyInterval(QAbstractAudioOutput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAbstractAudioOutput_notifyInterval(const QAbstractAudioOutput* self) {
	return self->notifyInterval();
}

long long QAbstractAudioOutput_processedUSecs(const QAbstractAudioOutput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAbstractAudioOutput_elapsedUSecs(const QAbstractAudioOutput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAbstractAudioOutput_error(const QAbstractAudioOutput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAbstractAudioOutput_state(const QAbstractAudioOutput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAbstractAudioOutput_setFormat(QAbstractAudioOutput* self, QAudioFormat* fmt) {
	self->setFormat(*fmt);
}

QAudioFormat* QAbstractAudioOutput_format(const QAbstractAudioOutput* self) {
	return new QAudioFormat(self->format());
}

void QAbstractAudioOutput_setVolume(QAbstractAudioOutput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAbstractAudioOutput_volume(const QAbstractAudioOutput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

struct miqt_string QAbstractAudioOutput_category(const QAbstractAudioOutput* self) {
	QString _ret = self->category();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioOutput_setCategory(QAbstractAudioOutput* self, struct miqt_string category) {
	QString category_QString = QString::fromUtf8(category.data, category.len);
	self->setCategory(category_QString);
}

void QAbstractAudioOutput_errorChanged(QAbstractAudioOutput* self, int error) {
	self->errorChanged(static_cast<QAudio::Error>(error));
}

void QAbstractAudioOutput_connect_errorChanged(QAbstractAudioOutput* self, intptr_t slot) {
	QAbstractAudioOutput::connect(self, static_cast<void (QAbstractAudioOutput::*)(QAudio::Error)>(&QAbstractAudioOutput::errorChanged), self, [=](QAudio::Error error) {
		QAudio::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QAbstractAudioOutput_errorChanged(slot, sigval1);
	});
}

void QAbstractAudioOutput_stateChanged(QAbstractAudioOutput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAbstractAudioOutput_connect_stateChanged(QAbstractAudioOutput* self, intptr_t slot) {
	QAbstractAudioOutput::connect(self, static_cast<void (QAbstractAudioOutput::*)(QAudio::State)>(&QAbstractAudioOutput::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAbstractAudioOutput_stateChanged(slot, sigval1);
	});
}

void QAbstractAudioOutput_notify(QAbstractAudioOutput* self) {
	self->notify();
}

void QAbstractAudioOutput_connect_notify(QAbstractAudioOutput* self, intptr_t slot) {
	QAbstractAudioOutput::connect(self, static_cast<void (QAbstractAudioOutput::*)()>(&QAbstractAudioOutput::notify), self, [=]() {
		miqt_exec_callback_QAbstractAudioOutput_notify(slot);
	});
}

struct miqt_string QAbstractAudioOutput_tr2(const char* s, const char* c) {
	QString _ret = QAbstractAudioOutput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioOutput_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioOutput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioOutput_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractAudioOutput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioOutput_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioOutput::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioOutput_delete(QAbstractAudioOutput* self) {
	delete self;
}

void QAbstractAudioInput_virtbase(QAbstractAudioInput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractAudioInput_metaObject(const QAbstractAudioInput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractAudioInput_metacast(QAbstractAudioInput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractAudioInput_tr(const char* s) {
	QString _ret = QAbstractAudioInput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioInput_trUtf8(const char* s) {
	QString _ret = QAbstractAudioInput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioInput_start(QAbstractAudioInput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAbstractAudioInput_start2(QAbstractAudioInput* self) {
	return self->start();
}

void QAbstractAudioInput_stop(QAbstractAudioInput* self) {
	self->stop();
}

void QAbstractAudioInput_reset(QAbstractAudioInput* self) {
	self->reset();
}

void QAbstractAudioInput_suspend(QAbstractAudioInput* self) {
	self->suspend();
}

void QAbstractAudioInput_resume(QAbstractAudioInput* self) {
	self->resume();
}

int QAbstractAudioInput_bytesReady(const QAbstractAudioInput* self) {
	return self->bytesReady();
}

int QAbstractAudioInput_periodSize(const QAbstractAudioInput* self) {
	return self->periodSize();
}

void QAbstractAudioInput_setBufferSize(QAbstractAudioInput* self, int value) {
	self->setBufferSize(static_cast<int>(value));
}

int QAbstractAudioInput_bufferSize(const QAbstractAudioInput* self) {
	return self->bufferSize();
}

void QAbstractAudioInput_setNotifyInterval(QAbstractAudioInput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAbstractAudioInput_notifyInterval(const QAbstractAudioInput* self) {
	return self->notifyInterval();
}

long long QAbstractAudioInput_processedUSecs(const QAbstractAudioInput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAbstractAudioInput_elapsedUSecs(const QAbstractAudioInput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAbstractAudioInput_error(const QAbstractAudioInput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAbstractAudioInput_state(const QAbstractAudioInput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAbstractAudioInput_setFormat(QAbstractAudioInput* self, QAudioFormat* fmt) {
	self->setFormat(*fmt);
}

QAudioFormat* QAbstractAudioInput_format(const QAbstractAudioInput* self) {
	return new QAudioFormat(self->format());
}

void QAbstractAudioInput_setVolume(QAbstractAudioInput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAbstractAudioInput_volume(const QAbstractAudioInput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

void QAbstractAudioInput_errorChanged(QAbstractAudioInput* self, int error) {
	self->errorChanged(static_cast<QAudio::Error>(error));
}

void QAbstractAudioInput_connect_errorChanged(QAbstractAudioInput* self, intptr_t slot) {
	QAbstractAudioInput::connect(self, static_cast<void (QAbstractAudioInput::*)(QAudio::Error)>(&QAbstractAudioInput::errorChanged), self, [=](QAudio::Error error) {
		QAudio::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QAbstractAudioInput_errorChanged(slot, sigval1);
	});
}

void QAbstractAudioInput_stateChanged(QAbstractAudioInput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAbstractAudioInput_connect_stateChanged(QAbstractAudioInput* self, intptr_t slot) {
	QAbstractAudioInput::connect(self, static_cast<void (QAbstractAudioInput::*)(QAudio::State)>(&QAbstractAudioInput::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAbstractAudioInput_stateChanged(slot, sigval1);
	});
}

void QAbstractAudioInput_notify(QAbstractAudioInput* self) {
	self->notify();
}

void QAbstractAudioInput_connect_notify(QAbstractAudioInput* self, intptr_t slot) {
	QAbstractAudioInput::connect(self, static_cast<void (QAbstractAudioInput::*)()>(&QAbstractAudioInput::notify), self, [=]() {
		miqt_exec_callback_QAbstractAudioInput_notify(slot);
	});
}

struct miqt_string QAbstractAudioInput_tr2(const char* s, const char* c) {
	QString _ret = QAbstractAudioInput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioInput_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioInput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioInput_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractAudioInput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractAudioInput_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractAudioInput::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractAudioInput_delete(QAbstractAudioInput* self) {
	delete self;
}

