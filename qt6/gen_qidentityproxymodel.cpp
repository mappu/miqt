#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QIdentityProxyModel>
#include <QItemSelection>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qidentityproxymodel.h>
#include "gen_qidentityproxymodel.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QIdentityProxyModel_columnCount(const QIdentityProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_index(const QIdentityProxyModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_mapFromSource(const QIdentityProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_mapToSource(const QIdentityProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_parent(const QIdentityProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QIdentityProxyModel_rowCount(const QIdentityProxyModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QIdentityProxyModel_headerData(const QIdentityProxyModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QIdentityProxyModel_dropMimeData(QIdentityProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_sibling(const QIdentityProxyModel*, intptr_t, int, int, QModelIndex*);
QItemSelection* miqt_exec_callback_QIdentityProxyModel_mapSelectionFromSource(const QIdentityProxyModel*, intptr_t, QItemSelection*);
QItemSelection* miqt_exec_callback_QIdentityProxyModel_mapSelectionToSource(const QIdentityProxyModel*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QIdentityProxyModel_match(const QIdentityProxyModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
void miqt_exec_callback_QIdentityProxyModel_setSourceModel(QIdentityProxyModel*, intptr_t, QAbstractItemModel*);
bool miqt_exec_callback_QIdentityProxyModel_insertColumns(QIdentityProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_insertRows(QIdentityProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_removeColumns(QIdentityProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_removeRows(QIdentityProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_moveRows(QIdentityProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QIdentityProxyModel_moveColumns(QIdentityProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QIdentityProxyModel_submit(QIdentityProxyModel*, intptr_t);
void miqt_exec_callback_QIdentityProxyModel_revert(QIdentityProxyModel*, intptr_t);
QVariant* miqt_exec_callback_QIdentityProxyModel_data(const QIdentityProxyModel*, intptr_t, QModelIndex*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QIdentityProxyModel_itemData(const QIdentityProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QIdentityProxyModel_flags(const QIdentityProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_setData(QIdentityProxyModel*, intptr_t, QModelIndex*, QVariant*, int);
bool miqt_exec_callback_QIdentityProxyModel_setItemData(QIdentityProxyModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QIdentityProxyModel_setHeaderData(QIdentityProxyModel*, intptr_t, int, int, QVariant*, int);
bool miqt_exec_callback_QIdentityProxyModel_clearItemData(QIdentityProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_buddy(const QIdentityProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_canFetchMore(const QIdentityProxyModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QIdentityProxyModel_fetchMore(QIdentityProxyModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QIdentityProxyModel_sort(QIdentityProxyModel*, intptr_t, int, int);
QSize* miqt_exec_callback_QIdentityProxyModel_span(const QIdentityProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_hasChildren(const QIdentityProxyModel*, intptr_t, QModelIndex*);
QMimeData* miqt_exec_callback_QIdentityProxyModel_mimeData(const QIdentityProxyModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QIdentityProxyModel_canDropMimeData(const QIdentityProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QIdentityProxyModel_mimeTypes(const QIdentityProxyModel*, intptr_t);
int miqt_exec_callback_QIdentityProxyModel_supportedDragActions(const QIdentityProxyModel*, intptr_t);
int miqt_exec_callback_QIdentityProxyModel_supportedDropActions(const QIdentityProxyModel*, intptr_t);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QIdentityProxyModel_roleNames(const QIdentityProxyModel*, intptr_t);
void miqt_exec_callback_QIdentityProxyModel_multiData(const QIdentityProxyModel*, intptr_t, QModelIndex*, QModelRoleDataSpan*);
void miqt_exec_callback_QIdentityProxyModel_resetInternalData(QIdentityProxyModel*, intptr_t);
bool miqt_exec_callback_QIdentityProxyModel_event(QIdentityProxyModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QIdentityProxyModel_eventFilter(QIdentityProxyModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QIdentityProxyModel_timerEvent(QIdentityProxyModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QIdentityProxyModel_childEvent(QIdentityProxyModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QIdentityProxyModel_customEvent(QIdentityProxyModel*, intptr_t, QEvent*);
void miqt_exec_callback_QIdentityProxyModel_connectNotify(QIdentityProxyModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QIdentityProxyModel_disconnectNotify(QIdentityProxyModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQIdentityProxyModel final : public QIdentityProxyModel {
public:

	MiqtVirtualQIdentityProxyModel(): QIdentityProxyModel() {};
	MiqtVirtualQIdentityProxyModel(QObject* parent): QIdentityProxyModel(parent) {};

	virtual ~MiqtVirtualQIdentityProxyModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return QIdentityProxyModel::columnCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QIdentityProxyModel_columnCount(this, handle__columnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_columnCount(QModelIndex* parent) const {

		return QIdentityProxyModel::columnCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QIdentityProxyModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_index(this, handle__index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QIdentityProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (handle__mapFromSource == 0) {
			return QIdentityProxyModel::mapFromSource(sourceIndex);
		}
		
		const QModelIndex& sourceIndex_ret = sourceIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_mapFromSource(this, handle__mapFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_mapFromSource(QModelIndex* sourceIndex) const {

		return new QModelIndex(QIdentityProxyModel::mapFromSource(*sourceIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (handle__mapToSource == 0) {
			return QIdentityProxyModel::mapToSource(proxyIndex);
		}
		
		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_mapToSource(this, handle__mapToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_mapToSource(QModelIndex* proxyIndex) const {

		return new QModelIndex(QIdentityProxyModel::mapToSource(*proxyIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__parent == 0) {
			return QIdentityProxyModel::parent(child);
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_parent(this, handle__parent, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_parent(QModelIndex* child) const {

		return new QModelIndex(QIdentityProxyModel::parent(*child));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QIdentityProxyModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QIdentityProxyModel_rowCount(this, handle__rowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_rowCount(QModelIndex* parent) const {

		return QIdentityProxyModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QIdentityProxyModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QIdentityProxyModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_headerData(int section, int orientation, int role) const {

		return new QVariant(QIdentityProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QIdentityProxyModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QIdentityProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QIdentityProxyModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QIdentityProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapSelectionFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
		if (handle__mapSelectionFromSource == 0) {
			return QIdentityProxyModel::mapSelectionFromSource(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QIdentityProxyModel_mapSelectionFromSource(this, handle__mapSelectionFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_mapSelectionFromSource(QItemSelection* selection) const {

		return new QItemSelection(QIdentityProxyModel::mapSelectionFromSource(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapSelectionToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
		if (handle__mapSelectionToSource == 0) {
			return QIdentityProxyModel::mapSelectionToSource(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QIdentityProxyModel_mapSelectionToSource(this, handle__mapSelectionToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_mapSelectionToSource(QItemSelection* selection) const {

		return new QItemSelection(QIdentityProxyModel::mapSelectionToSource(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QIdentityProxyModel::match(start, role, value, hits, flags);
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QIdentityProxyModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
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

		QModelIndexList _ret = QIdentityProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
	intptr_t handle__setSourceModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
		if (handle__setSourceModel == 0) {
			QIdentityProxyModel::setSourceModel(sourceModel);
			return;
		}
		
		QAbstractItemModel* sigval1 = sourceModel;

		miqt_exec_callback_QIdentityProxyModel_setSourceModel(this, handle__setSourceModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setSourceModel(QAbstractItemModel* sourceModel) {

		QIdentityProxyModel::setSourceModel(sourceModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QIdentityProxyModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertColumns(int column, int count, QModelIndex* parent) {

		return QIdentityProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QIdentityProxyModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertRows(int row, int count, QModelIndex* parent) {

		return QIdentityProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QIdentityProxyModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeColumns(int column, int count, QModelIndex* parent) {

		return QIdentityProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QIdentityProxyModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeRows(int row, int count, QModelIndex* parent) {

		return QIdentityProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QIdentityProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QIdentityProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QIdentityProxyModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_submit(this, handle__submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_submit() {

		return QIdentityProxyModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QIdentityProxyModel::revert();
			return;
		}
		

		miqt_exec_callback_QIdentityProxyModel_revert(this, handle__revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_revert() {

		QIdentityProxyModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
		if (handle__data == 0) {
			return QIdentityProxyModel::data(proxyIndex, role);
		}
		
		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QIdentityProxyModel_data(this, handle__data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_data(QModelIndex* proxyIndex, int role) const {

		return new QVariant(QIdentityProxyModel::data(*proxyIndex, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QIdentityProxyModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QIdentityProxyModel_itemData(this, handle__itemData, sigval1);
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

		QMap<int, QVariant> _ret = QIdentityProxyModel::itemData(*index);
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
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QIdentityProxyModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QIdentityProxyModel_flags(this, handle__flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QIdentityProxyModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QIdentityProxyModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_setData(this, handle__setData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setData(QModelIndex* index, QVariant* value, int role) {

		return QIdentityProxyModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
			return QIdentityProxyModel::setItemData(index, roles);
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

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_setItemData(this, handle__setItemData, sigval1, sigval2);

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

		return QIdentityProxyModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QIdentityProxyModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setHeaderData(int section, int orientation, QVariant* value, int role) {

		return QIdentityProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__clearItemData == 0) {
			return QIdentityProxyModel::clearItemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_clearItemData(this, handle__clearItemData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_clearItemData(QModelIndex* index) {

		return QIdentityProxyModel::clearItemData(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QIdentityProxyModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_buddy(this, handle__buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_buddy(QModelIndex* index) const {

		return new QModelIndex(QIdentityProxyModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QIdentityProxyModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_canFetchMore(this, handle__canFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canFetchMore(QModelIndex* parent) const {

		return QIdentityProxyModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QIdentityProxyModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QIdentityProxyModel_fetchMore(this, handle__fetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fetchMore(QModelIndex* parent) {

		QIdentityProxyModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QIdentityProxyModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QIdentityProxyModel_sort(this, handle__sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sort(int column, int order) {

		QIdentityProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QIdentityProxyModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QIdentityProxyModel_span(this, handle__span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_span(QModelIndex* index) const {

		return new QSize(QIdentityProxyModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__hasChildren == 0) {
			return QIdentityProxyModel::hasChildren(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_hasChildren(this, handle__hasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasChildren(QModelIndex* parent) const {

		return QIdentityProxyModel::hasChildren(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QIdentityProxyModel::mimeData(indexes);
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

		QMimeData* callback_return_value = miqt_exec_callback_QIdentityProxyModel_mimeData(this, handle__mimeData, sigval1);

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

		return QIdentityProxyModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QIdentityProxyModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QIdentityProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QIdentityProxyModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QIdentityProxyModel_mimeTypes(this, handle__mimeTypes);
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

		QStringList _ret = QIdentityProxyModel::mimeTypes();
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
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QIdentityProxyModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QIdentityProxyModel_supportedDragActions(this, handle__supportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDragActions() const {

		Qt::DropActions _ret = QIdentityProxyModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QIdentityProxyModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QIdentityProxyModel_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QIdentityProxyModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QIdentityProxyModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QIdentityProxyModel_roleNames(this, handle__roleNames);
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

		QHash<int, QByteArray> _ret = QIdentityProxyModel::roleNames();
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
	intptr_t handle__multiData = 0;

	// Subclass to allow providing a Go implementation
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (handle__multiData == 0) {
			QIdentityProxyModel::multiData(index, roleDataSpan);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelRoleDataSpan* sigval2 = new QModelRoleDataSpan(roleDataSpan);

		miqt_exec_callback_QIdentityProxyModel_multiData(this, handle__multiData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_multiData(QModelIndex* index, QModelRoleDataSpan* roleDataSpan) const {

		QIdentityProxyModel::multiData(*index, *roleDataSpan);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetInternalData = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetInternalData() override {
		if (handle__resetInternalData == 0) {
			QIdentityProxyModel::resetInternalData();
			return;
		}
		

		miqt_exec_callback_QIdentityProxyModel_resetInternalData(this, handle__resetInternalData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resetInternalData() {

		QIdentityProxyModel::resetInternalData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QIdentityProxyModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QIdentityProxyModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QIdentityProxyModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QIdentityProxyModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QIdentityProxyModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QIdentityProxyModel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QIdentityProxyModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QIdentityProxyModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QIdentityProxyModel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QIdentityProxyModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QIdentityProxyModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QIdentityProxyModel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QIdentityProxyModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QIdentityProxyModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIdentityProxyModel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QIdentityProxyModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QIdentityProxyModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QIdentityProxyModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QIdentityProxyModel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QModelIndex* QIdentityProxyModel_protectedbase_createSourceIndex(bool* _dynamic_cast_ok, const void* self, int row, int col, void* internalPtr);
	friend QModelIndex* QIdentityProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QIdentityProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QIdentityProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QIdentityProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QIdentityProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QIdentityProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QIdentityProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QIdentityProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QIdentityProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QIdentityProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QIdentityProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QIdentityProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QIdentityProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QIdentityProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QIdentityProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QIdentityProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QIdentityProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QIdentityProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QIdentityProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QIdentityProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QIdentityProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QIdentityProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QIdentityProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QIdentityProxyModel* QIdentityProxyModel_new() {
	return new MiqtVirtualQIdentityProxyModel();
}

QIdentityProxyModel* QIdentityProxyModel_new2(QObject* parent) {
	return new MiqtVirtualQIdentityProxyModel(parent);
}

void QIdentityProxyModel_virtbase(QIdentityProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel) {
	*outptr_QAbstractProxyModel = static_cast<QAbstractProxyModel*>(src);
}

QMetaObject* QIdentityProxyModel_metaObject(const QIdentityProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QIdentityProxyModel_metacast(QIdentityProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QIdentityProxyModel_tr(const char* s) {
	QString _ret = QIdentityProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QIdentityProxyModel_columnCount(const QIdentityProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QModelIndex* QIdentityProxyModel_index(const QIdentityProxyModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QIdentityProxyModel_mapFromSource(const QIdentityProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QIdentityProxyModel_mapToSource(const QIdentityProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QIdentityProxyModel_parent(const QIdentityProxyModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

int QIdentityProxyModel_rowCount(const QIdentityProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

QVariant* QIdentityProxyModel_headerData(const QIdentityProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QIdentityProxyModel_dropMimeData(QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

QModelIndex* QIdentityProxyModel_sibling(const QIdentityProxyModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QItemSelection* QIdentityProxyModel_mapSelectionFromSource(const QIdentityProxyModel* self, QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionFromSource(*selection));
}

QItemSelection* QIdentityProxyModel_mapSelectionToSource(const QIdentityProxyModel* self, QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionToSource(*selection));
}

struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_match(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
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

void QIdentityProxyModel_setSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

bool QIdentityProxyModel_insertColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_insertRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_removeColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_removeRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_moveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QIdentityProxyModel_moveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

struct miqt_string QIdentityProxyModel_tr2(const char* s, const char* c) {
	QString _ret = QIdentityProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIdentityProxyModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QIdentityProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QIdentityProxyModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__columnCount = slot;
	return true;
}

int QIdentityProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_columnCount(parent);
}

bool QIdentityProxyModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QIdentityProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_index(row, column, parent);
}

bool QIdentityProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mapFromSource = slot;
	return true;
}

QModelIndex* QIdentityProxyModel_virtualbase_mapFromSource(const void* self, QModelIndex* sourceIndex) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_mapFromSource(sourceIndex);
}

bool QIdentityProxyModel_override_virtual_mapToSource(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mapToSource = slot;
	return true;
}

QModelIndex* QIdentityProxyModel_virtualbase_mapToSource(const void* self, QModelIndex* proxyIndex) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_mapToSource(proxyIndex);
}

bool QIdentityProxyModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__parent = slot;
	return true;
}

QModelIndex* QIdentityProxyModel_virtualbase_parent(const void* self, QModelIndex* child) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_parent(child);
}

bool QIdentityProxyModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowCount = slot;
	return true;
}

int QIdentityProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_rowCount(parent);
}

bool QIdentityProxyModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QIdentityProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_headerData(section, orientation, role);
}

bool QIdentityProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_dropMimeData(data, action, row, column, parent);
}

bool QIdentityProxyModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QIdentityProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_sibling(row, column, idx);
}

bool QIdentityProxyModel_override_virtual_mapSelectionFromSource(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mapSelectionFromSource = slot;
	return true;
}

QItemSelection* QIdentityProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_mapSelectionFromSource(selection);
}

bool QIdentityProxyModel_override_virtual_mapSelectionToSource(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mapSelectionToSource = slot;
	return true;
}

QItemSelection* QIdentityProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_mapSelectionToSource(selection);
}

bool QIdentityProxyModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_match(start, role, value, hits, flags);
}

bool QIdentityProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setSourceModel = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* sourceModel) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_setSourceModel(sourceModel);
}

bool QIdentityProxyModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertColumns = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_insertColumns(column, count, parent);
}

bool QIdentityProxyModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertRows = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_insertRows(row, count, parent);
}

bool QIdentityProxyModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeColumns = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_removeColumns(column, count, parent);
}

bool QIdentityProxyModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeRows = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_removeRows(row, count, parent);
}

bool QIdentityProxyModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveRows = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QIdentityProxyModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveColumns = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QIdentityProxyModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__submit = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_submit(void* self) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_submit();
}

bool QIdentityProxyModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__revert = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_revert(void* self) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_revert();
}

bool QIdentityProxyModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

QVariant* QIdentityProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_data(proxyIndex, role);
}

bool QIdentityProxyModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QIdentityProxyModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_itemData(index);
}

bool QIdentityProxyModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__flags = slot;
	return true;
}

int QIdentityProxyModel_virtualbase_flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_flags(index);
}

bool QIdentityProxyModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_setData(index, value, role);
}

bool QIdentityProxyModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setItemData = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_setItemData(index, roles);
}

bool QIdentityProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_setHeaderData(section, orientation, value, role);
}

bool QIdentityProxyModel_override_virtual_clearItemData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clearItemData = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_clearItemData(void* self, QModelIndex* index) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_clearItemData(index);
}

bool QIdentityProxyModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QIdentityProxyModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_buddy(index);
}

bool QIdentityProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_canFetchMore(parent);
}

bool QIdentityProxyModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fetchMore = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_fetchMore(parent);
}

bool QIdentityProxyModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sort = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_sort(void* self, int column, int order) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_sort(column, order);
}

bool QIdentityProxyModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__span = slot;
	return true;
}

QSize* QIdentityProxyModel_virtualbase_span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_span(index);
}

bool QIdentityProxyModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasChildren = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_hasChildren(parent);
}

bool QIdentityProxyModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QIdentityProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_mimeData(indexes);
}

bool QIdentityProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_canDropMimeData(data, action, row, column, parent);
}

bool QIdentityProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QIdentityProxyModel_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_mimeTypes();
}

bool QIdentityProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QIdentityProxyModel_virtualbase_supportedDragActions(const void* self) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_supportedDragActions();
}

bool QIdentityProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QIdentityProxyModel_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_supportedDropActions();
}

bool QIdentityProxyModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QIdentityProxyModel_virtualbase_roleNames(const void* self) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_roleNames();
}

bool QIdentityProxyModel_override_virtual_multiData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__multiData = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_multiData(index, roleDataSpan);
}

bool QIdentityProxyModel_override_virtual_resetInternalData(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resetInternalData = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_resetInternalData(void* self) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_resetInternalData();
}

bool QIdentityProxyModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_event(event);
}

bool QIdentityProxyModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QIdentityProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QIdentityProxyModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_timerEvent(event);
}

bool QIdentityProxyModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_childEvent(event);
}

bool QIdentityProxyModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_customEvent(event);
}

bool QIdentityProxyModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_connectNotify(signal);
}

bool QIdentityProxyModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QIdentityProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_disconnectNotify(signal);
}

QModelIndex* QIdentityProxyModel_protectedbase_createSourceIndex(bool* _dynamic_cast_ok, const void* self, int row, int col, void* internalPtr) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));

}

QModelIndex* QIdentityProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));

}

void QIdentityProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
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

bool QIdentityProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);

}

void QIdentityProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QIdentityProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertRows();

}

void QIdentityProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QIdentityProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveRows();

}

bool QIdentityProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));

}

void QIdentityProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveRows();

}

void QIdentityProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QIdentityProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertColumns();

}

void QIdentityProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QIdentityProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveColumns();

}

bool QIdentityProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));

}

void QIdentityProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveColumns();

}

void QIdentityProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginResetModel();

}

void QIdentityProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endResetModel();

}

void QIdentityProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->changePersistentIndex(*from, *to);

}

void QIdentityProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
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

QObject* QIdentityProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QIdentityProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QIdentityProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QIdentityProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQIdentityProxyModel* self_cast = dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QIdentityProxyModel_delete(QIdentityProxyModel* self) {
	delete self;
}

