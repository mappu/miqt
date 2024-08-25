#include "gen_qshareddata.h"
#include "qshareddata.h"

#include <QSharedData>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QSharedData* QSharedData_new() {
	return new QSharedData();
}

QSharedData* QSharedData_new2(QSharedData* param1) {
	return new QSharedData(*param1);
}

void QSharedData_Delete(QSharedData* self) {
	delete self;
}

