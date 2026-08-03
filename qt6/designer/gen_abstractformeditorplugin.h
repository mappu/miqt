#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_ABSTRACTFORMEDITORPLUGIN_H
#define MIQT_QT6_DESIGNER_GEN_ABSTRACTFORMEDITORPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QDesignerFormEditorInterface;
class QDesignerFormEditorPluginInterface;
#else
typedef struct QAction QAction;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormEditorPluginInterface QDesignerFormEditorPluginInterface;
#endif

QDesignerFormEditorPluginInterface* QDesignerFormEditorPluginInterface_new();
bool QDesignerFormEditorPluginInterface_isInitialized(const QDesignerFormEditorPluginInterface* self);
void QDesignerFormEditorPluginInterface_initialize(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorInterface* core);
QAction* QDesignerFormEditorPluginInterface_action(const QDesignerFormEditorPluginInterface* self);
QDesignerFormEditorInterface* QDesignerFormEditorPluginInterface_core(const QDesignerFormEditorPluginInterface* self);

bool QDesignerFormEditorPluginInterface_override_virtual_isInitialized(void* self, intptr_t slot);
bool QDesignerFormEditorPluginInterface_virtualbase_isInitialized(const void* self);
bool QDesignerFormEditorPluginInterface_override_virtual_initialize(void* self, intptr_t slot);
void QDesignerFormEditorPluginInterface_virtualbase_initialize(void* self, QDesignerFormEditorInterface* core);
bool QDesignerFormEditorPluginInterface_override_virtual_action(void* self, intptr_t slot);
QAction* QDesignerFormEditorPluginInterface_virtualbase_action(const void* self);
bool QDesignerFormEditorPluginInterface_override_virtual_core(void* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerFormEditorPluginInterface_virtualbase_core(const void* self);

void QDesignerFormEditorPluginInterface_delete(QDesignerFormEditorPluginInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
