#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QItemSelection>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QRegExp>
#include <QRegularExpression>
#include <QSize>
#include <QSortFilterProxyModel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qsortfilterproxymodel.h>
#include "gen_qsortfilterproxymodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSortFilterProxyModel_dynamicSortFilterChanged(intptr_t, bool);
void miqt_exec_callback_QSortFilterProxyModel_filterCaseSensitivityChanged(intptr_t, int);
void miqt_exec_callback_QSortFilterProxyModel_sortCaseSensitivityChanged(intptr_t, int);
void miqt_exec_callback_QSortFilterProxyModel_sortLocaleAwareChanged(intptr_t, bool);
void miqt_exec_callback_QSortFilterProxyModel_sortRoleChanged(intptr_t, int);
void miqt_exec_callback_QSortFilterProxyModel_filterRoleChanged(intptr_t, int);
void miqt_exec_callback_QSortFilterProxyModel_recursiveFilteringEnabledChanged(intptr_t, bool);
void miqt_exec_callback_QSortFilterProxyModel_setSourceModel(QSortFilterProxyModel*, intptr_t, QAbstractItemModel*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_mapToSource(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_mapFromSource(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
QItemSelection* miqt_exec_callback_QSortFilterProxyModel_mapSelectionToSource(const QSortFilterProxyModel*, intptr_t, QItemSelection*);
QItemSelection* miqt_exec_callback_QSortFilterProxyModel_mapSelectionFromSource(const QSortFilterProxyModel*, intptr_t, QItemSelection*);
bool miqt_exec_callback_QSortFilterProxyModel_filterAcceptsRow(const QSortFilterProxyModel*, intptr_t, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_filterAcceptsColumn(const QSortFilterProxyModel*, intptr_t, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_lessThan(const QSortFilterProxyModel*, intptr_t, QModelIndex*, QModelIndex*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_index(const QSortFilterProxyModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_parent(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_sibling(const QSortFilterProxyModel*, intptr_t, int, int, QModelIndex*);
int miqt_exec_callback_QSortFilterProxyModel_rowCount(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QSortFilterProxyModel_columnCount(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_hasChildren(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QSortFilterProxyModel_data(const QSortFilterProxyModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QSortFilterProxyModel_setData(QSortFilterProxyModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QSortFilterProxyModel_headerData(const QSortFilterProxyModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QSortFilterProxyModel_setHeaderData(QSortFilterProxyModel*, intptr_t, int, int, QVariant*, int);
QMimeData* miqt_exec_callback_QSortFilterProxyModel_mimeData(const QSortFilterProxyModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QSortFilterProxyModel_dropMimeData(QSortFilterProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_insertRows(QSortFilterProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_insertColumns(QSortFilterProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_removeRows(QSortFilterProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_removeColumns(QSortFilterProxyModel*, intptr_t, int, int, QModelIndex*);
void miqt_exec_callback_QSortFilterProxyModel_fetchMore(QSortFilterProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_canFetchMore(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QSortFilterProxyModel_flags(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QSortFilterProxyModel_buddy(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QSortFilterProxyModel_match(const QSortFilterProxyModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QSortFilterProxyModel_span(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QSortFilterProxyModel_sort(QSortFilterProxyModel*, intptr_t, int, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QSortFilterProxyModel_mimeTypes(const QSortFilterProxyModel*, intptr_t);
int miqt_exec_callback_QSortFilterProxyModel_supportedDropActions(const QSortFilterProxyModel*, intptr_t);
bool miqt_exec_callback_QSortFilterProxyModel_submit(QSortFilterProxyModel*, intptr_t);
void miqt_exec_callback_QSortFilterProxyModel_revert(QSortFilterProxyModel*, intptr_t);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QSortFilterProxyModel_itemData(const QSortFilterProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QSortFilterProxyModel_setItemData(QSortFilterProxyModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QSortFilterProxyModel_canDropMimeData(const QSortFilterProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QSortFilterProxyModel_supportedDragActions(const QSortFilterProxyModel*, intptr_t);
bool miqt_exec_callback_QSortFilterProxyModel_moveRows(QSortFilterProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QSortFilterProxyModel_moveColumns(QSortFilterProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QSortFilterProxyModel_roleNames(const QSortFilterProxyModel*, intptr_t);
bool miqt_exec_callback_QSortFilterProxyModel_event(QSortFilterProxyModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QSortFilterProxyModel_eventFilter(QSortFilterProxyModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSortFilterProxyModel_timerEvent(QSortFilterProxyModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSortFilterProxyModel_childEvent(QSortFilterProxyModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSortFilterProxyModel_customEvent(QSortFilterProxyModel*, intptr_t, QEvent*);
void miqt_exec_callback_QSortFilterProxyModel_connectNotify(QSortFilterProxyModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSortFilterProxyModel_disconnectNotify(QSortFilterProxyModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSortFilterProxyModel final : public QSortFilterProxyModel {
public:

	MiqtVirtualQSortFilterProxyModel(): QSortFilterProxyModel() {};
	MiqtVirtualQSortFilterProxyModel(QObject* parent): QSortFilterProxyModel(parent) {};

	virtual ~MiqtVirtualQSortFilterProxyModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSourceModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
		if (handle__setSourceModel == 0) {
			QSortFilterProxyModel::setSourceModel(sourceModel);
			return;
		}
		
		QAbstractItemModel* sigval1 = sourceModel;

		miqt_exec_callback_QSortFilterProxyModel_setSourceModel(this, handle__setSourceModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSourceModel(QAbstractItemModel* sourceModel) {

		QSortFilterProxyModel::setSourceModel(sourceModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (handle__mapToSource == 0) {
			return QSortFilterProxyModel::mapToSource(proxyIndex);
		}
		
		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_mapToSource(this, handle__mapToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_mapToSource(QModelIndex* proxyIndex) const {

		return new QModelIndex(QSortFilterProxyModel::mapToSource(*proxyIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (handle__mapFromSource == 0) {
			return QSortFilterProxyModel::mapFromSource(sourceIndex);
		}
		
		const QModelIndex& sourceIndex_ret = sourceIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_mapFromSource(this, handle__mapFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_mapFromSource(QModelIndex* sourceIndex) const {

		return new QModelIndex(QSortFilterProxyModel::mapFromSource(*sourceIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapSelectionToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionToSource(const QItemSelection& proxySelection) const override {
		if (handle__mapSelectionToSource == 0) {
			return QSortFilterProxyModel::mapSelectionToSource(proxySelection);
		}
		
		const QItemSelection& proxySelection_ret = proxySelection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&proxySelection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_mapSelectionToSource(this, handle__mapSelectionToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_mapSelectionToSource(QItemSelection* proxySelection) const {

		return new QItemSelection(QSortFilterProxyModel::mapSelectionToSource(*proxySelection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapSelectionFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& sourceSelection) const override {
		if (handle__mapSelectionFromSource == 0) {
			return QSortFilterProxyModel::mapSelectionFromSource(sourceSelection);
		}
		
		const QItemSelection& sourceSelection_ret = sourceSelection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&sourceSelection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_mapSelectionFromSource(this, handle__mapSelectionFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_mapSelectionFromSource(QItemSelection* sourceSelection) const {

		return new QItemSelection(QSortFilterProxyModel::mapSelectionFromSource(*sourceSelection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__filterAcceptsRow = 0;

	// Subclass to allow providing a Go implementation
	virtual bool filterAcceptsRow(int source_row, const QModelIndex& source_parent) const override {
		if (handle__filterAcceptsRow == 0) {
			return QSortFilterProxyModel::filterAcceptsRow(source_row, source_parent);
		}
		
		int sigval1 = source_row;
		const QModelIndex& source_parent_ret = source_parent;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&source_parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_filterAcceptsRow(this, handle__filterAcceptsRow, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_filterAcceptsRow(int source_row, QModelIndex* source_parent) const {

		return QSortFilterProxyModel::filterAcceptsRow(static_cast<int>(source_row), *source_parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__filterAcceptsColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual bool filterAcceptsColumn(int source_column, const QModelIndex& source_parent) const override {
		if (handle__filterAcceptsColumn == 0) {
			return QSortFilterProxyModel::filterAcceptsColumn(source_column, source_parent);
		}
		
		int sigval1 = source_column;
		const QModelIndex& source_parent_ret = source_parent;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&source_parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_filterAcceptsColumn(this, handle__filterAcceptsColumn, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_filterAcceptsColumn(int source_column, QModelIndex* source_parent) const {

		return QSortFilterProxyModel::filterAcceptsColumn(static_cast<int>(source_column), *source_parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lessThan = 0;

	// Subclass to allow providing a Go implementation
	virtual bool lessThan(const QModelIndex& source_left, const QModelIndex& source_right) const override {
		if (handle__lessThan == 0) {
			return QSortFilterProxyModel::lessThan(source_left, source_right);
		}
		
		const QModelIndex& source_left_ret = source_left;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&source_left_ret);
		const QModelIndex& source_right_ret = source_right;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&source_right_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_lessThan(this, handle__lessThan, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_lessThan(QModelIndex* source_left, QModelIndex* source_right) const {

		return QSortFilterProxyModel::lessThan(*source_left, *source_right);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QSortFilterProxyModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_index(this, handle__index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QSortFilterProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__parent == 0) {
			return QSortFilterProxyModel::parent(child);
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_parent(this, handle__parent, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_parent(QModelIndex* child) const {

		return new QModelIndex(QSortFilterProxyModel::parent(*child));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QSortFilterProxyModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QSortFilterProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QSortFilterProxyModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QSortFilterProxyModel_rowCount(this, handle__rowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_rowCount(QModelIndex* parent) const {

		return QSortFilterProxyModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return QSortFilterProxyModel::columnCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QSortFilterProxyModel_columnCount(this, handle__columnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_columnCount(QModelIndex* parent) const {

		return QSortFilterProxyModel::columnCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__hasChildren == 0) {
			return QSortFilterProxyModel::hasChildren(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_hasChildren(this, handle__hasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasChildren(QModelIndex* parent) const {

		return QSortFilterProxyModel::hasChildren(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QSortFilterProxyModel::data(index, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_data(this, handle__data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_data(QModelIndex* index, int role) const {

		return new QVariant(QSortFilterProxyModel::data(*index, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QSortFilterProxyModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_setData(this, handle__setData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setData(QModelIndex* index, QVariant* value, int role) {

		return QSortFilterProxyModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QSortFilterProxyModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_headerData(int section, int orientation, int role) const {

		return new QVariant(QSortFilterProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QSortFilterProxyModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setHeaderData(int section, int orientation, QVariant* value, int role) {

		return QSortFilterProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QSortFilterProxyModel::mimeData(indexes);
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

		QMimeData* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_mimeData(this, handle__mimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_mimeData(struct miqt_array /* of QModelIndex* */  indexes) const {
		QModelIndexList indexes_QList;
		indexes_QList.reserve(indexes.len);
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
		for(size_t i = 0; i < indexes.len; ++i) {
			indexes_QList.push_back(*(indexes_arr[i]));
		}

		return QSortFilterProxyModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QSortFilterProxyModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QSortFilterProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QSortFilterProxyModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertRows(int row, int count, QModelIndex* parent) {

		return QSortFilterProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QSortFilterProxyModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertColumns(int column, int count, QModelIndex* parent) {

		return QSortFilterProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QSortFilterProxyModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeRows(int row, int count, QModelIndex* parent) {

		return QSortFilterProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QSortFilterProxyModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeColumns(int column, int count, QModelIndex* parent) {

		return QSortFilterProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QSortFilterProxyModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QSortFilterProxyModel_fetchMore(this, handle__fetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fetchMore(QModelIndex* parent) {

		QSortFilterProxyModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QSortFilterProxyModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_canFetchMore(this, handle__canFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canFetchMore(QModelIndex* parent) const {

		return QSortFilterProxyModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QSortFilterProxyModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QSortFilterProxyModel_flags(this, handle__flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QSortFilterProxyModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QSortFilterProxyModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_buddy(this, handle__buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_buddy(QModelIndex* index) const {

		return new QModelIndex(QSortFilterProxyModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QSortFilterProxyModel::match(start, role, value, hits, flags);
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QSortFilterProxyModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QModelIndex* */  virtualbase_match(QModelIndex* start, int role, QVariant* value, int hits, int flags) const {

		QModelIndexList _ret = QSortFilterProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QSortFilterProxyModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QSortFilterProxyModel_span(this, handle__span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_span(QModelIndex* index) const {

		return new QSize(QSortFilterProxyModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QSortFilterProxyModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QSortFilterProxyModel_sort(this, handle__sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sort(int column, int order) {

		QSortFilterProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QSortFilterProxyModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QSortFilterProxyModel_mimeTypes(this, handle__mimeTypes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of struct miqt_string */  virtualbase_mimeTypes() const {

		QStringList _ret = QSortFilterProxyModel::mimeTypes();
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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QSortFilterProxyModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QSortFilterProxyModel_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QSortFilterProxyModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QSortFilterProxyModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_submit(this, handle__submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_submit() {

		return QSortFilterProxyModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QSortFilterProxyModel::revert();
			return;
		}
		

		miqt_exec_callback_QSortFilterProxyModel_revert(this, handle__revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_revert() {

		QSortFilterProxyModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QSortFilterProxyModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QSortFilterProxyModel_itemData(this, handle__itemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}

		return callback_return_value_QMap;
	}

	// Wrapper to allow calling protected method
	struct miqt_map /* of int to QVariant* */  virtualbase_itemData(QModelIndex* index) const {

		QMap<int, QVariant> _ret = QSortFilterProxyModel::itemData(*index);
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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
			return QSortFilterProxyModel::setItemData(index, roles);
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

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_setItemData(this, handle__setItemData, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setItemData(QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
		QMap<int, QVariant> roles_QMap;
		int* roles_karr = static_cast<int*>(roles.keys);
		QVariant** roles_varr = static_cast<QVariant**>(roles.values);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
		}

		return QSortFilterProxyModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QSortFilterProxyModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QSortFilterProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QSortFilterProxyModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QSortFilterProxyModel_supportedDragActions(this, handle__supportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDragActions() const {

		Qt::DropActions _ret = QSortFilterProxyModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QSortFilterProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QSortFilterProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QSortFilterProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QSortFilterProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QSortFilterProxyModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QSortFilterProxyModel_roleNames(this, handle__roleNames);
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

	// Wrapper to allow calling protected method
	struct miqt_map /* of int to struct miqt_string */  virtualbase_roleNames() const {

		QHash<int, QByteArray> _ret = QSortFilterProxyModel::roleNames();
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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSortFilterProxyModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSortFilterProxyModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSortFilterProxyModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSortFilterProxyModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSortFilterProxyModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSortFilterProxyModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSortFilterProxyModel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSortFilterProxyModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSortFilterProxyModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSortFilterProxyModel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSortFilterProxyModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSortFilterProxyModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSortFilterProxyModel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSortFilterProxyModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSortFilterProxyModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSortFilterProxyModel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSortFilterProxyModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSortFilterProxyModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSortFilterProxyModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSortFilterProxyModel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QSortFilterProxyModel_protectedbase_filterChanged(bool* _dynamic_cast_ok, void* self);
	friend void QSortFilterProxyModel_protectedbase_invalidateFilter(bool* _dynamic_cast_ok, void* self);
	friend void QSortFilterProxyModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QSortFilterProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QSortFilterProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QSortFilterProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QSortFilterProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSortFilterProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QSortFilterProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSortFilterProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QSortFilterProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QSortFilterProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QSortFilterProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSortFilterProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QSortFilterProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QSortFilterProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QSortFilterProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QSortFilterProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QSortFilterProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QSortFilterProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QSortFilterProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QSortFilterProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QSortFilterProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSortFilterProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSortFilterProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSortFilterProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSortFilterProxyModel* QSortFilterProxyModel_new() {
	return new MiqtVirtualQSortFilterProxyModel();
}

QSortFilterProxyModel* QSortFilterProxyModel_new2(QObject* parent) {
	return new MiqtVirtualQSortFilterProxyModel(parent);
}

void QSortFilterProxyModel_virtbase(QSortFilterProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel) {
	*outptr_QAbstractProxyModel = static_cast<QAbstractProxyModel*>(src);
}

QMetaObject* QSortFilterProxyModel_metaObject(const QSortFilterProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSortFilterProxyModel_metacast(QSortFilterProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSortFilterProxyModel_tr(const char* s) {
	QString _ret = QSortFilterProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSortFilterProxyModel_trUtf8(const char* s) {
	QString _ret = QSortFilterProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSortFilterProxyModel_setSourceModel(QSortFilterProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QModelIndex* QSortFilterProxyModel_mapToSource(const QSortFilterProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QSortFilterProxyModel_mapFromSource(const QSortFilterProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QItemSelection* QSortFilterProxyModel_mapSelectionToSource(const QSortFilterProxyModel* self, QItemSelection* proxySelection) {
	return new QItemSelection(self->mapSelectionToSource(*proxySelection));
}

QItemSelection* QSortFilterProxyModel_mapSelectionFromSource(const QSortFilterProxyModel* self, QItemSelection* sourceSelection) {
	return new QItemSelection(self->mapSelectionFromSource(*sourceSelection));
}

QRegExp* QSortFilterProxyModel_filterRegExp(const QSortFilterProxyModel* self) {
	return new QRegExp(self->filterRegExp());
}

QRegularExpression* QSortFilterProxyModel_filterRegularExpression(const QSortFilterProxyModel* self) {
	return new QRegularExpression(self->filterRegularExpression());
}

int QSortFilterProxyModel_filterKeyColumn(const QSortFilterProxyModel* self) {
	return self->filterKeyColumn();
}

void QSortFilterProxyModel_setFilterKeyColumn(QSortFilterProxyModel* self, int column) {
	self->setFilterKeyColumn(static_cast<int>(column));
}

int QSortFilterProxyModel_filterCaseSensitivity(const QSortFilterProxyModel* self) {
	Qt::CaseSensitivity _ret = self->filterCaseSensitivity();
	return static_cast<int>(_ret);
}

void QSortFilterProxyModel_setFilterCaseSensitivity(QSortFilterProxyModel* self, int cs) {
	self->setFilterCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QSortFilterProxyModel_sortCaseSensitivity(const QSortFilterProxyModel* self) {
	Qt::CaseSensitivity _ret = self->sortCaseSensitivity();
	return static_cast<int>(_ret);
}

void QSortFilterProxyModel_setSortCaseSensitivity(QSortFilterProxyModel* self, int cs) {
	self->setSortCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

bool QSortFilterProxyModel_isSortLocaleAware(const QSortFilterProxyModel* self) {
	return self->isSortLocaleAware();
}

void QSortFilterProxyModel_setSortLocaleAware(QSortFilterProxyModel* self, bool on) {
	self->setSortLocaleAware(on);
}

int QSortFilterProxyModel_sortColumn(const QSortFilterProxyModel* self) {
	return self->sortColumn();
}

int QSortFilterProxyModel_sortOrder(const QSortFilterProxyModel* self) {
	Qt::SortOrder _ret = self->sortOrder();
	return static_cast<int>(_ret);
}

bool QSortFilterProxyModel_dynamicSortFilter(const QSortFilterProxyModel* self) {
	return self->dynamicSortFilter();
}

void QSortFilterProxyModel_setDynamicSortFilter(QSortFilterProxyModel* self, bool enable) {
	self->setDynamicSortFilter(enable);
}

int QSortFilterProxyModel_sortRole(const QSortFilterProxyModel* self) {
	return self->sortRole();
}

void QSortFilterProxyModel_setSortRole(QSortFilterProxyModel* self, int role) {
	self->setSortRole(static_cast<int>(role));
}

int QSortFilterProxyModel_filterRole(const QSortFilterProxyModel* self) {
	return self->filterRole();
}

void QSortFilterProxyModel_setFilterRole(QSortFilterProxyModel* self, int role) {
	self->setFilterRole(static_cast<int>(role));
}

bool QSortFilterProxyModel_isRecursiveFilteringEnabled(const QSortFilterProxyModel* self) {
	return self->isRecursiveFilteringEnabled();
}

void QSortFilterProxyModel_setRecursiveFilteringEnabled(QSortFilterProxyModel* self, bool recursive) {
	self->setRecursiveFilteringEnabled(recursive);
}

void QSortFilterProxyModel_setFilterRegExp(QSortFilterProxyModel* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setFilterRegExp(pattern_QString);
}

void QSortFilterProxyModel_setFilterRegExpWithRegExp(QSortFilterProxyModel* self, QRegExp* regExp) {
	self->setFilterRegExp(*regExp);
}

void QSortFilterProxyModel_setFilterRegularExpression(QSortFilterProxyModel* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setFilterRegularExpression(pattern_QString);
}

void QSortFilterProxyModel_setFilterRegularExpressionWithRegularExpression(QSortFilterProxyModel* self, QRegularExpression* regularExpression) {
	self->setFilterRegularExpression(*regularExpression);
}

void QSortFilterProxyModel_setFilterWildcard(QSortFilterProxyModel* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setFilterWildcard(pattern_QString);
}

void QSortFilterProxyModel_setFilterFixedString(QSortFilterProxyModel* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setFilterFixedString(pattern_QString);
}

void QSortFilterProxyModel_clear(QSortFilterProxyModel* self) {
	self->clear();
}

void QSortFilterProxyModel_invalidate(QSortFilterProxyModel* self) {
	self->invalidate();
}

QModelIndex* QSortFilterProxyModel_index(const QSortFilterProxyModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QSortFilterProxyModel_parent(const QSortFilterProxyModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QSortFilterProxyModel_sibling(const QSortFilterProxyModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

int QSortFilterProxyModel_rowCount(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QSortFilterProxyModel_columnCount(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QSortFilterProxyModel_hasChildren(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QSortFilterProxyModel_data(const QSortFilterProxyModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QSortFilterProxyModel_setData(QSortFilterProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QSortFilterProxyModel_headerData(const QSortFilterProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QSortFilterProxyModel_setHeaderData(QSortFilterProxyModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

QMimeData* QSortFilterProxyModel_mimeData(const QSortFilterProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QSortFilterProxyModel_dropMimeData(QSortFilterProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QSortFilterProxyModel_insertRows(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_insertColumns(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_removeRows(QSortFilterProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QSortFilterProxyModel_removeColumns(QSortFilterProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

void QSortFilterProxyModel_fetchMore(QSortFilterProxyModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QSortFilterProxyModel_canFetchMore(const QSortFilterProxyModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

int QSortFilterProxyModel_flags(const QSortFilterProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

QModelIndex* QSortFilterProxyModel_buddy(const QSortFilterProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_match(const QSortFilterProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

QSize* QSortFilterProxyModel_span(const QSortFilterProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

void QSortFilterProxyModel_sort(QSortFilterProxyModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_array /* of struct miqt_string */  QSortFilterProxyModel_mimeTypes(const QSortFilterProxyModel* self) {
	QStringList _ret = self->mimeTypes();
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

int QSortFilterProxyModel_supportedDropActions(const QSortFilterProxyModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

void QSortFilterProxyModel_dynamicSortFilterChanged(QSortFilterProxyModel* self, bool dynamicSortFilter) {
	self->dynamicSortFilterChanged(dynamicSortFilter);
}

void QSortFilterProxyModel_connect_dynamicSortFilterChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::dynamicSortFilterChanged), self, [=](bool dynamicSortFilter) {
		bool sigval1 = dynamicSortFilter;
		miqt_exec_callback_QSortFilterProxyModel_dynamicSortFilterChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_filterCaseSensitivityChanged(QSortFilterProxyModel* self, int filterCaseSensitivity) {
	self->filterCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(filterCaseSensitivity));
}

void QSortFilterProxyModel_connect_filterCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(Qt::CaseSensitivity)>(&QSortFilterProxyModel::filterCaseSensitivityChanged), self, [=](Qt::CaseSensitivity filterCaseSensitivity) {
		Qt::CaseSensitivity filterCaseSensitivity_ret = filterCaseSensitivity;
		int sigval1 = static_cast<int>(filterCaseSensitivity_ret);
		miqt_exec_callback_QSortFilterProxyModel_filterCaseSensitivityChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_sortCaseSensitivityChanged(QSortFilterProxyModel* self, int sortCaseSensitivity) {
	self->sortCaseSensitivityChanged(static_cast<Qt::CaseSensitivity>(sortCaseSensitivity));
}

void QSortFilterProxyModel_connect_sortCaseSensitivityChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(Qt::CaseSensitivity)>(&QSortFilterProxyModel::sortCaseSensitivityChanged), self, [=](Qt::CaseSensitivity sortCaseSensitivity) {
		Qt::CaseSensitivity sortCaseSensitivity_ret = sortCaseSensitivity;
		int sigval1 = static_cast<int>(sortCaseSensitivity_ret);
		miqt_exec_callback_QSortFilterProxyModel_sortCaseSensitivityChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_sortLocaleAwareChanged(QSortFilterProxyModel* self, bool sortLocaleAware) {
	self->sortLocaleAwareChanged(sortLocaleAware);
}

void QSortFilterProxyModel_connect_sortLocaleAwareChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::sortLocaleAwareChanged), self, [=](bool sortLocaleAware) {
		bool sigval1 = sortLocaleAware;
		miqt_exec_callback_QSortFilterProxyModel_sortLocaleAwareChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_sortRoleChanged(QSortFilterProxyModel* self, int sortRole) {
	self->sortRoleChanged(static_cast<int>(sortRole));
}

void QSortFilterProxyModel_connect_sortRoleChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(int)>(&QSortFilterProxyModel::sortRoleChanged), self, [=](int sortRole) {
		int sigval1 = sortRole;
		miqt_exec_callback_QSortFilterProxyModel_sortRoleChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_filterRoleChanged(QSortFilterProxyModel* self, int filterRole) {
	self->filterRoleChanged(static_cast<int>(filterRole));
}

void QSortFilterProxyModel_connect_filterRoleChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(int)>(&QSortFilterProxyModel::filterRoleChanged), self, [=](int filterRole) {
		int sigval1 = filterRole;
		miqt_exec_callback_QSortFilterProxyModel_filterRoleChanged(slot, sigval1);
	});
}

void QSortFilterProxyModel_recursiveFilteringEnabledChanged(QSortFilterProxyModel* self, bool recursiveFilteringEnabled) {
	self->recursiveFilteringEnabledChanged(recursiveFilteringEnabled);
}

void QSortFilterProxyModel_connect_recursiveFilteringEnabledChanged(QSortFilterProxyModel* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel::connect(self, static_cast<void (QSortFilterProxyModel::*)(bool)>(&QSortFilterProxyModel::recursiveFilteringEnabledChanged), self, [=](bool recursiveFilteringEnabled) {
		bool sigval1 = recursiveFilteringEnabled;
		miqt_exec_callback_QSortFilterProxyModel_recursiveFilteringEnabledChanged(slot, sigval1);
	});
}

struct miqt_string QSortFilterProxyModel_tr2(const char* s, const char* c) {
	QString _ret = QSortFilterProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSortFilterProxyModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QSortFilterProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSortFilterProxyModel_trUtf82(const char* s, const char* c) {
	QString _ret = QSortFilterProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSortFilterProxyModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSortFilterProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSortFilterProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSourceModel = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* sourceModel) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_setSourceModel(sourceModel);
}

bool QSortFilterProxyModel_override_virtual_mapToSource(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mapToSource = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_mapToSource(const void* self, QModelIndex* proxyIndex) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_mapToSource(proxyIndex);
}

bool QSortFilterProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mapFromSource = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_mapFromSource(const void* self, QModelIndex* sourceIndex) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_mapFromSource(sourceIndex);
}

bool QSortFilterProxyModel_override_virtual_mapSelectionToSource(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mapSelectionToSource = slot;
	return true;
}

QItemSelection* QSortFilterProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* proxySelection) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_mapSelectionToSource(proxySelection);
}

bool QSortFilterProxyModel_override_virtual_mapSelectionFromSource(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mapSelectionFromSource = slot;
	return true;
}

QItemSelection* QSortFilterProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* sourceSelection) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_mapSelectionFromSource(sourceSelection);
}

bool QSortFilterProxyModel_override_virtual_filterAcceptsRow(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__filterAcceptsRow = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_filterAcceptsRow(const void* self, int source_row, QModelIndex* source_parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_filterAcceptsRow(source_row, source_parent);
}

bool QSortFilterProxyModel_override_virtual_filterAcceptsColumn(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__filterAcceptsColumn = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_filterAcceptsColumn(const void* self, int source_column, QModelIndex* source_parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_filterAcceptsColumn(source_column, source_parent);
}

bool QSortFilterProxyModel_override_virtual_lessThan(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lessThan = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_lessThan(const void* self, QModelIndex* source_left, QModelIndex* source_right) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_lessThan(source_left, source_right);
}

bool QSortFilterProxyModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_index(row, column, parent);
}

bool QSortFilterProxyModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__parent = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_parent(const void* self, QModelIndex* child) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_parent(child);
}

bool QSortFilterProxyModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_sibling(row, column, idx);
}

bool QSortFilterProxyModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowCount = slot;
	return true;
}

int QSortFilterProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_rowCount(parent);
}

bool QSortFilterProxyModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__columnCount = slot;
	return true;
}

int QSortFilterProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_columnCount(parent);
}

bool QSortFilterProxyModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasChildren = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_hasChildren(parent);
}

bool QSortFilterProxyModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

QVariant* QSortFilterProxyModel_virtualbase_data(const void* self, QModelIndex* index, int role) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_data(index, role);
}

bool QSortFilterProxyModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_setData(index, value, role);
}

bool QSortFilterProxyModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QSortFilterProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_headerData(section, orientation, role);
}

bool QSortFilterProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_setHeaderData(section, orientation, value, role);
}

bool QSortFilterProxyModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QSortFilterProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_mimeData(indexes);
}

bool QSortFilterProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_dropMimeData(data, action, row, column, parent);
}

bool QSortFilterProxyModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertRows = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_insertRows(row, count, parent);
}

bool QSortFilterProxyModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertColumns = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_insertColumns(column, count, parent);
}

bool QSortFilterProxyModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeRows = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_removeRows(row, count, parent);
}

bool QSortFilterProxyModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeColumns = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_removeColumns(column, count, parent);
}

bool QSortFilterProxyModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fetchMore = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_fetchMore(parent);
}

bool QSortFilterProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_canFetchMore(parent);
}

bool QSortFilterProxyModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__flags = slot;
	return true;
}

int QSortFilterProxyModel_virtualbase_flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_flags(index);
}

bool QSortFilterProxyModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QSortFilterProxyModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_buddy(index);
}

bool QSortFilterProxyModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_match(start, role, value, hits, flags);
}

bool QSortFilterProxyModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__span = slot;
	return true;
}

QSize* QSortFilterProxyModel_virtualbase_span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_span(index);
}

bool QSortFilterProxyModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sort = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_sort(void* self, int column, int order) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_sort(column, order);
}

bool QSortFilterProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QSortFilterProxyModel_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_mimeTypes();
}

bool QSortFilterProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QSortFilterProxyModel_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_supportedDropActions();
}

bool QSortFilterProxyModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__submit = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_submit(void* self) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_submit();
}

bool QSortFilterProxyModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__revert = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_revert(void* self) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_revert();
}

bool QSortFilterProxyModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QSortFilterProxyModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_itemData(index);
}

bool QSortFilterProxyModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setItemData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_setItemData(index, roles);
}

bool QSortFilterProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_canDropMimeData(data, action, row, column, parent);
}

bool QSortFilterProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QSortFilterProxyModel_virtualbase_supportedDragActions(const void* self) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_supportedDragActions();
}

bool QSortFilterProxyModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveRows = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QSortFilterProxyModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveColumns = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QSortFilterProxyModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QSortFilterProxyModel_virtualbase_roleNames(const void* self) {
	return ( (const MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_roleNames();
}

bool QSortFilterProxyModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_event(event);
}

bool QSortFilterProxyModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSortFilterProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSortFilterProxyModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_timerEvent(event);
}

bool QSortFilterProxyModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_childEvent(event);
}

bool QSortFilterProxyModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_customEvent(event);
}

bool QSortFilterProxyModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_connectNotify(signal);
}

bool QSortFilterProxyModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSortFilterProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSortFilterProxyModel*)(self) )->virtualbase_disconnectNotify(signal);
}

void QSortFilterProxyModel_protectedbase_filterChanged(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->filterChanged();

}

void QSortFilterProxyModel_protectedbase_invalidateFilter(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->invalidateFilter();

}

void QSortFilterProxyModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->resetInternalData();

}

QModelIndex* QSortFilterProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));

}

void QSortFilterProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
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

bool QSortFilterProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);

}

void QSortFilterProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QSortFilterProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertRows();

}

void QSortFilterProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QSortFilterProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveRows();

}

bool QSortFilterProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));

}

void QSortFilterProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveRows();

}

void QSortFilterProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QSortFilterProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertColumns();

}

void QSortFilterProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QSortFilterProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveColumns();

}

bool QSortFilterProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));

}

void QSortFilterProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveColumns();

}

void QSortFilterProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginResetModel();

}

void QSortFilterProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endResetModel();

}

void QSortFilterProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->changePersistentIndex(*from, *to);

}

void QSortFilterProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QSortFilterProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
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

QObject* QSortFilterProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSortFilterProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSortFilterProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSortFilterProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSortFilterProxyModel* self_cast = dynamic_cast<MiqtVirtualQSortFilterProxyModel*>( (QSortFilterProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSortFilterProxyModel_delete(QSortFilterProxyModel* self) {
	delete self;
}

