#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_ABSTRACTPROMOTIONINTERFACE_H
#define MIQT_QT6_DESIGNER_GEN_ABSTRACTPROMOTIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerPromotionInterface;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDesignerPromotionInterface__PromotedClass)
typedef QDesignerPromotionInterface::PromotedClass QDesignerPromotionInterface__PromotedClass;
#else
class QDesignerPromotionInterface__PromotedClass;
#endif
class QDesignerWidgetDataBaseItemInterface;
#else
typedef struct QDesignerPromotionInterface QDesignerPromotionInterface;
typedef struct QDesignerPromotionInterface__PromotedClass QDesignerPromotionInterface__PromotedClass;
typedef struct QDesignerWidgetDataBaseItemInterface QDesignerWidgetDataBaseItemInterface;
#endif

struct miqt_array /* of QDesignerPromotionInterface__PromotedClass* */  QDesignerPromotionInterface_promotedClasses(const QDesignerPromotionInterface* self);
struct miqt_array /* set of struct miqt_string */  QDesignerPromotionInterface_referencedPromotedClassNames(const QDesignerPromotionInterface* self);
struct miqt_array /* of QDesignerWidgetDataBaseItemInterface* */  QDesignerPromotionInterface_promotionBaseClasses(const QDesignerPromotionInterface* self);

void QDesignerPromotionInterface_delete(QDesignerPromotionInterface* self);

QDesignerWidgetDataBaseItemInterface* QDesignerPromotionInterface__PromotedClass_baseItem(const QDesignerPromotionInterface__PromotedClass* self);
void QDesignerPromotionInterface__PromotedClass_setBaseItem(QDesignerPromotionInterface__PromotedClass* self, QDesignerWidgetDataBaseItemInterface* baseItem);
QDesignerWidgetDataBaseItemInterface* QDesignerPromotionInterface__PromotedClass_promotedItem(const QDesignerPromotionInterface__PromotedClass* self);
void QDesignerPromotionInterface__PromotedClass_setPromotedItem(QDesignerPromotionInterface__PromotedClass* self, QDesignerWidgetDataBaseItemInterface* promotedItem);

void QDesignerPromotionInterface__PromotedClass_delete(QDesignerPromotionInterface__PromotedClass* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
