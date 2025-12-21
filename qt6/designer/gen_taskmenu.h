#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_TASKMENU_H
#define MIQT_QT6_DESIGNER_GEN_TASKMENU_H

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
class QDesignerTaskMenuExtension;
#else
typedef struct QAction QAction;
typedef struct QDesignerTaskMenuExtension QDesignerTaskMenuExtension;
#endif

QDesignerTaskMenuExtension* QDesignerTaskMenuExtension_new();
QAction* QDesignerTaskMenuExtension_preferredEditAction(const QDesignerTaskMenuExtension* self);
struct miqt_array /* of QAction* */  QDesignerTaskMenuExtension_taskActions(const QDesignerTaskMenuExtension* self);

bool QDesignerTaskMenuExtension_override_virtual_preferredEditAction(void* self, intptr_t slot);
QAction* QDesignerTaskMenuExtension_virtualbase_preferredEditAction(const void* self);
bool QDesignerTaskMenuExtension_override_virtual_taskActions(void* self, intptr_t slot);
struct miqt_array /* of QAction* */  QDesignerTaskMenuExtension_virtualbase_taskActions(const void* self);

void QDesignerTaskMenuExtension_delete(QDesignerTaskMenuExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
