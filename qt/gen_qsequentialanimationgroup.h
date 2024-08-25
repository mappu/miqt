#ifndef GEN_QSEQUENTIALANIMATIONGROUP_H
#define GEN_QSEQUENTIALANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QSequentialAnimationGroup_MetaObject(QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_Tr(char* s, char** _out, int* _out_Strlen);
void QSequentialAnimationGroup_TrUtf8(char* s, char** _out, int* _out_Strlen);
QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs);
QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs);
QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(QSequentialAnimationGroup* self);
int QSequentialAnimationGroup_Duration(QSequentialAnimationGroup* self);
void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current);
void QSequentialAnimationGroup_connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, void* slot);
void QSequentialAnimationGroup_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSequentialAnimationGroup_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSequentialAnimationGroup_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSequentialAnimationGroup_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
