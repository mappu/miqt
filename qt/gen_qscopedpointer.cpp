#include <QScopedPointerPodDeleter>
#include <qscopedpointer.h>
#include "gen_qscopedpointer.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QScopedPointerPodDeleter_Cleanup(void* pointer) {
	QScopedPointerPodDeleter::cleanup(pointer);
}

void QScopedPointerPodDeleter_Delete(QScopedPointerPodDeleter* self) {
	delete self;
}

