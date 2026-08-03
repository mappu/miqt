#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_CONTAINER_H
#define MIQT_QT6_DESIGNER_GEN_CONTAINER_H

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

QDesignerContainerExtension* QDesignerContainerExtension_new();
int QDesignerContainerExtension_count(const QDesignerContainerExtension* self);
QWidget* QDesignerContainerExtension_widget(const QDesignerContainerExtension* self, int index);
int QDesignerContainerExtension_currentIndex(const QDesignerContainerExtension* self);
void QDesignerContainerExtension_setCurrentIndex(QDesignerContainerExtension* self, int index);
bool QDesignerContainerExtension_canAddWidget(const QDesignerContainerExtension* self);
void QDesignerContainerExtension_addWidget(QDesignerContainerExtension* self, QWidget* widget);
void QDesignerContainerExtension_insertWidget(QDesignerContainerExtension* self, int index, QWidget* widget);
bool QDesignerContainerExtension_canRemove(const QDesignerContainerExtension* self, int index);
void QDesignerContainerExtension_remove(QDesignerContainerExtension* self, int index);

bool QDesignerContainerExtension_override_virtual_count(void* self, intptr_t slot);
int QDesignerContainerExtension_virtualbase_count(const void* self);
bool QDesignerContainerExtension_override_virtual_widget(void* self, intptr_t slot);
QWidget* QDesignerContainerExtension_virtualbase_widget(const void* self, int index);
bool QDesignerContainerExtension_override_virtual_currentIndex(void* self, intptr_t slot);
int QDesignerContainerExtension_virtualbase_currentIndex(const void* self);
bool QDesignerContainerExtension_override_virtual_setCurrentIndex(void* self, intptr_t slot);
void QDesignerContainerExtension_virtualbase_setCurrentIndex(void* self, int index);
bool QDesignerContainerExtension_override_virtual_canAddWidget(void* self, intptr_t slot);
bool QDesignerContainerExtension_virtualbase_canAddWidget(const void* self);
bool QDesignerContainerExtension_override_virtual_addWidget(void* self, intptr_t slot);
void QDesignerContainerExtension_virtualbase_addWidget(void* self, QWidget* widget);
bool QDesignerContainerExtension_override_virtual_insertWidget(void* self, intptr_t slot);
void QDesignerContainerExtension_virtualbase_insertWidget(void* self, int index, QWidget* widget);
bool QDesignerContainerExtension_override_virtual_canRemove(void* self, intptr_t slot);
bool QDesignerContainerExtension_virtualbase_canRemove(const void* self, int index);
bool QDesignerContainerExtension_override_virtual_remove(void* self, intptr_t slot);
void QDesignerContainerExtension_virtualbase_remove(void* self, int index);

void QDesignerContainerExtension_delete(QDesignerContainerExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
