#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTFORMBUILDER_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTFORMBUILDER_H

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
class QDir;
class QIODevice;
class QIcon;
class QLayout;
class QObject;
class QPixmap;
class QVariant;
class QWidget;
#else
typedef struct QAbstractFormBuilder QAbstractFormBuilder;
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QDir QDir;
typedef struct QIODevice QIODevice;
typedef struct QIcon QIcon;
typedef struct QLayout QLayout;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QAbstractFormBuilder* QAbstractFormBuilder_new();
QDir* QAbstractFormBuilder_workingDirectory(const QAbstractFormBuilder* self);
void QAbstractFormBuilder_setWorkingDirectory(QAbstractFormBuilder* self, QDir* directory);
QWidget* QAbstractFormBuilder_load(QAbstractFormBuilder* self, QIODevice* dev, QWidget* parentWidget);
void QAbstractFormBuilder_save(QAbstractFormBuilder* self, QIODevice* dev, QWidget* widget);
struct miqt_string QAbstractFormBuilder_errorString(const QAbstractFormBuilder* self);
void QAbstractFormBuilder_addMenuAction(QAbstractFormBuilder* self, QAction* action);
QWidget* QAbstractFormBuilder_createWidget(QAbstractFormBuilder* self, struct miqt_string widgetName, QWidget* parentWidget, struct miqt_string name);
QLayout* QAbstractFormBuilder_createLayout(QAbstractFormBuilder* self, struct miqt_string layoutName, QObject* parent, struct miqt_string name);
QAction* QAbstractFormBuilder_createAction(QAbstractFormBuilder* self, QObject* parent, struct miqt_string name);
QActionGroup* QAbstractFormBuilder_createActionGroup(QAbstractFormBuilder* self, QObject* parent, struct miqt_string name);
bool QAbstractFormBuilder_checkProperty(const QAbstractFormBuilder* self, QObject* obj, struct miqt_string prop);

bool QAbstractFormBuilder_override_virtual_load(void* self, intptr_t slot);
QWidget* QAbstractFormBuilder_virtualbase_load(void* self, QIODevice* dev, QWidget* parentWidget);
bool QAbstractFormBuilder_override_virtual_save(void* self, intptr_t slot);
void QAbstractFormBuilder_virtualbase_save(void* self, QIODevice* dev, QWidget* widget);
bool QAbstractFormBuilder_override_virtual_addMenuAction(void* self, intptr_t slot);
void QAbstractFormBuilder_virtualbase_addMenuAction(void* self, QAction* action);
bool QAbstractFormBuilder_override_virtual_createWidget(void* self, intptr_t slot);
QWidget* QAbstractFormBuilder_virtualbase_createWidget(void* self, struct miqt_string widgetName, QWidget* parentWidget, struct miqt_string name);
bool QAbstractFormBuilder_override_virtual_createLayout(void* self, intptr_t slot);
QLayout* QAbstractFormBuilder_virtualbase_createLayout(void* self, struct miqt_string layoutName, QObject* parent, struct miqt_string name);
bool QAbstractFormBuilder_override_virtual_createAction(void* self, intptr_t slot);
QAction* QAbstractFormBuilder_virtualbase_createAction(void* self, QObject* parent, struct miqt_string name);
bool QAbstractFormBuilder_override_virtual_createActionGroup(void* self, intptr_t slot);
QActionGroup* QAbstractFormBuilder_virtualbase_createActionGroup(void* self, QObject* parent, struct miqt_string name);
bool QAbstractFormBuilder_override_virtual_checkProperty(void* self, intptr_t slot);
bool QAbstractFormBuilder_virtualbase_checkProperty(const void* self, QObject* obj, struct miqt_string prop);

bool QAbstractFormBuilder_protectedbase_applyPropertyInternally(bool* _dynamic_cast_ok, void* self, QObject* o, struct miqt_string propertyName, QVariant* value);
void QAbstractFormBuilder_protectedbase_reset(bool* _dynamic_cast_ok, void* self);
struct miqt_map /* tuple of struct miqt_string and struct miqt_string */  QAbstractFormBuilder_protectedbase_iconPaths(bool* _dynamic_cast_ok, const void* self, QIcon* param1);
struct miqt_map /* tuple of struct miqt_string and struct miqt_string */  QAbstractFormBuilder_protectedbase_pixmapPaths(bool* _dynamic_cast_ok, const void* self, QPixmap* param1);

void QAbstractFormBuilder_delete(QAbstractFormBuilder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
