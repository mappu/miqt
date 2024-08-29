#ifndef GEN_QPAUSEANIMATION_H
#define GEN_QPAUSEANIMATION_H

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
QMetaObject* QPauseAnimation_MetaObject(QPauseAnimation* self);
void QPauseAnimation_Tr(const char* s, char** _out, int* _out_Strlen);
void QPauseAnimation_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QPauseAnimation_Duration(QPauseAnimation* self);
void QPauseAnimation_SetDuration(QPauseAnimation* self, int msecs);
void QPauseAnimation_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPauseAnimation_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPauseAnimation_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPauseAnimation_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPauseAnimation_Delete(QPauseAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
