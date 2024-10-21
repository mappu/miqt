#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionHolder
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionStore
#include <qexception.h>
#include "gen_qexception.h"
#include "_cgo_export.h"

QtPrivate__ExceptionHolder* QtPrivate__ExceptionHolder_new() {
	return new QtPrivate::ExceptionHolder();
}

void QtPrivate__ExceptionHolder_Delete(QtPrivate__ExceptionHolder* self) {
	delete self;
}

bool QtPrivate__ExceptionStore_HasException(const QtPrivate__ExceptionStore* self) {
	return self->hasException();
}

void QtPrivate__ExceptionStore_ThrowPossibleException(QtPrivate__ExceptionStore* self) {
	self->throwPossibleException();
}

bool QtPrivate__ExceptionStore_HasThrown(const QtPrivate__ExceptionStore* self) {
	return self->hasThrown();
}

void QtPrivate__ExceptionStore_Delete(QtPrivate__ExceptionStore* self) {
	delete self;
}

