#include <QAudioBuffer>
#include <QMediaAudioProbeControl>
#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaaudioprobecontrol.h>
#include "gen_qmediaaudioprobecontrol.h"
#include "_cgo_export.h"

QMetaObject* QMediaAudioProbeControl_MetaObject(const QMediaAudioProbeControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaAudioProbeControl_Metacast(QMediaAudioProbeControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaAudioProbeControl_Tr(const char* s) {
	QString _ret = QMediaAudioProbeControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAudioProbeControl_TrUtf8(const char* s) {
	QString _ret = QMediaAudioProbeControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaAudioProbeControl_AudioBufferProbed(QMediaAudioProbeControl* self, QAudioBuffer* buffer) {
	self->audioBufferProbed(*buffer);
}

void QMediaAudioProbeControl_connect_AudioBufferProbed(QMediaAudioProbeControl* self, intptr_t slot) {
	QMediaAudioProbeControl::connect(self, static_cast<void (QMediaAudioProbeControl::*)(const QAudioBuffer&)>(&QMediaAudioProbeControl::audioBufferProbed), self, [=](const QAudioBuffer& buffer) {
		const QAudioBuffer& buffer_ret = buffer;
		// Cast returned reference into pointer
		QAudioBuffer* sigval1 = const_cast<QAudioBuffer*>(&buffer_ret);
		miqt_exec_callback_QMediaAudioProbeControl_AudioBufferProbed(slot, sigval1);
	});
}

void QMediaAudioProbeControl_Flush(QMediaAudioProbeControl* self) {
	self->flush();
}

void QMediaAudioProbeControl_connect_Flush(QMediaAudioProbeControl* self, intptr_t slot) {
	QMediaAudioProbeControl::connect(self, static_cast<void (QMediaAudioProbeControl::*)()>(&QMediaAudioProbeControl::flush), self, [=]() {
		miqt_exec_callback_QMediaAudioProbeControl_Flush(slot);
	});
}

struct miqt_string QMediaAudioProbeControl_Tr2(const char* s, const char* c) {
	QString _ret = QMediaAudioProbeControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAudioProbeControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaAudioProbeControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAudioProbeControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaAudioProbeControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAudioProbeControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaAudioProbeControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaAudioProbeControl_Delete(QMediaAudioProbeControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaAudioProbeControl*>( self );
	} else {
		delete self;
	}
}

