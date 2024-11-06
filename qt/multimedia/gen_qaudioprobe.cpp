#include <QAudioBuffer>
#include <QAudioProbe>
#include <QMediaObject>
#include <QMediaRecorder>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qaudioprobe.h>
#include "gen_qaudioprobe.h"
#include "_cgo_export.h"

QAudioProbe* QAudioProbe_new() {
	return new QAudioProbe();
}

QAudioProbe* QAudioProbe_new2(QObject* parent) {
	return new QAudioProbe(parent);
}

QMetaObject* QAudioProbe_MetaObject(const QAudioProbe* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioProbe_Metacast(QAudioProbe* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioProbe_Tr(const char* s) {
	QString _ret = QAudioProbe::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_TrUtf8(const char* s) {
	QString _ret = QAudioProbe::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioProbe_SetSource(QAudioProbe* self, QMediaObject* source) {
	return self->setSource(source);
}

bool QAudioProbe_SetSourceWithSource(QAudioProbe* self, QMediaRecorder* source) {
	return self->setSource(source);
}

bool QAudioProbe_IsActive(const QAudioProbe* self) {
	return self->isActive();
}

void QAudioProbe_AudioBufferProbed(QAudioProbe* self, QAudioBuffer* buffer) {
	self->audioBufferProbed(*buffer);
}

void QAudioProbe_connect_AudioBufferProbed(QAudioProbe* self, intptr_t slot) {
	QAudioProbe::connect(self, static_cast<void (QAudioProbe::*)(const QAudioBuffer&)>(&QAudioProbe::audioBufferProbed), self, [=](const QAudioBuffer& buffer) {
		const QAudioBuffer& buffer_ret = buffer;
		// Cast returned reference into pointer
		QAudioBuffer* sigval1 = const_cast<QAudioBuffer*>(&buffer_ret);
		miqt_exec_callback_QAudioProbe_AudioBufferProbed(slot, sigval1);
	});
}

void QAudioProbe_Flush(QAudioProbe* self) {
	self->flush();
}

void QAudioProbe_connect_Flush(QAudioProbe* self, intptr_t slot) {
	QAudioProbe::connect(self, static_cast<void (QAudioProbe::*)()>(&QAudioProbe::flush), self, [=]() {
		miqt_exec_callback_QAudioProbe_Flush(slot);
	});
}

struct miqt_string QAudioProbe_Tr2(const char* s, const char* c) {
	QString _ret = QAudioProbe::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioProbe::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_TrUtf82(const char* s, const char* c) {
	QString _ret = QAudioProbe::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioProbe_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioProbe::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioProbe_Delete(QAudioProbe* self) {
	delete self;
}

