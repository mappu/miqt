#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_ABSTRACTOPTIONSPAGE_H
#define MIQT_QT6_DESIGNER_GEN_ABSTRACTOPTIONSPAGE_H

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

QDesignerOptionsPageInterface* QDesignerOptionsPageInterface_new();
struct miqt_string QDesignerOptionsPageInterface_name(const QDesignerOptionsPageInterface* self);
QWidget* QDesignerOptionsPageInterface_createPage(QDesignerOptionsPageInterface* self, QWidget* parent);
void QDesignerOptionsPageInterface_apply(QDesignerOptionsPageInterface* self);
void QDesignerOptionsPageInterface_finish(QDesignerOptionsPageInterface* self);

bool QDesignerOptionsPageInterface_override_virtual_name(void* self, intptr_t slot);
struct miqt_string QDesignerOptionsPageInterface_virtualbase_name(const void* self);
bool QDesignerOptionsPageInterface_override_virtual_createPage(void* self, intptr_t slot);
QWidget* QDesignerOptionsPageInterface_virtualbase_createPage(void* self, QWidget* parent);
bool QDesignerOptionsPageInterface_override_virtual_apply(void* self, intptr_t slot);
void QDesignerOptionsPageInterface_virtualbase_apply(void* self);
bool QDesignerOptionsPageInterface_override_virtual_finish(void* self, intptr_t slot);
void QDesignerOptionsPageInterface_virtualbase_finish(void* self);

void QDesignerOptionsPageInterface_delete(QDesignerOptionsPageInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
