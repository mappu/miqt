#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_DYNAMICPROPERTYSHEET_H
#define MIQT_QT_DESIGNER_GEN_DYNAMICPROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerDynamicPropertySheetExtension;
class QVariant;
#else
typedef struct QDesignerDynamicPropertySheetExtension QDesignerDynamicPropertySheetExtension;
typedef struct QVariant QVariant;
#endif

bool QDesignerDynamicPropertySheetExtension_dynamicPropertiesAllowed(const QDesignerDynamicPropertySheetExtension* self);
int QDesignerDynamicPropertySheetExtension_addDynamicProperty(QDesignerDynamicPropertySheetExtension* self, struct miqt_string propertyName, QVariant* value);
bool QDesignerDynamicPropertySheetExtension_removeDynamicProperty(QDesignerDynamicPropertySheetExtension* self, int index);
bool QDesignerDynamicPropertySheetExtension_isDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, int index);
bool QDesignerDynamicPropertySheetExtension_canAddDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, struct miqt_string propertyName);
void QDesignerDynamicPropertySheetExtension_operatorAssign(QDesignerDynamicPropertySheetExtension* self, QDesignerDynamicPropertySheetExtension* param1);

void QDesignerDynamicPropertySheetExtension_delete(QDesignerDynamicPropertySheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
