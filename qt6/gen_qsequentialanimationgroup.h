#ifndef GEN_QSEQUENTIALANIMATIONGROUP_H
#define GEN_QSEQUENTIALANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QMetaObject;
class QObject;
class QPauseAnimation;
class QSequentialAnimationGroup;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPauseAnimation QPauseAnimation;
typedef struct QSequentialAnimationGroup QSequentialAnimationGroup;
#endif

QSequentialAnimationGroup* QSequentialAnimationGroup_new();
QSequentialAnimationGroup* QSequentialAnimationGroup_new2(QObject* parent);
QMetaObject* QSequentialAnimationGroup_MetaObject(const QSequentialAnimationGroup* self);
void* QSequentialAnimationGroup_Metacast(QSequentialAnimationGroup* self, const char* param1);
struct miqt_string QSequentialAnimationGroup_Tr(const char* s);
QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs);
QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs);
QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(const QSequentialAnimationGroup* self);
int QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current);
void QSequentialAnimationGroup_connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, intptr_t slot);
struct miqt_string QSequentialAnimationGroup_Tr2(const char* s, const char* c);
struct miqt_string QSequentialAnimationGroup_Tr3(const char* s, const char* c, int n);
void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
