#pragma once
#ifndef MIQT_QT6_DESIGNER_GEN_EXTENSION_H
#define MIQT_QT6_DESIGNER_GEN_EXTENSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractExtensionFactory;
class QAbstractExtensionManager;
class QObject;
#else
typedef struct QAbstractExtensionFactory QAbstractExtensionFactory;
typedef struct QAbstractExtensionManager QAbstractExtensionManager;
typedef struct QObject QObject;
#endif

QObject* QAbstractExtensionFactory_extension(const QAbstractExtensionFactory* self, QObject* object, struct miqt_string iid);
void QAbstractExtensionFactory_operatorAssign(QAbstractExtensionFactory* self, QAbstractExtensionFactory* param1);

void QAbstractExtensionFactory_delete(QAbstractExtensionFactory* self);

void QAbstractExtensionManager_registerExtensions(QAbstractExtensionManager* self, QAbstractExtensionFactory* factory, struct miqt_string iid);
void QAbstractExtensionManager_unregisterExtensions(QAbstractExtensionManager* self, QAbstractExtensionFactory* factory, struct miqt_string iid);
QObject* QAbstractExtensionManager_extension(const QAbstractExtensionManager* self, QObject* object, struct miqt_string iid);
void QAbstractExtensionManager_operatorAssign(QAbstractExtensionManager* self, QAbstractExtensionManager* param1);

void QAbstractExtensionManager_delete(QAbstractExtensionManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
