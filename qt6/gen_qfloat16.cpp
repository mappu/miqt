#include <qfloat16.h>
#include "gen_qfloat16.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

qfloat16* qfloat16_new() {
	return new qfloat16();
}

qfloat16* qfloat16_new2(int param1) {
	return new qfloat16(static_cast<Qt::Initialization>(param1));
}

qfloat16* qfloat16_new3(float f) {
	return new qfloat16(static_cast<float>(f));
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

void qfloat16_Delete(qfloat16* self) {
	delete self;
}

