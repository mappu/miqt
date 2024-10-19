#ifndef GEN_QPLUGINLOADER_H
#define GEN_QPLUGINLOADER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QPluginLoader* QPluginLoader_new2(struct miqt_string fileName);
QPluginLoader* QPluginLoader_new3(QObject* parent);
QPluginLoader* QPluginLoader_new4(struct miqt_string fileName, QObject* parent);
QMetaObject* QPluginLoader_MetaObject(const QPluginLoader* self);
void* QPluginLoader_Metacast(QPluginLoader* self, const char* param1);
struct miqt_string QPluginLoader_Tr(const char* s);
struct miqt_string QPluginLoader_TrUtf8(const char* s);
QObject* QPluginLoader_Instance(QPluginLoader* self);
QJsonObject* QPluginLoader_MetaData(const QPluginLoader* self);
struct miqt_array* QPluginLoader_StaticInstances();
struct miqt_array* QPluginLoader_StaticPlugins();
bool QPluginLoader_Load(QPluginLoader* self);
bool QPluginLoader_Unload(QPluginLoader* self);
bool QPluginLoader_IsLoaded(const QPluginLoader* self);
void QPluginLoader_SetFileName(QPluginLoader* self, struct miqt_string fileName);
struct miqt_string QPluginLoader_FileName(const QPluginLoader* self);
struct miqt_string QPluginLoader_ErrorString(const QPluginLoader* self);
void QPluginLoader_SetLoadHints(QPluginLoader* self, int loadHints);
int QPluginLoader_LoadHints(const QPluginLoader* self);
struct miqt_string QPluginLoader_Tr2(const char* s, const char* c);
struct miqt_string QPluginLoader_Tr3(const char* s, const char* c, int n);
struct miqt_string QPluginLoader_TrUtf82(const char* s, const char* c);
struct miqt_string QPluginLoader_TrUtf83(const char* s, const char* c, int n);
void QPluginLoader_Delete(QPluginLoader* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
