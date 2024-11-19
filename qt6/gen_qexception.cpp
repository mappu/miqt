#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionStore
#include <qexception.h>
#include "gen_qexception.h"
#include "_cgo_export.h"

bool QtPrivate__ExceptionStore_HasException(const QtPrivate__ExceptionStore* self) {
	return self->hasException();
}

void QtPrivate__ExceptionStore_ThrowPossibleException(QtPrivate__ExceptionStore* self) {
	self->throwPossibleException();
}

void QtPrivate__ExceptionStore_RethrowException(const QtPrivate__ExceptionStore* self) {
	self->rethrowException();
}

void QtPrivate__ExceptionStore_Delete(QtPrivate__ExceptionStore* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QtPrivate::ExceptionStore*>( self );
	} else {
		delete self;
	}
}

