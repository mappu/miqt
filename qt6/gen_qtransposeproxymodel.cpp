#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
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
#include <QTransposeProxyModel>
#include <QVariant>
#include <qtransposeproxymodel.h>
#include "gen_qtransposeproxymodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTransposeProxyModel_setSourceModel(QTransposeProxyModel*, intptr_t, QAbstractItemModel*);
int miqt_exec_callback_QTransposeProxyModel_rowCount(const QTransposeProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QTransposeProxyModel_columnCount(const QTransposeProxyModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QTransposeProxyModel_headerData(const QTransposeProxyModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QTransposeProxyModel_setHeaderData(QTransposeProxyModel*, intptr_t, int, int, QVariant*, int);
bool miqt_exec_callback_QTransposeProxyModel_setItemData(QTransposeProxyModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
QSize* miqt_exec_callback_QTransposeProxyModel_span(const QTransposeProxyModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QTransposeProxyModel_itemData(const QTransposeProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_mapFromSource(const QTransposeProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_mapToSource(const QTransposeProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_parent(const QTransposeProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_index(const QTransposeProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_insertRows(QTransposeProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_removeRows(QTransposeProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_moveRows(QTransposeProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QTransposeProxyModel_insertColumns(QTransposeProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_removeColumns(QTransposeProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_moveColumns(QTransposeProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QTransposeProxyModel_sort(QTransposeProxyModel*, intptr_t, int, int);
QItemSelection* miqt_exec_callback_QTransposeProxyModel_mapSelectionToSource(const QTransposeProxyModel*, intptr_t, QItemSelection*);
QItemSelection* miqt_exec_callback_QTransposeProxyModel_mapSelectionFromSource(const QTransposeProxyModel*, intptr_t, QItemSelection*);
bool miqt_exec_callback_QTransposeProxyModel_submit(QTransposeProxyModel*, intptr_t);
void miqt_exec_callback_QTransposeProxyModel_revert(QTransposeProxyModel*, intptr_t);
QVariant* miqt_exec_callback_QTransposeProxyModel_data(const QTransposeProxyModel*, intptr_t, QModelIndex*, int);
int miqt_exec_callback_QTransposeProxyModel_flags(const QTransposeProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_setData(QTransposeProxyModel*, intptr_t, QModelIndex*, QVariant*, int);
bool miqt_exec_callback_QTransposeProxyModel_clearItemData(QTransposeProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_buddy(const QTransposeProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_canFetchMore(const QTransposeProxyModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTransposeProxyModel_fetchMore(QTransposeProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_hasChildren(const QTransposeProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_sibling(const QTransposeProxyModel*, intptr_t, int, int, QModelIndex*);
QMimeData* miqt_exec_callback_QTransposeProxyModel_mimeData(const QTransposeProxyModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QTransposeProxyModel_canDropMimeData(const QTransposeProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_dropMimeData(QTransposeProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QTransposeProxyModel_mimeTypes(const QTransposeProxyModel*, intptr_t);
int miqt_exec_callback_QTransposeProxyModel_supportedDragActions(const QTransposeProxyModel*, intptr_t);
int miqt_exec_callback_QTransposeProxyModel_supportedDropActions(const QTransposeProxyModel*, intptr_t);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QTransposeProxyModel_roleNames(const QTransposeProxyModel*, intptr_t);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTransposeProxyModel_match(const QTransposeProxyModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
void miqt_exec_callback_QTransposeProxyModel_multiData(const QTransposeProxyModel*, intptr_t, QModelIndex*, QModelRoleDataSpan*);
void miqt_exec_callback_QTransposeProxyModel_resetInternalData(QTransposeProxyModel*, intptr_t);
bool miqt_exec_callback_QTransposeProxyModel_event(QTransposeProxyModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QTransposeProxyModel_eventFilter(QTransposeProxyModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTransposeProxyModel_timerEvent(QTransposeProxyModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTransposeProxyModel_childEvent(QTransposeProxyModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTransposeProxyModel_customEvent(QTransposeProxyModel*, intptr_t, QEvent*);
void miqt_exec_callback_QTransposeProxyModel_connectNotify(QTransposeProxyModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTransposeProxyModel_disconnectNotify(QTransposeProxyModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTransposeProxyModel final : public QTransposeProxyModel {
public:

	MiqtVirtualQTransposeProxyModel(): QTransposeProxyModel() {}
	MiqtVirtualQTransposeProxyModel(QObject* parent): QTransposeProxyModel(parent) {}

	virtual ~MiqtVirtualQTransposeProxyModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSourceModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSourceModel(QAbstractItemModel* newSourceModel) override {
		if (handle__setSourceModel == 0) {
			QTransposeProxyModel::setSourceModel(newSourceModel);
			return;
		}

		QAbstractItemModel* sigval1 = newSourceModel;
		miqt_exec_callback_QTransposeProxyModel_setSourceModel(this, handle__setSourceModel, sigval1);

	}

	friend void QTransposeProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* newSourceModel);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QTransposeProxyModel::rowCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QTransposeProxyModel_rowCount(this, handle__rowCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTransposeProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return QTransposeProxyModel::columnCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QTransposeProxyModel_columnCount(this, handle__columnCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTransposeProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QTransposeProxyModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QTransposeProxyModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QTransposeProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QTransposeProxyModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
			return QTransposeProxyModel::setItemData(index, roles);
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
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_setItemData(this, handle__setItemData, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QTransposeProxyModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QTransposeProxyModel_span(this, handle__span, sigval1);
		return *callback_return_value;
	}

	friend QSize* QTransposeProxyModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QTransposeProxyModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QTransposeProxyModel_itemData(this, handle__itemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (handle__mapFromSource == 0) {
			return QTransposeProxyModel::mapFromSource(sourceIndex);
		}

		const QModelIndex& sourceIndex_ret = sourceIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_mapFromSource(this, handle__mapFromSource, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QTransposeProxyModel_virtualbase_mapFromSource(const void* self, QModelIndex* sourceIndex);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (handle__mapToSource == 0) {
			return QTransposeProxyModel::mapToSource(proxyIndex);
		}

		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_mapToSource(this, handle__mapToSource, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QTransposeProxyModel_virtualbase_mapToSource(const void* self, QModelIndex* proxyIndex);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& index) const override {
		if (handle__parent == 0) {
			return QTransposeProxyModel::parent(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_parent(this, handle__parent, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QTransposeProxyModel_virtualbase_parent(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QTransposeProxyModel::index(row, column, parent);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_index(this, handle__index, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QTransposeProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QTransposeProxyModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QTransposeProxyModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QTransposeProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QTransposeProxyModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QTransposeProxyModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QTransposeProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QTransposeProxyModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QTransposeProxyModel_sort(this, handle__sort, sigval1, sigval2);

	}

	friend void QTransposeProxyModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapSelectionToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
		if (handle__mapSelectionToSource == 0) {
			return QTransposeProxyModel::mapSelectionToSource(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QItemSelection* callback_return_value = miqt_exec_callback_QTransposeProxyModel_mapSelectionToSource(this, handle__mapSelectionToSource, sigval1);
		return *callback_return_value;
	}

	friend QItemSelection* QTransposeProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapSelectionFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
		if (handle__mapSelectionFromSource == 0) {
			return QTransposeProxyModel::mapSelectionFromSource(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QItemSelection* callback_return_value = miqt_exec_callback_QTransposeProxyModel_mapSelectionFromSource(this, handle__mapSelectionFromSource, sigval1);
		return *callback_return_value;
	}

	friend QItemSelection* QTransposeProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QTransposeProxyModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_submit(this, handle__submit);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QTransposeProxyModel::revert();
			return;
		}

		miqt_exec_callback_QTransposeProxyModel_revert(this, handle__revert);

	}

	friend void QTransposeProxyModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
		if (handle__data == 0) {
			return QTransposeProxyModel::data(proxyIndex, role);
		}

		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QTransposeProxyModel_data(this, handle__data, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QTransposeProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QTransposeProxyModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QTransposeProxyModel_flags(this, handle__flags, sigval1);
		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	friend int QTransposeProxyModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QTransposeProxyModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_setData(this, handle__setData, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__clearItemData == 0) {
			return QTransposeProxyModel::clearItemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_clearItemData(this, handle__clearItemData, sigval1);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_clearItemData(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QTransposeProxyModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_buddy(this, handle__buddy, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QTransposeProxyModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QTransposeProxyModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_canFetchMore(this, handle__canFetchMore, sigval1);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QTransposeProxyModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QTransposeProxyModel_fetchMore(this, handle__fetchMore, sigval1);

	}

	friend void QTransposeProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__hasChildren == 0) {
			return QTransposeProxyModel::hasChildren(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_hasChildren(this, handle__hasChildren, sigval1);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QTransposeProxyModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QTransposeProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QTransposeProxyModel::mimeData(indexes);
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
		QMimeData* callback_return_value = miqt_exec_callback_QTransposeProxyModel_mimeData(this, handle__mimeData, sigval1);
		return callback_return_value;
	}

	friend QMimeData* QTransposeProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QTransposeProxyModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QTransposeProxyModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QTransposeProxyModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QTransposeProxyModel_mimeTypes(this, handle__mimeTypes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QTransposeProxyModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QTransposeProxyModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QTransposeProxyModel_supportedDragActions(this, handle__supportedDragActions);
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QTransposeProxyModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QTransposeProxyModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QTransposeProxyModel_supportedDropActions(this, handle__supportedDropActions);
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QTransposeProxyModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QTransposeProxyModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QTransposeProxyModel_roleNames(this, handle__roleNames);
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

	friend struct miqt_map /* of int to struct miqt_string */  QTransposeProxyModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QTransposeProxyModel::match(start, role, value, hits, flags);
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
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTransposeProxyModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QTransposeProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__multiData = 0;

	// Subclass to allow providing a Go implementation
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (handle__multiData == 0) {
			QTransposeProxyModel::multiData(index, roleDataSpan);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelRoleDataSpan* sigval2 = new QModelRoleDataSpan(roleDataSpan);
		miqt_exec_callback_QTransposeProxyModel_multiData(this, handle__multiData, sigval1, sigval2);

	}

	friend void QTransposeProxyModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetInternalData = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetInternalData() override {
		if (handle__resetInternalData == 0) {
			QTransposeProxyModel::resetInternalData();
			return;
		}

		miqt_exec_callback_QTransposeProxyModel_resetInternalData(this, handle__resetInternalData);

	}

	friend void QTransposeProxyModel_virtualbase_resetInternalData(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTransposeProxyModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTransposeProxyModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTransposeProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTransposeProxyModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QTransposeProxyModel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QTransposeProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTransposeProxyModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QTransposeProxyModel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QTransposeProxyModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTransposeProxyModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTransposeProxyModel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QTransposeProxyModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTransposeProxyModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTransposeProxyModel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QTransposeProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTransposeProxyModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTransposeProxyModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QTransposeProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QModelIndex* QTransposeProxyModel_protectedbase_createSourceIndex(bool* _dynamic_cast_ok, const void* self, int row, int col, void* internalPtr);
	friend QModelIndex* QTransposeProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QTransposeProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QTransposeProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QTransposeProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QTransposeProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QTransposeProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QTransposeProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QTransposeProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QTransposeProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QTransposeProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QTransposeProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QTransposeProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QTransposeProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QTransposeProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QTransposeProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QTransposeProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QTransposeProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QTransposeProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QTransposeProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QTransposeProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QTransposeProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTransposeProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTransposeProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTransposeProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTransposeProxyModel* QTransposeProxyModel_new() {
	return new (std::nothrow) MiqtVirtualQTransposeProxyModel();
}

QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQTransposeProxyModel(parent);
}

void QTransposeProxyModel_virtbase(QTransposeProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel) {
	*outptr_QAbstractProxyModel = static_cast<QAbstractProxyModel*>(src);
}

QMetaObject* QTransposeProxyModel_metaObject(const QTransposeProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTransposeProxyModel_metacast(QTransposeProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTransposeProxyModel_tr(const char* s) {
	QString _ret = QTransposeProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTransposeProxyModel_setSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel) {
	self->setSourceModel(newSourceModel);
}

int QTransposeProxyModel_rowCount(const QTransposeProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QTransposeProxyModel_columnCount(const QTransposeProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QTransposeProxyModel_headerData(const QTransposeProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QTransposeProxyModel_setHeaderData(QTransposeProxyModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QTransposeProxyModel_setItemData(QTransposeProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

QSize* QTransposeProxyModel_span(const QTransposeProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_itemData(const QTransposeProxyModel* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = self->itemData(*index);
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

QModelIndex* QTransposeProxyModel_mapFromSource(const QTransposeProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QTransposeProxyModel_mapToSource(const QTransposeProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QTransposeProxyModel_parent(const QTransposeProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->parent(*index));
}

QModelIndex* QTransposeProxyModel_index(const QTransposeProxyModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QTransposeProxyModel_insertRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_removeRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_moveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QTransposeProxyModel_insertColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_removeColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_moveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

void QTransposeProxyModel_sort(QTransposeProxyModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_string QTransposeProxyModel_tr2(const char* s, const char* c) {
	QString _ret = QTransposeProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTransposeProxyModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QTransposeProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTransposeProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSourceModel = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* newSourceModel) {
	static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::setSourceModel(newSourceModel);
}

bool QTransposeProxyModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = slot;
	return true;
}

int QTransposeProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::rowCount(*parent);
}

bool QTransposeProxyModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = slot;
	return true;
}

int QTransposeProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::columnCount(*parent);
}

bool QTransposeProxyModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QTransposeProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QTransposeProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QTransposeProxyModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::setItemData(*index, roles_QMap);
}

bool QTransposeProxyModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = slot;
	return true;
}

QSize* QTransposeProxyModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::span(*index));
}

bool QTransposeProxyModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::itemData(*index);
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

bool QTransposeProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapFromSource = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_mapFromSource(const void* self, QModelIndex* sourceIndex) {
	return new QModelIndex(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::mapFromSource(*sourceIndex));
}

bool QTransposeProxyModel_override_virtual_mapToSource(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapToSource = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_mapToSource(const void* self, QModelIndex* proxyIndex) {
	return new QModelIndex(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::mapToSource(*proxyIndex));
}

bool QTransposeProxyModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parent = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_parent(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::parent(*index));
}

bool QTransposeProxyModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QTransposeProxyModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QTransposeProxyModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QTransposeProxyModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QTransposeProxyModel_override_virtual_mapSelectionToSource(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapSelectionToSource = slot;
	return true;
}

QItemSelection* QTransposeProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection) {
	return new QItemSelection(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::mapSelectionToSource(*selection));
}

bool QTransposeProxyModel_override_virtual_mapSelectionFromSource(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapSelectionFromSource = slot;
	return true;
}

QItemSelection* QTransposeProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection) {
	return new QItemSelection(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::mapSelectionFromSource(*selection));
}

bool QTransposeProxyModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::submit();
}

bool QTransposeProxyModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::revert();
}

bool QTransposeProxyModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = slot;
	return true;
}

QVariant* QTransposeProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role) {
	return new QVariant(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::data(*proxyIndex, static_cast<int>(role)));
}

bool QTransposeProxyModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = slot;
	return true;
}

int QTransposeProxyModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QTransposeProxyModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::setData(*index, *value, static_cast<int>(role));
}

bool QTransposeProxyModel_override_virtual_clearItemData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clearItemData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_clearItemData(void* self, QModelIndex* index) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::clearItemData(*index);
}

bool QTransposeProxyModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::buddy(*index));
}

bool QTransposeProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::canFetchMore(*parent);
}

bool QTransposeProxyModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::fetchMore(*parent);
}

bool QTransposeProxyModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasChildren = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::hasChildren(*parent);
}

bool QTransposeProxyModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QTransposeProxyModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QTransposeProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::mimeData(indexes_QList);
}

bool QTransposeProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QTransposeProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QTransposeProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QTransposeProxyModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::mimeTypes();
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

bool QTransposeProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QTransposeProxyModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QTransposeProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QTransposeProxyModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QTransposeProxyModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QTransposeProxyModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::roleNames();
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

bool QTransposeProxyModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QTransposeProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

bool QTransposeProxyModel_override_virtual_multiData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__multiData = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	static_cast<const MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::multiData(*index, *roleDataSpan);
}

bool QTransposeProxyModel_override_virtual_resetInternalData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resetInternalData = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_resetInternalData(void* self) {
	static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::resetInternalData();
}

bool QTransposeProxyModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::event(event);
}

bool QTransposeProxyModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::eventFilter(watched, event);
}

bool QTransposeProxyModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::timerEvent(event);
}

bool QTransposeProxyModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::childEvent(event);
}

bool QTransposeProxyModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::customEvent(event);
}

bool QTransposeProxyModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::connectNotify(*signal);
}

bool QTransposeProxyModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTransposeProxyModel*>(self)->QTransposeProxyModel::disconnectNotify(*signal);
}

QModelIndex* QTransposeProxyModel_protectedbase_createSourceIndex(bool* _dynamic_cast_ok, const void* self, int row, int col, void* internalPtr) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createSourceIndex(static_cast<int>(row), static_cast<int>(col), internalPtr));
}

QModelIndex* QTransposeProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));
}

void QTransposeProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
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

bool QTransposeProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

void QTransposeProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QTransposeProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QTransposeProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QTransposeProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

bool QTransposeProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QTransposeProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

void QTransposeProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QTransposeProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QTransposeProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QTransposeProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

bool QTransposeProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QTransposeProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QTransposeProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QTransposeProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QTransposeProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QTransposeProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QTransposeProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
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

QObject* QTransposeProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTransposeProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTransposeProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTransposeProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTransposeProxyModel_delete(QTransposeProxyModel* self) {
	delete self;
}

