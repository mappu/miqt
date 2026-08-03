#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_MEMBERSHEET_H
#define MIQT_QT_DESIGNER_GEN_MEMBERSHEET_H

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
void QDesignerMemberSheetExtension_operatorAssign(QDesignerMemberSheetExtension* self, QDesignerMemberSheetExtension* param1);

void QDesignerMemberSheetExtension_delete(QDesignerMemberSheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
