#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTFORMEDITORPLUGIN_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTFORMEDITORPLUGIN_H

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

bool QDesignerFormEditorPluginInterface_isInitialized(const QDesignerFormEditorPluginInterface* self);
void QDesignerFormEditorPluginInterface_initialize(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorInterface* core);
QAction* QDesignerFormEditorPluginInterface_action(const QDesignerFormEditorPluginInterface* self);
QDesignerFormEditorInterface* QDesignerFormEditorPluginInterface_core(const QDesignerFormEditorPluginInterface* self);
void QDesignerFormEditorPluginInterface_operatorAssign(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorPluginInterface* param1);

void QDesignerFormEditorPluginInterface_delete(QDesignerFormEditorPluginInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
