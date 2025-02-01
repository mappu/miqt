#include <QScriptClassPropertyIterator>
#include <QScriptString>
#include <QScriptValue>
#include <qscriptclasspropertyiterator.h>
#include "gen_qscriptclasspropertyiterator.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QScriptValue* QScriptClassPropertyIterator_object(const QScriptClassPropertyIterator* self) {
	return new QScriptValue(self->object());
}

bool QScriptClassPropertyIterator_hasNext(const QScriptClassPropertyIterator* self) {
	return self->hasNext();
}

void QScriptClassPropertyIterator_next(QScriptClassPropertyIterator* self) {
	self->next();
}

bool QScriptClassPropertyIterator_hasPrevious(const QScriptClassPropertyIterator* self) {
	return self->hasPrevious();
}

void QScriptClassPropertyIterator_previous(QScriptClassPropertyIterator* self) {
	self->previous();
}

void QScriptClassPropertyIterator_toFront(QScriptClassPropertyIterator* self) {
	self->toFront();
}

void QScriptClassPropertyIterator_toBack(QScriptClassPropertyIterator* self) {
	self->toBack();
}

QScriptString* QScriptClassPropertyIterator_name(const QScriptClassPropertyIterator* self) {
	return new QScriptString(self->name());
}

unsigned int QScriptClassPropertyIterator_id(const QScriptClassPropertyIterator* self) {
	uint _ret = self->id();
	return static_cast<unsigned int>(_ret);
}

int QScriptClassPropertyIterator_flags(const QScriptClassPropertyIterator* self) {
	QScriptValue::PropertyFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QScriptClassPropertyIterator_delete(QScriptClassPropertyIterator* self) {
	delete self;
}

