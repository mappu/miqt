#ifndef GEN_QPLUGINLOADER_H
#define GEN_QPLUGINLOADER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJsonObject;
class QMetaObject;
class QObject;
class QPluginLoader;
class QStaticPlugin;
#else
typedef struct QJsonObject QJsonObject;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPluginLoader QPluginLoader;
typedef struct QStaticPlugin QStaticPlugin;
#endif

QPluginLoader* QPluginLoader_new();
QPluginLoader* QPluginLoader_new2(const char* fileName, size_t fileName_Strlen);
QPluginLoader* QPluginLoader_new3(QObject* parent);
QPluginLoader* QPluginLoader_new4(const char* fileName, size_t fileName_Strlen, QObject* parent);
QMetaObject* QPluginLoader_MetaObject(QPluginLoader* self);
void QPluginLoader_Tr(char* s, char** _out, int* _out_Strlen);
void QPluginLoader_TrUtf8(char* s, char** _out, int* _out_Strlen);
QObject* QPluginLoader_Instance(QPluginLoader* self);
QJsonObject* QPluginLoader_MetaData(QPluginLoader* self);
void QPluginLoader_StaticInstances(QObject*** _out, size_t* _out_len);
void QPluginLoader_StaticPlugins(QStaticPlugin*** _out, size_t* _out_len);
bool QPluginLoader_Load(QPluginLoader* self);
bool QPluginLoader_Unload(QPluginLoader* self);
bool QPluginLoader_IsLoaded(QPluginLoader* self);
void QPluginLoader_SetFileName(QPluginLoader* self, const char* fileName, size_t fileName_Strlen);
void QPluginLoader_FileName(QPluginLoader* self, char** _out, int* _out_Strlen);
void QPluginLoader_ErrorString(QPluginLoader* self, char** _out, int* _out_Strlen);
void QPluginLoader_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QPluginLoader_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QPluginLoader_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QPluginLoader_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QPluginLoader_Delete(QPluginLoader* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
