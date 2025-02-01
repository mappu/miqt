#include <QTileRules>
#include <qdrawutil.h>
#include "gen_qdrawutil.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

void QTileRules_delete(QTileRules* self) {
	delete self;
}

