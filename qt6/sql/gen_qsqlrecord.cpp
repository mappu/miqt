#include <QSqlField>
#include <QSqlRecord>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsqlrecord.h>
#include "gen_qsqlrecord.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSqlRecord* QSqlRecord_new() {
	return new (std::nothrow) QSqlRecord();
}

QSqlRecord* QSqlRecord_new2(QSqlRecord* other) {
	return new (std::nothrow) QSqlRecord(*other);
}

void QSqlRecord_operatorAssign(QSqlRecord* self, QSqlRecord* other) {
	self->operator=(*other);
}

bool QSqlRecord_operatorEqual(const QSqlRecord* self, QSqlRecord* other) {
	return (*self == *other);
}

bool QSqlRecord_operatorNotEqual(const QSqlRecord* self, QSqlRecord* other) {
	return (*self != *other);
}

QVariant* QSqlRecord_value(const QSqlRecord* self, int i) {
	return new QVariant(self->value(static_cast<int>(i)));
}

QVariant* QSqlRecord_valueWithName(const QSqlRecord* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->value(name_QString));
}

void QSqlRecord_setValue(QSqlRecord* self, int i, QVariant* val) {
	self->setValue(static_cast<int>(i), *val);
}

void QSqlRecord_setValue2(QSqlRecord* self, struct miqt_string name, QVariant* val) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setValue(name_QString, *val);
}

void QSqlRecord_setNull(QSqlRecord* self, int i) {
	self->setNull(static_cast<int>(i));
}

void QSqlRecord_setNullWithName(QSqlRecord* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setNull(name_QString);
}

bool QSqlRecord_isNull(const QSqlRecord* self, int i) {
	return self->isNull(static_cast<int>(i));
}

bool QSqlRecord_isNullWithName(const QSqlRecord* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->isNull(name_QString);
}

int QSqlRecord_indexOf(const QSqlRecord* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->indexOf(name_QString);
}

struct miqt_string QSqlRecord_fieldName(const QSqlRecord* self, int i) {
	QString _ret = self->fieldName(static_cast<int>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSqlField* QSqlRecord_field(const QSqlRecord* self, int i) {
	return new QSqlField(self->field(static_cast<int>(i)));
}

QSqlField* QSqlRecord_fieldWithName(const QSqlRecord* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QSqlField(self->field(name_QString));
}

bool QSqlRecord_isGenerated(const QSqlRecord* self, int i) {
	return self->isGenerated(static_cast<int>(i));
}

bool QSqlRecord_isGeneratedWithName(const QSqlRecord* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->isGenerated(name_QString);
}

void QSqlRecord_setGenerated(QSqlRecord* self, struct miqt_string name, bool generated) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setGenerated(name_QString, generated);
}

void QSqlRecord_setGenerated2(QSqlRecord* self, int i, bool generated) {
	self->setGenerated(static_cast<int>(i), generated);
}

void QSqlRecord_append(QSqlRecord* self, QSqlField* field) {
	self->append(*field);
}

void QSqlRecord_replace(QSqlRecord* self, int pos, QSqlField* field) {
	self->replace(static_cast<int>(pos), *field);
}

void QSqlRecord_insert(QSqlRecord* self, int pos, QSqlField* field) {
	self->insert(static_cast<int>(pos), *field);
}

void QSqlRecord_remove(QSqlRecord* self, int pos) {
	self->remove(static_cast<int>(pos));
}

bool QSqlRecord_isEmpty(const QSqlRecord* self) {
	return self->isEmpty();
}

bool QSqlRecord_contains(const QSqlRecord* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->contains(name_QString);
}

void QSqlRecord_clear(QSqlRecord* self) {
	self->clear();
}

void QSqlRecord_clearValues(QSqlRecord* self) {
	self->clearValues();
}

int QSqlRecord_count(const QSqlRecord* self) {
	return self->count();
}

QSqlRecord* QSqlRecord_keyValues(const QSqlRecord* self, QSqlRecord* keyFields) {
	return new QSqlRecord(self->keyValues(*keyFields));
}

void QSqlRecord_delete(QSqlRecord* self) {
	delete self;
}

