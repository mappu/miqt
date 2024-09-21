#ifndef GEN_QFINALSTATE_H
#define GEN_QFINALSTATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFinalState;
class QMetaObject;
class QState;
#else
typedef struct QFinalState QFinalState;
typedef struct QMetaObject QMetaObject;
typedef struct QState QState;
#endif

QFinalState* QFinalState_new();
QFinalState* QFinalState_new2(QState* parent);
QMetaObject* QFinalState_MetaObject(const QFinalState* self);
void* QFinalState_Metacast(QFinalState* self, const char* param1);
struct miqt_string* QFinalState_Tr(const char* s);
struct miqt_string* QFinalState_TrUtf8(const char* s);
struct miqt_string* QFinalState_Tr2(const char* s, const char* c);
struct miqt_string* QFinalState_Tr3(const char* s, const char* c, int n);
struct miqt_string* QFinalState_TrUtf82(const char* s, const char* c);
struct miqt_string* QFinalState_TrUtf83(const char* s, const char* c, int n);
void QFinalState_Delete(QFinalState* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
