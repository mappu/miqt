#ifndef GEN_QGENERICPLUGINFACTORY_H
#define GEN_QGENERICPLUGINFACTORY_H

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

struct miqt_array QGenericPluginFactory_Keys();
QObject* QGenericPluginFactory_Create(struct miqt_string param1, struct miqt_string param2);
void QGenericPluginFactory_Delete(QGenericPluginFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
