#include <QStringDataPtr>
#include "qstringliteral.h"

#include "gen_qstringliteral.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QStringDataPtr_Delete(QStringDataPtr* self) {
	delete self;
}

