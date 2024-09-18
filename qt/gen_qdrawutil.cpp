#include <QTileRules>
#include "qdrawutil.h"
#include "gen_qdrawutil.h"
#include "_cgo_export.h"

QTileRules* QTileRules_new(int horizontalRule, int verticalRule) {
	return new QTileRules(static_cast<Qt::TileRule>(horizontalRule), static_cast<Qt::TileRule>(verticalRule));
}

QTileRules* QTileRules_new2() {
	return new QTileRules();
}

QTileRules* QTileRules_new3(QTileRules* param1) {
	return new QTileRules(*param1);
}

QTileRules* QTileRules_new4(int rule) {
	return new QTileRules(static_cast<Qt::TileRule>(rule));
}

void QTileRules_Delete(QTileRules* self) {
	delete self;
}

