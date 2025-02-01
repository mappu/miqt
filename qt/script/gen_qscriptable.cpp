#include <QScriptContext>
#include <QScriptEngine>
#include <QScriptValue>
#include <QScriptable>
#include <qscriptable.h>
#include "gen_qscriptable.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QScriptable* QScriptable_new() {
	return new QScriptable();
}

QScriptEngine* QScriptable_engine(const QScriptable* self) {
	return self->engine();
}

QScriptContext* QScriptable_context(const QScriptable* self) {
	return self->context();
}

QScriptValue* QScriptable_thisObject(const QScriptable* self) {
	return new QScriptValue(self->thisObject());
}

int QScriptable_argumentCount(const QScriptable* self) {
	return self->argumentCount();
}

QScriptValue* QScriptable_argument(const QScriptable* self, int index) {
	return new QScriptValue(self->argument(static_cast<int>(index)));
}

void QScriptable_delete(QScriptable* self) {
	delete self;
}

