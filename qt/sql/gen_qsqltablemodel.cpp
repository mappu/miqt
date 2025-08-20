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
#include <QSqlTableModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qsqltablemodel.h>
#include "gen_qsqltablemodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSqlTableModel_primeInsert(intptr_t, int, QSqlRecord*);
void miqt_exec_callback_QSqlTableModel_beforeInsert(intptr_t, QSqlRecord*);
void miqt_exec_callback_QSqlTableModel_beforeUpdate(intptr_t, int, QSqlRecord*);
void miqt_exec_callback_QSqlTableModel_beforeDelete(intptr_t, int);
void miqt_exec_callback_QSqlTableModel_setTable(QSqlTableModel*, intptr_t, struct miqt_string);
int miqt_exec_callback_QSqlTableModel_flags(const QSqlTableModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QSqlTableModel_data(const QSqlTableModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QSqlTableModel_setData(QSqlTableModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QSqlTableModel_headerData(const QSqlTableModel*, intptr_t, int, int, int);
void miqt_exec_callback_QSqlTableModel_clear(QSqlTableModel*, intptr_t);
void miqt_exec_callback_QSqlTableModel_setEditStrategy(QSqlTableModel*, intptr_t, int);
void miqt_exec_callback_QSqlTableModel_sort(QSqlTableModel*, intptr_t, int, int);
void miqt_exec_callback_QSqlTableModel_setSort(QSqlTableModel*, intptr_t, int, int);
void miqt_exec_callback_QSqlTableModel_setFilter(QSqlTableModel*, intptr_t, struct miqt_string);
int miqt_exec_callback_QSqlTableModel_rowCount(const QSqlTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSqlTableModel_removeColumns(QSqlTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSqlTableModel_removeRows(QSqlTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSqlTableModel_insertRows(QSqlTableModel*, intptr_t, int, int, QModelIndex*);
void miqt_exec_callback_QSqlTableModel_revertRow(QSqlTableModel*, intptr_t, int);
bool miqt_exec_callback_QSqlTableModel_select(QSqlTableModel*, intptr_t);
bool miqt_exec_callback_QSqlTableModel_selectRow(QSqlTableModel*, intptr_t, int);
bool miqt_exec_callback_QSqlTableModel_submit(QSqlTableModel*, intptr_t);
void miqt_exec_callback_QSqlTableModel_revert(QSqlTableModel*, intptr_t);
bool miqt_exec_callback_QSqlTableModel_updateRowInTable(QSqlTableModel*, intptr_t, int, QSqlRecord*);
bool miqt_exec_callback_QSqlTableModel_insertRowIntoTable(QSqlTableModel*, intptr_t, QSqlRecord*);
bool miqt_exec_callback_QSqlTableModel_deleteRowFromTable(QSqlTableModel*, intptr_t, int);
struct miqt_string miqt_exec_callback_QSqlTableModel_orderByClause(const QSqlTableModel*, intptr_t);
struct miqt_string miqt_exec_callback_QSqlTableModel_selectStatement(const QSqlTableModel*, intptr_t);
QModelIndex* miqt_exec_callback_QSqlTableModel_indexInQuery(const QSqlTableModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QSqlTableModel_columnCount(const QSqlTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSqlTableModel_setHeaderData(QSqlTableModel*, intptr_t, int, int, QVariant*, int);
bool miqt_exec_callback_QSqlTableModel_insertColumns(QSqlTableModel*, intptr_t, int, int, QModelIndex*);
void miqt_exec_callback_QSqlTableModel_fetchMore(QSqlTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSqlTableModel_canFetchMore(const QSqlTableModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QSqlTableModel_roleNames(const QSqlTableModel*, intptr_t);
void miqt_exec_callback_QSqlTableModel_queryChange(QSqlTableModel*, intptr_t);
QModelIndex* miqt_exec_callback_QSqlTableModel_index(const QSqlTableModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QSqlTableModel_sibling(const QSqlTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSqlTableModel_dropMimeData(QSqlTableModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QSqlTableModel_itemData(const QSqlTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSqlTableModel_setItemData(QSqlTableModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QSqlTableModel_mimeTypes(const QSqlTableModel*, intptr_t);
QMimeData* miqt_exec_callback_QSqlTableModel_mimeData(const QSqlTableModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QSqlTableModel_canDropMimeData(const QSqlTableModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QSqlTableModel_supportedDropActions(const QSqlTableModel*, intptr_t);
int miqt_exec_callback_QSqlTableModel_supportedDragActions(const QSqlTableModel*, intptr_t);
bool miqt_exec_callback_QSqlTableModel_moveRows(QSqlTableModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QSqlTableModel_moveColumns(QSqlTableModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QSqlTableModel_buddy(const QSqlTableModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QSqlTableModel_match(const QSqlTableModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QSqlTableModel_span(const QSqlTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSqlTableModel_event(QSqlTableModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QSqlTableModel_eventFilter(QSqlTableModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSqlTableModel_timerEvent(QSqlTableModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSqlTableModel_childEvent(QSqlTableModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSqlTableModel_customEvent(QSqlTableModel*, intptr_t, QEvent*);
void miqt_exec_callback_QSqlTableModel_connectNotify(QSqlTableModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSqlTableModel_disconnectNotify(QSqlTableModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSqlTableModel final : public QSqlTableModel {
public:

	MiqtVirtualQSqlTableModel(): QSqlTableModel() {}
	MiqtVirtualQSqlTableModel(QObject* parent): QSqlTableModel(parent) {}
	MiqtVirtualQSqlTableModel(QObject* parent, QSqlDatabase db): QSqlTableModel(parent, db) {}

	virtual ~MiqtVirtualQSqlTableModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTable = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTable(const QString& tableName) override {
		if (handle__setTable == 0) {
			QSqlTableModel::setTable(tableName);
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
		miqt_exec_callback_QSqlTableModel_setTable(this, handle__setTable, sigval1);

	}

	friend void QSqlTableModel_virtualbase_setTable(void* self, struct miqt_string tableName);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QSqlTableModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QSqlTableModel_flags(this, handle__flags, sigval1);
		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	friend int QSqlTableModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& idx, int role) const override {
		if (handle__data == 0) {
			return QSqlTableModel::data(idx, role);
		}

		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&idx_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QSqlTableModel_data(this, handle__data, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QSqlTableModel_virtualbase_data(const void* self, QModelIndex* idx, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QSqlTableModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_setData(this, handle__setData, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QSqlTableModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QSqlTableModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QSqlTableModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QSqlTableModel::clear();
			return;
		}

		miqt_exec_callback_QSqlTableModel_clear(this, handle__clear);

	}

	friend void QSqlTableModel_virtualbase_clear(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditStrategy = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditStrategy(QSqlTableModel::EditStrategy strategy) override {
		if (handle__setEditStrategy == 0) {
			QSqlTableModel::setEditStrategy(strategy);
			return;
		}

		QSqlTableModel::EditStrategy strategy_ret = strategy;
		int sigval1 = static_cast<int>(strategy_ret);
		miqt_exec_callback_QSqlTableModel_setEditStrategy(this, handle__setEditStrategy, sigval1);

	}

	friend void QSqlTableModel_virtualbase_setEditStrategy(void* self, int strategy);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QSqlTableModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QSqlTableModel_sort(this, handle__sort, sigval1, sigval2);

	}

	friend void QSqlTableModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSort = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSort(int column, Qt::SortOrder order) override {
		if (handle__setSort == 0) {
			QSqlTableModel::setSort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QSqlTableModel_setSort(this, handle__setSort, sigval1, sigval2);

	}

	friend void QSqlTableModel_virtualbase_setSort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFilter(const QString& filter) override {
		if (handle__setFilter == 0) {
			QSqlTableModel::setFilter(filter);
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
		miqt_exec_callback_QSqlTableModel_setFilter(this, handle__setFilter, sigval1);

	}

	friend void QSqlTableModel_virtualbase_setFilter(void* self, struct miqt_string filter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QSqlTableModel::rowCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QSqlTableModel_rowCount(this, handle__rowCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSqlTableModel_virtualbase_rowCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QSqlTableModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QSqlTableModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QSqlTableModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revertRow = 0;

	// Subclass to allow providing a Go implementation
	virtual void revertRow(int row) override {
		if (handle__revertRow == 0) {
			QSqlTableModel::revertRow(row);
			return;
		}

		int sigval1 = row;
		miqt_exec_callback_QSqlTableModel_revertRow(this, handle__revertRow, sigval1);

	}

	friend void QSqlTableModel_virtualbase_revertRow(void* self, int row);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__select = 0;

	// Subclass to allow providing a Go implementation
	virtual bool select() override {
		if (handle__select == 0) {
			return QSqlTableModel::select();
		}

		bool callback_return_value = miqt_exec_callback_QSqlTableModel_select(this, handle__select);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_select(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectRow = 0;

	// Subclass to allow providing a Go implementation
	virtual bool selectRow(int row) override {
		if (handle__selectRow == 0) {
			return QSqlTableModel::selectRow(row);
		}

		int sigval1 = row;
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_selectRow(this, handle__selectRow, sigval1);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_selectRow(void* self, int row);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QSqlTableModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QSqlTableModel_submit(this, handle__submit);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QSqlTableModel::revert();
			return;
		}

		miqt_exec_callback_QSqlTableModel_revert(this, handle__revert);

	}

	friend void QSqlTableModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__updateRowInTable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool updateRowInTable(int row, const QSqlRecord& values) override {
		if (handle__updateRowInTable == 0) {
			return QSqlTableModel::updateRowInTable(row, values);
		}

		int sigval1 = row;
		const QSqlRecord& values_ret = values;
		// Cast returned reference into pointer
		QSqlRecord* sigval2 = const_cast<QSqlRecord*>(&values_ret);
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_updateRowInTable(this, handle__updateRowInTable, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_updateRowInTable(void* self, int row, QSqlRecord* values);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRowIntoTable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRowIntoTable(const QSqlRecord& values) override {
		if (handle__insertRowIntoTable == 0) {
			return QSqlTableModel::insertRowIntoTable(values);
		}

		const QSqlRecord& values_ret = values;
		// Cast returned reference into pointer
		QSqlRecord* sigval1 = const_cast<QSqlRecord*>(&values_ret);
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_insertRowIntoTable(this, handle__insertRowIntoTable, sigval1);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_insertRowIntoTable(void* self, QSqlRecord* values);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__deleteRowFromTable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool deleteRowFromTable(int row) override {
		if (handle__deleteRowFromTable == 0) {
			return QSqlTableModel::deleteRowFromTable(row);
		}

		int sigval1 = row;
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_deleteRowFromTable(this, handle__deleteRowFromTable, sigval1);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_deleteRowFromTable(void* self, int row);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__orderByClause = 0;

	// Subclass to allow providing a Go implementation
	virtual QString orderByClause() const override {
		if (handle__orderByClause == 0) {
			return QSqlTableModel::orderByClause();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QSqlTableModel_orderByClause(this, handle__orderByClause);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QSqlTableModel_virtualbase_orderByClause(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectStatement = 0;

	// Subclass to allow providing a Go implementation
	virtual QString selectStatement() const override {
		if (handle__selectStatement == 0) {
			return QSqlTableModel::selectStatement();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QSqlTableModel_selectStatement(this, handle__selectStatement);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QSqlTableModel_virtualbase_selectStatement(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexInQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexInQuery(const QModelIndex& item) const override {
		if (handle__indexInQuery == 0) {
			return QSqlTableModel::indexInQuery(item);
		}

		const QModelIndex& item_ret = item;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&item_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QSqlTableModel_indexInQuery(this, handle__indexInQuery, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QSqlTableModel_virtualbase_indexInQuery(const void* self, QModelIndex* item);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return QSqlTableModel::columnCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QSqlTableModel_columnCount(this, handle__columnCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSqlTableModel_virtualbase_columnCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QSqlTableModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QSqlTableModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QSqlTableModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QSqlTableModel_fetchMore(this, handle__fetchMore, sigval1);

	}

	friend void QSqlTableModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QSqlTableModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_canFetchMore(this, handle__canFetchMore, sigval1);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QSqlTableModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QSqlTableModel_roleNames(this, handle__roleNames);
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

	friend struct miqt_map /* of int to struct miqt_string */  QSqlTableModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__queryChange = 0;

	// Subclass to allow providing a Go implementation
	virtual void queryChange() override {
		if (handle__queryChange == 0) {
			QSqlTableModel::queryChange();
			return;
		}

		miqt_exec_callback_QSqlTableModel_queryChange(this, handle__queryChange);

	}

	friend void QSqlTableModel_virtualbase_queryChange(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QSqlTableModel::index(row, column, parent);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QSqlTableModel_index(this, handle__index, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QSqlTableModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QSqlTableModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QSqlTableModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QSqlTableModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QSqlTableModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QSqlTableModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QSqlTableModel_itemData(this, handle__itemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QSqlTableModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
			return QSqlTableModel::setItemData(index, roles);
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
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_setItemData(this, handle__setItemData, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QSqlTableModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QSqlTableModel_mimeTypes(this, handle__mimeTypes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QSqlTableModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QSqlTableModel::mimeData(indexes);
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
		QMimeData* callback_return_value = miqt_exec_callback_QSqlTableModel_mimeData(this, handle__mimeData, sigval1);
		return callback_return_value;
	}

	friend QMimeData* QSqlTableModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QSqlTableModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QSqlTableModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QSqlTableModel_supportedDropActions(this, handle__supportedDropActions);
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QSqlTableModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QSqlTableModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QSqlTableModel_supportedDragActions(this, handle__supportedDragActions);
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QSqlTableModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QSqlTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QSqlTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QSqlTableModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QSqlTableModel_buddy(this, handle__buddy, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QSqlTableModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QSqlTableModel::match(start, role, value, hits, flags);
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
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QSqlTableModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QSqlTableModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QSqlTableModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QSqlTableModel_span(this, handle__span, sigval1);
		return *callback_return_value;
	}

	friend QSize* QSqlTableModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSqlTableModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSqlTableModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSqlTableModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSqlTableModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSqlTableModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSqlTableModel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QSqlTableModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSqlTableModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSqlTableModel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QSqlTableModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSqlTableModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSqlTableModel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QSqlTableModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSqlTableModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSqlTableModel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QSqlTableModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSqlTableModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSqlTableModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QSqlTableModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QSqlTableModel_protectedbase_setPrimaryKey(bool* _dynamic_cast_ok, void* self, QSqlIndex* key);
	friend void QSqlTableModel_protectedbase_setQuery(bool* _dynamic_cast_ok, void* self, QSqlQuery* query);
	friend QSqlRecord* QSqlTableModel_protectedbase_primaryValues(bool* _dynamic_cast_ok, const void* self, int row);
	friend void QSqlTableModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSqlTableModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QSqlTableModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSqlTableModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QSqlTableModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSqlTableModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QSqlTableModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSqlTableModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QSqlTableModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QSqlTableModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QSqlTableModel_protectedbase_setLastError(bool* _dynamic_cast_ok, void* self, QSqlError* error);
	friend void QSqlTableModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QSqlTableModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QSqlTableModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QSqlTableModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend bool QSqlTableModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QSqlTableModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QSqlTableModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QSqlTableModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QSqlTableModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QSqlTableModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QSqlTableModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QSqlTableModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSqlTableModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSqlTableModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSqlTableModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSqlTableModel* QSqlTableModel_new() {
	return new (std::nothrow) MiqtVirtualQSqlTableModel();
}

QSqlTableModel* QSqlTableModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQSqlTableModel(parent);
}

QSqlTableModel* QSqlTableModel_new3(QObject* parent, QSqlDatabase* db) {
	return new (std::nothrow) MiqtVirtualQSqlTableModel(parent, *db);
}

void QSqlTableModel_virtbase(QSqlTableModel* src, QSqlQueryModel** outptr_QSqlQueryModel) {
	*outptr_QSqlQueryModel = static_cast<QSqlQueryModel*>(src);
}

QMetaObject* QSqlTableModel_metaObject(const QSqlTableModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSqlTableModel_metacast(QSqlTableModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSqlTableModel_tr(const char* s) {
	QString _ret = QSqlTableModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlTableModel_trUtf8(const char* s) {
	QString _ret = QSqlTableModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSqlTableModel_setTable(QSqlTableModel* self, struct miqt_string tableName) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	self->setTable(tableName_QString);
}

struct miqt_string QSqlTableModel_tableName(const QSqlTableModel* self) {
	QString _ret = self->tableName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSqlTableModel_flags(const QSqlTableModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

QSqlRecord* QSqlTableModel_record(const QSqlTableModel* self) {
	return new QSqlRecord(self->record());
}

QSqlRecord* QSqlTableModel_recordWithRow(const QSqlTableModel* self, int row) {
	return new QSqlRecord(self->record(static_cast<int>(row)));
}

QVariant* QSqlTableModel_data(const QSqlTableModel* self, QModelIndex* idx, int role) {
	return new QVariant(self->data(*idx, static_cast<int>(role)));
}

bool QSqlTableModel_setData(QSqlTableModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QSqlTableModel_headerData(const QSqlTableModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QSqlTableModel_isDirty(const QSqlTableModel* self) {
	return self->isDirty();
}

bool QSqlTableModel_isDirtyWithIndex(const QSqlTableModel* self, QModelIndex* index) {
	return self->isDirty(*index);
}

void QSqlTableModel_clear(QSqlTableModel* self) {
	self->clear();
}

void QSqlTableModel_setEditStrategy(QSqlTableModel* self, int strategy) {
	self->setEditStrategy(static_cast<QSqlTableModel::EditStrategy>(strategy));
}

int QSqlTableModel_editStrategy(const QSqlTableModel* self) {
	QSqlTableModel::EditStrategy _ret = self->editStrategy();
	return static_cast<int>(_ret);
}

QSqlIndex* QSqlTableModel_primaryKey(const QSqlTableModel* self) {
	return new QSqlIndex(self->primaryKey());
}

QSqlDatabase* QSqlTableModel_database(const QSqlTableModel* self) {
	return new QSqlDatabase(self->database());
}

int QSqlTableModel_fieldIndex(const QSqlTableModel* self, struct miqt_string fieldName) {
	QString fieldName_QString = QString::fromUtf8(fieldName.data, fieldName.len);
	return self->fieldIndex(fieldName_QString);
}

void QSqlTableModel_sort(QSqlTableModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QSqlTableModel_setSort(QSqlTableModel* self, int column, int order) {
	self->setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_string QSqlTableModel_filter(const QSqlTableModel* self) {
	QString _ret = self->filter();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSqlTableModel_setFilter(QSqlTableModel* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	self->setFilter(filter_QString);
}

int QSqlTableModel_rowCount(const QSqlTableModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

bool QSqlTableModel_removeColumns(QSqlTableModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSqlTableModel_removeRows(QSqlTableModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSqlTableModel_insertRows(QSqlTableModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSqlTableModel_insertRecord(QSqlTableModel* self, int row, QSqlRecord* record) {
	return self->insertRecord(static_cast<int>(row), *record);
}

bool QSqlTableModel_setRecord(QSqlTableModel* self, int row, QSqlRecord* record) {
	return self->setRecord(static_cast<int>(row), *record);
}

void QSqlTableModel_revertRow(QSqlTableModel* self, int row) {
	self->revertRow(static_cast<int>(row));
}

bool QSqlTableModel_select(QSqlTableModel* self) {
	return self->select();
}

bool QSqlTableModel_selectRow(QSqlTableModel* self, int row) {
	return self->selectRow(static_cast<int>(row));
}

bool QSqlTableModel_submit(QSqlTableModel* self) {
	return self->submit();
}

void QSqlTableModel_revert(QSqlTableModel* self) {
	self->revert();
}

bool QSqlTableModel_submitAll(QSqlTableModel* self) {
	return self->submitAll();
}

void QSqlTableModel_revertAll(QSqlTableModel* self) {
	self->revertAll();
}

void QSqlTableModel_primeInsert(QSqlTableModel* self, int row, QSqlRecord* record) {
	self->primeInsert(static_cast<int>(row), *record);
}

void QSqlTableModel_connect_primeInsert(QSqlTableModel* self, intptr_t slot) {
	QSqlTableModel::connect(self, static_cast<void (QSqlTableModel::*)(int, QSqlRecord&)>(&QSqlTableModel::primeInsert), self, [=](int row, QSqlRecord& record) {
		int sigval1 = row;
		QSqlRecord& record_ret = record;
		// Cast returned reference into pointer
		QSqlRecord* sigval2 = &record_ret;
		miqt_exec_callback_QSqlTableModel_primeInsert(slot, sigval1, sigval2);
	});
}

void QSqlTableModel_beforeInsert(QSqlTableModel* self, QSqlRecord* record) {
	self->beforeInsert(*record);
}

void QSqlTableModel_connect_beforeInsert(QSqlTableModel* self, intptr_t slot) {
	QSqlTableModel::connect(self, static_cast<void (QSqlTableModel::*)(QSqlRecord&)>(&QSqlTableModel::beforeInsert), self, [=](QSqlRecord& record) {
		QSqlRecord& record_ret = record;
		// Cast returned reference into pointer
		QSqlRecord* sigval1 = &record_ret;
		miqt_exec_callback_QSqlTableModel_beforeInsert(slot, sigval1);
	});
}

void QSqlTableModel_beforeUpdate(QSqlTableModel* self, int row, QSqlRecord* record) {
	self->beforeUpdate(static_cast<int>(row), *record);
}

void QSqlTableModel_connect_beforeUpdate(QSqlTableModel* self, intptr_t slot) {
	QSqlTableModel::connect(self, static_cast<void (QSqlTableModel::*)(int, QSqlRecord&)>(&QSqlTableModel::beforeUpdate), self, [=](int row, QSqlRecord& record) {
		int sigval1 = row;
		QSqlRecord& record_ret = record;
		// Cast returned reference into pointer
		QSqlRecord* sigval2 = &record_ret;
		miqt_exec_callback_QSqlTableModel_beforeUpdate(slot, sigval1, sigval2);
	});
}

void QSqlTableModel_beforeDelete(QSqlTableModel* self, int row) {
	self->beforeDelete(static_cast<int>(row));
}

void QSqlTableModel_connect_beforeDelete(QSqlTableModel* self, intptr_t slot) {
	QSqlTableModel::connect(self, static_cast<void (QSqlTableModel::*)(int)>(&QSqlTableModel::beforeDelete), self, [=](int row) {
		int sigval1 = row;
		miqt_exec_callback_QSqlTableModel_beforeDelete(slot, sigval1);
	});
}

struct miqt_string QSqlTableModel_tr2(const char* s, const char* c) {
	QString _ret = QSqlTableModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlTableModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QSqlTableModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlTableModel_trUtf82(const char* s, const char* c) {
	QString _ret = QSqlTableModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlTableModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSqlTableModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlTableModel_override_virtual_setTable(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setTable = slot;
	return true;
}

void QSqlTableModel_virtualbase_setTable(void* self, struct miqt_string tableName) {
	QString tableName_QString = QString::fromUtf8(tableName.data, tableName.len);
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::setTable(tableName_QString);
}

bool QSqlTableModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = slot;
	return true;
}

int QSqlTableModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QSqlTableModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = slot;
	return true;
}

QVariant* QSqlTableModel_virtualbase_data(const void* self, QModelIndex* idx, int role) {
	return new QVariant(static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::data(*idx, static_cast<int>(role)));
}

bool QSqlTableModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = slot;
	return true;
}

bool QSqlTableModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::setData(*index, *value, static_cast<int>(role));
}

bool QSqlTableModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QSqlTableModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QSqlTableModel_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clear = slot;
	return true;
}

void QSqlTableModel_virtualbase_clear(void* self) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::clear();
}

bool QSqlTableModel_override_virtual_setEditStrategy(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditStrategy = slot;
	return true;
}

void QSqlTableModel_virtualbase_setEditStrategy(void* self, int strategy) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::setEditStrategy(static_cast<MiqtVirtualQSqlTableModel::EditStrategy>(strategy));
}

bool QSqlTableModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = slot;
	return true;
}

void QSqlTableModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QSqlTableModel_override_virtual_setSort(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSort = slot;
	return true;
}

void QSqlTableModel_virtualbase_setSort(void* self, int column, int order) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::setSort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QSqlTableModel_override_virtual_setFilter(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFilter = slot;
	return true;
}

void QSqlTableModel_virtualbase_setFilter(void* self, struct miqt_string filter) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::setFilter(filter_QString);
}

bool QSqlTableModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = slot;
	return true;
}

int QSqlTableModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::rowCount(*parent);
}

bool QSqlTableModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = slot;
	return true;
}

bool QSqlTableModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSqlTableModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = slot;
	return true;
}

bool QSqlTableModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSqlTableModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = slot;
	return true;
}

bool QSqlTableModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSqlTableModel_override_virtual_revertRow(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revertRow = slot;
	return true;
}

void QSqlTableModel_virtualbase_revertRow(void* self, int row) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::revertRow(static_cast<int>(row));
}

bool QSqlTableModel_override_virtual_select(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__select = slot;
	return true;
}

bool QSqlTableModel_virtualbase_select(void* self) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::select();
}

bool QSqlTableModel_override_virtual_selectRow(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectRow = slot;
	return true;
}

bool QSqlTableModel_virtualbase_selectRow(void* self, int row) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::selectRow(static_cast<int>(row));
}

bool QSqlTableModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = slot;
	return true;
}

bool QSqlTableModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::submit();
}

bool QSqlTableModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = slot;
	return true;
}

void QSqlTableModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::revert();
}

bool QSqlTableModel_override_virtual_updateRowInTable(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateRowInTable = slot;
	return true;
}

bool QSqlTableModel_virtualbase_updateRowInTable(void* self, int row, QSqlRecord* values) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::updateRowInTable(static_cast<int>(row), *values);
}

bool QSqlTableModel_override_virtual_insertRowIntoTable(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRowIntoTable = slot;
	return true;
}

bool QSqlTableModel_virtualbase_insertRowIntoTable(void* self, QSqlRecord* values) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::insertRowIntoTable(*values);
}

bool QSqlTableModel_override_virtual_deleteRowFromTable(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__deleteRowFromTable = slot;
	return true;
}

bool QSqlTableModel_virtualbase_deleteRowFromTable(void* self, int row) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::deleteRowFromTable(static_cast<int>(row));
}

bool QSqlTableModel_override_virtual_orderByClause(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__orderByClause = slot;
	return true;
}

struct miqt_string QSqlTableModel_virtualbase_orderByClause(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::orderByClause();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlTableModel_override_virtual_selectStatement(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectStatement = slot;
	return true;
}

struct miqt_string QSqlTableModel_virtualbase_selectStatement(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::selectStatement();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlTableModel_override_virtual_indexInQuery(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexInQuery = slot;
	return true;
}

QModelIndex* QSqlTableModel_virtualbase_indexInQuery(const void* self, QModelIndex* item) {
	return new QModelIndex(static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::indexInQuery(*item));
}

bool QSqlTableModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = slot;
	return true;
}

int QSqlTableModel_virtualbase_columnCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::columnCount(*parent);
}

bool QSqlTableModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QSqlTableModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QSqlTableModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = slot;
	return true;
}

bool QSqlTableModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSqlTableModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = slot;
	return true;
}

void QSqlTableModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::fetchMore(*parent);
}

bool QSqlTableModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QSqlTableModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::canFetchMore(*parent);
}

bool QSqlTableModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QSqlTableModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::roleNames();
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

bool QSqlTableModel_override_virtual_queryChange(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__queryChange = slot;
	return true;
}

void QSqlTableModel_virtualbase_queryChange(void* self) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::queryChange();
}

bool QSqlTableModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QSqlTableModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QSqlTableModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QSqlTableModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QSqlTableModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QSqlTableModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QSqlTableModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QSqlTableModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::itemData(*index);
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

bool QSqlTableModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = slot;
	return true;
}

bool QSqlTableModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::setItemData(*index, roles_QMap);
}

bool QSqlTableModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QSqlTableModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::mimeTypes();
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

bool QSqlTableModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QSqlTableModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::mimeData(indexes_QList);
}

bool QSqlTableModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QSqlTableModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QSqlTableModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QSqlTableModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QSqlTableModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QSqlTableModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QSqlTableModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = slot;
	return true;
}

bool QSqlTableModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QSqlTableModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = slot;
	return true;
}

bool QSqlTableModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QSqlTableModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QSqlTableModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::buddy(*index));
}

bool QSqlTableModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QSqlTableModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

bool QSqlTableModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = slot;
	return true;
}

QSize* QSqlTableModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::span(*index));
}

bool QSqlTableModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QSqlTableModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::event(event);
}

bool QSqlTableModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSqlTableModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::eventFilter(watched, event);
}

bool QSqlTableModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QSqlTableModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::timerEvent(event);
}

bool QSqlTableModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QSqlTableModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::childEvent(event);
}

bool QSqlTableModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QSqlTableModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::customEvent(event);
}

bool QSqlTableModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QSqlTableModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::connectNotify(*signal);
}

bool QSqlTableModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSqlTableModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSqlTableModel*>(self)->QSqlTableModel::disconnectNotify(*signal);
}

void QSqlTableModel_protectedbase_setPrimaryKey(bool* _dynamic_cast_ok, void* self, QSqlIndex* key) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setPrimaryKey(*key);
}

void QSqlTableModel_protectedbase_setQuery(bool* _dynamic_cast_ok, void* self, QSqlQuery* query) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setQuery(*query);
}

QSqlRecord* QSqlTableModel_protectedbase_primaryValues(bool* _dynamic_cast_ok, const void* self, int row) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QSqlRecord(self_cast->primaryValues(static_cast<int>(row)));
}

void QSqlTableModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QSqlTableModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QSqlTableModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QSqlTableModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

void QSqlTableModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QSqlTableModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QSqlTableModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QSqlTableModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

void QSqlTableModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QSqlTableModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QSqlTableModel_protectedbase_setLastError(bool* _dynamic_cast_ok, void* self, QSqlError* error) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLastError(*error);
}

void QSqlTableModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resetInternalData();
}

QModelIndex* QSqlTableModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));
}

void QSqlTableModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
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

bool QSqlTableModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

bool QSqlTableModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QSqlTableModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

bool QSqlTableModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QSqlTableModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QSqlTableModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QSqlTableModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QSqlTableModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
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

QObject* QSqlTableModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSqlTableModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSqlTableModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSqlTableModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSqlTableModel* self_cast = dynamic_cast<MiqtVirtualQSqlTableModel*>( (QSqlTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSqlTableModel_delete(QSqlTableModel* self) {
	delete self;
}

