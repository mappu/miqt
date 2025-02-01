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

qfloat16* qfloat16_new2(float f) {
	return new qfloat16(static_cast<float>(f));
}

bool qfloat16_isInf(const qfloat16* self) {
	return self->isInf();
}

bool qfloat16_isNaN(const qfloat16* self) {
	return self->isNaN();
}

bool qfloat16_isFinite(const qfloat16* self) {
	return self->isFinite();
}

int qfloat16_fpClassify(const qfloat16* self) {
	return self->fpClassify();
}

bool qfloat16_isNormal(const qfloat16* self) {
	return self->isNormal();
}

void qfloat16_delete(qfloat16* self) {
	delete self;
}

