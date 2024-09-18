#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionHolder
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionStore
#include "qexception.h"
#include "gen_qexception.h"
#include "_cgo_export.h"

QtPrivate__ExceptionHolder* QtPrivate__ExceptionHolder_new() {
	return new QtPrivate::ExceptionHolder();
}

QtPrivate__ExceptionHolder* QtPrivate__ExceptionHolder_new2(QtPrivate__ExceptionHolder* other) {
	return new QtPrivate::ExceptionHolder(*other);
}

void QtPrivate__ExceptionHolder_OperatorAssign(QtPrivate__ExceptionHolder* self, QtPrivate__ExceptionHolder* other) {
	self->operator=(*other);
}

void QtPrivate__ExceptionHolder_Delete(QtPrivate__ExceptionHolder* self) {
	delete self;
}

QtPrivate__ExceptionStore* QtPrivate__ExceptionStore_new(QtPrivate__ExceptionStore* param1) {
	return new QtPrivate::ExceptionStore(*param1);
}

bool QtPrivate__ExceptionStore_HasException(const QtPrivate__ExceptionStore* self) {
	return self->hasException();
}

QtPrivate__ExceptionHolder* QtPrivate__ExceptionStore_Exception(QtPrivate__ExceptionStore* self) {
	return new QtPrivate::ExceptionHolder(self->exception());
}

void QtPrivate__ExceptionStore_ThrowPossibleException(QtPrivate__ExceptionStore* self) {
	self->throwPossibleException();
}

bool QtPrivate__ExceptionStore_HasThrown(const QtPrivate__ExceptionStore* self) {
	return self->hasThrown();
}

void QtPrivate__ExceptionStore_OperatorAssign(QtPrivate__ExceptionStore* self, QtPrivate__ExceptionStore* param1) {
	self->operator=(*param1);
}

void QtPrivate__ExceptionStore_Delete(QtPrivate__ExceptionStore* self) {
	delete self;
}

