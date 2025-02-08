#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineNotification>
#include <qwebenginenotification.h>
#include "gen_qwebenginenotification.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebEngineNotification_closed(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QWebEngineNotification_virtbase(QWebEngineNotification* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineNotification_metaObject(const QWebEngineNotification* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineNotification_metacast(QWebEngineNotification* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineNotification_tr(const char* s) {
	QString _ret = QWebEngineNotification::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_trUtf8(const char* s) {
	QString _ret = QWebEngineNotification::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineNotification_matches(const QWebEngineNotification* self, QWebEngineNotification* other) {
	return self->matches(other);
}

QUrl* QWebEngineNotification_origin(const QWebEngineNotification* self) {
	return new QUrl(self->origin());
}

QImage* QWebEngineNotification_icon(const QWebEngineNotification* self) {
	return new QImage(self->icon());
}

struct miqt_string QWebEngineNotification_title(const QWebEngineNotification* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_message(const QWebEngineNotification* self) {
	QString _ret = self->message();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_tag(const QWebEngineNotification* self) {
	QString _ret = self->tag();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_language(const QWebEngineNotification* self) {
	QString _ret = self->language();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWebEngineNotification_direction(const QWebEngineNotification* self) {
	Qt::LayoutDirection _ret = self->direction();
	return static_cast<int>(_ret);
}

void QWebEngineNotification_show(const QWebEngineNotification* self) {
	self->show();
}

void QWebEngineNotification_click(const QWebEngineNotification* self) {
	self->click();
}

void QWebEngineNotification_close(const QWebEngineNotification* self) {
	self->close();
}

void QWebEngineNotification_closed(QWebEngineNotification* self) {
	self->closed();
}

void QWebEngineNotification_connect_closed(QWebEngineNotification* self, intptr_t slot) {
	QWebEngineNotification::connect(self, static_cast<void (QWebEngineNotification::*)()>(&QWebEngineNotification::closed), self, [=]() {
		miqt_exec_callback_QWebEngineNotification_closed(slot);
	});
}

struct miqt_string QWebEngineNotification_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineNotification::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineNotification::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_trUtf82(const char* s, const char* c) {
	QString _ret = QWebEngineNotification::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebEngineNotification::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineNotification_delete(QWebEngineNotification* self) {
	delete self;
}

