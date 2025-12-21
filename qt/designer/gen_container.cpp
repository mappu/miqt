#include <QDesignerContainerExtension>
#include <QWidget>
#include <container.h>
#include "gen_container.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QDesignerContainerExtension_count(const QDesignerContainerExtension* self) {
	return self->count();
}

QWidget* QDesignerContainerExtension_widget(const QDesignerContainerExtension* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QDesignerContainerExtension_currentIndex(const QDesignerContainerExtension* self) {
	return self->currentIndex();
}

void QDesignerContainerExtension_setCurrentIndex(QDesignerContainerExtension* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QDesignerContainerExtension_addWidget(QDesignerContainerExtension* self, QWidget* widget) {
	self->addWidget(widget);
}

void QDesignerContainerExtension_insertWidget(QDesignerContainerExtension* self, int index, QWidget* widget) {
	self->insertWidget(static_cast<int>(index), widget);
}

void QDesignerContainerExtension_remove(QDesignerContainerExtension* self, int index) {
	self->remove(static_cast<int>(index));
}

bool QDesignerContainerExtension_canAddWidget(const QDesignerContainerExtension* self) {
	return self->canAddWidget();
}

bool QDesignerContainerExtension_canRemove(const QDesignerContainerExtension* self, int index) {
	return self->canRemove(static_cast<int>(index));
}

void QDesignerContainerExtension_operatorAssign(QDesignerContainerExtension* self, QDesignerContainerExtension* param1) {
	self->operator=(*param1);
}

void QDesignerContainerExtension_delete(QDesignerContainerExtension* self) {
	delete self;
}

