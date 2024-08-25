#ifndef GEN_QGENERICPLUGINFACTORY_H
#define GEN_QGENERICPLUGINFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

void QGenericPluginFactory_Keys(char*** _out, int** _out_Lengths, size_t* _out_len);
QObject* QGenericPluginFactory_Create(const char* param1, size_t param1_Strlen, const char* param2, size_t param2_Strlen);
void QGenericPluginFactory_Delete(QGenericPluginFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
