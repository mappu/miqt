#pragma once
#ifndef MIQT_QT_GEN_QPAUSEANIMATION_H
#define MIQT_QT_GEN_QPAUSEANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QPauseAnimation;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPauseAnimation QPauseAnimation;
#endif

QPauseAnimation* QPauseAnimation_new();
QPauseAnimation* QPauseAnimation_new2(int msecs);
QPauseAnimation* QPauseAnimation_new3(QObject* parent);
QPauseAnimation* QPauseAnimation_new4(int msecs, QObject* parent);
QMetaObject* QPauseAnimation_MetaObject(const QPauseAnimation* self);
void* QPauseAnimation_Metacast(QPauseAnimation* self, const char* param1);
struct miqt_string QPauseAnimation_Tr(const char* s);
struct miqt_string QPauseAnimation_TrUtf8(const char* s);
int QPauseAnimation_Duration(const QPauseAnimation* self);
void QPauseAnimation_SetDuration(QPauseAnimation* self, int msecs);
struct miqt_string QPauseAnimation_Tr2(const char* s, const char* c);
struct miqt_string QPauseAnimation_Tr3(const char* s, const char* c, int n);
struct miqt_string QPauseAnimation_TrUtf82(const char* s, const char* c);
struct miqt_string QPauseAnimation_TrUtf83(const char* s, const char* c, int n);
void QPauseAnimation_Delete(QPauseAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
