#pragma once
#ifndef MIQT_QT_GEN_QGENERICPLUGINFACTORY_H
#define MIQT_QT_GEN_QGENERICPLUGINFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGenericPluginFactory;
class QObject;
#else
typedef struct QGenericPluginFactory QGenericPluginFactory;
typedef struct QObject QObject;
#endif

struct miqt_array /* of struct miqt_string */  QGenericPluginFactory_keys();
QObject* QGenericPluginFactory_create(struct miqt_string param1, struct miqt_string param2);

void QGenericPluginFactory_delete(QGenericPluginFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
