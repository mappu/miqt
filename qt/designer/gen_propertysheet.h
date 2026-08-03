#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_PROPERTYSHEET_H
#define MIQT_QT_DESIGNER_GEN_PROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerPropertySheetExtension;
class QVariant;
#else
typedef struct QDesignerPropertySheetExtension QDesignerPropertySheetExtension;
typedef struct QVariant QVariant;
#endif

int QDesignerPropertySheetExtension_count(const QDesignerPropertySheetExtension* self);
int QDesignerPropertySheetExtension_indexOf(const QDesignerPropertySheetExtension* self, struct miqt_string name);
struct miqt_string QDesignerPropertySheetExtension_propertyName(const QDesignerPropertySheetExtension* self, int index);
struct miqt_string QDesignerPropertySheetExtension_propertyGroup(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_setPropertyGroup(QDesignerPropertySheetExtension* self, int index, struct miqt_string group);
bool QDesignerPropertySheetExtension_hasReset(const QDesignerPropertySheetExtension* self, int index);
bool QDesignerPropertySheetExtension_reset(QDesignerPropertySheetExtension* self, int index);
bool QDesignerPropertySheetExtension_isVisible(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_setVisible(QDesignerPropertySheetExtension* self, int index, bool b);
bool QDesignerPropertySheetExtension_isAttribute(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_setAttribute(QDesignerPropertySheetExtension* self, int index, bool b);
QVariant* QDesignerPropertySheetExtension_property(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_setProperty(QDesignerPropertySheetExtension* self, int index, QVariant* value);
bool QDesignerPropertySheetExtension_isChanged(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_setChanged(QDesignerPropertySheetExtension* self, int index, bool changed);
bool QDesignerPropertySheetExtension_isEnabled(const QDesignerPropertySheetExtension* self, int index);
void QDesignerPropertySheetExtension_operatorAssign(QDesignerPropertySheetExtension* self, QDesignerPropertySheetExtension* param1);

void QDesignerPropertySheetExtension_delete(QDesignerPropertySheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
