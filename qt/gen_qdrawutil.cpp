#include "gen_qdrawutil.h"
#include "qdrawutil.h"

#include <QTileRules>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTileRules* QTileRules_new(QTileRules* param1) {
	return new QTileRules(*param1);
}

void QTileRules_Delete(QTileRules* self) {
	delete self;
}

