#ifndef GEN_QICONENGINE_H
#define GEN_QICONENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDataStream;
class QIconEngine;
#else
typedef struct QDataStream QDataStream;
typedef struct QIconEngine QIconEngine;
#endif

void QIconEngine_Key(QIconEngine* self, char** _out, int* _out_Strlen);
QIconEngine* QIconEngine_Clone(QIconEngine* self);
bool QIconEngine_Read(QIconEngine* self, QDataStream* in);
bool QIconEngine_Write(QIconEngine* self, QDataStream* out);
void QIconEngine_IconName(QIconEngine* self, char** _out, int* _out_Strlen);
bool QIconEngine_IsNull(QIconEngine* self);
void QIconEngine_Delete(QIconEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
