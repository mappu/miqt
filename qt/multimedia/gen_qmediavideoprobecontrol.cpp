#include <QMediaControl>
#include <QMediaVideoProbeControl>
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

void miqt_exec_callback_QMediaVideoProbeControl_VideoFrameProbed(intptr_t, QVideoFrame*);
void miqt_exec_callback_QMediaVideoProbeControl_Flush(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QMediaVideoProbeControl_virtbase(QMediaVideoProbeControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMediaVideoProbeControl_MetaObject(const QMediaVideoProbeControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaVideoProbeControl_Metacast(QMediaVideoProbeControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaVideoProbeControl_Tr(const char* s) {
	QString _ret = QMediaVideoProbeControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaVideoProbeControl_TrUtf8(const char* s) {
	QString _ret = QMediaVideoProbeControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaVideoProbeControl_VideoFrameProbed(QMediaVideoProbeControl* self, QVideoFrame* frame) {
	self->videoFrameProbed(*frame);
}

void QMediaVideoProbeControl_connect_VideoFrameProbed(QMediaVideoProbeControl* self, intptr_t slot) {
	QMediaVideoProbeControl::connect(self, static_cast<void (QMediaVideoProbeControl::*)(const QVideoFrame&)>(&QMediaVideoProbeControl::videoFrameProbed), self, [=](const QVideoFrame& frame) {
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval1 = const_cast<QVideoFrame*>(&frame_ret);
		miqt_exec_callback_QMediaVideoProbeControl_VideoFrameProbed(slot, sigval1);
	});
}

void QMediaVideoProbeControl_Flush(QMediaVideoProbeControl* self) {
	self->flush();
}

void QMediaVideoProbeControl_connect_Flush(QMediaVideoProbeControl* self, intptr_t slot) {
	QMediaVideoProbeControl::connect(self, static_cast<void (QMediaVideoProbeControl::*)()>(&QMediaVideoProbeControl::flush), self, [=]() {
		miqt_exec_callback_QMediaVideoProbeControl_Flush(slot);
	});
}

struct miqt_string QMediaVideoProbeControl_Tr2(const char* s, const char* c) {
	QString _ret = QMediaVideoProbeControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaVideoProbeControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaVideoProbeControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaVideoProbeControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaVideoProbeControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaVideoProbeControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaVideoProbeControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaVideoProbeControl_Delete(QMediaVideoProbeControl* self) {
	delete self;
}

