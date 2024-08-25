#include "gen_qcontiguouscache.h"
#include "qcontiguouscache.h"

#include <QContiguousCacheData>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QContiguousCacheData* QContiguousCacheData_AllocateData(int size, int alignment) {
	return QContiguousCacheData::allocateData(static_cast<int>(size), static_cast<int>(alignment));
}

void QContiguousCacheData_FreeData(QContiguousCacheData* data) {
	QContiguousCacheData::freeData(data);
}

void QContiguousCacheData_Delete(QContiguousCacheData* self) {
	delete self;
}

