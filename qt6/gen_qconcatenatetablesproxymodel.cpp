#include <QAbstractItemModel>
#include <QByteArray>
#include <QChildEvent>
#include <QConcatenateTablesProxyModel>
#include <QDataStream>
#include <QEvent>
#include <QHash>
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
#include <qconcatenatetablesproxymodel.h>
#include "gen_qconcatenatetablesproxymodel.h"

#ifdef __cplusplus
extern "C" {
#endif

QVariant* miqt_exec_callback_QConcatenateTablesProxyModel_data(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QConcatenateTablesProxyModel_setData(QConcatenateTablesProxyModel*, intptr_t, QModelIndex*, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QConcatenateTablesProxyModel_itemData(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_setItemData(QConcatenateTablesProxyModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
int miqt_exec_callback_QConcatenateTablesProxyModel_flags(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QConcatenateTablesProxyModel_index(const QConcatenateTablesProxyModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QConcatenateTablesProxyModel_parent(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QConcatenateTablesProxyModel_rowCount(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QConcatenateTablesProxyModel_headerData(const QConcatenateTablesProxyModel*, intptr_t, int, int, int);
int miqt_exec_callback_QConcatenateTablesProxyModel_columnCount(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QConcatenateTablesProxyModel_mimeTypes(const QConcatenateTablesProxyModel*, intptr_t);
QMimeData* miqt_exec_callback_QConcatenateTablesProxyModel_mimeData(const QConcatenateTablesProxyModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QConcatenateTablesProxyModel_canDropMimeData(const QConcatenateTablesProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_dropMimeData(QConcatenateTablesProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
QSize* miqt_exec_callback_QConcatenateTablesProxyModel_span(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QConcatenateTablesProxyModel_sibling(const QConcatenateTablesProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_hasChildren(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_setHeaderData(QConcatenateTablesProxyModel*, intptr_t, int, int, QVariant*, int);
bool miqt_exec_callback_QConcatenateTablesProxyModel_clearItemData(QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QConcatenateTablesProxyModel_supportedDropActions(const QConcatenateTablesProxyModel*, intptr_t);
int miqt_exec_callback_QConcatenateTablesProxyModel_supportedDragActions(const QConcatenateTablesProxyModel*, intptr_t);
bool miqt_exec_callback_QConcatenateTablesProxyModel_insertRows(QConcatenateTablesProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_insertColumns(QConcatenateTablesProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_removeRows(QConcatenateTablesProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_removeColumns(QConcatenateTablesProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_moveRows(QConcatenateTablesProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QConcatenateTablesProxyModel_moveColumns(QConcatenateTablesProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QConcatenateTablesProxyModel_fetchMore(QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_canFetchMore(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QConcatenateTablesProxyModel_sort(QConcatenateTablesProxyModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QConcatenateTablesProxyModel_buddy(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QConcatenateTablesProxyModel_match(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QConcatenateTablesProxyModel_roleNames(const QConcatenateTablesProxyModel*, intptr_t);
void miqt_exec_callback_QConcatenateTablesProxyModel_multiData(const QConcatenateTablesProxyModel*, intptr_t, QModelIndex*, QModelRoleDataSpan*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_submit(QConcatenateTablesProxyModel*, intptr_t);
void miqt_exec_callback_QConcatenateTablesProxyModel_revert(QConcatenateTablesProxyModel*, intptr_t);
void miqt_exec_callback_QConcatenateTablesProxyModel_resetInternalData(QConcatenateTablesProxyModel*, intptr_t);
bool miqt_exec_callback_QConcatenateTablesProxyModel_event(QConcatenateTablesProxyModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QConcatenateTablesProxyModel_eventFilter(QConcatenateTablesProxyModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QConcatenateTablesProxyModel_timerEvent(QConcatenateTablesProxyModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QConcatenateTablesProxyModel_childEvent(QConcatenateTablesProxyModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QConcatenateTablesProxyModel_customEvent(QConcatenateTablesProxyModel*, intptr_t, QEvent*);
void miqt_exec_callback_QConcatenateTablesProxyModel_connectNotify(QConcatenateTablesProxyModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QConcatenateTablesProxyModel_disconnectNotify(QConcatenateTablesProxyModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQConcatenateTablesProxyModel final : public QConcatenateTablesProxyModel {
public:

	MiqtVirtualQConcatenateTablesProxyModel(): QConcatenateTablesProxyModel() {}
	MiqtVirtualQConcatenateTablesProxyModel(QObject* parent): QConcatenateTablesProxyModel(parent) {}

	virtual ~MiqtVirtualQConcatenateTablesProxyModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QConcatenateTablesProxyModel::data(index, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_data(this, handle__data, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QConcatenateTablesProxyModel_virtualbase_data(const void* self, QModelIndex* index, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QConcatenateTablesProxyModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_setData(this, handle__setData, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& proxyIndex) const override {
		if (handle__itemData == 0) {
			return QConcatenateTablesProxyModel::itemData(proxyIndex);
		}

		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_itemData(this, handle__itemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QConcatenateTablesProxyModel_virtualbase_itemData(const void* self, QModelIndex* proxyIndex);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
			return QConcatenateTablesProxyModel::setItemData(index, roles);
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
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_setItemData(this, handle__setItemData, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QConcatenateTablesProxyModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_flags(this, handle__flags, sigval1);
		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	friend int QConcatenateTablesProxyModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QConcatenateTablesProxyModel::index(row, column, parent);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_index(this, handle__index, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QConcatenateTablesProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& index) const override {
		if (handle__parent == 0) {
			return QConcatenateTablesProxyModel::parent(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_parent(this, handle__parent, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QConcatenateTablesProxyModel_virtualbase_parent(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QConcatenateTablesProxyModel::rowCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_rowCount(this, handle__rowCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QConcatenateTablesProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QConcatenateTablesProxyModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QConcatenateTablesProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return QConcatenateTablesProxyModel::columnCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_columnCount(this, handle__columnCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QConcatenateTablesProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QConcatenateTablesProxyModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_mimeTypes(this, handle__mimeTypes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QConcatenateTablesProxyModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QConcatenateTablesProxyModel::mimeData(indexes);
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
		QMimeData* callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_mimeData(this, handle__mimeData, sigval1);
		return callback_return_value;
	}

	friend QMimeData* QConcatenateTablesProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QConcatenateTablesProxyModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QConcatenateTablesProxyModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QConcatenateTablesProxyModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_span(this, handle__span, sigval1);
		return *callback_return_value;
	}

	friend QSize* QConcatenateTablesProxyModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QConcatenateTablesProxyModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QConcatenateTablesProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__hasChildren == 0) {
			return QConcatenateTablesProxyModel::hasChildren(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_hasChildren(this, handle__hasChildren, sigval1);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QConcatenateTablesProxyModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__clearItemData == 0) {
			return QConcatenateTablesProxyModel::clearItemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_clearItemData(this, handle__clearItemData, sigval1);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_clearItemData(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QConcatenateTablesProxyModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_supportedDropActions(this, handle__supportedDropActions);
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QConcatenateTablesProxyModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QConcatenateTablesProxyModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_supportedDragActions(this, handle__supportedDragActions);
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QConcatenateTablesProxyModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QConcatenateTablesProxyModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QConcatenateTablesProxyModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QConcatenateTablesProxyModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QConcatenateTablesProxyModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QConcatenateTablesProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QConcatenateTablesProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QConcatenateTablesProxyModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QConcatenateTablesProxyModel_fetchMore(this, handle__fetchMore, sigval1);

	}

	friend void QConcatenateTablesProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QConcatenateTablesProxyModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_canFetchMore(this, handle__canFetchMore, sigval1);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QConcatenateTablesProxyModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QConcatenateTablesProxyModel_sort(this, handle__sort, sigval1, sigval2);

	}

	friend void QConcatenateTablesProxyModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QConcatenateTablesProxyModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_buddy(this, handle__buddy, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QConcatenateTablesProxyModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QConcatenateTablesProxyModel::match(start, role, value, hits, flags);
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
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QConcatenateTablesProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QConcatenateTablesProxyModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_roleNames(this, handle__roleNames);
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

	friend struct miqt_map /* of int to struct miqt_string */  QConcatenateTablesProxyModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__multiData = 0;

	// Subclass to allow providing a Go implementation
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (handle__multiData == 0) {
			QConcatenateTablesProxyModel::multiData(index, roleDataSpan);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelRoleDataSpan* sigval2 = new QModelRoleDataSpan(roleDataSpan);
		miqt_exec_callback_QConcatenateTablesProxyModel_multiData(this, handle__multiData, sigval1, sigval2);

	}

	friend void QConcatenateTablesProxyModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QConcatenateTablesProxyModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_submit(this, handle__submit);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QConcatenateTablesProxyModel::revert();
			return;
		}

		miqt_exec_callback_QConcatenateTablesProxyModel_revert(this, handle__revert);

	}

	friend void QConcatenateTablesProxyModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetInternalData = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetInternalData() override {
		if (handle__resetInternalData == 0) {
			QConcatenateTablesProxyModel::resetInternalData();
			return;
		}

		miqt_exec_callback_QConcatenateTablesProxyModel_resetInternalData(this, handle__resetInternalData);

	}

	friend void QConcatenateTablesProxyModel_virtualbase_resetInternalData(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QConcatenateTablesProxyModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QConcatenateTablesProxyModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QConcatenateTablesProxyModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QConcatenateTablesProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QConcatenateTablesProxyModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QConcatenateTablesProxyModel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QConcatenateTablesProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QConcatenateTablesProxyModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QConcatenateTablesProxyModel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QConcatenateTablesProxyModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QConcatenateTablesProxyModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QConcatenateTablesProxyModel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QConcatenateTablesProxyModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QConcatenateTablesProxyModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QConcatenateTablesProxyModel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QConcatenateTablesProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QConcatenateTablesProxyModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QConcatenateTablesProxyModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QConcatenateTablesProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QModelIndex* QConcatenateTablesProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QConcatenateTablesProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QConcatenateTablesProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QConcatenateTablesProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QConcatenateTablesProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QConcatenateTablesProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QConcatenateTablesProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QConcatenateTablesProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QConcatenateTablesProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QConcatenateTablesProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QConcatenateTablesProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QConcatenateTablesProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QConcatenateTablesProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QConcatenateTablesProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QConcatenateTablesProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QConcatenateTablesProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QConcatenateTablesProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QConcatenateTablesProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QConcatenateTablesProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QConcatenateTablesProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QConcatenateTablesProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QConcatenateTablesProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QConcatenateTablesProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QConcatenateTablesProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new() {
	return new (std::nothrow) MiqtVirtualQConcatenateTablesProxyModel();
}

QConcatenateTablesProxyModel* QConcatenateTablesProxyModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQConcatenateTablesProxyModel(parent);
}

void QConcatenateTablesProxyModel_virtbase(QConcatenateTablesProxyModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QConcatenateTablesProxyModel_metaObject(const QConcatenateTablesProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QConcatenateTablesProxyModel_metacast(QConcatenateTablesProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QConcatenateTablesProxyModel_tr(const char* s) {
	QString _ret = QConcatenateTablesProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QAbstractItemModel* */  QConcatenateTablesProxyModel_sourceModels(const QConcatenateTablesProxyModel* self) {
	QList<QAbstractItemModel *> _ret = self->sourceModels();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAbstractItemModel** _arr = static_cast<QAbstractItemModel**>(malloc(sizeof(QAbstractItemModel*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QConcatenateTablesProxyModel_addSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
	self->addSourceModel(sourceModel);
}

void QConcatenateTablesProxyModel_removeSourceModel(QConcatenateTablesProxyModel* self, QAbstractItemModel* sourceModel) {
	self->removeSourceModel(sourceModel);
}

QModelIndex* QConcatenateTablesProxyModel_mapFromSource(const QConcatenateTablesProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QConcatenateTablesProxyModel_mapToSource(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QVariant* QConcatenateTablesProxyModel_data(const QConcatenateTablesProxyModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QConcatenateTablesProxyModel_setData(QConcatenateTablesProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

struct miqt_map /* of int to QVariant* */  QConcatenateTablesProxyModel_itemData(const QConcatenateTablesProxyModel* self, QModelIndex* proxyIndex) {
	QMap<int, QVariant> _ret = self->itemData(*proxyIndex);
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

bool QConcatenateTablesProxyModel_setItemData(QConcatenateTablesProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

int QConcatenateTablesProxyModel_flags(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

QModelIndex* QConcatenateTablesProxyModel_index(const QConcatenateTablesProxyModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QConcatenateTablesProxyModel_parent(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->parent(*index));
}

int QConcatenateTablesProxyModel_rowCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

QVariant* QConcatenateTablesProxyModel_headerData(const QConcatenateTablesProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

int QConcatenateTablesProxyModel_columnCount(const QConcatenateTablesProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

struct miqt_array /* of struct miqt_string */  QConcatenateTablesProxyModel_mimeTypes(const QConcatenateTablesProxyModel* self) {
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

QMimeData* QConcatenateTablesProxyModel_mimeData(const QConcatenateTablesProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QConcatenateTablesProxyModel_canDropMimeData(const QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QConcatenateTablesProxyModel_dropMimeData(QConcatenateTablesProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

QSize* QConcatenateTablesProxyModel_span(const QConcatenateTablesProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

struct miqt_string QConcatenateTablesProxyModel_tr2(const char* s, const char* c) {
	QString _ret = QConcatenateTablesProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QConcatenateTablesProxyModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QConcatenateTablesProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QConcatenateTablesProxyModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = slot;
	return true;
}

QVariant* QConcatenateTablesProxyModel_virtualbase_data(const void* self, QModelIndex* index, int role) {
	return new QVariant(static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::data(*index, static_cast<int>(role)));
}

bool QConcatenateTablesProxyModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::setData(*index, *value, static_cast<int>(role));
}

bool QConcatenateTablesProxyModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QConcatenateTablesProxyModel_virtualbase_itemData(const void* self, QModelIndex* proxyIndex) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::itemData(*proxyIndex);
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

bool QConcatenateTablesProxyModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::setItemData(*index, roles_QMap);
}

bool QConcatenateTablesProxyModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = slot;
	return true;
}

int QConcatenateTablesProxyModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QConcatenateTablesProxyModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QConcatenateTablesProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QConcatenateTablesProxyModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parent = slot;
	return true;
}

QModelIndex* QConcatenateTablesProxyModel_virtualbase_parent(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::parent(*index));
}

bool QConcatenateTablesProxyModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = slot;
	return true;
}

int QConcatenateTablesProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::rowCount(*parent);
}

bool QConcatenateTablesProxyModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QConcatenateTablesProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QConcatenateTablesProxyModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = slot;
	return true;
}

int QConcatenateTablesProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::columnCount(*parent);
}

bool QConcatenateTablesProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QConcatenateTablesProxyModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::mimeTypes();
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

bool QConcatenateTablesProxyModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QConcatenateTablesProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::mimeData(indexes_QList);
}

bool QConcatenateTablesProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QConcatenateTablesProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QConcatenateTablesProxyModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = slot;
	return true;
}

QSize* QConcatenateTablesProxyModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::span(*index));
}

bool QConcatenateTablesProxyModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QConcatenateTablesProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QConcatenateTablesProxyModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasChildren = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::hasChildren(*parent);
}

bool QConcatenateTablesProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QConcatenateTablesProxyModel_override_virtual_clearItemData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clearItemData = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_clearItemData(void* self, QModelIndex* index) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::clearItemData(*index);
}

bool QConcatenateTablesProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QConcatenateTablesProxyModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QConcatenateTablesProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QConcatenateTablesProxyModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QConcatenateTablesProxyModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QConcatenateTablesProxyModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QConcatenateTablesProxyModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QConcatenateTablesProxyModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QConcatenateTablesProxyModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QConcatenateTablesProxyModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QConcatenateTablesProxyModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = slot;
	return true;
}

void QConcatenateTablesProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::fetchMore(*parent);
}

bool QConcatenateTablesProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::canFetchMore(*parent);
}

bool QConcatenateTablesProxyModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = slot;
	return true;
}

void QConcatenateTablesProxyModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QConcatenateTablesProxyModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QConcatenateTablesProxyModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::buddy(*index));
}

bool QConcatenateTablesProxyModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QConcatenateTablesProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

bool QConcatenateTablesProxyModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QConcatenateTablesProxyModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::roleNames();
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

bool QConcatenateTablesProxyModel_override_virtual_multiData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__multiData = slot;
	return true;
}

void QConcatenateTablesProxyModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	static_cast<const MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::multiData(*index, *roleDataSpan);
}

bool QConcatenateTablesProxyModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::submit();
}

bool QConcatenateTablesProxyModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = slot;
	return true;
}

void QConcatenateTablesProxyModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::revert();
}

bool QConcatenateTablesProxyModel_override_virtual_resetInternalData(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resetInternalData = slot;
	return true;
}

void QConcatenateTablesProxyModel_virtualbase_resetInternalData(void* self) {
	static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::resetInternalData();
}

bool QConcatenateTablesProxyModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::event(event);
}

bool QConcatenateTablesProxyModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QConcatenateTablesProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::eventFilter(watched, event);
}

bool QConcatenateTablesProxyModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QConcatenateTablesProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::timerEvent(event);
}

bool QConcatenateTablesProxyModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QConcatenateTablesProxyModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::childEvent(event);
}

bool QConcatenateTablesProxyModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QConcatenateTablesProxyModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::customEvent(event);
}

bool QConcatenateTablesProxyModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QConcatenateTablesProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::connectNotify(*signal);
}

bool QConcatenateTablesProxyModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QConcatenateTablesProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQConcatenateTablesProxyModel*>(self)->QConcatenateTablesProxyModel::disconnectNotify(*signal);
}

QModelIndex* QConcatenateTablesProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));
}

void QConcatenateTablesProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
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

bool QConcatenateTablesProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

void QConcatenateTablesProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QConcatenateTablesProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QConcatenateTablesProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QConcatenateTablesProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

bool QConcatenateTablesProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QConcatenateTablesProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

void QConcatenateTablesProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QConcatenateTablesProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QConcatenateTablesProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QConcatenateTablesProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

bool QConcatenateTablesProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QConcatenateTablesProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QConcatenateTablesProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QConcatenateTablesProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QConcatenateTablesProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QConcatenateTablesProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QConcatenateTablesProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
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

QObject* QConcatenateTablesProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QConcatenateTablesProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QConcatenateTablesProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QConcatenateTablesProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQConcatenateTablesProxyModel* self_cast = dynamic_cast<MiqtVirtualQConcatenateTablesProxyModel*>( (QConcatenateTablesProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QConcatenateTablesProxyModel_delete(QConcatenateTablesProxyModel* self) {
	delete self;
}

