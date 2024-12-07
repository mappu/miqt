#include <QMediaControl>
#include <QMediaService>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaservice.h>
#include "gen_qmediaservice.h"
#include "_cgo_export.h"

void QMediaService_virtbase(QMediaService* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMediaService_MetaObject(const QMediaService* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaService_Metacast(QMediaService* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaService_Tr(const char* s) {
	QString _ret = QMediaService::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaService_TrUtf8(const char* s) {
	QString _ret = QMediaService::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaControl* QMediaService_RequestControl(QMediaService* self, const char* name) {
	return self->requestControl(name);
}

void QMediaService_ReleaseControl(QMediaService* self, QMediaControl* control) {
	self->releaseControl(control);
}

struct miqt_string QMediaService_Tr2(const char* s, const char* c) {
	QString _ret = QMediaService::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaService_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaService::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaService_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaService::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaService_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaService::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaService_Delete(QMediaService* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaService*>( self );
	} else {
		delete self;
	}
}

