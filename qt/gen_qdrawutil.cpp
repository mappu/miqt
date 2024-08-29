#include <QTileRules>
#include "qdrawutil.h"

#include "gen_qdrawutil.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTileRules* QTileRules_new(uintptr_t horizontalRule, uintptr_t verticalRule) {
	return new QTileRules(static_cast<Qt::TileRule>(horizontalRule), static_cast<Qt::TileRule>(verticalRule));
}

QTileRules* QTileRules_new2() {
	return new QTileRules();
}

QTileRules* QTileRules_new3(QTileRules* param1) {
	return new QTileRules(*param1);
}

QTileRules* QTileRules_new4(uintptr_t rule) {
	return new QTileRules(static_cast<Qt::TileRule>(rule));
}

void QTileRules_Delete(QTileRules* self) {
	delete self;
}

