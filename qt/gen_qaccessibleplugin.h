#ifndef GEN_QACCESSIBLEPLUGIN_H
#define GEN_QACCESSIBLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessibleInterface;
class QAccessiblePlugin;
class QMetaObject;
class QObject;
#else
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessiblePlugin QAccessiblePlugin;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QAccessiblePlugin_MetaObject(const QAccessiblePlugin* self);
void* QAccessiblePlugin_Metacast(QAccessiblePlugin* self, const char* param1);
struct miqt_string* QAccessiblePlugin_Tr(const char* s);
struct miqt_string* QAccessiblePlugin_TrUtf8(const char* s);
QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, struct miqt_string* key, QObject* object);
struct miqt_string* QAccessiblePlugin_Tr2(const char* s, const char* c);
struct miqt_string* QAccessiblePlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string* QAccessiblePlugin_TrUtf82(const char* s, const char* c);
struct miqt_string* QAccessiblePlugin_TrUtf83(const char* s, const char* c, int n);
void QAccessiblePlugin_Delete(QAccessiblePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
