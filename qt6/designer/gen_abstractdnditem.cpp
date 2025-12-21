#include <QDesignerDnDItemInterface>
#include <QPoint>
#include <QWidget>
#include <abstractdnditem.h>
#include "gen_abstractdnditem.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWidget* QDesignerDnDItemInterface_widget(const QDesignerDnDItemInterface* self) {
	return self->widget();
}

QWidget* QDesignerDnDItemInterface_decoration(const QDesignerDnDItemInterface* self) {
	return self->decoration();
}

QPoint* QDesignerDnDItemInterface_hotSpot(const QDesignerDnDItemInterface* self) {
	return new QPoint(self->hotSpot());
}

int QDesignerDnDItemInterface_type(const QDesignerDnDItemInterface* self) {
	QDesignerDnDItemInterface::DropType _ret = self->type();
	return static_cast<int>(_ret);
}

QWidget* QDesignerDnDItemInterface_source(const QDesignerDnDItemInterface* self) {
	return self->source();
}

void QDesignerDnDItemInterface_delete(QDesignerDnDItemInterface* self) {
	delete self;
}

