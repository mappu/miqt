#include <QScriptString>
#include <QScriptValue>
#include <QScriptValueIterator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscriptvalueiterator.h>
#include "gen_qscriptvalueiterator.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QScriptValueIterator* QScriptValueIterator_new(QScriptValue* value) {
	return new QScriptValueIterator(*value);
}

bool QScriptValueIterator_hasNext(const QScriptValueIterator* self) {
	return self->hasNext();
}

void QScriptValueIterator_next(QScriptValueIterator* self) {
	self->next();
}

bool QScriptValueIterator_hasPrevious(const QScriptValueIterator* self) {
	return self->hasPrevious();
}

void QScriptValueIterator_previous(QScriptValueIterator* self) {
	self->previous();
}

struct miqt_string QScriptValueIterator_name(const QScriptValueIterator* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QScriptString* QScriptValueIterator_scriptName(const QScriptValueIterator* self) {
	return new QScriptString(self->scriptName());
}

QScriptValue* QScriptValueIterator_value(const QScriptValueIterator* self) {
	return new QScriptValue(self->value());
}

void QScriptValueIterator_setValue(QScriptValueIterator* self, QScriptValue* value) {
	self->setValue(*value);
}

int QScriptValueIterator_flags(const QScriptValueIterator* self) {
	QScriptValue::PropertyFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QScriptValueIterator_remove(QScriptValueIterator* self) {
	self->remove();
}

void QScriptValueIterator_toFront(QScriptValueIterator* self) {
	self->toFront();
}

void QScriptValueIterator_toBack(QScriptValueIterator* self) {
	self->toBack();
}

void QScriptValueIterator_operatorAssign(QScriptValueIterator* self, QScriptValue* value) {
	self->operator=(*value);
}

void QScriptValueIterator_delete(QScriptValueIterator* self) {
	delete self;
}

