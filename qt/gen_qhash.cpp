#include "gen_qhash.h"
#include "qhash.h"

#include <QHashData>
#include <QHashDummyValue>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

bool QHashData_WillGrow(QHashData* self) {
	return self->willGrow();
}

void QHashData_HasShrunk(QHashData* self) {
	self->hasShrunk();
}

void QHashData_Rehash(QHashData* self, int hint) {
	self->rehash(static_cast<int>(hint));
}

void QHashData_Delete(QHashData* self) {
	delete self;
}

QHashDummyValue* QHashDummyValue_new() {
	return new QHashDummyValue();
}

QHashDummyValue* QHashDummyValue_new2(QHashDummyValue* param1) {
	return new QHashDummyValue(*param1);
}

void QHashDummyValue_Delete(QHashDummyValue* self) {
	delete self;
}

