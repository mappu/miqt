#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__RefCount
#include "qrefcount.h"

#include "gen_qrefcount.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

bool QtPrivate__RefCount_Ref(QtPrivate__RefCount* self) {
	return self->ref();
}

bool QtPrivate__RefCount_Deref(QtPrivate__RefCount* self) {
	return self->deref();
}

bool QtPrivate__RefCount_SetSharable(QtPrivate__RefCount* self, bool sharable) {
	return self->setSharable(sharable);
}

bool QtPrivate__RefCount_IsSharable(QtPrivate__RefCount* self) {
	return const_cast<const QtPrivate::RefCount*>(self)->isSharable();
}

bool QtPrivate__RefCount_IsStatic(QtPrivate__RefCount* self) {
	return const_cast<const QtPrivate::RefCount*>(self)->isStatic();
}

bool QtPrivate__RefCount_IsShared(QtPrivate__RefCount* self) {
	return const_cast<const QtPrivate::RefCount*>(self)->isShared();
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

