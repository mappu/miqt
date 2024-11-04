#ifndef GEN_QSCTPSERVER_H
#define GEN_QSCTPSERVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QSctpServer;
class QSctpSocket;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSctpServer QSctpServer;
typedef struct QSctpSocket QSctpSocket;
#endif

QSctpServer* QSctpServer_new();
QSctpServer* QSctpServer_new2(QObject* parent);
QMetaObject* QSctpServer_MetaObject(const QSctpServer* self);
void* QSctpServer_Metacast(QSctpServer* self, const char* param1);
struct miqt_string QSctpServer_Tr(const char* s);
void QSctpServer_SetMaximumChannelCount(QSctpServer* self, int count);
int QSctpServer_MaximumChannelCount(const QSctpServer* self);
QSctpSocket* QSctpServer_NextPendingDatagramConnection(QSctpServer* self);
struct miqt_string QSctpServer_Tr2(const char* s, const char* c);
struct miqt_string QSctpServer_Tr3(const char* s, const char* c, int n);
void QSctpServer_Delete(QSctpServer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
