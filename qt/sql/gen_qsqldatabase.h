#pragma once
#ifndef MIQT_QT_SQL_GEN_QSQLDATABASE_H
#define MIQT_QT_SQL_GEN_QSQLDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSqlDatabase;
class QSqlDriver;
class QSqlDriverCreatorBase;
class QSqlError;
class QSqlIndex;
class QSqlQuery;
class QSqlRecord;
#else
typedef struct QSqlDatabase QSqlDatabase;
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlDriverCreatorBase QSqlDriverCreatorBase;
typedef struct QSqlError QSqlError;
typedef struct QSqlIndex QSqlIndex;
typedef struct QSqlQuery QSqlQuery;
typedef struct QSqlRecord QSqlRecord;
#endif

QSqlDriver* QSqlDriverCreatorBase_createObject(const QSqlDriverCreatorBase* self);
void QSqlDriverCreatorBase_operatorAssign(QSqlDriverCreatorBase* self, QSqlDriverCreatorBase* param1);

void QSqlDriverCreatorBase_delete(QSqlDriverCreatorBase* self);

QSqlDatabase* QSqlDatabase_new();
QSqlDatabase* QSqlDatabase_new2(QSqlDatabase* other);
void QSqlDatabase_operatorAssign(QSqlDatabase* self, QSqlDatabase* other);
bool QSqlDatabase_open(QSqlDatabase* self);
bool QSqlDatabase_open2(QSqlDatabase* self, struct miqt_string user, struct miqt_string password);
void QSqlDatabase_close(QSqlDatabase* self);
bool QSqlDatabase_isOpen(const QSqlDatabase* self);
bool QSqlDatabase_isOpenError(const QSqlDatabase* self);
struct miqt_array /* of struct miqt_string */  QSqlDatabase_tables(const QSqlDatabase* self);
QSqlIndex* QSqlDatabase_primaryIndex(const QSqlDatabase* self, struct miqt_string tablename);
QSqlRecord* QSqlDatabase_record(const QSqlDatabase* self, struct miqt_string tablename);
QSqlQuery* QSqlDatabase_exec(const QSqlDatabase* self);
QSqlError* QSqlDatabase_lastError(const QSqlDatabase* self);
bool QSqlDatabase_isValid(const QSqlDatabase* self);
bool QSqlDatabase_transaction(QSqlDatabase* self);
bool QSqlDatabase_commit(QSqlDatabase* self);
bool QSqlDatabase_rollback(QSqlDatabase* self);
void QSqlDatabase_setDatabaseName(QSqlDatabase* self, struct miqt_string name);
void QSqlDatabase_setUserName(QSqlDatabase* self, struct miqt_string name);
void QSqlDatabase_setPassword(QSqlDatabase* self, struct miqt_string password);
void QSqlDatabase_setHostName(QSqlDatabase* self, struct miqt_string host);
void QSqlDatabase_setPort(QSqlDatabase* self, int p);
void QSqlDatabase_setConnectOptions(QSqlDatabase* self);
struct miqt_string QSqlDatabase_databaseName(const QSqlDatabase* self);
struct miqt_string QSqlDatabase_userName(const QSqlDatabase* self);
struct miqt_string QSqlDatabase_password(const QSqlDatabase* self);
struct miqt_string QSqlDatabase_hostName(const QSqlDatabase* self);
struct miqt_string QSqlDatabase_driverName(const QSqlDatabase* self);
int QSqlDatabase_port(const QSqlDatabase* self);
struct miqt_string QSqlDatabase_connectOptions(const QSqlDatabase* self);
struct miqt_string QSqlDatabase_connectionName(const QSqlDatabase* self);
void QSqlDatabase_setNumericalPrecisionPolicy(QSqlDatabase* self, int precisionPolicy);
int QSqlDatabase_numericalPrecisionPolicy(const QSqlDatabase* self);
QSqlDriver* QSqlDatabase_driver(const QSqlDatabase* self);
QSqlDatabase* QSqlDatabase_addDatabase(struct miqt_string type);
QSqlDatabase* QSqlDatabase_addDatabaseWithDriver(QSqlDriver* driver);
QSqlDatabase* QSqlDatabase_cloneDatabase(QSqlDatabase* other, struct miqt_string connectionName);
QSqlDatabase* QSqlDatabase_cloneDatabase2(struct miqt_string other, struct miqt_string connectionName);
QSqlDatabase* QSqlDatabase_database();
void QSqlDatabase_removeDatabase(struct miqt_string connectionName);
bool QSqlDatabase_contains();
struct miqt_array /* of struct miqt_string */  QSqlDatabase_drivers();
struct miqt_array /* of struct miqt_string */  QSqlDatabase_connectionNames();
void QSqlDatabase_registerSqlDriver(struct miqt_string name, QSqlDriverCreatorBase* creator);
bool QSqlDatabase_isDriverAvailable(struct miqt_string name);
struct miqt_array /* of struct miqt_string */  QSqlDatabase_tablesWithType(const QSqlDatabase* self, int type);
QSqlQuery* QSqlDatabase_execWithQuery(const QSqlDatabase* self, struct miqt_string query);
void QSqlDatabase_setConnectOptionsWithOptions(QSqlDatabase* self, struct miqt_string options);
QSqlDatabase* QSqlDatabase_addDatabase2(struct miqt_string type, struct miqt_string connectionName);
QSqlDatabase* QSqlDatabase_addDatabase3(QSqlDriver* driver, struct miqt_string connectionName);
QSqlDatabase* QSqlDatabase_databaseWithConnectionName(struct miqt_string connectionName);
QSqlDatabase* QSqlDatabase_database2(struct miqt_string connectionName, bool open);
bool QSqlDatabase_containsWithConnectionName(struct miqt_string connectionName);

void QSqlDatabase_delete(QSqlDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
