#ifndef GEN_QSOCKETNOTIFIER_H
#define GEN_QSOCKETNOTIFIER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QSocketDescriptor;
class QSocketNotifier;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QSocketDescriptor QSocketDescriptor;
typedef struct QSocketNotifier QSocketNotifier;
#endif

QMetaObject* QSocketNotifier_MetaObject(QSocketNotifier* self);
void QSocketNotifier_Tr(char* s, char** _out, int* _out_Strlen);
void QSocketNotifier_TrUtf8(char* s, char** _out, int* _out_Strlen);
intptr_t QSocketNotifier_Socket(QSocketNotifier* self);
bool QSocketNotifier_IsEnabled(QSocketNotifier* self);
void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled);
void QSocketNotifier_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSocketNotifier_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSocketNotifier_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSocketNotifier_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSocketNotifier_Delete(QSocketNotifier* self);

QSocketDescriptor* QSocketDescriptor_new(QSocketDescriptor* param1);
bool QSocketDescriptor_IsValid(QSocketDescriptor* self);
void QSocketDescriptor_Delete(QSocketDescriptor* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
