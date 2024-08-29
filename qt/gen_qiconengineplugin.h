#ifndef GEN_QICONENGINEPLUGIN_H
#define GEN_QICONENGINEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIconEngine;
class QIconEnginePlugin;
class QMetaObject;
#else
typedef struct QIconEngine QIconEngine;
typedef struct QIconEnginePlugin QIconEnginePlugin;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QIconEnginePlugin_MetaObject(QIconEnginePlugin* self);
void QIconEnginePlugin_Tr(const char* s, char** _out, int* _out_Strlen);
void QIconEnginePlugin_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QIconEngine* QIconEnginePlugin_Create(QIconEnginePlugin* self);
void QIconEnginePlugin_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QIconEnginePlugin_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QIconEnginePlugin_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QIconEnginePlugin_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
QIconEngine* QIconEnginePlugin_Create1(QIconEnginePlugin* self, const char* filename, size_t filename_Strlen);
void QIconEnginePlugin_Delete(QIconEnginePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
