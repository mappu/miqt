#ifndef GEN_QANIMATIONGROUP_H
#define GEN_QANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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

QMetaObject* QAnimationGroup_MetaObject(const QAnimationGroup* self);
struct miqt_string* QAnimationGroup_Tr(const char* s);
struct miqt_string* QAnimationGroup_TrUtf8(const char* s);
QAbstractAnimation* QAnimationGroup_AnimationAt(const QAnimationGroup* self, int index);
int QAnimationGroup_AnimationCount(const QAnimationGroup* self);
int QAnimationGroup_IndexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_AddAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_InsertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation);
void QAnimationGroup_RemoveAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
QAbstractAnimation* QAnimationGroup_TakeAnimation(QAnimationGroup* self, int index);
void QAnimationGroup_Clear(QAnimationGroup* self);
struct miqt_string* QAnimationGroup_Tr2(const char* s, const char* c);
struct miqt_string* QAnimationGroup_Tr3(const char* s, const char* c, int n);
struct miqt_string* QAnimationGroup_TrUtf82(const char* s, const char* c);
struct miqt_string* QAnimationGroup_TrUtf83(const char* s, const char* c, int n);
void QAnimationGroup_Delete(QAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
