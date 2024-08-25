#ifndef GEN_QPLUGIN_H
#define GEN_QPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJsonObject;
class QStaticPlugin;
#else
typedef struct QJsonObject QJsonObject;
typedef struct QStaticPlugin QStaticPlugin;
#endif

QJsonObject* QStaticPlugin_MetaData(QStaticPlugin* self);
void QStaticPlugin_Delete(QStaticPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
