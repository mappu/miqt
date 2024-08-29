#include "qfloat16.h"

#include "gen_qfloat16.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

qfloat16* qfloat16_new() {
	return new qfloat16();
}

qfloat16* qfloat16_new2(float f) {
	return new qfloat16(static_cast<float>(f));
}

bool qfloat16_IsInf(qfloat16* self) {
	return const_cast<const qfloat16*>(self)->isInf();
}

bool qfloat16_IsNaN(qfloat16* self) {
	return const_cast<const qfloat16*>(self)->isNaN();
}

bool qfloat16_IsFinite(qfloat16* self) {
	return const_cast<const qfloat16*>(self)->isFinite();
}

int qfloat16_FpClassify(qfloat16* self) {
	return const_cast<const qfloat16*>(self)->fpClassify();
}

bool qfloat16_IsNormal(qfloat16* self) {
	return const_cast<const qfloat16*>(self)->isNormal();
}

void qfloat16_Delete(qfloat16* self) {
	delete self;
}

