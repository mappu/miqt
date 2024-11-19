#include <qfloat16.h>
#include "gen_qfloat16.h"
#include "_cgo_export.h"

void qfloat16_new(qfloat16** outptr_qfloat16) {
	qfloat16* ret = new qfloat16();
	*outptr_qfloat16 = ret;
}

void qfloat16_new2(int param1, qfloat16** outptr_qfloat16) {
	qfloat16* ret = new qfloat16(static_cast<Qt::Initialization>(param1));
	*outptr_qfloat16 = ret;
}

void qfloat16_new3(float f, qfloat16** outptr_qfloat16) {
	qfloat16* ret = new qfloat16(static_cast<float>(f));
	*outptr_qfloat16 = ret;
}

bool qfloat16_IsInf(const qfloat16* self) {
	return self->isInf();
}

bool qfloat16_IsNaN(const qfloat16* self) {
	return self->isNaN();
}

bool qfloat16_IsFinite(const qfloat16* self) {
	return self->isFinite();
}

int qfloat16_FpClassify(const qfloat16* self) {
	return self->fpClassify();
}

bool qfloat16_IsNormal(const qfloat16* self) {
	return self->isNormal();
}

void qfloat16_Delete(qfloat16* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<qfloat16*>( self );
	} else {
		delete self;
	}
}

