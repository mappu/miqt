#include <QMediaControl>
#include <QMediaVideoProbeControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVideoFrame>
#include <qmediavideoprobecontrol.h>
#include "gen_qmediavideoprobecontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaVideoProbeControl_videoFrameProbed(intptr_t, QVideoFrame*);
void miqt_exec_callback_QMediaVideoProbeControl_flush(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QMediaVideoProbeControl_virtbase(QMediaVideoProbeControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMediaVideoProbeControl_metaObject(const QMediaVideoProbeControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaVideoProbeControl_metacast(QMediaVideoProbeControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaVideoProbeControl_tr(const char* s) {
	QString _ret = QMediaVideoProbeControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaVideoProbeControl_trUtf8(const char* s) {
	QString _ret = QMediaVideoProbeControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaVideoProbeControl_videoFrameProbed(QMediaVideoProbeControl* self, QVideoFrame* frame) {
	self->videoFrameProbed(*frame);
}

void QMediaVideoProbeControl_connect_videoFrameProbed(QMediaVideoProbeControl* self, intptr_t slot) {
	QMediaVideoProbeControl::connect(self, static_cast<void (QMediaVideoProbeControl::*)(const QVideoFrame&)>(&QMediaVideoProbeControl::videoFrameProbed), self, [=](const QVideoFrame& frame) {
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval1 = const_cast<QVideoFrame*>(&frame_ret);
		miqt_exec_callback_QMediaVideoProbeControl_videoFrameProbed(slot, sigval1);
	});
}

void QMediaVideoProbeControl_flush(QMediaVideoProbeControl* self) {
	self->flush();
}

void QMediaVideoProbeControl_connect_flush(QMediaVideoProbeControl* self, intptr_t slot) {
	QMediaVideoProbeControl::connect(self, static_cast<void (QMediaVideoProbeControl::*)()>(&QMediaVideoProbeControl::flush), self, [=]() {
		miqt_exec_callback_QMediaVideoProbeControl_flush(slot);
	});
}

struct miqt_string QMediaVideoProbeControl_tr2(const char* s, const char* c) {
	QString _ret = QMediaVideoProbeControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaVideoProbeControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaVideoProbeControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaVideoProbeControl_trUtf82(const char* s, const char* c) {
	QString _ret = QMediaVideoProbeControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaVideoProbeControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaVideoProbeControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaVideoProbeControl_delete(QMediaVideoProbeControl* self) {
	delete self;
}

