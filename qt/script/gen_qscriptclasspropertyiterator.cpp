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

QScriptValue* QScriptClassPropertyIterator_Object(const QScriptClassPropertyIterator* self) {
	return new QScriptValue(self->object());
}

bool QScriptClassPropertyIterator_HasNext(const QScriptClassPropertyIterator* self) {
	return self->hasNext();
}

void QScriptClassPropertyIterator_Next(QScriptClassPropertyIterator* self) {
	self->next();
}

bool QScriptClassPropertyIterator_HasPrevious(const QScriptClassPropertyIterator* self) {
	return self->hasPrevious();
}

void QScriptClassPropertyIterator_Previous(QScriptClassPropertyIterator* self) {
	self->previous();
}

void QScriptClassPropertyIterator_ToFront(QScriptClassPropertyIterator* self) {
	self->toFront();
}

void QScriptClassPropertyIterator_ToBack(QScriptClassPropertyIterator* self) {
	self->toBack();
}

QScriptString* QScriptClassPropertyIterator_Name(const QScriptClassPropertyIterator* self) {
	return new QScriptString(self->name());
}

unsigned int QScriptClassPropertyIterator_Id(const QScriptClassPropertyIterator* self) {
	uint _ret = self->id();
	return static_cast<unsigned int>(_ret);
}

int QScriptClassPropertyIterator_Flags(const QScriptClassPropertyIterator* self) {
	QScriptValue::PropertyFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QScriptClassPropertyIterator_Delete(QScriptClassPropertyIterator* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QScriptClassPropertyIterator*>( self );
	} else {
		delete self;
	}
}

