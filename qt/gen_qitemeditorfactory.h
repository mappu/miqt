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

QWidget* QItemEditorCreatorBase_CreateWidget(const QItemEditorCreatorBase* self, QWidget* parent);
struct miqt_string QItemEditorCreatorBase_ValuePropertyName(const QItemEditorCreatorBase* self);
void QItemEditorCreatorBase_OperatorAssign(QItemEditorCreatorBase* self, QItemEditorCreatorBase* param1);
void QItemEditorCreatorBase_Delete(QItemEditorCreatorBase* self);

QItemEditorFactory* QItemEditorFactory_new();
QItemEditorFactory* QItemEditorFactory_new2(QItemEditorFactory* param1);
QWidget* QItemEditorFactory_CreateEditor(const QItemEditorFactory* self, int userType, QWidget* parent);
struct miqt_string QItemEditorFactory_ValuePropertyName(const QItemEditorFactory* self, int userType);
void QItemEditorFactory_RegisterEditor(QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator);
QItemEditorFactory* QItemEditorFactory_DefaultFactory();
void QItemEditorFactory_SetDefaultFactory(QItemEditorFactory* factory);
bool QItemEditorFactory_override_virtual_CreateEditor(void* self, intptr_t slot);
QWidget* QItemEditorFactory_virtualbase_CreateEditor(const void* self, int userType, QWidget* parent);
bool QItemEditorFactory_override_virtual_ValuePropertyName(void* self, intptr_t slot);
struct miqt_string QItemEditorFactory_virtualbase_ValuePropertyName(const void* self, int userType);
void QItemEditorFactory_Delete(QItemEditorFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
