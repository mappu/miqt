#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_FORMBUILDER_H
#define MIQT_QT6_DESIGNER_GEN_FORMBUILDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractFormBuilder;
class QAction;
class QActionGroup;
class QFormBuilder;
class QIODevice;
class QLayout;
class QObject;
class QVariant;
class QWidget;
#else
typedef struct QAbstractFormBuilder QAbstractFormBuilder;
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QFormBuilder QFormBuilder;
typedef struct QIODevice QIODevice;
typedef struct QLayout QLayout;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QFormBuilder* QFormBuilder_new();
void QFormBuilder_virtbase(QFormBuilder* src, QAbstractFormBuilder** outptr_QAbstractFormBuilder);
struct miqt_array /* of struct miqt_string */  QFormBuilder_pluginPaths(const QFormBuilder* self);
void QFormBuilder_clearPluginPaths(QFormBuilder* self);
void QFormBuilder_addPluginPath(QFormBuilder* self, struct miqt_string pluginPath);
void QFormBuilder_setPluginPath(QFormBuilder* self, struct miqt_array /* of struct miqt_string */  pluginPaths);
QWidget* QFormBuilder_createWidget(QFormBuilder* self, struct miqt_string widgetName, QWidget* parentWidget, struct miqt_string name);
QLayout* QFormBuilder_createLayout(QFormBuilder* self, struct miqt_string layoutName, QObject* parent, struct miqt_string name);
void QFormBuilder_updateCustomWidgets(QFormBuilder* self);

bool QFormBuilder_override_virtual_createWidget(void* self, intptr_t slot);
QWidget* QFormBuilder_virtualbase_createWidget(void* self, struct miqt_string widgetName, QWidget* parentWidget, struct miqt_string name);
bool QFormBuilder_override_virtual_createLayout(void* self, intptr_t slot);
QLayout* QFormBuilder_virtualbase_createLayout(void* self, struct miqt_string layoutName, QObject* parent, struct miqt_string name);
bool QFormBuilder_override_virtual_updateCustomWidgets(void* self, intptr_t slot);
void QFormBuilder_virtualbase_updateCustomWidgets(void* self);
bool QFormBuilder_override_virtual_load(void* self, intptr_t slot);
QWidget* QFormBuilder_virtualbase_load(void* self, QIODevice* dev, QWidget* parentWidget);
bool QFormBuilder_override_virtual_save(void* self, intptr_t slot);
void QFormBuilder_virtualbase_save(void* self, QIODevice* dev, QWidget* widget);
bool QFormBuilder_override_virtual_addMenuAction(void* self, intptr_t slot);
void QFormBuilder_virtualbase_addMenuAction(void* self, QAction* action);
bool QFormBuilder_override_virtual_createAction(void* self, intptr_t slot);
QAction* QFormBuilder_virtualbase_createAction(void* self, QObject* parent, struct miqt_string name);
bool QFormBuilder_override_virtual_createActionGroup(void* self, intptr_t slot);
QActionGroup* QFormBuilder_virtualbase_createActionGroup(void* self, QObject* parent, struct miqt_string name);
bool QFormBuilder_override_virtual_checkProperty(void* self, intptr_t slot);
bool QFormBuilder_virtualbase_checkProperty(const void* self, QObject* obj, struct miqt_string prop);

bool QFormBuilder_protectedbase_applyPropertyInternally(bool* _dynamic_cast_ok, void* self, QObject* o, struct miqt_string propertyName, QVariant* value);
void QFormBuilder_protectedbase_reset(bool* _dynamic_cast_ok, void* self);

void QFormBuilder_delete(QFormBuilder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
