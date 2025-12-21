#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_EXTRAINFO_H
#define MIQT_QT6_DESIGNER_GEN_EXTRAINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerExtraInfoExtension;
class QDesignerFormEditorInterface;
class QWidget;
#else
typedef struct QDesignerExtraInfoExtension QDesignerExtraInfoExtension;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QWidget QWidget;
#endif

QDesignerFormEditorInterface* QDesignerExtraInfoExtension_core(const QDesignerExtraInfoExtension* self);
QWidget* QDesignerExtraInfoExtension_widget(const QDesignerExtraInfoExtension* self);
struct miqt_string QDesignerExtraInfoExtension_workingDirectory(const QDesignerExtraInfoExtension* self);
void QDesignerExtraInfoExtension_setWorkingDirectory(QDesignerExtraInfoExtension* self, struct miqt_string workingDirectory);

void QDesignerExtraInfoExtension_delete(QDesignerExtraInfoExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
