#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTSETTINGS_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTSETTINGS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerSettingsInterface;
class QVariant;
#else
typedef struct QDesignerSettingsInterface QDesignerSettingsInterface;
typedef struct QVariant QVariant;
#endif

void QDesignerSettingsInterface_beginGroup(QDesignerSettingsInterface* self, struct miqt_string prefix);
void QDesignerSettingsInterface_endGroup(QDesignerSettingsInterface* self);
bool QDesignerSettingsInterface_contains(const QDesignerSettingsInterface* self, struct miqt_string key);
void QDesignerSettingsInterface_setValue(QDesignerSettingsInterface* self, struct miqt_string key, QVariant* value);
QVariant* QDesignerSettingsInterface_value(const QDesignerSettingsInterface* self, struct miqt_string key, QVariant* defaultValue);
void QDesignerSettingsInterface_remove(QDesignerSettingsInterface* self, struct miqt_string key);
void QDesignerSettingsInterface_operatorAssign(QDesignerSettingsInterface* self, QDesignerSettingsInterface* param1);

void QDesignerSettingsInterface_delete(QDesignerSettingsInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
