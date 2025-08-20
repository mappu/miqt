#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlField>
#include <QSqlIndex>
#include <QSqlRecord>
#include <QSqlResult>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qsqldriver.h>
#include "gen_qsqldriver.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSqlDriver_notification(intptr_t, struct miqt_string);
void miqt_exec_callback_QSqlDriver_notification2(intptr_t, struct miqt_string, int, QVariant*);
bool miqt_exec_callback_QSqlDriver_isOpen(const QSqlDriver*, intptr_t);
bool miqt_exec_callback_QSqlDriver_beginTransaction(QSqlDriver*, intptr_t);
bool miqt_exec_callback_QSqlDriver_commitTransaction(QSqlDriver*, intptr_t);
bool miqt_exec_callback_QSqlDriver_rollbackTransaction(QSqlDriver*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QSqlDriver_tables(const QSqlDriver*, intptr_t, int);
QSqlIndex* miqt_exec_callback_QSqlDriver_primaryIndex(const QSqlDriver*, intptr_t, struct miqt_string);
QSqlRecord* miqt_exec_callback_QSqlDriver_record(const QSqlDriver*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QSqlDriver_formatValue(const QSqlDriver*, intptr_t, QSqlField*, bool);
struct miqt_string miqt_exec_callback_QSqlDriver_escapeIdentifier(const QSqlDriver*, intptr_t, struct miqt_string, int);
struct miqt_string miqt_exec_callback_QSqlDriver_sqlStatement(const QSqlDriver*, intptr_t, int, struct miqt_string, QSqlRecord*, bool);
QVariant* miqt_exec_callback_QSqlDriver_handle(const QSqlDriver*, intptr_t);
bool miqt_exec_callback_QSqlDriver_hasFeature(const QSqlDriver*, intptr_t, int);
void miqt_exec_callback_QSqlDriver_close(QSqlDriver*, intptr_t);
QSqlResult* miqt_exec_callback_QSqlDriver_createResult(const QSqlDriver*, intptr_t);
bool miqt_exec_callback_QSqlDriver_open(QSqlDriver*, intptr_t, struct miqt_string, struct miqt_string, struct miqt_string, struct miqt_string, int, struct miqt_string);
bool miqt_exec_callback_QSqlDriver_subscribeToNotification(QSqlDriver*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QSqlDriver_unsubscribeFromNotification(QSqlDriver*, intptr_t, struct miqt_string);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QSqlDriver_subscribedToNotifications(const QSqlDriver*, intptr_t);
bool miqt_exec_callback_QSqlDriver_isIdentifierEscaped(const QSqlDriver*, intptr_t, struct miqt_string, int);
struct miqt_string miqt_exec_callback_QSqlDriver_stripDelimiters(const QSqlDriver*, intptr_t, struct miqt_string, int);
bool miqt_exec_callback_QSqlDriver_cancelQuery(QSqlDriver*, intptr_t);
void miqt_exec_callback_QSqlDriver_setOpen(QSqlDriver*, intptr_t, bool);
void miqt_exec_callback_QSqlDriver_setOpenError(QSqlDriver*, intptr_t, bool);
void miqt_exec_callback_QSqlDriver_setLastError(QSqlDriver*, intptr_t, QSqlError*);
bool miqt_exec_callback_QSqlDriver_event(QSqlDriver*, intptr_t, QEvent*);
bool miqt_exec_callback_QSqlDriver_eventFilter(QSqlDriver*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSqlDriver_timerEvent(QSqlDriver*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSqlDriver_childEvent(QSqlDriver*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSqlDriver_customEvent(QSqlDriver*, intptr_t, QEvent*);
void miqt_exec_callback_QSqlDriver_connectNotify(QSqlDriver*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSqlDriver_disconnectNotify(QSqlDriver*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSqlDriver final : public QSqlDriver {
public:

	MiqtVirtualQSqlDriver(): QSqlDriver() {}
	MiqtVirtualQSqlDriver(QObject* parent): QSqlDriver(parent) {}

	virtual ~MiqtVirtualQSqlDriver() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isOpen = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isOpen() const override {
		if (handle__isOpen == 0) {
			return QSqlDriver::isOpen();
		}

		bool callback_return_value = miqt_exec_callback_QSqlDriver_isOpen(this, handle__isOpen);
		return callback_return_value;
	}

	friend bool QSqlDriver_virtualbase_isOpen(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__beginTransaction = 0;

	// Subclass to allow providing a Go implementation
	virtual bool beginTransaction() override {
		if (handle__beginTransaction == 0) {
			return QSqlDriver::beginTransaction();
		}

		bool callback_return_value = miqt_exec_callback_QSqlDriver_beginTransaction(this, handle__beginTransaction);
		return callback_return_value;
	}

	friend bool QSqlDriver_virtualbase_beginTransaction(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commitTransaction = 0;

	// Subclass to allow providing a Go implementation
	virtual bool commitTransaction() override {
		if (handle__commitTransaction == 0) {
			return QSqlDriver::commitTransaction();
		}

		bool callback_return_value = miqt_exec_callback_QSqlDriver_commitTransaction(this, handle__commitTransaction);
		return callback_return_value;
	}

	friend bool QSqlDriver_virtualbase_commitTransaction(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rollbackTransaction = 0;

	// Subclass to allow providing a Go implementation
	virtual bool rollbackTransaction() override {
		if (handle__rollbackTransaction == 0) {
			return QSqlDriver::rollbackTransaction();
		}

		bool callback_return_value = miqt_exec_callback_QSqlDriver_rollbackTransaction(this, handle__rollbackTransaction);
		return callback_return_value;
	}

	friend bool QSqlDriver_virtualbase_rollbackTransaction(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tables = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList tables(QSql::TableType tableType) const override {
		if (handle__tables == 0) {
			return QSqlDriver::tables(tableType);
		}

		QSql::TableType tableType_ret = tableType;
		int sigval1 = static_cast<int>(tableType_ret);
		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QSqlDriver_tables(this, handle__tables, sigval1);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QSqlDriver_virtualbase_tables(const void* self, int tableType);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__primaryIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual QSqlIndex primaryIndex(const QString& tableName) const override {
		if (handle__primaryIndex == 0) {
			return QSqlDriver::primaryIndex(tableName);
		}

		const QString tableName_ret = tableName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray tableName_b = tableName_ret.toUtf8();
		struct miqt_string tableName_ms;
		tableName_ms.len = tableName_b.length();
		tableName_ms.data = static_cast<char*>(malloc(tableName_ms.len));
		memcpy(tableName_ms.data, tableName_b.data(), tableName_ms.len);
		struct miqt_string sigval1 = tableName_ms;
		QSqlIndex* callback_return_value = miqt_exec_callback_QSqlDriver_primaryIndex(this, handle__primaryIndex, sigval1);
		return *callback_return_value;
	}

	friend QSqlIndex* QSqlDriver_virtualbase_primaryIndex(const void* self, struct miqt_string tableName);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__record = 0;

	// Subclass to allow providing a Go implementation
	virtual QSqlRecord record(const QString& tableName) const override {
		if (handle__record == 0) {
			return QSqlDriver::record(tableName);
		}

		const QString tableName_ret = tableName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray tableName_b = tableName_ret.toUtf8();
		struct miqt_string tableName_ms;
		tableName_ms.len = tableName_b.length();
		tableName_ms.data = static_cast<char*>(malloc(tableName_ms.len));
		memcpy(tableName_ms.data, tableName_b.data(), tableName_ms.len);
		struct miqt_string sigval1 = tableName_ms;
		QSqlRecord* callback_return_value = miqt_exec_callback_QSqlDriver_record(this, handle__record, sigval1);
		return *callback_return_value;
	}

	friend QSqlRecord* QSqlDriver_virtualbase_record(const void* self, struct miqt_string tableName);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__formatValue = 0;

	// Subclass to allow providing a Go implementation
	virtual QString formatValue(const QSqlField& field, bool trimStrings) const override {
		if (handle__formatValue == 0) {
			return QSqlDriver::formatValue(field, trimStrings);
		}

		const QSqlField& field_ret = field;
		// Cast returned reference into pointer
		QSqlField* sigval1 = const_cast<QSqlField*>(&field_ret);
		bool sigval2 = trimStrings;
		struct miqt_string callback_return_value = miqt_exec_callback_QSqlDriver_formatValue(this, handle__formatValue, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QSqlDriver_virtualbase_formatValue(const void* self, QSqlField* field, bool trimStrings);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__escapeIdentifier = 0;

	// Subclass to allow providing a Go implementation
	virtual QString escapeIdentifier(const QString& identifier, QSqlDriver::IdentifierType type) const override {
		if (handle__escapeIdentifier == 0) {
			return QSqlDriver::escapeIdentifier(identifier, type);
		}

		const QString identifier_ret = identifier;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray identifier_b = identifier_ret.toUtf8();
		struct miqt_string identifier_ms;
		identifier_ms.len = identifier_b.length();
		identifier_ms.data = static_cast<char*>(malloc(identifier_ms.len));
		memcpy(identifier_ms.data, identifier_b.data(), identifier_ms.len);
		struct miqt_string sigval1 = identifier_ms;
		QSqlDriver::IdentifierType type_ret = type;
		int sigval2 = static_cast<int>(type_ret);
		struct miqt_string callback_return_value = miqt_exec_callback_QSqlDriver_escapeIdentifier(this, handle__escapeIdentifier, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QSqlDriver_virtualbase_escapeIdentifier(const void* self, struct miqt_string identifier, int type);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sqlStatement = 0;

	// Subclass to allow providing a Go implementation
	virtual QString sqlStatement(QSqlDriver::StatementType type, const QString& tableName, const QSqlRecord& rec, bool preparedStatement) const override {
		if (handle__sqlStatement == 0) {
			return QSqlDriver::sqlStatement(type, tableName, rec, preparedStatement);
		}

		QSqlDriver::StatementType type_ret = type;
		int sigval1 = static_cast<int>(type_ret);
		const QString tableName_ret = tableName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray tableName_b = tableName_ret.toUtf8();
		struct miqt_string tableName_ms;
		tableName_ms.len = tableName_b.length();
		tableName_ms.data = static_cast<char*>(malloc(tableName_ms.len));
		memcpy(tableName_ms.data, tableName_b.data(), tableName_ms.len);
		struct miqt_string sigval2 = tableName_ms;
		const QSqlRecord& rec_ret = rec;
		// Cast returned reference into pointer
		QSqlRecord* sigval3 = const_cast<QSqlRecord*>(&rec_ret);
		bool sigval4 = preparedStatement;
		struct miqt_string callback_return_value = miqt_exec_callback_QSqlDriver_sqlStatement(this, handle__sqlStatement, sigval1, sigval2, sigval3, sigval4);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QSqlDriver_virtualbase_sqlStatement(const void* self, int type, struct miqt_string tableName, QSqlRecord* rec, bool preparedStatement);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__handle = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant handle() const override {
		if (handle__handle == 0) {
			return QSqlDriver::handle();
		}

		QVariant* callback_return_value = miqt_exec_callback_QSqlDriver_handle(this, handle__handle);
		return *callback_return_value;
	}

	friend QVariant* QSqlDriver_virtualbase_handle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasFeature = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasFeature(QSqlDriver::DriverFeature f) const override {
		if (handle__hasFeature == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		QSqlDriver::DriverFeature f_ret = f;
		int sigval1 = static_cast<int>(f_ret);
		bool callback_return_value = miqt_exec_callback_QSqlDriver_hasFeature(this, handle__hasFeature, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__close == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QSqlDriver_close(this, handle__close);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createResult = 0;

	// Subclass to allow providing a Go implementation
	virtual QSqlResult* createResult() const override {
		if (handle__createResult == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QSqlResult* callback_return_value = miqt_exec_callback_QSqlDriver_createResult(this, handle__createResult);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__open = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(const QString& db, const QString& user, const QString& password, const QString& host, int port, const QString& connOpts) override {
		if (handle__open == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		const QString db_ret = db;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray db_b = db_ret.toUtf8();
		struct miqt_string db_ms;
		db_ms.len = db_b.length();
		db_ms.data = static_cast<char*>(malloc(db_ms.len));
		memcpy(db_ms.data, db_b.data(), db_ms.len);
		struct miqt_string sigval1 = db_ms;
		const QString user_ret = user;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray user_b = user_ret.toUtf8();
		struct miqt_string user_ms;
		user_ms.len = user_b.length();
		user_ms.data = static_cast<char*>(malloc(user_ms.len));
		memcpy(user_ms.data, user_b.data(), user_ms.len);
		struct miqt_string sigval2 = user_ms;
		const QString password_ret = password;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray password_b = password_ret.toUtf8();
		struct miqt_string password_ms;
		password_ms.len = password_b.length();
		password_ms.data = static_cast<char*>(malloc(password_ms.len));
		memcpy(password_ms.data, password_b.data(), password_ms.len);
		struct miqt_string sigval3 = password_ms;
		const QString host_ret = host;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray host_b = host_ret.toUtf8();
		struct miqt_string host_ms;
		host_ms.len = host_b.length();
		host_ms.data = static_cast<char*>(malloc(host_ms.len));
		memcpy(host_ms.data, host_b.data(), host_ms.len);
		struct miqt_string sigval4 = host_ms;
		int sigval5 = port;
		const QString connOpts_ret = connOpts;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray connOpts_b = connOpts_ret.toUtf8();
		struct miqt_string connOpts_ms;
		connOpts_ms.len = connOpts_b.length();
		connOpts_ms.data = static_cast<char*>(malloc(connOpts_ms.len));
		memcpy(connOpts_ms.data, connOpts_b.data(), connOpts_ms.len);
		struct miqt_string sigval6 = connOpts_ms;
		bool callback_return_value = miqt_exec_callback_QSqlDriver_open(this, handle__open, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__subscribeToNotification = 0;

	// Subclass to allow providing a Go implementation
	virtual bool subscribeToNotification(const QString& name) override {
		if (handle__subscribeToNotification == 0) {
			return QSqlDriver::subscribeToNotification(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		bool callback_return_value = miqt_exec_callback_QSqlDriver_subscribeToNotification(this, handle__subscribeToNotification, sigval1);
		return callback_return_value;
	}

	friend bool QSqlDriver_virtualbase_subscribeToNotification(void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unsubscribeFromNotification = 0;

	// Subclass to allow providing a Go implementation
	virtual bool unsubscribeFromNotification(const QString& name) override {
		if (handle__unsubscribeFromNotification == 0) {
			return QSqlDriver::unsubscribeFromNotification(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		bool callback_return_value = miqt_exec_callback_QSqlDriver_unsubscribeFromNotification(this, handle__unsubscribeFromNotification, sigval1);
		return callback_return_value;
	}

	friend bool QSqlDriver_virtualbase_unsubscribeFromNotification(void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__subscribedToNotifications = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList subscribedToNotifications() const override {
		if (handle__subscribedToNotifications == 0) {
			return QSqlDriver::subscribedToNotifications();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QSqlDriver_subscribedToNotifications(this, handle__subscribedToNotifications);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QSqlDriver_virtualbase_subscribedToNotifications(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isIdentifierEscaped = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isIdentifierEscaped(const QString& identifier, QSqlDriver::IdentifierType type) const override {
		if (handle__isIdentifierEscaped == 0) {
			return QSqlDriver::isIdentifierEscaped(identifier, type);
		}

		const QString identifier_ret = identifier;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray identifier_b = identifier_ret.toUtf8();
		struct miqt_string identifier_ms;
		identifier_ms.len = identifier_b.length();
		identifier_ms.data = static_cast<char*>(malloc(identifier_ms.len));
		memcpy(identifier_ms.data, identifier_b.data(), identifier_ms.len);
		struct miqt_string sigval1 = identifier_ms;
		QSqlDriver::IdentifierType type_ret = type;
		int sigval2 = static_cast<int>(type_ret);
		bool callback_return_value = miqt_exec_callback_QSqlDriver_isIdentifierEscaped(this, handle__isIdentifierEscaped, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSqlDriver_virtualbase_isIdentifierEscaped(const void* self, struct miqt_string identifier, int type);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stripDelimiters = 0;

	// Subclass to allow providing a Go implementation
	virtual QString stripDelimiters(const QString& identifier, QSqlDriver::IdentifierType type) const override {
		if (handle__stripDelimiters == 0) {
			return QSqlDriver::stripDelimiters(identifier, type);
		}

		const QString identifier_ret = identifier;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray identifier_b = identifier_ret.toUtf8();
		struct miqt_string identifier_ms;
		identifier_ms.len = identifier_b.length();
		identifier_ms.data = static_cast<char*>(malloc(identifier_ms.len));
		memcpy(identifier_ms.data, identifier_b.data(), identifier_ms.len);
		struct miqt_string sigval1 = identifier_ms;
		QSqlDriver::IdentifierType type_ret = type;
		int sigval2 = static_cast<int>(type_ret);
		struct miqt_string callback_return_value = miqt_exec_callback_QSqlDriver_stripDelimiters(this, handle__stripDelimiters, sigval1, sigval2);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QSqlDriver_virtualbase_stripDelimiters(const void* self, struct miqt_string identifier, int type);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__cancelQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual bool cancelQuery() override {
		if (handle__cancelQuery == 0) {
			return QSqlDriver::cancelQuery();
		}

		bool callback_return_value = miqt_exec_callback_QSqlDriver_cancelQuery(this, handle__cancelQuery);
		return callback_return_value;
	}

	friend bool QSqlDriver_virtualbase_cancelQuery(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setOpen = 0;

	// Subclass to allow providing a Go implementation
	virtual void setOpen(bool o) override {
		if (handle__setOpen == 0) {
			QSqlDriver::setOpen(o);
			return;
		}

		bool sigval1 = o;
		miqt_exec_callback_QSqlDriver_setOpen(this, handle__setOpen, sigval1);

	}

	friend void QSqlDriver_virtualbase_setOpen(void* self, bool o);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setOpenError = 0;

	// Subclass to allow providing a Go implementation
	virtual void setOpenError(bool e) override {
		if (handle__setOpenError == 0) {
			QSqlDriver::setOpenError(e);
			return;
		}

		bool sigval1 = e;
		miqt_exec_callback_QSqlDriver_setOpenError(this, handle__setOpenError, sigval1);

	}

	friend void QSqlDriver_virtualbase_setOpenError(void* self, bool e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setLastError = 0;

	// Subclass to allow providing a Go implementation
	virtual void setLastError(const QSqlError& e) override {
		if (handle__setLastError == 0) {
			QSqlDriver::setLastError(e);
			return;
		}

		const QSqlError& e_ret = e;
		// Cast returned reference into pointer
		QSqlError* sigval1 = const_cast<QSqlError*>(&e_ret);
		miqt_exec_callback_QSqlDriver_setLastError(this, handle__setLastError, sigval1);

	}

	friend void QSqlDriver_virtualbase_setLastError(void* self, QSqlError* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSqlDriver::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QSqlDriver_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QSqlDriver_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSqlDriver::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSqlDriver_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSqlDriver_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSqlDriver::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSqlDriver_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QSqlDriver_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSqlDriver::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSqlDriver_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QSqlDriver_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSqlDriver::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSqlDriver_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QSqlDriver_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSqlDriver::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSqlDriver_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QSqlDriver_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSqlDriver::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSqlDriver_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QSqlDriver_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QSqlDriver_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSqlDriver_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSqlDriver_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSqlDriver_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSqlDriver* QSqlDriver_new() {
	return new (std::nothrow) MiqtVirtualQSqlDriver();
}

QSqlDriver* QSqlDriver_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQSqlDriver(parent);
}

void QSqlDriver_virtbase(QSqlDriver* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSqlDriver_metaObject(const QSqlDriver* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSqlDriver_metacast(QSqlDriver* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSqlDriver_tr(const char* s) {
	QString _ret = QSqlDriver::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlDriver_trUtf8(const char* s) {
	QString _ret = QSqlDriver::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlDriver_isOpen(const QSqlDriver* self) {
	return self->isOpen();
}

bool QSqlDriver_isOpenError(const QSqlDriver* self) {
	return self->isOpenError();
}

bool QSqlDriver_beginTransaction(QSqlDriver* self) {
	return self->beginTransaction();
}

bool QSqlDriver_commitTransaction(QSqlDriver* self) {
	return self->commitTransaction();
}

bool QSqlDriver_rollbackTransaction(QSqlDriver* self) {
	return self->rollbackTransaction();
}

struct miqt_array /* of struct miqt_string */  QSqlDriver_tables(const QSqlDriver* self, int tableType) {
	QStringList _ret = self->tables(static_cast<QSql::TableType>(tableType));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QSqlIndex* QSqlDriver_primaryIndex(const QSqlDriver* self, struct miqt_string tableName) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	return new QSqlIndex(self->primaryIndex(tableName_QString));
}

QSqlRecord* QSqlDriver_record(const QSqlDriver* self, struct miqt_string tableName) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	return new QSqlRecord(self->record(tableName_QString));
}

struct miqt_string QSqlDriver_formatValue(const QSqlDriver* self, QSqlField* field, bool trimStrings) {
	QString _ret = self->formatValue(*field, trimStrings);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlDriver_escapeIdentifier(const QSqlDriver* self, struct miqt_string identifier, int type) {
	QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
	QString _ret = self->escapeIdentifier(identifier_QString, static_cast<QSqlDriver::IdentifierType>(type));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlDriver_sqlStatement(const QSqlDriver* self, int type, struct miqt_string tableName, QSqlRecord* rec, bool preparedStatement) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	QString _ret = self->sqlStatement(static_cast<QSqlDriver::StatementType>(type), tableName_QString, *rec, preparedStatement);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSqlError* QSqlDriver_lastError(const QSqlDriver* self) {
	return new QSqlError(self->lastError());
}

QVariant* QSqlDriver_handle(const QSqlDriver* self) {
	return new QVariant(self->handle());
}

bool QSqlDriver_hasFeature(const QSqlDriver* self, int f) {
	return self->hasFeature(static_cast<QSqlDriver::DriverFeature>(f));
}

void QSqlDriver_close(QSqlDriver* self) {
	self->close();
}

QSqlResult* QSqlDriver_createResult(const QSqlDriver* self) {
	return self->createResult();
}

bool QSqlDriver_open(QSqlDriver* self, struct miqt_string db, struct miqt_string user, struct miqt_string password, struct miqt_string host, int port, struct miqt_string connOpts) {
	QString db_QString = QString::fromUtf8(db.data, db.len);
	QString user_QString = QString::fromUtf8(user.data, user.len);
	QString password_QString = QString::fromUtf8(password.data, password.len);
	QString host_QString = QString::fromUtf8(host.data, host.len);
	QString connOpts_QString = QString::fromUtf8(connOpts.data, connOpts.len);
	return self->open(db_QString, user_QString, password_QString, host_QString, static_cast<int>(port), connOpts_QString);
}

bool QSqlDriver_subscribeToNotification(QSqlDriver* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->subscribeToNotification(name_QString);
}

bool QSqlDriver_unsubscribeFromNotification(QSqlDriver* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->unsubscribeFromNotification(name_QString);
}

struct miqt_array /* of struct miqt_string */  QSqlDriver_subscribedToNotifications(const QSqlDriver* self) {
	QStringList _ret = self->subscribedToNotifications();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSqlDriver_isIdentifierEscaped(const QSqlDriver* self, struct miqt_string identifier, int type) {
	QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
	return self->isIdentifierEscaped(identifier_QString, static_cast<QSqlDriver::IdentifierType>(type));
}

struct miqt_string QSqlDriver_stripDelimiters(const QSqlDriver* self, struct miqt_string identifier, int type) {
	QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
	QString _ret = self->stripDelimiters(identifier_QString, static_cast<QSqlDriver::IdentifierType>(type));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSqlDriver_setNumericalPrecisionPolicy(QSqlDriver* self, int precisionPolicy) {
	self->setNumericalPrecisionPolicy(static_cast<QSql::NumericalPrecisionPolicy>(precisionPolicy));
}

int QSqlDriver_numericalPrecisionPolicy(const QSqlDriver* self) {
	QSql::NumericalPrecisionPolicy _ret = self->numericalPrecisionPolicy();
	return static_cast<int>(_ret);
}

int QSqlDriver_dbmsType(const QSqlDriver* self) {
	QSqlDriver::DbmsType _ret = self->dbmsType();
	return static_cast<int>(_ret);
}

bool QSqlDriver_cancelQuery(QSqlDriver* self) {
	return self->cancelQuery();
}

void QSqlDriver_notification(QSqlDriver* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->notification(name_QString);
}

void QSqlDriver_connect_notification(QSqlDriver* self, intptr_t slot) {
	QSqlDriver::connect(self, static_cast<void (QSqlDriver::*)(const QString&)>(&QSqlDriver::notification), self, [=](const QString& name) {
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QSqlDriver_notification(slot, sigval1);
	});
}

void QSqlDriver_notification2(QSqlDriver* self, struct miqt_string name, int source, QVariant* payload) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->notification(name_QString, static_cast<QSqlDriver::NotificationSource>(source), *payload);
}

void QSqlDriver_connect_notification2(QSqlDriver* self, intptr_t slot) {
	QSqlDriver::connect(self, static_cast<void (QSqlDriver::*)(const QString&, QSqlDriver::NotificationSource, const QVariant&)>(&QSqlDriver::notification), self, [=](const QString& name, QSqlDriver::NotificationSource source, const QVariant& payload) {
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		QSqlDriver::NotificationSource source_ret = source;
		int sigval2 = static_cast<int>(source_ret);
		const QVariant& payload_ret = payload;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&payload_ret);
		miqt_exec_callback_QSqlDriver_notification2(slot, sigval1, sigval2, sigval3);
	});
}

struct miqt_string QSqlDriver_tr2(const char* s, const char* c) {
	QString _ret = QSqlDriver::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlDriver_tr3(const char* s, const char* c, int n) {
	QString _ret = QSqlDriver::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlDriver_trUtf82(const char* s, const char* c) {
	QString _ret = QSqlDriver::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlDriver_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSqlDriver::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlDriver_override_virtual_isOpen(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isOpen = slot;
	return true;
}

bool QSqlDriver_virtualbase_isOpen(const void* self) {
	return static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::isOpen();
}

bool QSqlDriver_override_virtual_beginTransaction(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__beginTransaction = slot;
	return true;
}

bool QSqlDriver_virtualbase_beginTransaction(void* self) {
	return static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::beginTransaction();
}

bool QSqlDriver_override_virtual_commitTransaction(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__commitTransaction = slot;
	return true;
}

bool QSqlDriver_virtualbase_commitTransaction(void* self) {
	return static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::commitTransaction();
}

bool QSqlDriver_override_virtual_rollbackTransaction(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rollbackTransaction = slot;
	return true;
}

bool QSqlDriver_virtualbase_rollbackTransaction(void* self) {
	return static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::rollbackTransaction();
}

bool QSqlDriver_override_virtual_tables(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tables = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QSqlDriver_virtualbase_tables(const void* self, int tableType) {
	QStringList _ret = static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::tables(static_cast<QSql::TableType>(tableType));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSqlDriver_override_virtual_primaryIndex(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__primaryIndex = slot;
	return true;
}

QSqlIndex* QSqlDriver_virtualbase_primaryIndex(const void* self, struct miqt_string tableName) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	return new QSqlIndex(static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::primaryIndex(tableName_QString));
}

bool QSqlDriver_override_virtual_record(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__record = slot;
	return true;
}

QSqlRecord* QSqlDriver_virtualbase_record(const void* self, struct miqt_string tableName) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	return new QSqlRecord(static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::record(tableName_QString));
}

bool QSqlDriver_override_virtual_formatValue(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__formatValue = slot;
	return true;
}

struct miqt_string QSqlDriver_virtualbase_formatValue(const void* self, QSqlField* field, bool trimStrings) {
	QString _ret = static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::formatValue(*field, trimStrings);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlDriver_override_virtual_escapeIdentifier(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__escapeIdentifier = slot;
	return true;
}

struct miqt_string QSqlDriver_virtualbase_escapeIdentifier(const void* self, struct miqt_string identifier, int type) {
	QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
	QString _ret = static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::escapeIdentifier(identifier_QString, static_cast<MiqtVirtualQSqlDriver::IdentifierType>(type));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlDriver_override_virtual_sqlStatement(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sqlStatement = slot;
	return true;
}

struct miqt_string QSqlDriver_virtualbase_sqlStatement(const void* self, int type, struct miqt_string tableName, QSqlRecord* rec, bool preparedStatement) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	QString _ret = static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::sqlStatement(static_cast<MiqtVirtualQSqlDriver::StatementType>(type), tableName_QString, *rec, preparedStatement);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlDriver_override_virtual_handle(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__handle = slot;
	return true;
}

QVariant* QSqlDriver_virtualbase_handle(const void* self) {
	return new QVariant(static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::handle());
}

bool QSqlDriver_override_virtual_hasFeature(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasFeature = slot;
	return true;
}

bool QSqlDriver_override_virtual_close(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__close = slot;
	return true;
}

bool QSqlDriver_override_virtual_createResult(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createResult = slot;
	return true;
}

bool QSqlDriver_override_virtual_open(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = slot;
	return true;
}

bool QSqlDriver_override_virtual_subscribeToNotification(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__subscribeToNotification = slot;
	return true;
}

bool QSqlDriver_virtualbase_subscribeToNotification(void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::subscribeToNotification(name_QString);
}

bool QSqlDriver_override_virtual_unsubscribeFromNotification(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__unsubscribeFromNotification = slot;
	return true;
}

bool QSqlDriver_virtualbase_unsubscribeFromNotification(void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::unsubscribeFromNotification(name_QString);
}

bool QSqlDriver_override_virtual_subscribedToNotifications(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__subscribedToNotifications = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QSqlDriver_virtualbase_subscribedToNotifications(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::subscribedToNotifications();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSqlDriver_override_virtual_isIdentifierEscaped(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isIdentifierEscaped = slot;
	return true;
}

bool QSqlDriver_virtualbase_isIdentifierEscaped(const void* self, struct miqt_string identifier, int type) {
	QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
	return static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::isIdentifierEscaped(identifier_QString, static_cast<MiqtVirtualQSqlDriver::IdentifierType>(type));
}

bool QSqlDriver_override_virtual_stripDelimiters(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stripDelimiters = slot;
	return true;
}

struct miqt_string QSqlDriver_virtualbase_stripDelimiters(const void* self, struct miqt_string identifier, int type) {
	QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
	QString _ret = static_cast<const MiqtVirtualQSqlDriver*>(self)->QSqlDriver::stripDelimiters(identifier_QString, static_cast<MiqtVirtualQSqlDriver::IdentifierType>(type));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlDriver_override_virtual_cancelQuery(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__cancelQuery = slot;
	return true;
}

bool QSqlDriver_virtualbase_cancelQuery(void* self) {
	return static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::cancelQuery();
}

bool QSqlDriver_override_virtual_setOpen(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setOpen = slot;
	return true;
}

void QSqlDriver_virtualbase_setOpen(void* self, bool o) {
	static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::setOpen(o);
}

bool QSqlDriver_override_virtual_setOpenError(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setOpenError = slot;
	return true;
}

void QSqlDriver_virtualbase_setOpenError(void* self, bool e) {
	static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::setOpenError(e);
}

bool QSqlDriver_override_virtual_setLastError(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setLastError = slot;
	return true;
}

void QSqlDriver_virtualbase_setLastError(void* self, QSqlError* e) {
	static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::setLastError(*e);
}

bool QSqlDriver_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QSqlDriver_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::event(event);
}

bool QSqlDriver_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSqlDriver_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::eventFilter(watched, event);
}

bool QSqlDriver_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QSqlDriver_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::timerEvent(event);
}

bool QSqlDriver_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QSqlDriver_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::childEvent(event);
}

bool QSqlDriver_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QSqlDriver_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::customEvent(event);
}

bool QSqlDriver_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QSqlDriver_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::connectNotify(*signal);
}

bool QSqlDriver_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSqlDriver_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSqlDriver*>(self)->QSqlDriver::disconnectNotify(*signal);
}

QObject* QSqlDriver_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSqlDriver_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSqlDriver_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSqlDriver_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSqlDriver* self_cast = dynamic_cast<MiqtVirtualQSqlDriver*>( (QSqlDriver*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSqlDriver_delete(QSqlDriver* self) {
	delete self;
}

