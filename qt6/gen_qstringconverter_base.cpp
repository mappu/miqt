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
	return new (std::nothrow) QStringConverterBase::State();
}

QStringConverterBase__State* QStringConverterBase__State_new2(int f) {
	return new (std::nothrow) QStringConverterBase::State(static_cast<QStringConverterBase::Flags>(f));
}

void QStringConverterBase__State_clear(QStringConverterBase__State* self) {
	self->clear();
}

void QStringConverterBase__State_reset(QStringConverterBase__State* self) {
	self->reset();
}

int QStringConverterBase__State_flags(const QStringConverterBase__State* self) {
	QStringConverterBase::Flags flags_ret = self->flags;
	return static_cast<int>(flags_ret);
}

void QStringConverterBase__State_setFlags(QStringConverterBase__State* self, int flags) {
	self->flags = static_cast<QStringConverterBase::Flags>(flags);
}

int QStringConverterBase__State_internalState(const QStringConverterBase__State* self) {
	return self->internalState;
}

void QStringConverterBase__State_setInternalState(QStringConverterBase__State* self, int internalState) {
	self->internalState = static_cast<int>(internalState);
}

ptrdiff_t QStringConverterBase__State_remainingChars(const QStringConverterBase__State* self) {
	qsizetype remainingChars_ret = self->remainingChars;
	return static_cast<ptrdiff_t>(remainingChars_ret);
}

void QStringConverterBase__State_setRemainingChars(QStringConverterBase__State* self, ptrdiff_t remainingChars) {
	self->remainingChars = (qsizetype)(remainingChars);
}

ptrdiff_t QStringConverterBase__State_invalidChars(const QStringConverterBase__State* self) {
	qsizetype invalidChars_ret = self->invalidChars;
	return static_cast<ptrdiff_t>(invalidChars_ret);
}

void QStringConverterBase__State_setInvalidChars(QStringConverterBase__State* self, ptrdiff_t invalidChars) {
	self->invalidChars = (qsizetype)(invalidChars);
}

void QStringConverterBase__State_delete(QStringConverterBase__State* self) {
	delete self;
}

