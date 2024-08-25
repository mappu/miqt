#include "gen_qthreadstorage.h"
#include "qthreadstorage.h"

#include <QThreadStorageData>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QThreadStorageData* QThreadStorageData_new(QThreadStorageData* param1) {
	return new QThreadStorageData(*param1);
}

void QThreadStorageData_Delete(QThreadStorageData* self) {
	delete self;
}

