#include <QJSPrimitiveNull>
#include <QJSPrimitiveUndefined>
#include <QJSPrimitiveValue>
#include <QMetaType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qjsprimitivevalue.h>
#include "gen_qjsprimitivevalue.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJSPrimitiveUndefined* QJSPrimitiveUndefined_new() {
	return new QJSPrimitiveUndefined();
}

QJSPrimitiveUndefined* QJSPrimitiveUndefined_new2(QJSPrimitiveUndefined* param1) {
	return new QJSPrimitiveUndefined(*param1);
}

void QJSPrimitiveUndefined_delete(QJSPrimitiveUndefined* self) {
	delete self;
}

QJSPrimitiveNull* QJSPrimitiveNull_new() {
	return new QJSPrimitiveNull();
}

QJSPrimitiveNull* QJSPrimitiveNull_new2(QJSPrimitiveNull* param1) {
	return new QJSPrimitiveNull(*param1);
}

void QJSPrimitiveNull_delete(QJSPrimitiveNull* self) {
	delete self;
}

QJSPrimitiveValue* QJSPrimitiveValue_new() {
	return new QJSPrimitiveValue();
}

QJSPrimitiveValue* QJSPrimitiveValue_new2(QJSPrimitiveUndefined* undefined) {
	return new QJSPrimitiveValue(*undefined);
}

QJSPrimitiveValue* QJSPrimitiveValue_new3(QJSPrimitiveNull* null) {
	return new QJSPrimitiveValue(*null);
}

QJSPrimitiveValue* QJSPrimitiveValue_new4(bool value) {
	return new QJSPrimitiveValue(value);
}

QJSPrimitiveValue* QJSPrimitiveValue_new5(int value) {
	return new QJSPrimitiveValue(static_cast<int>(value));
}

QJSPrimitiveValue* QJSPrimitiveValue_new6(double value) {
	return new QJSPrimitiveValue(static_cast<double>(value));
}

QJSPrimitiveValue* QJSPrimitiveValue_new7(struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QJSPrimitiveValue(string_QString);
}

QJSPrimitiveValue* QJSPrimitiveValue_new8(QMetaType* type, const void* value) {
	return new QJSPrimitiveValue(*type, value);
}

QJSPrimitiveValue* QJSPrimitiveValue_new9(QVariant* variant) {
	return new QJSPrimitiveValue(*variant);
}

QJSPrimitiveValue* QJSPrimitiveValue_new10(QJSPrimitiveValue* param1) {
	return new QJSPrimitiveValue(*param1);
}

uint8_t QJSPrimitiveValue_type(const QJSPrimitiveValue* self) {
	QJSPrimitiveValue::Type _ret = self->type();
	return static_cast<uint8_t>(_ret);
}

bool QJSPrimitiveValue_toBoolean(const QJSPrimitiveValue* self) {
	return self->toBoolean();
}

int QJSPrimitiveValue_toInteger(const QJSPrimitiveValue* self) {
	return self->toInteger();
}

double QJSPrimitiveValue_toDouble(const QJSPrimitiveValue* self) {
	return self->toDouble();
}

struct miqt_string QJSPrimitiveValue_toString(const QJSPrimitiveValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QJSPrimitiveValue_toVariant(const QJSPrimitiveValue* self) {
	return new QVariant(self->toVariant());
}

QJSPrimitiveValue* QJSPrimitiveValue_operatorPlusPlus(QJSPrimitiveValue* self) {
	QJSPrimitiveValue& _ret = self->operator++();
	// Cast returned reference into pointer
	return &_ret;
}

QJSPrimitiveValue* QJSPrimitiveValue_operatorPlusPlusWithInt(QJSPrimitiveValue* self, int param1) {
	return new QJSPrimitiveValue(self->operator++(static_cast<int>(param1)));
}

QJSPrimitiveValue* QJSPrimitiveValue_operatorMinusMinus(QJSPrimitiveValue* self) {
	QJSPrimitiveValue& _ret = self->operator--();
	// Cast returned reference into pointer
	return &_ret;
}

QJSPrimitiveValue* QJSPrimitiveValue_operatorMinusMinusWithInt(QJSPrimitiveValue* self, int param1) {
	return new QJSPrimitiveValue(self->operator--(static_cast<int>(param1)));
}

QJSPrimitiveValue* QJSPrimitiveValue_operatorPlus(QJSPrimitiveValue* self) {
	return new QJSPrimitiveValue(self->operator+());
}

QJSPrimitiveValue* QJSPrimitiveValue_operatorMinus(QJSPrimitiveValue* self) {
	return new QJSPrimitiveValue(self->operator-());
}

bool QJSPrimitiveValue_strictlyEquals(const QJSPrimitiveValue* self, QJSPrimitiveValue* other) {
	return self->strictlyEquals(*other);
}

bool QJSPrimitiveValue_equals(const QJSPrimitiveValue* self, QJSPrimitiveValue* other) {
	return self->equals(*other);
}

void QJSPrimitiveValue_delete(QJSPrimitiveValue* self) {
	delete self;
}

