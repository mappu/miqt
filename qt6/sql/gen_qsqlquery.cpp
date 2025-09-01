#include <QList>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsqlquery.h>
#include "gen_qsqlquery.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSqlQuery* QSqlQuery_new(QSqlResult* r) {
	return new (std::nothrow) QSqlQuery(r);
}

QSqlQuery* QSqlQuery_new2() {
	return new (std::nothrow) QSqlQuery();
}

QSqlQuery* QSqlQuery_new3(QSqlDatabase* db) {
	return new (std::nothrow) QSqlQuery(*db);
}

QSqlQuery* QSqlQuery_new4(QSqlQuery* other) {
	return new (std::nothrow) QSqlQuery(*other);
}

QSqlQuery* QSqlQuery_new5(struct miqt_string query) {
	QString query_QString = QString::fromUtf8(query.data, query.len);
	return new (std::nothrow) QSqlQuery(query_QString);
}

QSqlQuery* QSqlQuery_new6(struct miqt_string query, QSqlDatabase* db) {
	QString query_QString = QString::fromUtf8(query.data, query.len);
	return new (std::nothrow) QSqlQuery(query_QString, *db);
}

void QSqlQuery_operatorAssign(QSqlQuery* self, QSqlQuery* other) {
	self->operator=(*other);
}

void QSqlQuery_swap(QSqlQuery* self, QSqlQuery* other) {
	self->swap(*other);
}

bool QSqlQuery_isValid(const QSqlQuery* self) {
	return self->isValid();
}

bool QSqlQuery_isActive(const QSqlQuery* self) {
	return self->isActive();
}

bool QSqlQuery_isNull(const QSqlQuery* self, int field) {
	return self->isNull(static_cast<int>(field));
}

bool QSqlQuery_isNullWithName(const QSqlQuery* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->isNull(name_QString);
}

int QSqlQuery_at(const QSqlQuery* self) {
	return self->at();
}

struct miqt_string QSqlQuery_lastQuery(const QSqlQuery* self) {
	QString _ret = self->lastQuery();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSqlQuery_numRowsAffected(const QSqlQuery* self) {
	return self->numRowsAffected();
}

QSqlError* QSqlQuery_lastError(const QSqlQuery* self) {
	return new QSqlError(self->lastError());
}

bool QSqlQuery_isSelect(const QSqlQuery* self) {
	return self->isSelect();
}

int QSqlQuery_size(const QSqlQuery* self) {
	return self->size();
}

QSqlDriver* QSqlQuery_driver(const QSqlQuery* self) {
	return (QSqlDriver*) self->driver();
}

QSqlResult* QSqlQuery_result(const QSqlQuery* self) {
	return (QSqlResult*) self->result();
}

bool QSqlQuery_isForwardOnly(const QSqlQuery* self) {
	return self->isForwardOnly();
}

QSqlRecord* QSqlQuery_record(const QSqlQuery* self) {
	return new QSqlRecord(self->record());
}

void QSqlQuery_setForwardOnly(QSqlQuery* self, bool forward) {
	self->setForwardOnly(forward);
}

bool QSqlQuery_exec(QSqlQuery* self, struct miqt_string query) {
	QString query_QString = QString::fromUtf8(query.data, query.len);
	return self->exec(query_QString);
}

QVariant* QSqlQuery_value(const QSqlQuery* self, int i) {
	return new QVariant(self->value(static_cast<int>(i)));
}

QVariant* QSqlQuery_valueWithName(const QSqlQuery* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->value(name_QString));
}

void QSqlQuery_setNumericalPrecisionPolicy(QSqlQuery* self, int precisionPolicy) {
	self->setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(precisionPolicy));
}

int QSqlQuery_numericalPrecisionPolicy(const QSqlQuery* self) {
	QSql::NumericalPrecisionPolicy _ret = self->numericalPrecisionPolicy();
	return static_cast<int>(_ret);
}

bool QSqlQuery_seek(QSqlQuery* self, int i) {
	return self->seek(static_cast<int>(i));
}

bool QSqlQuery_next(QSqlQuery* self) {
	return self->next();
}

bool QSqlQuery_previous(QSqlQuery* self) {
	return self->previous();
}

bool QSqlQuery_first(QSqlQuery* self) {
	return self->first();
}

bool QSqlQuery_last(QSqlQuery* self) {
	return self->last();
}

void QSqlQuery_clear(QSqlQuery* self) {
	self->clear();
}

bool QSqlQuery_exec2(QSqlQuery* self) {
	return self->exec();
}

bool QSqlQuery_execBatch(QSqlQuery* self) {
	return self->execBatch();
}

bool QSqlQuery_prepare(QSqlQuery* self, struct miqt_string query) {
	QString query_QString = QString::fromUtf8(query.data, query.len);
	return self->prepare(query_QString);
}

void QSqlQuery_bindValue(QSqlQuery* self, struct miqt_string placeholder, QVariant* val) {
	QString placeholder_QString = QString::fromUtf8(placeholder.data, placeholder.len);
	self->bindValue(placeholder_QString, *val);
}

void QSqlQuery_bindValue2(QSqlQuery* self, int pos, QVariant* val) {
	self->bindValue(static_cast<int>(pos), *val);
}

void QSqlQuery_addBindValue(QSqlQuery* self, QVariant* val) {
	self->addBindValue(*val);
}

QVariant* QSqlQuery_boundValue(const QSqlQuery* self, struct miqt_string placeholder) {
	QString placeholder_QString = QString::fromUtf8(placeholder.data, placeholder.len);
	return new QVariant(self->boundValue(placeholder_QString));
}

QVariant* QSqlQuery_boundValueWithPos(const QSqlQuery* self, int pos) {
	return new QVariant(self->boundValue(static_cast<int>(pos)));
}

struct miqt_array /* of QVariant* */  QSqlQuery_boundValues(const QSqlQuery* self) {
	QVariantList _ret = self->boundValues();
	// Convert QList<> from C++ memory to manually-managed C memory
	QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QVariant(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QSqlQuery_executedQuery(const QSqlQuery* self) {
	QString _ret = self->executedQuery();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QSqlQuery_lastInsertId(const QSqlQuery* self) {
	return new QVariant(self->lastInsertId());
}

void QSqlQuery_finish(QSqlQuery* self) {
	self->finish();
}

bool QSqlQuery_nextResult(QSqlQuery* self) {
	return self->nextResult();
}

bool QSqlQuery_seek2(QSqlQuery* self, int i, bool relative) {
	return self->seek(static_cast<int>(i), relative);
}

bool QSqlQuery_execBatchWithMode(QSqlQuery* self, int mode) {
	return self->execBatch(static_cast<QSqlQuery::BatchExecutionMode>(mode));
}

void QSqlQuery_bindValue3(QSqlQuery* self, struct miqt_string placeholder, QVariant* val, int type) {
	QString placeholder_QString = QString::fromUtf8(placeholder.data, placeholder.len);
	self->bindValue(placeholder_QString, *val, static_cast<QSql::ParamType>(type));
}

void QSqlQuery_bindValue4(QSqlQuery* self, int pos, QVariant* val, int type) {
	self->bindValue(static_cast<int>(pos), *val, static_cast<QSql::ParamType>(type));
}

void QSqlQuery_addBindValue2(QSqlQuery* self, QVariant* val, int type) {
	self->addBindValue(*val, static_cast<QSql::ParamType>(type));
}

void QSqlQuery_delete(QSqlQuery* self) {
	delete self;
}

