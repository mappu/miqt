#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTOPTIONSPAGE_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTOPTIONSPAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerOptionsPageInterface;
class QWidget;
#else
typedef struct QDesignerOptionsPageInterface QDesignerOptionsPageInterface;
typedef struct QWidget QWidget;
#endif

struct miqt_string QDesignerOptionsPageInterface_name(const QDesignerOptionsPageInterface* self);
QWidget* QDesignerOptionsPageInterface_createPage(QDesignerOptionsPageInterface* self, QWidget* parent);
void QDesignerOptionsPageInterface_apply(QDesignerOptionsPageInterface* self);
void QDesignerOptionsPageInterface_finish(QDesignerOptionsPageInterface* self);
void QDesignerOptionsPageInterface_operatorAssign(QDesignerOptionsPageInterface* self, QDesignerOptionsPageInterface* param1);

void QDesignerOptionsPageInterface_delete(QDesignerOptionsPageInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
