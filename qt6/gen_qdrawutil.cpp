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
	return new (std::nothrow) QTileRules(static_cast<Qt::TileRule>(horizontalRule), static_cast<Qt::TileRule>(verticalRule));
}

QTileRules* QTileRules_new2() {
	return new (std::nothrow) QTileRules();
}

QTileRules* QTileRules_new3(QTileRules* param1) {
	return new (std::nothrow) QTileRules(*param1);
}

QTileRules* QTileRules_new4(int rule) {
	return new (std::nothrow) QTileRules(static_cast<Qt::TileRule>(rule));
}

int QTileRules_horizontal(const QTileRules* self) {
	Qt::TileRule horizontal_ret = self->horizontal;
	return static_cast<int>(horizontal_ret);
}

void QTileRules_setHorizontal(QTileRules* self, int horizontal) {
	self->horizontal = static_cast<Qt::TileRule>(horizontal);
}

int QTileRules_vertical(const QTileRules* self) {
	Qt::TileRule vertical_ret = self->vertical;
	return static_cast<int>(vertical_ret);
}

void QTileRules_setVertical(QTileRules* self, int vertical) {
	self->vertical = static_cast<Qt::TileRule>(vertical);
}

void QTileRules_delete(QTileRules* self) {
	delete self;
}

