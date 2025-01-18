#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebDatabase>
#include <QWebSecurityOrigin>
#include <qwebdatabase.h>
#include "gen_qwebdatabase.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebDatabase* QWebDatabase_new(QWebDatabase* other) {
	return new QWebDatabase(*other);
}

void QWebDatabase_OperatorAssign(QWebDatabase* self, QWebDatabase* other) {
	self->operator=(*other);
}

struct miqt_string QWebDatabase_Name(const QWebDatabase* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebDatabase_DisplayName(const QWebDatabase* self) {
	QString _ret = self->displayName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QWebDatabase_ExpectedSize(const QWebDatabase* self) {
	qint64 _ret = self->expectedSize();
	return static_cast<long long>(_ret);
}

long long QWebDatabase_Size(const QWebDatabase* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

struct miqt_string QWebDatabase_FileName(const QWebDatabase* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebSecurityOrigin* QWebDatabase_Origin(const QWebDatabase* self) {
	return new QWebSecurityOrigin(self->origin());
}

void QWebDatabase_RemoveDatabase(QWebDatabase* param1) {
	QWebDatabase::removeDatabase(*param1);
}

void QWebDatabase_RemoveAllDatabases() {
	QWebDatabase::removeAllDatabases();
}

void QWebDatabase_Delete(QWebDatabase* self) {
	delete self;
}

