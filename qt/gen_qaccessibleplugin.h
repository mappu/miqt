#ifndef GEN_QACCESSIBLEPLUGIN_H
#define GEN_QACCESSIBLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QMetaObject* QAccessiblePlugin_MetaObject(QAccessiblePlugin* self);
void QAccessiblePlugin_Tr(char* s, char** _out, int* _out_Strlen);
void QAccessiblePlugin_TrUtf8(char* s, char** _out, int* _out_Strlen);
QAccessibleInterface* QAccessiblePlugin_Create(QAccessiblePlugin* self, const char* key, size_t key_Strlen, QObject* object);
void QAccessiblePlugin_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QAccessiblePlugin_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAccessiblePlugin_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QAccessiblePlugin_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAccessiblePlugin_Delete(QAccessiblePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
