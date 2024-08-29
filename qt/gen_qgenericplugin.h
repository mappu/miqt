#ifndef GEN_QGENERICPLUGIN_H
#define GEN_QGENERICPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGenericPlugin;
class QMetaObject;
class QObject;
#else
typedef struct QGenericPlugin QGenericPlugin;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QGenericPlugin_MetaObject(QGenericPlugin* self);
void QGenericPlugin_Tr(const char* s, char** _out, int* _out_Strlen);
void QGenericPlugin_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QObject* QGenericPlugin_Create(QGenericPlugin* self, const char* name, size_t name_Strlen, const char* spec, size_t spec_Strlen);
void QGenericPlugin_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGenericPlugin_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGenericPlugin_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGenericPlugin_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGenericPlugin_Delete(QGenericPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
