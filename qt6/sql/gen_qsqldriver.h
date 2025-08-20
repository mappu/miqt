#pragma once
#ifndef MIQT_QT6_SQL_GEN_QSQLDRIVER_H
#define MIQT_QT6_SQL_GEN_QSQLDRIVER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSqlDriver;
class QSqlError;
class QSqlField;
class QSqlIndex;
class QSqlRecord;
class QSqlResult;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlError QSqlError;
typedef struct QSqlField QSqlField;
typedef struct QSqlIndex QSqlIndex;
typedef struct QSqlRecord QSqlRecord;
typedef struct QSqlResult QSqlResult;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QSqlDriver* QSqlDriver_new();
QSqlDriver* QSqlDriver_new2(QObject* parent);
void QSqlDriver_virtbase(QSqlDriver* src, QObject** outptr_QObject);
QMetaObject* QSqlDriver_metaObject(const QSqlDriver* self);
void* QSqlDriver_metacast(QSqlDriver* self, const char* param1);
struct miqt_string QSqlDriver_tr(const char* s);
bool QSqlDriver_isOpen(const QSqlDriver* self);
bool QSqlDriver_isOpenError(const QSqlDriver* self);
bool QSqlDriver_beginTransaction(QSqlDriver* self);
bool QSqlDriver_commitTransaction(QSqlDriver* self);
bool QSqlDriver_rollbackTransaction(QSqlDriver* self);
struct miqt_array /* of struct miqt_string */  QSqlDriver_tables(const QSqlDriver* self, int tableType);
QSqlIndex* QSqlDriver_primaryIndex(const QSqlDriver* self, struct miqt_string tableName);
QSqlRecord* QSqlDriver_record(const QSqlDriver* self, struct miqt_string tableName);
struct miqt_string QSqlDriver_formatValue(const QSqlDriver* self, QSqlField* field, bool trimStrings);
struct miqt_string QSqlDriver_escapeIdentifier(const QSqlDriver* self, struct miqt_string identifier, int type);
struct miqt_string QSqlDriver_sqlStatement(const QSqlDriver* self, int type, struct miqt_string tableName, QSqlRecord* rec, bool preparedStatement);
QSqlError* QSqlDriver_lastError(const QSqlDriver* self);
QVariant* QSqlDriver_handle(const QSqlDriver* self);
bool QSqlDriver_hasFeature(const QSqlDriver* self, int f);
void QSqlDriver_close(QSqlDriver* self);
QSqlResult* QSqlDriver_createResult(const QSqlDriver* self);
bool QSqlDriver_open(QSqlDriver* self, struct miqt_string db, struct miqt_string user, struct miqt_string password, struct miqt_string host, int port, struct miqt_string connOpts);
bool QSqlDriver_subscribeToNotification(QSqlDriver* self, struct miqt_string name);
bool QSqlDriver_unsubscribeFromNotification(QSqlDriver* self, struct miqt_string name);
struct miqt_array /* of struct miqt_string */  QSqlDriver_subscribedToNotifications(const QSqlDriver* self);
bool QSqlDriver_isIdentifierEscaped(const QSqlDriver* self, struct miqt_string identifier, int type);
struct miqt_string QSqlDriver_stripDelimiters(const QSqlDriver* self, struct miqt_string identifier, int type);
void QSqlDriver_setNumericalPrecisionPolicy(QSqlDriver* self, int precisionPolicy);
int QSqlDriver_numericalPrecisionPolicy(const QSqlDriver* self);
int QSqlDriver_dbmsType(const QSqlDriver* self);
int QSqlDriver_maximumIdentifierLength(const QSqlDriver* self, int type);
bool QSqlDriver_cancelQuery(QSqlDriver* self);
void QSqlDriver_notification(QSqlDriver* self, struct miqt_string name, int source, QVariant* payload);
void QSqlDriver_connect_notification(QSqlDriver* self, intptr_t slot);
void QSqlDriver_setOpen(QSqlDriver* self, bool o);
void QSqlDriver_setOpenError(QSqlDriver* self, bool e);
void QSqlDriver_setLastError(QSqlDriver* self, QSqlError* e);
struct miqt_string QSqlDriver_tr2(const char* s, const char* c);
struct miqt_string QSqlDriver_tr3(const char* s, const char* c, int n);

