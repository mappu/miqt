#include <QMetaType>
#include <QSqlField>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsqlfield.h>
#include "gen_qsqlfield.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSqlField* QSqlField_new() {
	return new (std::nothrow) QSqlField();
}

QSqlField* QSqlField_new2(QSqlField* other) {
	return new (std::nothrow) QSqlField(*other);
}

QSqlField* QSqlField_new3(struct miqt_string fieldName, int type) {
	QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
	return new (std::nothrow) QSqlField(fieldName_QString, static_cast<QVariant::Type>(type));
}

QSqlField* QSqlField_new4(struct miqt_string fieldName) {
	QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
	return new (std::nothrow) QSqlField(fieldName_QString);
}

QSqlField* QSqlField_new5(struct miqt_string fieldName, QMetaType* type) {
	QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
	return new (std::nothrow) QSqlField(fieldName_QString, *type);
}

QSqlField* QSqlField_new6(struct miqt_string fieldName, QMetaType* type, struct miqt_string tableName) {
	QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	return new (std::nothrow) QSqlField(fieldName_QString, *type, tableName_QString);
}

QSqlField* QSqlField_new7(struct miqt_string fieldName, int type, struct miqt_string tableName) {
	QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	return new (std::nothrow) QSqlField(fieldName_QString, static_cast<QVariant::Type>(type), tableName_QString);
}

void QSqlField_operatorAssign(QSqlField* self, QSqlField* other) {
	self->operator=(*other);
}

bool QSqlField_operatorEqual(const QSqlField* self, QSqlField* other) {
	return (*self == *other);
}

bool QSqlField_operatorNotEqual(const QSqlField* self, QSqlField* other) {
	return (*self != *other);
}

void QSqlField_setValue(QSqlField* self, QVariant* value) {
	self->setValue(*value);
}

QVariant* QSqlField_value(const QSqlField* self) {
	return new QVariant(self->value());
}

void QSqlField_setName(QSqlField* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string QSqlField_name(const QSqlField* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSqlField_setTableName(QSqlField* self, struct miqt_string tableName) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	self->setTableName(tableName_QString);
}

struct miqt_string QSqlField_tableName(const QSqlField* self) {
	QString _ret = self->tableName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlField_isNull(const QSqlField* self) {
	return self->isNull();
}

void QSqlField_setReadOnly(QSqlField* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

bool QSqlField_isReadOnly(const QSqlField* self) {
	return self->isReadOnly();
}

void QSqlField_clear(QSqlField* self) {
	self->clear();
}

bool QSqlField_isAutoValue(const QSqlField* self) {
	return self->isAutoValue();
}

QMetaType* QSqlField_metaType(const QSqlField* self) {
	return new QMetaType(self->metaType());
}

void QSqlField_setMetaType(QSqlField* self, QMetaType* type) {
	self->setMetaType(*type);
}

int QSqlField_type(const QSqlField* self) {
	QVariant::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QSqlField_setType(QSqlField* self, int type) {
	self->setType(static_cast<QVariant::Type>(type));
}

void QSqlField_setRequiredStatus(QSqlField* self, int status) {
	self->setRequiredStatus(static_cast<QSqlField::RequiredStatus>(status));
}

void QSqlField_setRequired(QSqlField* self, bool required) {
	self->setRequired(required);
}

void QSqlField_setLength(QSqlField* self, int fieldLength) {
	self->setLength(static_cast<int>(fieldLength));
}

void QSqlField_setPrecision(QSqlField* self, int precision) {
	self->setPrecision(static_cast<int>(precision));
}

void QSqlField_setDefaultValue(QSqlField* self, QVariant* value) {
	self->setDefaultValue(*value);
}

void QSqlField_setSqlType(QSqlField* self, int type) {
	self->setSqlType(static_cast<int>(type));
}

void QSqlField_setGenerated(QSqlField* self, bool gen) {
	self->setGenerated(gen);
}

void QSqlField_setAutoValue(QSqlField* self, bool autoVal) {
	self->setAutoValue(autoVal);
}

int QSqlField_requiredStatus(const QSqlField* self) {
	QSqlField::RequiredStatus _ret = self->requiredStatus();
	return static_cast<int>(_ret);
}

int QSqlField_length(const QSqlField* self) {
	return self->length();
}

int QSqlField_precision(const QSqlField* self) {
	return self->precision();
}

QVariant* QSqlField_defaultValue(const QSqlField* self) {
	return new QVariant(self->defaultValue());
}

int QSqlField_typeID(const QSqlField* self) {
	return self->typeID();
}

bool QSqlField_isGenerated(const QSqlField* self) {
	return self->isGenerated();
}

bool QSqlField_isValid(const QSqlField* self) {
	return self->isValid();
}

void QSqlField_delete(QSqlField* self) {
	delete self;
}

