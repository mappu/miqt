#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <qwt_sampling_thread.h>
#include "gen_qwt_sampling_thread.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QwtSamplingThread_virtbase(QwtSamplingThread* src, QThread** outptr_QThread) {
	*outptr_QThread = static_cast<QThread*>(src);
}

QMetaObject* QwtSamplingThread_metaObject(const QwtSamplingThread* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtSamplingThread_metacast(QwtSamplingThread* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtSamplingThread_tr(const char* s) {
	QString _ret = QwtSamplingThread::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtSamplingThread_trUtf8(const char* s) {
	QString _ret = QwtSamplingThread::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QwtSamplingThread_interval(const QwtSamplingThread* self) {
	return self->interval();
}

double QwtSamplingThread_elapsed(const QwtSamplingThread* self) {
	return self->elapsed();
}

void QwtSamplingThread_setInterval(QwtSamplingThread* self, double interval) {
	self->setInterval(static_cast<double>(interval));
}

void QwtSamplingThread_stop(QwtSamplingThread* self) {
	self->stop();
}

struct miqt_string QwtSamplingThread_tr2(const char* s, const char* c) {
	QString _ret = QwtSamplingThread::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtSamplingThread_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtSamplingThread::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtSamplingThread_trUtf82(const char* s, const char* c) {
	QString _ret = QwtSamplingThread::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtSamplingThread_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtSamplingThread::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtSamplingThread_delete(QwtSamplingThread* self) {
	delete self;
}

