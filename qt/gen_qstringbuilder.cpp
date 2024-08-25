#include "gen_qstringbuilder.h"
#include "qstringbuilder.h"



extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QAbstractConcatenable_Delete(QAbstractConcatenable* self) {
	delete self;
}

