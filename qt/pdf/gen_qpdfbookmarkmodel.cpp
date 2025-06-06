#include <QAbstractItemModel>
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
#include <QPdfBookmarkModel>
#include <QPdfDocument>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qpdfbookmarkmodel.h>
#include "gen_qpdfbookmarkmodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPdfBookmarkModel_documentChanged(intptr_t, QPdfDocument*);
void miqt_exec_callback_QPdfBookmarkModel_structureModeChanged(intptr_t, int);
QVariant* miqt_exec_callback_QPdfBookmarkModel_data(const QPdfBookmarkModel*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QPdfBookmarkModel_index(const QPdfBookmarkModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QPdfBookmarkModel_parent(const QPdfBookmarkModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QPdfBookmarkModel_rowCount(const QPdfBookmarkModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QPdfBookmarkModel_columnCount(const QPdfBookmarkModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QPdfBookmarkModel_roleNames(const QPdfBookmarkModel*, intptr_t);
QModelIndex* miqt_exec_callback_QPdfBookmarkModel_sibling(const QPdfBookmarkModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QPdfBookmarkModel_hasChildren(const QPdfBookmarkModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QPdfBookmarkModel_setData(QPdfBookmarkModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QPdfBookmarkModel_headerData(const QPdfBookmarkModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QPdfBookmarkModel_setHeaderData(QPdfBookmarkModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QPdfBookmarkModel_itemData(const QPdfBookmarkModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QPdfBookmarkModel_setItemData(QPdfBookmarkModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QPdfBookmarkModel_mimeTypes(const QPdfBookmarkModel*, intptr_t);
QMimeData* miqt_exec_callback_QPdfBookmarkModel_mimeData(const QPdfBookmarkModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QPdfBookmarkModel_canDropMimeData(const QPdfBookmarkModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QPdfBookmarkModel_dropMimeData(QPdfBookmarkModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QPdfBookmarkModel_supportedDropActions(const QPdfBookmarkModel*, intptr_t);
int miqt_exec_callback_QPdfBookmarkModel_supportedDragActions(const QPdfBookmarkModel*, intptr_t);
bool miqt_exec_callback_QPdfBookmarkModel_insertRows(QPdfBookmarkModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QPdfBookmarkModel_insertColumns(QPdfBookmarkModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QPdfBookmarkModel_removeRows(QPdfBookmarkModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QPdfBookmarkModel_removeColumns(QPdfBookmarkModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QPdfBookmarkModel_moveRows(QPdfBookmarkModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QPdfBookmarkModel_moveColumns(QPdfBookmarkModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QPdfBookmarkModel_fetchMore(QPdfBookmarkModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QPdfBookmarkModel_canFetchMore(const QPdfBookmarkModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QPdfBookmarkModel_flags(const QPdfBookmarkModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QPdfBookmarkModel_sort(QPdfBookmarkModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QPdfBookmarkModel_buddy(const QPdfBookmarkModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QPdfBookmarkModel_match(const QPdfBookmarkModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QPdfBookmarkModel_span(const QPdfBookmarkModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QPdfBookmarkModel_submit(QPdfBookmarkModel*, intptr_t);
void miqt_exec_callback_QPdfBookmarkModel_revert(QPdfBookmarkModel*, intptr_t);
bool miqt_exec_callback_QPdfBookmarkModel_event(QPdfBookmarkModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QPdfBookmarkModel_eventFilter(QPdfBookmarkModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPdfBookmarkModel_timerEvent(QPdfBookmarkModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPdfBookmarkModel_childEvent(QPdfBookmarkModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPdfBookmarkModel_customEvent(QPdfBookmarkModel*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfBookmarkModel_connectNotify(QPdfBookmarkModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPdfBookmarkModel_disconnectNotify(QPdfBookmarkModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPdfBookmarkModel final : public QPdfBookmarkModel {
public:

	MiqtVirtualQPdfBookmarkModel(): QPdfBookmarkModel() {}
	MiqtVirtualQPdfBookmarkModel(QObject* parent): QPdfBookmarkModel(parent) {}

	virtual ~MiqtVirtualQPdfBookmarkModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QPdfBookmarkModel::data(index, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QPdfBookmarkModel_data(this, handle__data, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QPdfBookmarkModel_virtualbase_data(const void* self, QModelIndex* index, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QPdfBookmarkModel::index(row, column, parent);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QPdfBookmarkModel_index(this, handle__index, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QPdfBookmarkModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& index) const override {
		if (handle__parent == 0) {
			return QPdfBookmarkModel::parent(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QPdfBookmarkModel_parent(this, handle__parent, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QPdfBookmarkModel_virtualbase_parent(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QPdfBookmarkModel::rowCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QPdfBookmarkModel_rowCount(this, handle__rowCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPdfBookmarkModel_virtualbase_rowCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return QPdfBookmarkModel::columnCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QPdfBookmarkModel_columnCount(this, handle__columnCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPdfBookmarkModel_virtualbase_columnCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QPdfBookmarkModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QPdfBookmarkModel_roleNames(this, handle__roleNames);
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

	friend struct miqt_map /* of int to struct miqt_string */  QPdfBookmarkModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QPdfBookmarkModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QPdfBookmarkModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QPdfBookmarkModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__hasChildren == 0) {
			return QPdfBookmarkModel::hasChildren(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_hasChildren(this, handle__hasChildren, sigval1);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QPdfBookmarkModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_setData(this, handle__setData, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QPdfBookmarkModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QPdfBookmarkModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QPdfBookmarkModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QPdfBookmarkModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QPdfBookmarkModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QPdfBookmarkModel_itemData(this, handle__itemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QPdfBookmarkModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
			return QPdfBookmarkModel::setItemData(index, roles);
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
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_setItemData(this, handle__setItemData, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QPdfBookmarkModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QPdfBookmarkModel_mimeTypes(this, handle__mimeTypes);
		QStringList callback_return_value_QStringList;
		callback_return_value_QStringList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QStringList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QStringList;
	}

	friend struct miqt_array /* of struct miqt_string */  QPdfBookmarkModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QPdfBookmarkModel::mimeData(indexes);
		}

		const QModelIndexList& indexes_ret = indexes;
		// Convert QList<> from C++ memory to manually-managed C memory
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.size()));
		for (size_t i = 0, e = indexes_ret.size(); i < e; ++i) {
			indexes_arr[i] = new QModelIndex(indexes_ret[i]);
		}
		struct miqt_array indexes_out;
		indexes_out.len = indexes_ret.size();
		indexes_out.data = static_cast<void*>(indexes_arr);
		struct miqt_array /* of QModelIndex* */  sigval1 = indexes_out;
		QMimeData* callback_return_value = miqt_exec_callback_QPdfBookmarkModel_mimeData(this, handle__mimeData, sigval1);
		return callback_return_value;
	}

	friend QMimeData* QPdfBookmarkModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QPdfBookmarkModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QPdfBookmarkModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QPdfBookmarkModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QPdfBookmarkModel_supportedDropActions(this, handle__supportedDropActions);
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QPdfBookmarkModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QPdfBookmarkModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QPdfBookmarkModel_supportedDragActions(this, handle__supportedDragActions);
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QPdfBookmarkModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QPdfBookmarkModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QPdfBookmarkModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QPdfBookmarkModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QPdfBookmarkModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QPdfBookmarkModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QPdfBookmarkModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QPdfBookmarkModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QPdfBookmarkModel_fetchMore(this, handle__fetchMore, sigval1);

	}

	friend void QPdfBookmarkModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QPdfBookmarkModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_canFetchMore(this, handle__canFetchMore, sigval1);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QPdfBookmarkModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QPdfBookmarkModel_flags(this, handle__flags, sigval1);
		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	friend int QPdfBookmarkModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QPdfBookmarkModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QPdfBookmarkModel_sort(this, handle__sort, sigval1, sigval2);

	}

	friend void QPdfBookmarkModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QPdfBookmarkModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QPdfBookmarkModel_buddy(this, handle__buddy, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QPdfBookmarkModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QPdfBookmarkModel::match(start, role, value, hits, flags);
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
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QPdfBookmarkModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QModelIndexList;
		callback_return_value_QModelIndexList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QModelIndexList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QModelIndexList;
	}

	friend struct miqt_array /* of QModelIndex* */  QPdfBookmarkModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QPdfBookmarkModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QPdfBookmarkModel_span(this, handle__span, sigval1);
		return *callback_return_value;
	}

	friend QSize* QPdfBookmarkModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QPdfBookmarkModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_submit(this, handle__submit);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QPdfBookmarkModel::revert();
			return;
		}

		miqt_exec_callback_QPdfBookmarkModel_revert(this, handle__revert);

	}

	friend void QPdfBookmarkModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPdfBookmarkModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPdfBookmarkModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QPdfBookmarkModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPdfBookmarkModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPdfBookmarkModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QPdfBookmarkModel_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QPdfBookmarkModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPdfBookmarkModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPdfBookmarkModel_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QPdfBookmarkModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPdfBookmarkModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPdfBookmarkModel_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QPdfBookmarkModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPdfBookmarkModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPdfBookmarkModel_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QPdfBookmarkModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPdfBookmarkModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPdfBookmarkModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QPdfBookmarkModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QPdfBookmarkModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QPdfBookmarkModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QPdfBookmarkModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QPdfBookmarkModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QPdfBookmarkModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QPdfBookmarkModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QPdfBookmarkModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QPdfBookmarkModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QPdfBookmarkModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QPdfBookmarkModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QPdfBookmarkModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QPdfBookmarkModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QPdfBookmarkModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QPdfBookmarkModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QPdfBookmarkModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QPdfBookmarkModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QPdfBookmarkModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QPdfBookmarkModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QPdfBookmarkModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QPdfBookmarkModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QPdfBookmarkModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QPdfBookmarkModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfBookmarkModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfBookmarkModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPdfBookmarkModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPdfBookmarkModel* QPdfBookmarkModel_new() {
	return new (std::nothrow) MiqtVirtualQPdfBookmarkModel();
}

QPdfBookmarkModel* QPdfBookmarkModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQPdfBookmarkModel(parent);
}

void QPdfBookmarkModel_virtbase(QPdfBookmarkModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QPdfBookmarkModel_metaObject(const QPdfBookmarkModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPdfBookmarkModel_metacast(QPdfBookmarkModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPdfBookmarkModel_tr(const char* s) {
	QString _ret = QPdfBookmarkModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfBookmarkModel_trUtf8(const char* s) {
	QString _ret = QPdfBookmarkModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPdfDocument* QPdfBookmarkModel_document(const QPdfBookmarkModel* self) {
	return self->document();
}

void QPdfBookmarkModel_setDocument(QPdfBookmarkModel* self, QPdfDocument* document) {
	self->setDocument(document);
}

int QPdfBookmarkModel_structureMode(const QPdfBookmarkModel* self) {
	QPdfBookmarkModel::StructureMode _ret = self->structureMode();
	return static_cast<int>(_ret);
}

void QPdfBookmarkModel_setStructureMode(QPdfBookmarkModel* self, int mode) {
	self->setStructureMode(static_cast<QPdfBookmarkModel::StructureMode>(mode));
}

QVariant* QPdfBookmarkModel_data(const QPdfBookmarkModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

QModelIndex* QPdfBookmarkModel_index(const QPdfBookmarkModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QPdfBookmarkModel_parent(const QPdfBookmarkModel* self, QModelIndex* index) {
	return new QModelIndex(self->parent(*index));
}

int QPdfBookmarkModel_rowCount(const QPdfBookmarkModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QPdfBookmarkModel_columnCount(const QPdfBookmarkModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

struct miqt_map /* of int to struct miqt_string */  QPdfBookmarkModel_roleNames(const QPdfBookmarkModel* self) {
	QHash<int, QByteArray> _ret = self->roleNames();
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

void QPdfBookmarkModel_documentChanged(QPdfBookmarkModel* self, QPdfDocument* document) {
	self->documentChanged(document);
}

void QPdfBookmarkModel_connect_documentChanged(QPdfBookmarkModel* self, intptr_t slot) {
	QPdfBookmarkModel::connect(self, static_cast<void (QPdfBookmarkModel::*)(QPdfDocument*)>(&QPdfBookmarkModel::documentChanged), self, [=](QPdfDocument* document) {
		QPdfDocument* sigval1 = document;
		miqt_exec_callback_QPdfBookmarkModel_documentChanged(slot, sigval1);
	});
}

void QPdfBookmarkModel_structureModeChanged(QPdfBookmarkModel* self, int structureMode) {
	self->structureModeChanged(static_cast<QPdfBookmarkModel::StructureMode>(structureMode));
}

void QPdfBookmarkModel_connect_structureModeChanged(QPdfBookmarkModel* self, intptr_t slot) {
	QPdfBookmarkModel::connect(self, static_cast<void (QPdfBookmarkModel::*)(QPdfBookmarkModel::StructureMode)>(&QPdfBookmarkModel::structureModeChanged), self, [=](QPdfBookmarkModel::StructureMode structureMode) {
		QPdfBookmarkModel::StructureMode structureMode_ret = structureMode;
		int sigval1 = static_cast<int>(structureMode_ret);
		miqt_exec_callback_QPdfBookmarkModel_structureModeChanged(slot, sigval1);
	});
}

struct miqt_string QPdfBookmarkModel_tr2(const char* s, const char* c) {
	QString _ret = QPdfBookmarkModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfBookmarkModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QPdfBookmarkModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfBookmarkModel_trUtf82(const char* s, const char* c) {
	QString _ret = QPdfBookmarkModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfBookmarkModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPdfBookmarkModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPdfBookmarkModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = slot;
	return true;
}

QVariant* QPdfBookmarkModel_virtualbase_data(const void* self, QModelIndex* index, int role) {
	return new QVariant(static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::data(*index, static_cast<int>(role)));
}

bool QPdfBookmarkModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QPdfBookmarkModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QPdfBookmarkModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parent = slot;
	return true;
}

QModelIndex* QPdfBookmarkModel_virtualbase_parent(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::parent(*index));
}

bool QPdfBookmarkModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = slot;
	return true;
}

int QPdfBookmarkModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::rowCount(*parent);
}

bool QPdfBookmarkModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = slot;
	return true;
}

int QPdfBookmarkModel_virtualbase_columnCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::columnCount(*parent);
}

bool QPdfBookmarkModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QPdfBookmarkModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::roleNames();
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

bool QPdfBookmarkModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QPdfBookmarkModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QPdfBookmarkModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasChildren = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::hasChildren(*parent);
}

bool QPdfBookmarkModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::setData(*index, *value, static_cast<int>(role));
}

bool QPdfBookmarkModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QPdfBookmarkModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QPdfBookmarkModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QPdfBookmarkModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QPdfBookmarkModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::itemData(*index);
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

bool QPdfBookmarkModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::setItemData(*index, roles_QMap);
}

bool QPdfBookmarkModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QPdfBookmarkModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::mimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
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
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QPdfBookmarkModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QPdfBookmarkModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QModelIndexList;
	indexes_QModelIndexList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QModelIndexList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::mimeData(indexes_QModelIndexList);
}

bool QPdfBookmarkModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QPdfBookmarkModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QPdfBookmarkModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QPdfBookmarkModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QPdfBookmarkModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QPdfBookmarkModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QPdfBookmarkModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QPdfBookmarkModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QPdfBookmarkModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QPdfBookmarkModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QPdfBookmarkModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QPdfBookmarkModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QPdfBookmarkModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = slot;
	return true;
}

void QPdfBookmarkModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::fetchMore(*parent);
}

bool QPdfBookmarkModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::canFetchMore(*parent);
}

bool QPdfBookmarkModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = slot;
	return true;
}

int QPdfBookmarkModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QPdfBookmarkModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = slot;
	return true;
}

void QPdfBookmarkModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QPdfBookmarkModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QPdfBookmarkModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::buddy(*index));
}

bool QPdfBookmarkModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QPdfBookmarkModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QPdfBookmarkModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = slot;
	return true;
}

QSize* QPdfBookmarkModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::span(*index));
}

bool QPdfBookmarkModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::submit();
}

bool QPdfBookmarkModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = slot;
	return true;
}

void QPdfBookmarkModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::revert();
}

bool QPdfBookmarkModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::event(event);
}

bool QPdfBookmarkModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPdfBookmarkModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::eventFilter(watched, event);
}

bool QPdfBookmarkModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QPdfBookmarkModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::timerEvent(event);
}

bool QPdfBookmarkModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QPdfBookmarkModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::childEvent(event);
}

bool QPdfBookmarkModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QPdfBookmarkModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::customEvent(event);
}

bool QPdfBookmarkModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QPdfBookmarkModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::connectNotify(*signal);
}

bool QPdfBookmarkModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPdfBookmarkModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPdfBookmarkModel*>(self)->QPdfBookmarkModel::disconnectNotify(*signal);
}

void QPdfBookmarkModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resetInternalData();
}

QModelIndex* QPdfBookmarkModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));
}

void QPdfBookmarkModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList indexes_QModelIndexList;
		indexes_QModelIndexList.reserve(indexes.len);
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
		for(size_t i = 0; i < indexes.len; ++i) {
			indexes_QModelIndexList.push_back(*(indexes_arr[i]));
		}
	self_cast->encodeData(indexes_QModelIndexList, *stream);
}

bool QPdfBookmarkModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

void QPdfBookmarkModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QPdfBookmarkModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QPdfBookmarkModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QPdfBookmarkModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

bool QPdfBookmarkModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QPdfBookmarkModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

void QPdfBookmarkModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QPdfBookmarkModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QPdfBookmarkModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QPdfBookmarkModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

bool QPdfBookmarkModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QPdfBookmarkModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QPdfBookmarkModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QPdfBookmarkModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QPdfBookmarkModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QPdfBookmarkModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList from_QModelIndexList;
		from_QModelIndexList.reserve(from.len);
		QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
		for(size_t i = 0; i < from.len; ++i) {
			from_QModelIndexList.push_back(*(from_arr[i]));
		}
		QModelIndexList to_QModelIndexList;
		to_QModelIndexList.reserve(to.len);
		QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
		for(size_t i = 0; i < to.len; ++i) {
			to_QModelIndexList.push_back(*(to_arr[i]));
		}
	self_cast->changePersistentIndexList(from_QModelIndexList, to_QModelIndexList);
}

struct miqt_array /* of QModelIndex* */  QPdfBookmarkModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}

	*_dynamic_cast_ok = true;
	QModelIndexList _ret = self_cast->persistentIndexList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QObject* QPdfBookmarkModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPdfBookmarkModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPdfBookmarkModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPdfBookmarkModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPdfBookmarkModel* self_cast = dynamic_cast<MiqtVirtualQPdfBookmarkModel*>( (QPdfBookmarkModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPdfBookmarkModel_delete(QPdfBookmarkModel* self) {
	delete self;
}

