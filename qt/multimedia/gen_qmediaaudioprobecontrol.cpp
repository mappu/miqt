#include <QAudioBuffer>
#include <QMediaAudioProbeControl>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaaudioprobecontrol.h>
#include "gen_qmediaaudioprobecontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaAudioProbeControl_audioBufferProbed(intptr_t, QAudioBuffer*);
void miqt_exec_callback_QMediaAudioProbeControl_flush(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QMediaAudioProbeControl_virtbase(QMediaAudioProbeControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMediaAudioProbeControl_metaObject(const QMediaAudioProbeControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaAudioProbeControl_metacast(QMediaAudioProbeControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaAudioProbeControl_tr(const char* s) {
	QString _ret = QMediaAudioProbeControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAudioProbeControl_trUtf8(const char* s) {
	QString _ret = QMediaAudioProbeControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaAudioProbeControl_audioBufferProbed(QMediaAudioProbeControl* self, QAudioBuffer* buffer) {
	self->audioBufferProbed(*buffer);
}

void QMediaAudioProbeControl_connect_audioBufferProbed(QMediaAudioProbeControl* self, intptr_t slot) {
	QMediaAudioProbeControl::connect(self, static_cast<void (QMediaAudioProbeControl::*)(const QAudioBuffer&)>(&QMediaAudioProbeControl::audioBufferProbed), self, [=](const QAudioBuffer& buffer) {
		const QAudioBuffer& buffer_ret = buffer;
		// Cast returned reference into pointer
		QAudioBuffer* sigval1 = const_cast<QAudioBuffer*>(&buffer_ret);
		miqt_exec_callback_QMediaAudioProbeControl_audioBufferProbed(slot, sigval1);
	});
}

void QMediaAudioProbeControl_flush(QMediaAudioProbeControl* self) {
	self->flush();
}

void QMediaAudioProbeControl_connect_flush(QMediaAudioProbeControl* self, intptr_t slot) {
	QMediaAudioProbeControl::connect(self, static_cast<void (QMediaAudioProbeControl::*)()>(&QMediaAudioProbeControl::flush), self, [=]() {
		miqt_exec_callback_QMediaAudioProbeControl_flush(slot);
	});
}

struct miqt_string QMediaAudioProbeControl_tr2(const char* s, const char* c) {
	QString _ret = QMediaAudioProbeControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAudioProbeControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaAudioProbeControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAudioProbeControl_trUtf82(const char* s, const char* c) {
	QString _ret = QMediaAudioProbeControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAudioProbeControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaAudioProbeControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaAudioProbeControl_delete(QMediaAudioProbeControl* self) {
	delete self;
}

