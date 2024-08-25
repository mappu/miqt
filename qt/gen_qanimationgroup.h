#ifndef GEN_QANIMATIONGROUP_H
#define GEN_QANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QAnimationGroup;
class QMetaObject;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QAnimationGroup_MetaObject(QAnimationGroup* self);
void QAnimationGroup_Tr(char* s, char** _out, int* _out_Strlen);
void QAnimationGroup_TrUtf8(char* s, char** _out, int* _out_Strlen);
QAbstractAnimation* QAnimationGroup_AnimationAt(QAnimationGroup* self, int index);
int QAnimationGroup_AnimationCount(QAnimationGroup* self);
int QAnimationGroup_IndexOfAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_AddAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_InsertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation);
void QAnimationGroup_RemoveAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
QAbstractAnimation* QAnimationGroup_TakeAnimation(QAnimationGroup* self, int index);
void QAnimationGroup_Clear(QAnimationGroup* self);
void QAnimationGroup_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QAnimationGroup_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAnimationGroup_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QAnimationGroup_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QAnimationGroup_Delete(QAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
