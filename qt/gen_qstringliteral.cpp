#include "gen_qstringliteral.h"
#include "qstringliteral.h"

#include <QStringDataPtr>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QStringDataPtr_Delete(QStringDataPtr* self) {
	delete self;
}

