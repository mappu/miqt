#include <QStringConverter>
#include <QStringConverterBase>
#define WORKAROUND_INNER_CLASS_DEFINITION_QStringConverterBase__State
#include <qstringconverter_base.h>
#include "gen_qstringconverter_base.h"
#include "_cgo_export.h"

void QStringConverterBase_new(QStringConverterBase* param1, QStringConverterBase** outptr_QStringConverterBase) {
	QStringConverterBase* ret = new QStringConverterBase(*param1);
	*outptr_QStringConverterBase = ret;
}

void QStringConverterBase_new2(QStringConverterBase** outptr_QStringConverterBase) {
	QStringConverterBase* ret = new QStringConverterBase();
	*outptr_QStringConverterBase = ret;
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

void QStringConverterBase__State_new(QStringConverterBase__State** outptr_QStringConverterBase__State) {
	QStringConverterBase::State* ret = new QStringConverterBase::State();
	*outptr_QStringConverterBase__State = ret;
}

void QStringConverterBase__State_new2(int f, QStringConverterBase__State** outptr_QStringConverterBase__State) {
	QStringConverterBase::State* ret = new QStringConverterBase::State(static_cast<QStringConverterBase::Flags>(f));
	*outptr_QStringConverterBase__State = ret;
}

void QStringConverterBase__State_Clear(QStringConverterBase__State* self) {
	self->clear();
}

void QStringConverterBase__State_Reset(QStringConverterBase__State* self) {
	self->reset();
}

void QStringConverterBase__State_Delete(QStringConverterBase__State* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStringConverterBase::State*>( self );
	} else {
		delete self;
	}
}

