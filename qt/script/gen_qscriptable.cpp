#include <QScriptContext>
#include <QScriptEngine>
#include <QScriptValue>
#include <QScriptable>
#include <qscriptable.h>
#include "gen_qscriptable.h"
#include "_cgo_export.h"

void QScriptable_new(QScriptable** outptr_QScriptable) {
	QScriptable* ret = new QScriptable();
	*outptr_QScriptable = ret;
}

QScriptEngine* QScriptable_Engine(const QScriptable* self) {
	return self->engine();
}

QScriptContext* QScriptable_Context(const QScriptable* self) {
	return self->context();
}

QScriptValue* QScriptable_ThisObject(const QScriptable* self) {
	return new QScriptValue(self->thisObject());
}

int QScriptable_ArgumentCount(const QScriptable* self) {
	return self->argumentCount();
}

QScriptValue* QScriptable_Argument(const QScriptable* self, int index) {
	return new QScriptValue(self->argument(static_cast<int>(index)));
}

void QScriptable_Delete(QScriptable* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QScriptable*>( self );
	} else {
		delete self;
	}
}

