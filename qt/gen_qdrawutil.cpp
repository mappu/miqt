#include <QTileRules>
#include <qdrawutil.h>
#include "gen_qdrawutil.h"
#include "_cgo_export.h"

void QTileRules_new(int horizontalRule, int verticalRule, QTileRules** outptr_QTileRules) {
	QTileRules* ret = new QTileRules(static_cast<Qt::TileRule>(horizontalRule), static_cast<Qt::TileRule>(verticalRule));
	*outptr_QTileRules = ret;
}

void QTileRules_new2(QTileRules** outptr_QTileRules) {
	QTileRules* ret = new QTileRules();
	*outptr_QTileRules = ret;
}

void QTileRules_new3(QTileRules* param1, QTileRules** outptr_QTileRules) {
	QTileRules* ret = new QTileRules(*param1);
	*outptr_QTileRules = ret;
}

void QTileRules_new4(int rule, QTileRules** outptr_QTileRules) {
	QTileRules* ret = new QTileRules(static_cast<Qt::TileRule>(rule));
	*outptr_QTileRules = ret;
}

void QTileRules_Delete(QTileRules* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTileRules*>( self );
	} else {
		delete self;
	}
}

