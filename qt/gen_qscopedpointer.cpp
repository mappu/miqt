#include <QScopedPointerPodDeleter>
#include <qscopedpointer.h>
#include "gen_qscopedpointer.h"
#include "_cgo_export.h"

void QScopedPointerPodDeleter_Cleanup(void* pointer) {
	QScopedPointerPodDeleter::cleanup(pointer);
}

void QScopedPointerPodDeleter_Delete(QScopedPointerPodDeleter* self) {
	delete self;
}

