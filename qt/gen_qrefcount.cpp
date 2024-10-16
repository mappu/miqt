#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__RefCount
#include <qrefcount.h>
#include "gen_qrefcount.h"
#include "_cgo_export.h"

bool QtPrivate__RefCount_Ref(QtPrivate__RefCount* self) {
	return self->ref();
}

bool QtPrivate__RefCount_Deref(QtPrivate__RefCount* self) {
	return self->deref();
}

bool QtPrivate__RefCount_SetSharable(QtPrivate__RefCount* self, bool sharable) {
	return self->setSharable(sharable);
}

bool QtPrivate__RefCount_IsSharable(const QtPrivate__RefCount* self) {
	return self->isSharable();
}

bool QtPrivate__RefCount_IsStatic(const QtPrivate__RefCount* self) {
	return self->isStatic();
}

bool QtPrivate__RefCount_IsShared(const QtPrivate__RefCount* self) {
	return self->isShared();
}

void QtPrivate__RefCount_InitializeOwned(QtPrivate__RefCount* self) {
	self->initializeOwned();
}

void QtPrivate__RefCount_InitializeUnsharable(QtPrivate__RefCount* self) {
	self->initializeUnsharable();
}

void QtPrivate__RefCount_Delete(QtPrivate__RefCount* self) {
	delete self;
}

