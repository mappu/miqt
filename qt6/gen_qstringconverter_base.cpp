#include <QStringConverter>
#include <QStringConverterBase>
#define WORKAROUND_INNER_CLASS_DEFINITION_QStringConverterBase__State
#include <qstringconverter_base.h>
#include "gen_qstringconverter_base.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QStringConverter_virtbase(QStringConverter* src, QStringConverterBase** outptr_QStringConverterBase) {
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(src);
}

bool QStringConverter_isValid(const QStringConverter* self) {
	return self->isValid();
}

void QStringConverter_resetState(QStringConverter* self) {
	self->resetState();
}

bool QStringConverter_hasError(const QStringConverter* self) {
	return self->hasError();
}

const char* QStringConverter_name(const QStringConverter* self) {
	return (const char*) self->name();
}

const char* QStringConverter_nameForEncoding(int e) {
	return (const char*) QStringConverter::nameForEncoding(static_cast<QStringConverter::Encoding>(e));
}

QStringConverterBase__State* QStringConverterBase__State_new() {
	return new QStringConverterBase::State();
}

QStringConverterBase__State* QStringConverterBase__State_new2(int f) {
	return new QStringConverterBase::State(static_cast<QStringConverterBase::Flags>(f));
}

void QStringConverterBase__State_clear(QStringConverterBase__State* self) {
	self->clear();
}

void QStringConverterBase__State_reset(QStringConverterBase__State* self) {
	self->reset();
}

void QStringConverterBase__State_delete(QStringConverterBase__State* self) {
	delete self;
}

