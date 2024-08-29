#include <QScopedPointerPodDeleter>
#include "qscopedpointer.h"

#include "gen_qscopedpointer.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QScopedPointerPodDeleter_Delete(QScopedPointerPodDeleter* self) {
	delete self;
}

