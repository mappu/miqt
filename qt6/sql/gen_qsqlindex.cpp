#include <QSqlField>
#include <QSqlIndex>
#include <QSqlRecord>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsqlindex.h>
#include "gen_qsqlindex.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSqlIndex* QSqlIndex_new() {
	return new (std::nothrow) QSqlIndex();
}

QSqlIndex* QSqlIndex_new2(QSqlIndex* other) {
	return new (std::nothrow) QSqlIndex(*other);
}

QSqlIndex* QSqlIndex_new3(struct miqt_string cursorName) {
	QString cursorName_QString = QString::fromUtf8(cursorName.data, cursorName.len);
	return new (std::nothrow) QSqlIndex(cursorName_QString);
}

QSqlIndex* QSqlIndex_new4(struct miqt_string cursorName, struct miqt_string name) {
	QString cursorName_QString = QString::fromUtf8(cursorName.data, cursorName.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QSqlIndex(cursorName_QString, name_QString);
}

void QSqlIndex_virtbase(QSqlIndex* src, QSqlRecord** outptr_QSqlRecord) {
	*outptr_QSqlRecord = static_cast<QSqlRecord*>(src);
}

void QSqlIndex_operatorAssign(QSqlIndex* self, QSqlIndex* other) {
	self->operator=(*other);
}

void QSqlIndex_setCursorName(QSqlIndex* self, struct miqt_string cursorName) {
	QString cursorName_QString = QString::fromUtf8(cursorName.data, cursorName.len);
	self->setCursorName(cursorName_QString);
}

struct miqt_string QSqlIndex_cursorName(const QSqlIndex* self) {
	QString _ret = self->cursorName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSqlIndex_setName(QSqlIndex* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string QSqlIndex_name(const QSqlIndex* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSqlIndex_append(QSqlIndex* self, QSqlField* field) {
	self->append(*field);
}

void QSqlIndex_append2(QSqlIndex* self, QSqlField* field, bool desc) {
	self->append(*field, desc);
}

bool QSqlIndex_isDescending(const QSqlIndex* self, int i) {
	return self->isDescending(static_cast<int>(i));
}

void QSqlIndex_setDescending(QSqlIndex* self, int i, bool desc) {
	self->setDescending(static_cast<int>(i), desc);
}

void QSqlIndex_delete(QSqlIndex* self) {
	delete self;
}