bool QSqlDriver_override_virtual_isOpen(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_isOpen(const void* self);
bool QSqlDriver_override_virtual_beginTransaction(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_beginTransaction(void* self);
bool QSqlDriver_override_virtual_commitTransaction(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_commitTransaction(void* self);
bool QSqlDriver_override_virtual_rollbackTransaction(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_rollbackTransaction(void* self);
bool QSqlDriver_override_virtual_tables(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QSqlDriver_virtualbase_tables(const void* self, int tableType);
bool QSqlDriver_override_virtual_primaryIndex(void* self, intptr_t slot);
QSqlIndex* QSqlDriver_virtualbase_primaryIndex(const void* self, struct miqt_string tableName);
bool QSqlDriver_override_virtual_record(void* self, intptr_t slot);
QSqlRecord* QSqlDriver_virtualbase_record(const void* self, struct miqt_string tableName);
bool QSqlDriver_override_virtual_formatValue(void* self, intptr_t slot);
struct miqt_string QSqlDriver_virtualbase_formatValue(const void* self, QSqlField* field, bool trimStrings);
bool QSqlDriver_override_virtual_escapeIdentifier(void* self, intptr_t slot);
struct miqt_string QSqlDriver_virtualbase_escapeIdentifier(const void* self, struct miqt_string identifier, int type);
bool QSqlDriver_override_virtual_sqlStatement(void* self, intptr_t slot);
struct miqt_string QSqlDriver_virtualbase_sqlStatement(const void* self, int type, struct miqt_string tableName, QSqlRecord* rec, bool preparedStatement);
bool QSqlDriver_override_virtual_handle(void* self, intptr_t slot);
QVariant* QSqlDriver_virtualbase_handle(const void* self);
bool QSqlDriver_override_virtual_hasFeature(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_hasFeature(const void* self, int f);
bool QSqlDriver_override_virtual_close(void* self, intptr_t slot);
void QSqlDriver_virtualbase_close(void* self);
bool QSqlDriver_override_virtual_createResult(void* self, intptr_t slot);
QSqlResult* QSqlDriver_virtualbase_createResult(const void* self);
bool QSqlDriver_override_virtual_open(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_open(void* self, struct miqt_string db, struct miqt_string user, struct miqt_string password, struct miqt_string host, int port, struct miqt_string connOpts);
bool QSqlDriver_override_virtual_subscribeToNotification(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_subscribeToNotification(void* self, struct miqt_string name);
bool QSqlDriver_override_virtual_unsubscribeFromNotification(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_unsubscribeFromNotification(void* self, struct miqt_string name);
bool QSqlDriver_override_virtual_subscribedToNotifications(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QSqlDriver_virtualbase_subscribedToNotifications(const void* self);
bool QSqlDriver_override_virtual_isIdentifierEscaped(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_isIdentifierEscaped(const void* self, struct miqt_string identifier, int type);
bool QSqlDriver_override_virtual_stripDelimiters(void* self, intptr_t slot);
struct miqt_string QSqlDriver_virtualbase_stripDelimiters(const void* self, struct miqt_string identifier, int type);
bool QSqlDriver_override_virtual_maximumIdentifierLength(void* self, intptr_t slot);
int QSqlDriver_virtualbase_maximumIdentifierLength(const void* self, int type);
bool QSqlDriver_override_virtual_cancelQuery(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_cancelQuery(void* self);
bool QSqlDriver_override_virtual_setOpen(void* self, intptr_t slot);
void QSqlDriver_virtualbase_setOpen(void* self, bool o);
bool QSqlDriver_override_virtual_setOpenError(void* self, intptr_t slot);
void QSqlDriver_virtualbase_setOpenError(void* self, bool e);
bool QSqlDriver_override_virtual_setLastError(void* self, intptr_t slot);
void QSqlDriver_virtualbase_setLastError(void* self, QSqlError* e);
bool QSqlDriver_override_virtual_event(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_event(void* self, QEvent* event);
bool QSqlDriver_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSqlDriver_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSqlDriver_override_virtual_timerEvent(void* self, intptr_t slot);
void QSqlDriver_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSqlDriver_override_virtual_childEvent(void* self, intptr_t slot);
void QSqlDriver_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSqlDriver_override_virtual_customEvent(void* self, intptr_t slot);
void QSqlDriver_virtualbase_customEvent(void* self, QEvent* event);
bool QSqlDriver_override_virtual_connectNotify(void* self, intptr_t slot);
void QSqlDriver_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSqlDriver_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSqlDriver_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QSqlDriver_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSqlDriver_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSqlDriver_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSqlDriver_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QSqlDriver_delete(QSqlDriver* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
