#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_TASKMENU_H
#define MIQT_QT_DESIGNER_GEN_TASKMENU_H

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

QAction* QDesignerTaskMenuExtension_preferredEditAction(const QDesignerTaskMenuExtension* self);
struct miqt_array /* of QAction* */  QDesignerTaskMenuExtension_taskActions(const QDesignerTaskMenuExtension* self);
void QDesignerTaskMenuExtension_operatorAssign(QDesignerTaskMenuExtension* self, QDesignerTaskMenuExtension* param1);

void QDesignerTaskMenuExtension_delete(QDesignerTaskMenuExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
