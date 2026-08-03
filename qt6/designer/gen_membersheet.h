#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_MEMBERSHEET_H
#define MIQT_QT6_DESIGNER_GEN_MEMBERSHEET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerMemberSheetExtension;
#else
typedef struct QDesignerMemberSheetExtension QDesignerMemberSheetExtension;
#endif

QDesignerMemberSheetExtension* QDesignerMemberSheetExtension_new();
int QDesignerMemberSheetExtension_count(const QDesignerMemberSheetExtension* self);
int QDesignerMemberSheetExtension_indexOf(const QDesignerMemberSheetExtension* self, struct miqt_string name);
struct miqt_string QDesignerMemberSheetExtension_memberName(const QDesignerMemberSheetExtension* self, int index);
struct miqt_string QDesignerMemberSheetExtension_memberGroup(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_setMemberGroup(QDesignerMemberSheetExtension* self, int index, struct miqt_string group);
bool QDesignerMemberSheetExtension_isVisible(const QDesignerMemberSheetExtension* self, int index);
void QDesignerMemberSheetExtension_setVisible(QDesignerMemberSheetExtension* self, int index, bool b);
bool QDesignerMemberSheetExtension_isSignal(const QDesignerMemberSheetExtension* self, int index);
bool QDesignerMemberSheetExtension_isSlot(const QDesignerMemberSheetExtension* self, int index);
bool QDesignerMemberSheetExtension_inheritedFromWidget(const QDesignerMemberSheetExtension* self, int index);
struct miqt_string QDesignerMemberSheetExtension_declaredInClass(const QDesignerMemberSheetExtension* self, int index);
struct miqt_string QDesignerMemberSheetExtension_signature(const QDesignerMemberSheetExtension* self, int index);
struct miqt_array /* of struct miqt_string */  QDesignerMemberSheetExtension_parameterTypes(const QDesignerMemberSheetExtension* self, int index);
struct miqt_array /* of struct miqt_string */  QDesignerMemberSheetExtension_parameterNames(const QDesignerMemberSheetExtension* self, int index);

bool QDesignerMemberSheetExtension_override_virtual_count(void* self, intptr_t slot);
int QDesignerMemberSheetExtension_virtualbase_count(const void* self);
bool QDesignerMemberSheetExtension_override_virtual_indexOf(void* self, intptr_t slot);
int QDesignerMemberSheetExtension_virtualbase_indexOf(const void* self, struct miqt_string name);
bool QDesignerMemberSheetExtension_override_virtual_memberName(void* self, intptr_t slot);
struct miqt_string QDesignerMemberSheetExtension_virtualbase_memberName(const void* self, int index);
bool QDesignerMemberSheetExtension_override_virtual_memberGroup(void* self, intptr_t slot);
struct miqt_string QDesignerMemberSheetExtension_virtualbase_memberGroup(const void* self, int index);
bool QDesignerMemberSheetExtension_override_virtual_setMemberGroup(void* self, intptr_t slot);
void QDesignerMemberSheetExtension_virtualbase_setMemberGroup(void* self, int index, struct miqt_string group);
bool QDesignerMemberSheetExtension_override_virtual_isVisible(void* self, intptr_t slot);
bool QDesignerMemberSheetExtension_virtualbase_isVisible(const void* self, int index);
bool QDesignerMemberSheetExtension_override_virtual_setVisible(void* self, intptr_t slot);
void QDesignerMemberSheetExtension_virtualbase_setVisible(void* self, int index, bool b);
bool QDesignerMemberSheetExtension_override_virtual_isSignal(void* self, intptr_t slot);
bool QDesignerMemberSheetExtension_virtualbase_isSignal(const void* self, int index);
bool QDesignerMemberSheetExtension_override_virtual_isSlot(void* self, intptr_t slot);
bool QDesignerMemberSheetExtension_virtualbase_isSlot(const void* self, int index);
bool QDesignerMemberSheetExtension_override_virtual_inheritedFromWidget(void* self, intptr_t slot);
bool QDesignerMemberSheetExtension_virtualbase_inheritedFromWidget(const void* self, int index);
bool QDesignerMemberSheetExtension_override_virtual_declaredInClass(void* self, intptr_t slot);
struct miqt_string QDesignerMemberSheetExtension_virtualbase_declaredInClass(const void* self, int index);
bool QDesignerMemberSheetExtension_override_virtual_signature(void* self, intptr_t slot);
struct miqt_string QDesignerMemberSheetExtension_virtualbase_signature(const void* self, int index);
bool QDesignerMemberSheetExtension_override_virtual_parameterTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QDesignerMemberSheetExtension_virtualbase_parameterTypes(const void* self, int index);
bool QDesignerMemberSheetExtension_override_virtual_parameterNames(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QDesignerMemberSheetExtension_virtualbase_parameterNames(const void* self, int index);

void QDesignerMemberSheetExtension_delete(QDesignerMemberSheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
