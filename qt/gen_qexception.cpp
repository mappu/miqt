#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionHolder
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionStore
#include "qexception.h"

#include "gen_qexception.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

bool QtPrivate__ExceptionStore_HasException(QtPrivate__ExceptionStore* self) {
	return const_cast<const QtPrivate::ExceptionStore*>(self)->hasException();
}

QtPrivate__ExceptionHolder* QtPrivate__ExceptionStore_Exception(QtPrivate__ExceptionStore* self) {
	QtPrivate::ExceptionHolder ret = self->exception();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QtPrivate::ExceptionHolder*>(new QtPrivate::ExceptionHolder(ret));
}

void QtPrivate__ExceptionStore_ThrowPossibleException(QtPrivate__ExceptionStore* self) {
	self->throwPossibleException();
}

bool QtPrivate__ExceptionStore_HasThrown(QtPrivate__ExceptionStore* self) {
	return const_cast<const QtPrivate::ExceptionStore*>(self)->hasThrown();
}

void QtPrivate__ExceptionStore_Delete(QtPrivate__ExceptionStore* self) {
	delete self;
}

