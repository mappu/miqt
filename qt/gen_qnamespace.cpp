#include "gen_qnamespace.h"
#include "qnamespace.h"

#include <QInternal>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QInternal_Delete(QInternal* self) {
	delete self;
}

