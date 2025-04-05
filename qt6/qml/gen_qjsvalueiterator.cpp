#include <QJSValue>
#include <QJSValueIterator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qjsvalueiterator.h>
#include "gen_qjsvalueiterator.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJSValueIterator* QJSValueIterator_new(QJSValue* value) {
	return new QJSValueIterator(*value);
}

bool QJSValueIterator_hasNext(const QJSValueIterator* self) {
	return self->hasNext();
}

bool QJSValueIterator_next(QJSValueIterator* self) {
	return self->next();
}

struct miqt_string QJSValueIterator_name(const QJSValueIterator* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJSValue* QJSValueIterator_value(const QJSValueIterator* self) {
	return new QJSValue(self->value());
}

void QJSValueIterator_operatorAssign(QJSValueIterator* self, QJSValue* value) {
	self->operator=(*value);
}

void QJSValueIterator_delete(QJSValueIterator* self) {
	delete self;
}

