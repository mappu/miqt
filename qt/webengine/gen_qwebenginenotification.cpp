#include <QImage>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineNotification>
#include <qwebenginenotification.h>
#include "gen_qwebenginenotification.h"
#include "_cgo_export.h"

QMetaObject* QWebEngineNotification_MetaObject(const QWebEngineNotification* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineNotification_Metacast(QWebEngineNotification* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineNotification_Tr(const char* s) {
	QString _ret = QWebEngineNotification::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_TrUtf8(const char* s) {
	QString _ret = QWebEngineNotification::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineNotification_Matches(const QWebEngineNotification* self, QWebEngineNotification* other) {
	return self->matches(other);
}

QUrl* QWebEngineNotification_Origin(const QWebEngineNotification* self) {
	return new QUrl(self->origin());
}

QImage* QWebEngineNotification_Icon(const QWebEngineNotification* self) {
	return new QImage(self->icon());
}

struct miqt_string QWebEngineNotification_Title(const QWebEngineNotification* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_Message(const QWebEngineNotification* self) {
	QString _ret = self->message();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_Tag(const QWebEngineNotification* self) {
	QString _ret = self->tag();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_Language(const QWebEngineNotification* self) {
	QString _ret = self->language();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWebEngineNotification_Direction(const QWebEngineNotification* self) {
	Qt::LayoutDirection _ret = self->direction();
	return static_cast<int>(_ret);
}

void QWebEngineNotification_Show(const QWebEngineNotification* self) {
	self->show();
}

void QWebEngineNotification_Click(const QWebEngineNotification* self) {
	self->click();
}

void QWebEngineNotification_Close(const QWebEngineNotification* self) {
	self->close();
}

void QWebEngineNotification_Closed(QWebEngineNotification* self) {
	self->closed();
}

void QWebEngineNotification_connect_Closed(QWebEngineNotification* self, intptr_t slot) {
	QWebEngineNotification::connect(self, static_cast<void (QWebEngineNotification::*)()>(&QWebEngineNotification::closed), self, [=]() {
		miqt_exec_callback_QWebEngineNotification_Closed(slot);
	});
}

struct miqt_string QWebEngineNotification_Tr2(const char* s, const char* c) {
	QString _ret = QWebEngineNotification::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineNotification::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebEngineNotification::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNotification_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebEngineNotification::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineNotification_Delete(QWebEngineNotification* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineNotification*>( self );
	} else {
		delete self;
	}
}

