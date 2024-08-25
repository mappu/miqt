#ifndef GEN_QPARALLELANIMATIONGROUP_H
#define GEN_QPARALLELANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QParallelAnimationGroup;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QParallelAnimationGroup QParallelAnimationGroup;
#endif

QParallelAnimationGroup* QParallelAnimationGroup_new();
QParallelAnimationGroup* QParallelAnimationGroup_new2(QObject* parent);
QMetaObject* QParallelAnimationGroup_MetaObject(QParallelAnimationGroup* self);
void QParallelAnimationGroup_Tr(char* s, char** _out, int* _out_Strlen);
void QParallelAnimationGroup_TrUtf8(char* s, char** _out, int* _out_Strlen);
int QParallelAnimationGroup_Duration(QParallelAnimationGroup* self);
void QParallelAnimationGroup_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QParallelAnimationGroup_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QParallelAnimationGroup_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QParallelAnimationGroup_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QParallelAnimationGroup_Delete(QParallelAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
