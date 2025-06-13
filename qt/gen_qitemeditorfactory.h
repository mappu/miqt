#pragma once
#ifndef MIQT_QT_GEN_QITEMEDITORFACTORY_H
#define MIQT_QT_GEN_QITEMEDITORFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QItemEditorCreatorBase;
class QItemEditorFactory;
class QWidget;
#else
typedef struct QItemEditorCreatorBase QItemEditorCreatorBase;
typedef struct QItemEditorFactory QItemEditorFactory;
typedef struct QWidget QWidget;
#endif

QWidget* QItemEditorCreatorBase_createWidget(const QItemEditorCreatorBase* self, QWidget* parent);
struct miqt_string QItemEditorCreatorBase_valuePropertyName(const QItemEditorCreatorBase* self);
void QItemEditorCreatorBase_operatorAssign(QItemEditorCreatorBase* self, QItemEditorCreatorBase* param1);

void QItemEditorCreatorBase_delete(QItemEditorCreatorBase* self);

QItemEditorFactory* QItemEditorFactory_new();
QItemEditorFactory* QItemEditorFactory_new2(QItemEditorFactory* param1);
QWidget* QItemEditorFactory_createEditor(const QItemEditorFactory* self, int userType, QWidget* parent);
struct miqt_string QItemEditorFactory_valuePropertyName(const QItemEditorFactory* self, int userType);
void QItemEditorFactory_registerEditor(QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator);
QItemEditorFactory* QItemEditorFactory_defaultFactory();
void QItemEditorFactory_setDefaultFactory(QItemEditorFactory* factory);

bool QItemEditorFactory_override_virtual_createEditor(void* self, intptr_t slot);
QWidget* QItemEditorFactory_virtualbase_createEditor(const void* self, int userType, QWidget* parent);
bool QItemEditorFactory_override_virtual_valuePropertyName(void* self, intptr_t slot);
struct miqt_string QItemEditorFactory_virtualbase_valuePropertyName(const void* self, int userType);

void QItemEditorFactory_delete(QItemEditorFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
