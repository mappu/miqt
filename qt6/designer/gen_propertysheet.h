#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_PROPERTYSHEET_H
#define MIQT_QT6_DESIGNER_GEN_PROPERTYSHEET_H

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

QDesignerPropertySheetExtension* QDesignerPropertySheetExtension_new();
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

bool QDesignerPropertySheetExtension_override_virtual_count(void* self, intptr_t slot);
int QDesignerPropertySheetExtension_virtualbase_count(const void* self);
bool QDesignerPropertySheetExtension_override_virtual_indexOf(void* self, intptr_t slot);
int QDesignerPropertySheetExtension_virtualbase_indexOf(const void* self, struct miqt_string name);
bool QDesignerPropertySheetExtension_override_virtual_propertyName(void* self, intptr_t slot);
struct miqt_string QDesignerPropertySheetExtension_virtualbase_propertyName(const void* self, int index);
bool QDesignerPropertySheetExtension_override_virtual_propertyGroup(void* self, intptr_t slot);
struct miqt_string QDesignerPropertySheetExtension_virtualbase_propertyGroup(const void* self, int index);
bool QDesignerPropertySheetExtension_override_virtual_setPropertyGroup(void* self, intptr_t slot);
void QDesignerPropertySheetExtension_virtualbase_setPropertyGroup(void* self, int index, struct miqt_string group);
bool QDesignerPropertySheetExtension_override_virtual_hasReset(void* self, intptr_t slot);
bool QDesignerPropertySheetExtension_virtualbase_hasReset(const void* self, int index);
bool QDesignerPropertySheetExtension_override_virtual_reset(void* self, intptr_t slot);
bool QDesignerPropertySheetExtension_virtualbase_reset(void* self, int index);
bool QDesignerPropertySheetExtension_override_virtual_isVisible(void* self, intptr_t slot);
bool QDesignerPropertySheetExtension_virtualbase_isVisible(const void* self, int index);
bool QDesignerPropertySheetExtension_override_virtual_setVisible(void* self, intptr_t slot);
void QDesignerPropertySheetExtension_virtualbase_setVisible(void* self, int index, bool b);
bool QDesignerPropertySheetExtension_override_virtual_isAttribute(void* self, intptr_t slot);
bool QDesignerPropertySheetExtension_virtualbase_isAttribute(const void* self, int index);
bool QDesignerPropertySheetExtension_override_virtual_setAttribute(void* self, intptr_t slot);
void QDesignerPropertySheetExtension_virtualbase_setAttribute(void* self, int index, bool b);
bool QDesignerPropertySheetExtension_override_virtual_property(void* self, intptr_t slot);
QVariant* QDesignerPropertySheetExtension_virtualbase_property(const void* self, int index);
bool QDesignerPropertySheetExtension_override_virtual_setProperty(void* self, intptr_t slot);
void QDesignerPropertySheetExtension_virtualbase_setProperty(void* self, int index, QVariant* value);
bool QDesignerPropertySheetExtension_override_virtual_isChanged(void* self, intptr_t slot);
bool QDesignerPropertySheetExtension_virtualbase_isChanged(const void* self, int index);
bool QDesignerPropertySheetExtension_override_virtual_setChanged(void* self, intptr_t slot);
void QDesignerPropertySheetExtension_virtualbase_setChanged(void* self, int index, bool changed);
bool QDesignerPropertySheetExtension_override_virtual_isEnabled(void* self, intptr_t slot);
bool QDesignerPropertySheetExtension_virtualbase_isEnabled(const void* self, int index);

void QDesignerPropertySheetExtension_delete(QDesignerPropertySheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
