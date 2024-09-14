#ifndef GEN_QSOCKETNOTIFIER_H
#define GEN_QSOCKETNOTIFIER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QSocketDescriptor;
class QSocketNotifier;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSocketDescriptor QSocketDescriptor;
typedef struct QSocketNotifier QSocketNotifier;
#endif

QSocketNotifier* QSocketNotifier_new(uintptr_t socket, uintptr_t param2);
QSocketNotifier* QSocketNotifier_new2(uintptr_t socket, uintptr_t param2, QObject* parent);
QMetaObject* QSocketNotifier_MetaObject(const QSocketNotifier* self);
struct miqt_string* QSocketNotifier_Tr(const char* s);
struct miqt_string* QSocketNotifier_TrUtf8(const char* s);
ptrdiff_t QSocketNotifier_Socket(const QSocketNotifier* self);
uintptr_t QSocketNotifier_Type(const QSocketNotifier* self);
bool QSocketNotifier_IsEnabled(const QSocketNotifier* self);
void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled);
struct miqt_string* QSocketNotifier_Tr2(const char* s, const char* c);
struct miqt_string* QSocketNotifier_Tr3(const char* s, const char* c, int n);
struct miqt_string* QSocketNotifier_TrUtf82(const char* s, const char* c);
struct miqt_string* QSocketNotifier_TrUtf83(const char* s, const char* c, int n);
void QSocketNotifier_Delete(QSocketNotifier* self);

QSocketDescriptor* QSocketDescriptor_new();
QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* param1);
QSocketDescriptor* QSocketDescriptor_new3(uintptr_t descriptor);
bool QSocketDescriptor_IsValid(const QSocketDescriptor* self);
void QSocketDescriptor_Delete(QSocketDescriptor* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
