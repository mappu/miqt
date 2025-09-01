#include <QAbstractItemModel>
#include <QAbstractTableModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSqlRelation>
#include <QSqlRelationalTableModel>
#include <QSqlTableModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qsqlrelationaltablemodel.h>
#include "gen_qsqlrelationaltablemodel.h"

#ifdef __cplusplus
extern "C" {
#endif

QVariant* miqt_exec_callback_QSqlRelationalTableModel_data(const QSqlRelationalTableModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QSqlRelationalTableModel_setData(QSqlRelationalTableModel*, intptr_t, QModelIndex*, QVariant*, int);
bool miqt_exec_callback_QSqlRelationalTableModel_removeColumns(QSqlRelationalTableModel*, intptr_t, int, int, QModelIndex*);
void miqt_exec_callback_QSqlRelationalTableModel_clear(QSqlRelationalTableModel*, intptr_t);
bool miqt_exec_callback_QSqlRelationalTableModel_select(QSqlRelationalTableModel*, intptr_t);
void miqt_exec_callback_QSqlRelationalTableModel_setTable(QSqlRelationalTableModel*, intptr_t, struct miqt_string);
void miqt_exec_callback_QSqlRelationalTableModel_setRelation(QSqlRelationalTableModel*, intptr_t, int, QSqlRelation*);
QSqlTableModel* miqt_exec_callback_QSqlRelationalTableModel_relationModel(const QSqlRelationalTableModel*, intptr_t, int);
void miqt_exec_callback_QSqlRelationalTableModel_revertRow(QSqlRelationalTableModel*, intptr_t, int);
struct miqt_string miqt_exec_callback_QSqlRelationalTableModel_selectStatement(const QSqlRelationalTableModel*, intptr_t);
bool miqt_exec_callback_QSqlRelationalTableModel_updateRowInTable(QSqlRelationalTableModel*, intptr_t, int, QSqlRecord*);
bool miqt_exec_callback_QSqlRelationalTableModel_insertRowIntoTable(QSqlRelationalTableModel*, intptr_t, QSqlRecord*);
struct miqt_string miqt_exec_callback_QSqlRelationalTableModel_orderByClause(const QSqlRelationalTableModel*, intptr_t);
int miqt_exec_callback_QSqlRelationalTableModel_flags(const QSqlRelationalTableModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QSqlRelationalTableModel_headerData(const QSqlRelationalTableModel*, intptr_t, int, int, int);
void miqt_exec_callback_QSqlRelationalTableModel_setEditStrategy(QSqlRelationalTableModel*, intptr_t, int);
void miqt_exec_callback_QSqlRelationalTableModel_sort(QSqlRelationalTableModel*, intptr_t, int, int);
void miqt_exec_callback_QSqlRelationalTableModel_setSort(QSqlRelationalTableModel*, intptr_t, int, int);
void miqt_exec_callback_QSqlRelationalTableModel_setFilter(QSqlRelationalTableModel*, intptr_t, struct miqt_string);
int miqt_exec_callback_QSqlRelationalTableModel_rowCount(const QSqlRelationalTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSqlRelationalTableModel_removeRows(QSqlRelationalTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSqlRelationalTableModel_insertRows(QSqlRelationalTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSqlRelationalTableModel_selectRow(QSqlRelationalTableModel*, intptr_t, int);
bool miqt_exec_callback_QSqlRelationalTableModel_submit(QSqlRelationalTableModel*, intptr_t);
void miqt_exec_callback_QSqlRelationalTableModel_revert(QSqlRelationalTableModel*, intptr_t);
bool miqt_exec_callback_QSqlRelationalTableModel_deleteRowFromTable(QSqlRelationalTableModel*, intptr_t, int);
QModelIndex* miqt_exec_callback_QSqlRelationalTableModel_indexInQuery(const QSqlRelationalTableModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QSqlRelationalTableModel_columnCount(const QSqlRelationalTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSqlRelationalTableModel_setHeaderData(QSqlRelationalTableModel*, intptr_t, int, int, QVariant*, int);
bool miqt_exec_callback_QSqlRelationalTableModel_insertColumns(QSqlRelationalTableModel*, intptr_t, int, int, QModelIndex*);
void miqt_exec_callback_QSqlRelationalTableModel_fetchMore(QSqlRelationalTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSqlRelationalTableModel_canFetchMore(const QSqlRelationalTableModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QSqlRelationalTableModel_roleNames(const QSqlRelationalTableModel*, intptr_t);
void miqt_exec_callback_QSqlRelationalTableModel_queryChange(QSqlRelationalTableModel*, intptr_t);
QModelIndex* miqt_exec_callback_QSqlRelationalTableModel_index(const QSqlRelationalTableModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QSqlRelationalTableModel_sibling(const QSqlRelationalTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSqlRelationalTableModel_dropMimeData(QSqlRelationalTableModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QSqlRelationalTableModel_itemData(const QSqlRelationalTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSqlRelationalTableModel_setItemData(QSqlRelationalTableModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QSqlRelationalTableModel_mimeTypes(const QSqlRelationalTableModel*, intptr_t);
QMimeData* miqt_exec_callback_QSqlRelationalTableModel_mimeData(const QSqlRelationalTableModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QSqlRelationalTableModel_canDropMimeData(const QSqlRelationalTableModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QSqlRelationalTableModel_supportedDropActions(const QSqlRelationalTableModel*, intptr_t);
int miqt_exec_callback_QSqlRelationalTableModel_supportedDragActions(const QSqlRelationalTableModel*, intptr_t);
bool miqt_exec_callback_QSqlRelationalTableModel_moveRows(QSqlRelationalTableModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QSqlRelationalTableModel_moveColumns(QSqlRelationalTableModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QSqlRelationalTableModel_buddy(const QSqlRelationalTableModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QSqlRelationalTableModel_match(const QSqlRelationalTableModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QSqlRelationalTableModel_span(const QSqlRelationalTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSqlRelationalTableModel_event(QSqlRelationalTableModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QSqlRelationalTableModel_eventFilter(QSqlRelationalTableModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSqlRelationalTableModel_timerEvent(QSqlRelationalTableModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSqlRelationalTableModel_childEvent(QSqlRelationalTableModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSqlRelationalTableModel_customEvent(QSqlRelationalTableModel*, intptr_t, QEvent*);
void miqt_exec_callback_QSqlRelationalTableModel_connectNotify(QSqlRelationalTableModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSqlRelationalTableModel_disconnectNotify(QSqlRelationalTableModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QSqlRelation* QSqlRelation_new() {
	return new (std::nothrow) QSqlRelation();
}

QSqlRelation* QSqlRelation_new2(struct miqt_string aTableName, struct miqt_string indexCol, struct miqt_string displayCol) {
	QString aTableName_QString = QString::fromUtf8(aTableName.data, aTableName.len);
	QString indexCol_QString = QString::fromUtf8(indexCol.data, indexCol.len);
	QString displayCol_QString = QString::fromUtf8(displayCol.data, displayCol.len);
	return new (std::nothrow) QSqlRelation(aTableName_QString, indexCol_QString, displayCol_QString);
}

QSqlRelation* QSqlRelation_new3(QSqlRelation* param1) {
	return new (std::nothrow) QSqlRelation(*param1);
}

void QSqlRelation_swap(QSqlRelation* self, QSqlRelation* other) {
	self->swap(*other);
}

struct miqt_string QSqlRelation_tableName(const QSqlRelation* self) {
	QString _ret = self->tableName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlRelation_indexColumn(const QSqlRelation* self) {
	QString _ret = self->indexColumn();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlRelation_displayColumn(const QSqlRelation* self) {
	QString _ret = self->displayColumn();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlRelation_isValid(const QSqlRelation* self) {
	return self->isValid();
}

void QSqlRelation_delete(QSqlRelation* self) {
	delete self;
}

class MiqtVirtualQSqlRelationalTableModel final : public QSqlRelationalTableModel {
public:

	MiqtVirtualQSqlRelationalTableModel(): QSqlRelationalTableModel() {}
	MiqtVirtualQSqlRelationalTableModel(QObject* parent): QSqlRelationalTableModel(parent) {}
	MiqtVirtualQSqlRelationalTableModel(QObject* parent, QSqlDatabase db): QSqlRelationalTableModel(parent, db) {}

	virtual ~MiqtVirtualQSqlRelationalTableModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& item, int role) const override {
		if (handle__data == 0) {
			return QSqlRelationalTableModel::data(item, role);
		}

		const QModelIndex& item_ret = item;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&item_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_data(this, handle__data, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QSqlRelationalTableModel_virtualbase_data(const void* self, QModelIndex* item, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& item, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QSqlRelationalTableModel::setData(item, value, role);
		}

		const QModelIndex& item_ret = item;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&item_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_setData(this, handle__setData, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_setData(void* self, QModelIndex* item, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QSqlRelationalTableModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QSqlRelationalTableModel::clear();
			return;
		}

		miqt_exec_callback_QSqlRelationalTableModel_clear(this, handle__clear);

	}

	friend void QSqlRelationalTableModel_virtualbase_clear(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__select = 0;

	// Subclass to allow providing a Go implementation
	virtual bool select() override {
		if (handle__select == 0) {
			return QSqlRelationalTableModel::select();
		}

		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_select(this, handle__select);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_select(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTable = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTable(const QString& tableName) override {
		if (handle__setTable == 0) {
			QSqlRelationalTableModel::setTable(tableName);
			return;
		}

		const QString tableName_ret = tableName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray tableName_b = tableName_ret.toUtf8();
		struct miqt_string tableName_ms;
		tableName_ms.len = tableName_b.length();
		tableName_ms.data = static_cast<char*>(malloc(tableName_ms.len));
		memcpy(tableName_ms.data, tableName_b.data(), tableName_ms.len);
		struct miqt_string sigval1 = tableName_ms;
		miqt_exec_callback_QSqlRelationalTableModel_setTable(this, handle__setTable, sigval1);

	}

	friend void QSqlRelationalTableModel_virtualbase_setTable(void* self, struct miqt_string tableName);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setRelation = 0;

	// Subclass to allow providing a Go implementation
	virtual void setRelation(int column, const QSqlRelation& relation) override {
		if (handle__setRelation == 0) {
			QSqlRelationalTableModel::setRelation(column, relation);
			return;
		}

		int sigval1 = column;
		const QSqlRelation& relation_ret = relation;
		// Cast returned reference into pointer
		QSqlRelation* sigval2 = const_cast<QSqlRelation*>(&relation_ret);
		miqt_exec_callback_QSqlRelationalTableModel_setRelation(this, handle__setRelation, sigval1, sigval2);

	}

	friend void QSqlRelationalTableModel_virtualbase_setRelation(void* self, int column, QSqlRelation* relation);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__relationModel = 0;

	// Subclass to allow providing a Go implementation
	virtual QSqlTableModel* relationModel(int column) const override {
		if (handle__relationModel == 0) {
			return QSqlRelationalTableModel::relationModel(column);
		}

		int sigval1 = column;
		QSqlTableModel* callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_relationModel(this, handle__relationModel, sigval1);
		return callback_return_value;
	}

	friend QSqlTableModel* QSqlRelationalTableModel_virtualbase_relationModel(const void* self, int column);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revertRow = 0;

	// Subclass to allow providing a Go implementation
	virtual void revertRow(int row) override {
		if (handle__revertRow == 0) {
			QSqlRelationalTableModel::revertRow(row);
			return;
		}

		int sigval1 = row;
		miqt_exec_callback_QSqlRelationalTableModel_revertRow(this, handle__revertRow, sigval1);

	}

	friend void QSqlRelationalTableModel_virtualbase_revertRow(void* self, int row);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectStatement = 0;

	// Subclass to allow providing a Go implementation
	virtual QString selectStatement() const override {
		if (handle__selectStatement == 0) {
			return QSqlRelationalTableModel::selectStatement();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_selectStatement(this, handle__selectStatement);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QSqlRelationalTableModel_virtualbase_selectStatement(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateRowInTable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool updateRowInTable(int row, const QSqlRecord& values) override {
		if (handle__updateRowInTable == 0) {
			return QSqlRelationalTableModel::updateRowInTable(row, values);
		}

		int sigval1 = row;
		const QSqlRecord& values_ret = values;
		// Cast returned reference into pointer
		QSqlRecord* sigval2 = const_cast<QSqlRecord*>(&values_ret);
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_updateRowInTable(this, handle__updateRowInTable, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_updateRowInTable(void* self, int row, QSqlRecord* values);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRowIntoTable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRowIntoTable(const QSqlRecord& values) override {
		if (handle__insertRowIntoTable == 0) {
			return QSqlRelationalTableModel::insertRowIntoTable(values);
		}

		const QSqlRecord& values_ret = values;
		// Cast returned reference into pointer
		QSqlRecord* sigval1 = const_cast<QSqlRecord*>(&values_ret);
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_insertRowIntoTable(this, handle__insertRowIntoTable, sigval1);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_insertRowIntoTable(void* self, QSqlRecord* values);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__orderByClause = 0;

	// Subclass to allow providing a Go implementation
	virtual QString orderByClause() const override {
		if (handle__orderByClause == 0) {
			return QSqlRelationalTableModel::orderByClause();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_orderByClause(this, handle__orderByClause);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QSqlRelationalTableModel_virtualbase_orderByClause(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QSqlRelationalTableModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_flags(this, handle__flags, sigval1);
		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	friend int QSqlRelationalTableModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QSqlRelationalTableModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QSqlRelationalTableModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditStrategy = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditStrategy(QSqlTableModel::EditStrategy strategy) override {
		if (handle__setEditStrategy == 0) {
			QSqlRelationalTableModel::setEditStrategy(strategy);
			return;
		}

		QSqlTableModel::EditStrategy strategy_ret = strategy;
		int sigval1 = static_cast<int>(strategy_ret);
		miqt_exec_callback_QSqlRelationalTableModel_setEditStrategy(this, handle__setEditStrategy, sigval1);

	}

	friend void QSqlRelationalTableModel_virtualbase_setEditStrategy(void* self, int strategy);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QSqlRelationalTableModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QSqlRelationalTableModel_sort(this, handle__sort, sigval1, sigval2);

	}

	friend void QSqlRelationalTableModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSort = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSort(int column, Qt::SortOrder order) override {
		if (handle__setSort == 0) {
			QSqlRelationalTableModel::setSort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QSqlRelationalTableModel_setSort(this, handle__setSort, sigval1, sigval2);

	}

	friend void QSqlRelationalTableModel_virtualbase_setSort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFilter(const QString& filter) override {
		if (handle__setFilter == 0) {
			QSqlRelationalTableModel::setFilter(filter);
			return;
		}

		const QString filter_ret = filter;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filter_b = filter_ret.toUtf8();
		struct miqt_string filter_ms;
		filter_ms.len = filter_b.length();
		filter_ms.data = static_cast<char*>(malloc(filter_ms.len));
		memcpy(filter_ms.data, filter_b.data(), filter_ms.len);
		struct miqt_string sigval1 = filter_ms;
		miqt_exec_callback_QSqlRelationalTableModel_setFilter(this, handle__setFilter, sigval1);

	}

	friend void QSqlRelationalTableModel_virtualbase_setFilter(void* self, struct miqt_string filter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QSqlRelationalTableModel::rowCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_rowCount(this, handle__rowCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSqlRelationalTableModel_virtualbase_rowCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QSqlRelationalTableModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QSqlRelationalTableModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectRow = 0;

	// Subclass to allow providing a Go implementation
	virtual bool selectRow(int row) override {
		if (handle__selectRow == 0) {
			return QSqlRelationalTableModel::selectRow(row);
		}

		int sigval1 = row;
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_selectRow(this, handle__selectRow, sigval1);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_selectRow(void* self, int row);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QSqlRelationalTableModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_submit(this, handle__submit);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QSqlRelationalTableModel::revert();
			return;
		}

		miqt_exec_callback_QSqlRelationalTableModel_revert(this, handle__revert);

	}

	friend void QSqlRelationalTableModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__deleteRowFromTable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool deleteRowFromTable(int row) override {
		if (handle__deleteRowFromTable == 0) {
			return QSqlRelationalTableModel::deleteRowFromTable(row);
		}

		int sigval1 = row;
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_deleteRowFromTable(this, handle__deleteRowFromTable, sigval1);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_deleteRowFromTable(void* self, int row);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexInQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
		if (handle__indexInQuery == 0) {
			return QSqlRelationalTableModel::indexInQuery(item);
		}

		const QModelIndex& item_ret = item;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&item_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_indexInQuery(this, handle__indexInQuery, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QSqlRelationalTableModel_virtualbase_indexInQuery(const void* self, QModelIndex* item);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return QSqlRelationalTableModel::columnCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_columnCount(this, handle__columnCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSqlRelationalTableModel_virtualbase_columnCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QSqlRelationalTableModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QSqlRelationalTableModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QSqlRelationalTableModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QSqlRelationalTableModel_fetchMore(this, handle__fetchMore, sigval1);

	}

	friend void QSqlRelationalTableModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QSqlRelationalTableModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_canFetchMore(this, handle__canFetchMore, sigval1);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QSqlRelationalTableModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_roleNames(this, handle__roleNames);
		QHash<int, QByteArray> callback_return_value_QMap;
		callback_return_value_QMap.reserve(callback_return_value.len);
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		struct miqt_string* callback_return_value_varr = static_cast<struct miqt_string*>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QByteArray callback_return_value_varr_i_QByteArray(callback_return_value_varr[i].data, callback_return_value_varr[i].len);
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = callback_return_value_varr_i_QByteArray;
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to struct miqt_string */  QSqlRelationalTableModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__queryChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void queryChange() override {
		if (handle__queryChange == 0) {
			QSqlRelationalTableModel::queryChange();
			return;
		}

		miqt_exec_callback_QSqlRelationalTableModel_queryChange(this, handle__queryChange);

	}

	friend void QSqlRelationalTableModel_virtualbase_queryChange(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QSqlRelationalTableModel::index(row, column, parent);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_index(this, handle__index, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QSqlRelationalTableModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QSqlRelationalTableModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QSqlRelationalTableModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QSqlRelationalTableModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QSqlRelationalTableModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_itemData(this, handle__itemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QSqlRelationalTableModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
			return QSqlRelationalTableModel::setItemData(index, roles);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QMap<int, QVariant>& roles_ret = roles;
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* roles_karr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
		QVariant** roles_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * roles_ret.size()));
		int roles_ctr = 0;
		for (auto roles_itr = roles_ret.keyValueBegin(); roles_itr != roles_ret.keyValueEnd(); ++roles_itr) {
			roles_karr[roles_ctr] = roles_itr->first;
			roles_varr[roles_ctr] = new QVariant(roles_itr->second);
			roles_ctr++;
		}
		struct miqt_map roles_out;
		roles_out.len = roles_ret.size();
		roles_out.keys = static_cast<void*>(roles_karr);
		roles_out.values = static_cast<void*>(roles_varr);
		struct miqt_map /* of int to QVariant* */  sigval2 = roles_out;
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_setItemData(this, handle__setItemData, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QSqlRelationalTableModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_mimeTypes(this, handle__mimeTypes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QSqlRelationalTableModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QSqlRelationalTableModel::mimeData(indexes);
		}

		const QModelIndexList& indexes_ret = indexes;
		// Convert QList<> from C++ memory to manually-managed C memory
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.length()));
		for (size_t i = 0, e = indexes_ret.length(); i < e; ++i) {
			indexes_arr[i] = new QModelIndex(indexes_ret[i]);
		}
		struct miqt_array indexes_out;
		indexes_out.len = indexes_ret.length();
		indexes_out.data = static_cast<void*>(indexes_arr);
		struct miqt_array /* of QModelIndex* */  sigval1 = indexes_out;
		QMimeData* callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_mimeData(this, handle__mimeData, sigval1);
		return callback_return_value;
	}

	friend QMimeData* QSqlRelationalTableModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QSqlRelationalTableModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QSqlRelationalTableModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_supportedDropActions(this, handle__supportedDropActions);
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QSqlRelationalTableModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QSqlRelationalTableModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_supportedDragActions(this, handle__supportedDragActions);
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QSqlRelationalTableModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QSqlRelationalTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}

		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceRow;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QSqlRelationalTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		}

		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceColumn;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QSqlRelationalTableModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_buddy(this, handle__buddy, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QSqlRelationalTableModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QSqlRelationalTableModel::match(start, role, value, hits, flags);
		}

		const QModelIndex& start_ret = start;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&start_ret);
		int sigval2 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = hits;
		Qt::MatchFlags flags_ret = flags;
		int sigval5 = static_cast<int>(flags_ret);
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QSqlRelationalTableModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QSqlRelationalTableModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_span(this, handle__span, sigval1);
		return *callback_return_value;
	}

	friend QSize* QSqlRelationalTableModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSqlRelationalTableModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSqlRelationalTableModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSqlRelationalTableModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSqlRelationalTableModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSqlRelationalTableModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSqlRelationalTableModel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QSqlRelationalTableModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSqlRelationalTableModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSqlRelationalTableModel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QSqlRelationalTableModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSqlRelationalTableModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSqlRelationalTableModel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QSqlRelationalTableModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSqlRelationalTableModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSqlRelationalTableModel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QSqlRelationalTableModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSqlRelationalTableModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSqlRelationalTableModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QSqlRelationalTableModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QSqlRelationalTableModel_protectedbase_setPrimaryKey(bool* _dynamic_cast_ok, void* self, QSqlIndex* key);
	friend void QSqlRelationalTableModel_protectedbase_setQuery(bool* _dynamic_cast_ok, void* self, QSqlQuery* query);
	friend QSqlRecord* QSqlRelationalTableModel_protectedbase_primaryValues(bool* _dynamic_cast_ok, const void* self, int row);
	friend void QSqlRelationalTableModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSqlRelationalTableModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QSqlRelationalTableModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSqlRelationalTableModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QSqlRelationalTableModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSqlRelationalTableModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QSqlRelationalTableModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSqlRelationalTableModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QSqlRelationalTableModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QSqlRelationalTableModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QSqlRelationalTableModel_protectedbase_setLastError(bool* _dynamic_cast_ok, void* self, QSqlError* error);
	friend void QSqlRelationalTableModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QSqlRelationalTableModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QSqlRelationalTableModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QSqlRelationalTableModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend bool QSqlRelationalTableModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QSqlRelationalTableModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QSqlRelationalTableModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QSqlRelationalTableModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QSqlRelationalTableModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QSqlRelationalTableModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QSqlRelationalTableModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QSqlRelationalTableModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSqlRelationalTableModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSqlRelationalTableModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSqlRelationalTableModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSqlRelationalTableModel* QSqlRelationalTableModel_new() {
	return new (std::nothrow) MiqtVirtualQSqlRelationalTableModel();
}

QSqlRelationalTableModel* QSqlRelationalTableModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQSqlRelationalTableModel(parent);
}

QSqlRelationalTableModel* QSqlRelationalTableModel_new3(QObject* parent, QSqlDatabase* db) {
	return new (std::nothrow) MiqtVirtualQSqlRelationalTableModel(parent, *db);
}

void QSqlRelationalTableModel_virtbase(QSqlRelationalTableModel* src, QSqlTableModel** outptr_QSqlTableModel) {
	*outptr_QSqlTableModel = static_cast<QSqlTableModel*>(src);
}

QMetaObject* QSqlRelationalTableModel_metaObject(const QSqlRelationalTableModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSqlRelationalTableModel_metacast(QSqlRelationalTableModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSqlRelationalTableModel_tr(const char* s) {
	QString _ret = QSqlRelationalTableModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlRelationalTableModel_trUtf8(const char* s) {
	QString _ret = QSqlRelationalTableModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QSqlRelationalTableModel_data(const QSqlRelationalTableModel* self, QModelIndex* item, int role) {
	return new QVariant(self->data(*item, static_cast<int>(role)));
}

bool QSqlRelationalTableModel_setData(QSqlRelationalTableModel* self, QModelIndex* item, QVariant* value, int role) {
	return self->setData(*item, *value, static_cast<int>(role));
}

bool QSqlRelationalTableModel_removeColumns(QSqlRelationalTableModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

void QSqlRelationalTableModel_clear(QSqlRelationalTableModel* self) {
	self->clear();
}

bool QSqlRelationalTableModel_select(QSqlRelationalTableModel* self) {
	return self->select();
}

void QSqlRelationalTableModel_setTable(QSqlRelationalTableModel* self, struct miqt_string tableName) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	self->setTable(tableName_QString);
}

void QSqlRelationalTableModel_setRelation(QSqlRelationalTableModel* self, int column, QSqlRelation* relation) {
	self->setRelation(static_cast<int>(column), *relation);
}

QSqlRelation* QSqlRelationalTableModel_relation(const QSqlRelationalTableModel* self, int column) {
	return new QSqlRelation(self->relation(static_cast<int>(column)));
}

QSqlTableModel* QSqlRelationalTableModel_relationModel(const QSqlRelationalTableModel* self, int column) {
	return self->relationModel(static_cast<int>(column));
}

void QSqlRelationalTableModel_setJoinMode(QSqlRelationalTableModel* self, int joinMode) {
	self->setJoinMode(static_cast<QSqlRelationalTableModel::JoinMode>(joinMode));
}

void QSqlRelationalTableModel_revertRow(QSqlRelationalTableModel* self, int row) {
	self->revertRow(static_cast<int>(row));
}

struct miqt_string QSqlRelationalTableModel_tr2(const char* s, const char* c) {
	QString _ret = QSqlRelationalTableModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlRelationalTableModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QSqlRelationalTableModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlRelationalTableModel_trUtf82(const char* s, const char* c) {
	QString _ret = QSqlRelationalTableModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlRelationalTableModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSqlRelationalTableModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlRelationalTableModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = slot;
	return true;
}

QVariant* QSqlRelationalTableModel_virtualbase_data(const void* self, QModelIndex* item, int role) {
	return new QVariant(static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::data(*item, static_cast<int>(role)));
}

bool QSqlRelationalTableModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_setData(void* self, QModelIndex* item, QVariant* value, int role) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::setData(*item, *value, static_cast<int>(role));
}

bool QSqlRelationalTableModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSqlRelationalTableModel_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clear = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_clear(void* self) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::clear();
}

bool QSqlRelationalTableModel_override_virtual_select(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__select = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_select(void* self) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::select();
}

bool QSqlRelationalTableModel_override_virtual_setTable(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setTable = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_setTable(void* self, struct miqt_string tableName) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::setTable(tableName_QString);
}

bool QSqlRelationalTableModel_override_virtual_setRelation(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setRelation = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_setRelation(void* self, int column, QSqlRelation* relation) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::setRelation(static_cast<int>(column), *relation);
}

bool QSqlRelationalTableModel_override_virtual_relationModel(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__relationModel = slot;
	return true;
}

QSqlTableModel* QSqlRelationalTableModel_virtualbase_relationModel(const void* self, int column) {
	return static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::relationModel(static_cast<int>(column));
}

bool QSqlRelationalTableModel_override_virtual_revertRow(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revertRow = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_revertRow(void* self, int row) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::revertRow(static_cast<int>(row));
}

bool QSqlRelationalTableModel_override_virtual_selectStatement(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectStatement = slot;
	return true;
}

struct miqt_string QSqlRelationalTableModel_virtualbase_selectStatement(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::selectStatement();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlRelationalTableModel_override_virtual_updateRowInTable(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateRowInTable = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_updateRowInTable(void* self, int row, QSqlRecord* values) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::updateRowInTable(static_cast<int>(row), *values);
}

bool QSqlRelationalTableModel_override_virtual_insertRowIntoTable(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRowIntoTable = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_insertRowIntoTable(void* self, QSqlRecord* values) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::insertRowIntoTable(*values);
}

bool QSqlRelationalTableModel_override_virtual_orderByClause(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__orderByClause = slot;
	return true;
}

struct miqt_string QSqlRelationalTableModel_virtualbase_orderByClause(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::orderByClause();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlRelationalTableModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = slot;
	return true;
}

int QSqlRelationalTableModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QSqlRelationalTableModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QSqlRelationalTableModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QSqlRelationalTableModel_override_virtual_setEditStrategy(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditStrategy = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_setEditStrategy(void* self, int strategy) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::setEditStrategy(static_cast<MiqtVirtualQSqlRelationalTableModel::EditStrategy>(strategy));
}

bool QSqlRelationalTableModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QSqlRelationalTableModel_override_virtual_setSort(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSort = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_setSort(void* self, int column, int order) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QSqlRelationalTableModel_override_virtual_setFilter(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFilter = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_setFilter(void* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::setFilter(filter_QString);
}

bool QSqlRelationalTableModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = slot;
	return true;
}

int QSqlRelationalTableModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::rowCount(*parent);
}

bool QSqlRelationalTableModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSqlRelationalTableModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSqlRelationalTableModel_override_virtual_selectRow(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectRow = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_selectRow(void* self, int row) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::selectRow(static_cast<int>(row));
}

bool QSqlRelationalTableModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::submit();
}

bool QSqlRelationalTableModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::revert();
}

bool QSqlRelationalTableModel_override_virtual_deleteRowFromTable(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__deleteRowFromTable = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_deleteRowFromTable(void* self, int row) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::deleteRowFromTable(static_cast<int>(row));
}

bool QSqlRelationalTableModel_override_virtual_indexInQuery(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexInQuery = slot;
	return true;
}

QModelIndex* QSqlRelationalTableModel_virtualbase_indexInQuery(const void* self, QModelIndex* item) {
	return new QModelIndex(static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::indexInQuery(*item));
}

bool QSqlRelationalTableModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = slot;
	return true;
}

int QSqlRelationalTableModel_virtualbase_columnCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::columnCount(*parent);
}

bool QSqlRelationalTableModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QSqlRelationalTableModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSqlRelationalTableModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::fetchMore(*parent);
}

bool QSqlRelationalTableModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::canFetchMore(*parent);
}

bool QSqlRelationalTableModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QSqlRelationalTableModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::roleNames();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QByteArray _hashval_qb = _itr->second;
		struct miqt_string _hashval_ms;
		_hashval_ms.len = _hashval_qb.length();
		_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
		memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
		_varr[_ctr] = _hashval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QSqlRelationalTableModel_override_virtual_queryChange(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__queryChange = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_queryChange(void* self) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::queryChange();
}

bool QSqlRelationalTableModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QSqlRelationalTableModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QSqlRelationalTableModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QSqlRelationalTableModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QSqlRelationalTableModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QSqlRelationalTableModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QSqlRelationalTableModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::itemData(*index);
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QSqlRelationalTableModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::setItemData(*index, roles_QMap);
}

bool QSqlRelationalTableModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QSqlRelationalTableModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::mimeTypes();
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

bool QSqlRelationalTableModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QSqlRelationalTableModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::mimeData(indexes_QList);
}

bool QSqlRelationalTableModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QSqlRelationalTableModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QSqlRelationalTableModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QSqlRelationalTableModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QSqlRelationalTableModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QSqlRelationalTableModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QSqlRelationalTableModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QSqlRelationalTableModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QSqlRelationalTableModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::buddy(*index));
}

bool QSqlRelationalTableModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QSqlRelationalTableModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSqlRelationalTableModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = slot;
	return true;
}

QSize* QSqlRelationalTableModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::span(*index));
}

bool QSqlRelationalTableModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::event(event);
}

bool QSqlRelationalTableModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSqlRelationalTableModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::eventFilter(watched, event);
}

bool QSqlRelationalTableModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::timerEvent(event);
}

bool QSqlRelationalTableModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::childEvent(event);
}

bool QSqlRelationalTableModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::customEvent(event);
}

bool QSqlRelationalTableModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::connectNotify(*signal);
}

bool QSqlRelationalTableModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSqlRelationalTableModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSqlRelationalTableModel*>(self)->QSqlRelationalTableModel::disconnectNotify(*signal);
}

void QSqlRelationalTableModel_protectedbase_setPrimaryKey(bool* _dynamic_cast_ok, void* self, QSqlIndex* key) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setPrimaryKey(*key);
}

void QSqlRelationalTableModel_protectedbase_setQuery(bool* _dynamic_cast_ok, void* self, QSqlQuery* query) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setQuery(*query);
}

QSqlRecord* QSqlRelationalTableModel_protectedbase_primaryValues(bool* _dynamic_cast_ok, const void* self, int row) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QSqlRecord(self_cast->primaryValues(static_cast<int>(row)));
}

void QSqlRelationalTableModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QSqlRelationalTableModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QSqlRelationalTableModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QSqlRelationalTableModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

void QSqlRelationalTableModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QSqlRelationalTableModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QSqlRelationalTableModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QSqlRelationalTableModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

void QSqlRelationalTableModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QSqlRelationalTableModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QSqlRelationalTableModel_protectedbase_setLastError(bool* _dynamic_cast_ok, void* self, QSqlError* error) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLastError(*error);
}

void QSqlRelationalTableModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resetInternalData();
}

QModelIndex* QSqlRelationalTableModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));
}

void QSqlRelationalTableModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList indexes_QList;
		indexes_QList.reserve(indexes.len);
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
		for(size_t i = 0; i < indexes.len; ++i) {
			indexes_QList.push_back(*(indexes_arr[i]));
		}
	self_cast->encodeData(indexes_QList, *stream);
}

bool QSqlRelationalTableModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

bool QSqlRelationalTableModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QSqlRelationalTableModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

bool QSqlRelationalTableModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QSqlRelationalTableModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QSqlRelationalTableModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QSqlRelationalTableModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList from_QList;
		from_QList.reserve(from.len);
		QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
		for(size_t i = 0; i < from.len; ++i) {
			from_QList.push_back(*(from_arr[i]));
		}
		QModelIndexList to_QList;
		to_QList.reserve(to.len);
		QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
		for(size_t i = 0; i < to.len; ++i) {
			to_QList.push_back(*(to_arr[i]));
		}
	self_cast->changePersistentIndexList(from_QList, to_QList);
}

struct miqt_array /* of QModelIndex* */  QSqlRelationalTableModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}

	*_dynamic_cast_ok = true;
	QModelIndexList _ret = self_cast->persistentIndexList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QObject* QSqlRelationalTableModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSqlRelationalTableModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSqlRelationalTableModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSqlRelationalTableModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSqlRelationalTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlRelationalTableModel*>( (QSqlRelationalTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSqlRelationalTableModel_delete(QSqlRelationalTableModel* self) {
	delete self;
}

