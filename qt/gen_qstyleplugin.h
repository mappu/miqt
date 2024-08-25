#ifndef GEN_QSTYLEPLUGIN_H
#define GEN_QSTYLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QStyle;
class QStylePlugin;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QStyle QStyle;
typedef struct QStylePlugin QStylePlugin;
#endif

QMetaObject* QStylePlugin_MetaObject(QStylePlugin* self);
void QStylePlugin_Tr(char* s, char** _out, int* _out_Strlen);
void QStylePlugin_TrUtf8(char* s, char** _out, int* _out_Strlen);
QStyle* QStylePlugin_Create(QStylePlugin* self, const char* key, size_t key_Strlen);
void QStylePlugin_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QStylePlugin_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QStylePlugin_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QStylePlugin_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QStylePlugin_Delete(QStylePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
