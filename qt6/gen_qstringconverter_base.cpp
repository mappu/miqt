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

QStringConverterBase* QStringConverterBase_new(QStringConverterBase* param1) {
	return new QStringConverterBase(*param1);
}

QStringConverterBase* QStringConverterBase_new2() {
	return new QStringConverterBase();
}

void QStringConverter_virtbase(QStringConverter* src, QStringConverterBase** outptr_QStringConverterBase) {
	*outptr_QStringConverterBase = static_cast<QStringConverterBase*>(src);
}

bool QStringConverter_IsValid(const QStringConverter* self) {
	return self->isValid();
}

void QStringConverter_ResetState(QStringConverter* self) {
	self->resetState();
}

bool QStringConverter_HasError(const QStringConverter* self) {
	return self->hasError();
}

const char* QStringConverter_Name(const QStringConverter* self) {
	return (const char*) self->name();
}

const char* QStringConverter_NameForEncoding(int e) {
	return (const char*) QStringConverter::nameForEncoding(static_cast<QStringConverter::Encoding>(e));
}

QStringConverterBase__State* QStringConverterBase__State_new() {
	return new QStringConverterBase::State();
}

QStringConverterBase__State* QStringConverterBase__State_new2(int f) {
	return new QStringConverterBase::State(static_cast<QStringConverterBase::Flags>(f));
}

void QStringConverterBase__State_Clear(QStringConverterBase__State* self) {
	self->clear();
}

void QStringConverterBase__State_Reset(QStringConverterBase__State* self) {
	self->reset();
}

void QStringConverterBase__State_Delete(QStringConverterBase__State* self) {
	delete self;
}

