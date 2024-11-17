#pragma once
#ifndef MIQT_QT_GEN_QSOCKETNOTIFIER_H
#define MIQT_QT_GEN_QSOCKETNOTIFIER_H

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
class QSocketDescriptor;
class QSocketNotifier;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSocketDescriptor QSocketDescriptor;
typedef struct QSocketNotifier QSocketNotifier;
#endif

QSocketNotifier* QSocketNotifier_new(intptr_t socket, int param2);
QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2, QObject* parent);
QMetaObject* QSocketNotifier_MetaObject(const QSocketNotifier* self);
void* QSocketNotifier_Metacast(QSocketNotifier* self, const char* param1);
struct miqt_string QSocketNotifier_Tr(const char* s);
struct miqt_string QSocketNotifier_TrUtf8(const char* s);
intptr_t QSocketNotifier_Socket(const QSocketNotifier* self);
int QSocketNotifier_Type(const QSocketNotifier* self);
bool QSocketNotifier_IsEnabled(const QSocketNotifier* self);
void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled);
struct miqt_string QSocketNotifier_Tr2(const char* s, const char* c);
struct miqt_string QSocketNotifier_Tr3(const char* s, const char* c, int n);
struct miqt_string QSocketNotifier_TrUtf82(const char* s, const char* c);
struct miqt_string QSocketNotifier_TrUtf83(const char* s, const char* c, int n);
void QSocketNotifier_Delete(QSocketNotifier* self);

QSocketDescriptor* QSocketDescriptor_new();
QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* param1);
QSocketDescriptor* QSocketDescriptor_new3(int descriptor);
bool QSocketDescriptor_IsValid(const QSocketDescriptor* self);
void QSocketDescriptor_Delete(QSocketDescriptor* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
