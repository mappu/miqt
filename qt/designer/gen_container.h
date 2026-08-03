#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_CONTAINER_H
#define MIQT_QT_DESIGNER_GEN_CONTAINER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerContainerExtension;
class QWidget;
#else
typedef struct QDesignerContainerExtension QDesignerContainerExtension;
typedef struct QWidget QWidget;
#endif

int QDesignerContainerExtension_count(const QDesignerContainerExtension* self);
QWidget* QDesignerContainerExtension_widget(const QDesignerContainerExtension* self, int index);
int QDesignerContainerExtension_currentIndex(const QDesignerContainerExtension* self);
void QDesignerContainerExtension_setCurrentIndex(QDesignerContainerExtension* self, int index);
void QDesignerContainerExtension_addWidget(QDesignerContainerExtension* self, QWidget* widget);
void QDesignerContainerExtension_insertWidget(QDesignerContainerExtension* self, int index, QWidget* widget);
void QDesignerContainerExtension_remove(QDesignerContainerExtension* self, int index);
bool QDesignerContainerExtension_canAddWidget(const QDesignerContainerExtension* self);
bool QDesignerContainerExtension_canRemove(const QDesignerContainerExtension* self, int index);
void QDesignerContainerExtension_operatorAssign(QDesignerContainerExtension* self, QDesignerContainerExtension* param1);

void QDesignerContainerExtension_delete(QDesignerContainerExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
