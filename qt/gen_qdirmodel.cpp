#include <QAbstractItemModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QDirModel>
#include <QEvent>
#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qdirmodel.h>
#include "gen_qdirmodel.h"

#ifdef __cplusplus
extern "C" {
#endif

QModelIndex* miqt_exec_callback_QDirModel_index(const QDirModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QDirModel_parent(const QDirModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QDirModel_rowCount(const QDirModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QDirModel_columnCount(const QDirModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QDirModel_data(const QDirModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QDirModel_setData(QDirModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QDirModel_headerData(const QDirModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QDirModel_hasChildren(const QDirModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QDirModel_flags(const QDirModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QDirModel_sort(QDirModel*, intptr_t, int, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QDirModel_mimeTypes(const QDirModel*, intptr_t);
QMimeData* miqt_exec_callback_QDirModel_mimeData(const QDirModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QDirModel_dropMimeData(QDirModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QDirModel_supportedDropActions(const QDirModel*, intptr_t);
QModelIndex* miqt_exec_callback_QDirModel_sibling(const QDirModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QDirModel_setHeaderData(QDirModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QDirModel_itemData(const QDirModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QDirModel_setItemData(QDirModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QDirModel_canDropMimeData(const QDirModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QDirModel_supportedDragActions(const QDirModel*, intptr_t);
bool miqt_exec_callback_QDirModel_insertRows(QDirModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QDirModel_insertColumns(QDirModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QDirModel_removeRows(QDirModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QDirModel_removeColumns(QDirModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QDirModel_moveRows(QDirModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QDirModel_moveColumns(QDirModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QDirModel_fetchMore(QDirModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QDirModel_canFetchMore(const QDirModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QDirModel_buddy(const QDirModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QDirModel_match(const QDirModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QDirModel_span(const QDirModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QDirModel_roleNames(const QDirModel*, intptr_t);
bool miqt_exec_callback_QDirModel_submit(QDirModel*, intptr_t);
void miqt_exec_callback_QDirModel_revert(QDirModel*, intptr_t);
bool miqt_exec_callback_QDirModel_event(QDirModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QDirModel_eventFilter(QDirModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDirModel_timerEvent(QDirModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDirModel_childEvent(QDirModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDirModel_customEvent(QDirModel*, intptr_t, QEvent*);
void miqt_exec_callback_QDirModel_connectNotify(QDirModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDirModel_disconnectNotify(QDirModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDirModel final : public QDirModel {
public:

	MiqtVirtualQDirModel(const QStringList& nameFilters, QDir::Filters filters, QDir::SortFlags sort): QDirModel(nameFilters, filters, sort) {};
	MiqtVirtualQDirModel(): QDirModel() {};
	MiqtVirtualQDirModel(const QStringList& nameFilters, QDir::Filters filters, QDir::SortFlags sort, QObject* parent): QDirModel(nameFilters, filters, sort, parent) {};
	MiqtVirtualQDirModel(QObject* parent): QDirModel(parent) {};

	virtual ~MiqtVirtualQDirModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QDirModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QDirModel_index(this, handle__index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QDirModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__parent == 0) {
			return QDirModel::parent(child);
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QDirModel_parent(this, handle__parent, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_parent(QModelIndex* child) const {

		return new QModelIndex(QDirModel::parent(*child));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QDirModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QDirModel_rowCount(this, handle__rowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_rowCount(QModelIndex* parent) const {

		return QDirModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return QDirModel::columnCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QDirModel_columnCount(this, handle__columnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_columnCount(QModelIndex* parent) const {

		return QDirModel::columnCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QDirModel::data(index, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QDirModel_data(this, handle__data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_data(QModelIndex* index, int role) const {

		return new QVariant(QDirModel::data(*index, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QDirModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QDirModel_setData(this, handle__setData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setData(QModelIndex* index, QVariant* value, int role) {

		return QDirModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QDirModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QDirModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_headerData(int section, int orientation, int role) const {

		return new QVariant(QDirModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& index) const override {
		if (handle__hasChildren == 0) {
			return QDirModel::hasChildren(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_hasChildren(this, handle__hasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasChildren(QModelIndex* index) const {

		return QDirModel::hasChildren(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QDirModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QDirModel_flags(this, handle__flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QDirModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QDirModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QDirModel_sort(this, handle__sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sort(int column, int order) {

		QDirModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QDirModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QDirModel_mimeTypes(this, handle__mimeTypes);
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

		QStringList _ret = QDirModel::mimeTypes();
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
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QDirModel::mimeData(indexes);
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

		QMimeData* callback_return_value = miqt_exec_callback_QDirModel_mimeData(this, handle__mimeData, sigval1);

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

		return QDirModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QDirModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QDirModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QDirModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QDirModel_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QDirModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QDirModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QDirModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QDirModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QDirModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QDirModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setHeaderData(int section, int orientation, QVariant* value, int role) {

		return QDirModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QDirModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QDirModel_itemData(this, handle__itemData, sigval1);
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

		QMap<int, QVariant> _ret = QDirModel::itemData(*index);
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
			return QDirModel::setItemData(index, roles);
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

		bool callback_return_value = miqt_exec_callback_QDirModel_setItemData(this, handle__setItemData, sigval1, sigval2);

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

		return QDirModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QDirModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QDirModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QDirModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QDirModel_supportedDragActions(this, handle__supportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDragActions() const {

		Qt::DropActions _ret = QDirModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QDirModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertRows(int row, int count, QModelIndex* parent) {

		return QDirModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QDirModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertColumns(int column, int count, QModelIndex* parent) {

		return QDirModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QDirModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeRows(int row, int count, QModelIndex* parent) {

		return QDirModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QDirModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeColumns(int column, int count, QModelIndex* parent) {

		return QDirModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QDirModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QDirModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QDirModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QDirModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QDirModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QDirModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QDirModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QDirModel_fetchMore(this, handle__fetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fetchMore(QModelIndex* parent) {

		QDirModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QDirModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_canFetchMore(this, handle__canFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canFetchMore(QModelIndex* parent) const {

		return QDirModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QDirModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QDirModel_buddy(this, handle__buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_buddy(QModelIndex* index) const {

		return new QModelIndex(QDirModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QDirModel::match(start, role, value, hits, flags);
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QDirModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
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

		QModelIndexList _ret = QDirModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
			return QDirModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QDirModel_span(this, handle__span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_span(QModelIndex* index) const {

		return new QSize(QDirModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QDirModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QDirModel_roleNames(this, handle__roleNames);
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

		QHash<int, QByteArray> _ret = QDirModel::roleNames();
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
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QDirModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QDirModel_submit(this, handle__submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_submit() {

		return QDirModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QDirModel::revert();
			return;
		}
		

		miqt_exec_callback_QDirModel_revert(this, handle__revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_revert() {

		QDirModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDirModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDirModel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QDirModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDirModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDirModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QDirModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDirModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDirModel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QDirModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDirModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDirModel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QDirModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDirModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDirModel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QDirModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDirModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDirModel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QDirModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDirModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDirModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QDirModel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QDirModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QDirModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QDirModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QDirModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QDirModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QDirModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QDirModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QDirModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QDirModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QDirModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QDirModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QDirModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QDirModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QDirModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QDirModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QDirModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QDirModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QDirModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QDirModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QDirModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QDirModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QDirModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDirModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDirModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDirModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDirModel* QDirModel_new(struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	return new MiqtVirtualQDirModel(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
}

QDirModel* QDirModel_new2() {
	return new MiqtVirtualQDirModel();
}

QDirModel* QDirModel_new3(struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort, QObject* parent) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	return new MiqtVirtualQDirModel(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort), parent);
}

QDirModel* QDirModel_new4(QObject* parent) {
	return new MiqtVirtualQDirModel(parent);
}

void QDirModel_virtbase(QDirModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QDirModel_metaObject(const QDirModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDirModel_metacast(QDirModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDirModel_tr(const char* s) {
	QString _ret = QDirModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_trUtf8(const char* s) {
	QString _ret = QDirModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QDirModel_index(const QDirModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QDirModel_parent(const QDirModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

int QDirModel_rowCount(const QDirModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QDirModel_columnCount(const QDirModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QDirModel_data(const QDirModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QDirModel_setData(QDirModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QDirModel_headerData(const QDirModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QDirModel_hasChildren(const QDirModel* self, QModelIndex* index) {
	return self->hasChildren(*index);
}

int QDirModel_flags(const QDirModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QDirModel_sort(QDirModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_array /* of struct miqt_string */  QDirModel_mimeTypes(const QDirModel* self) {
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

QMimeData* QDirModel_mimeData(const QDirModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QDirModel_dropMimeData(QDirModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QDirModel_supportedDropActions(const QDirModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

void QDirModel_setIconProvider(QDirModel* self, QFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QFileIconProvider* QDirModel_iconProvider(const QDirModel* self) {
	return self->iconProvider();
}

void QDirModel_setNameFilters(QDirModel* self, struct miqt_array /* of struct miqt_string */  filters) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	self->setNameFilters(filters_QList);
}

struct miqt_array /* of struct miqt_string */  QDirModel_nameFilters(const QDirModel* self) {
	QStringList _ret = self->nameFilters();
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

void QDirModel_setFilter(QDirModel* self, int filters) {
	self->setFilter(static_cast<QDir::Filters>(filters));
}

int QDirModel_filter(const QDirModel* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QDirModel_setSorting(QDirModel* self, int sort) {
	self->setSorting(static_cast<QDir::SortFlags>(sort));
}

int QDirModel_sorting(const QDirModel* self) {
	QDir::SortFlags _ret = self->sorting();
	return static_cast<int>(_ret);
}

void QDirModel_setResolveSymlinks(QDirModel* self, bool enable) {
	self->setResolveSymlinks(enable);
}

bool QDirModel_resolveSymlinks(const QDirModel* self) {
	return self->resolveSymlinks();
}

void QDirModel_setReadOnly(QDirModel* self, bool enable) {
	self->setReadOnly(enable);
}

bool QDirModel_isReadOnly(const QDirModel* self) {
	return self->isReadOnly();
}

void QDirModel_setLazyChildCount(QDirModel* self, bool enable) {
	self->setLazyChildCount(enable);
}

bool QDirModel_lazyChildCount(const QDirModel* self) {
	return self->lazyChildCount();
}

QModelIndex* QDirModel_indexWithPath(const QDirModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString));
}

bool QDirModel_isDir(const QDirModel* self, QModelIndex* index) {
	return self->isDir(*index);
}

QModelIndex* QDirModel_mkdir(QDirModel* self, QModelIndex* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QModelIndex(self->mkdir(*parent, name_QString));
}

bool QDirModel_rmdir(QDirModel* self, QModelIndex* index) {
	return self->rmdir(*index);
}

bool QDirModel_remove(QDirModel* self, QModelIndex* index) {
	return self->remove(*index);
}

struct miqt_string QDirModel_filePath(const QDirModel* self, QModelIndex* index) {
	QString _ret = self->filePath(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_fileName(const QDirModel* self, QModelIndex* index) {
	QString _ret = self->fileName(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QDirModel_fileIcon(const QDirModel* self, QModelIndex* index) {
	return new QIcon(self->fileIcon(*index));
}

QFileInfo* QDirModel_fileInfo(const QDirModel* self, QModelIndex* index) {
	return new QFileInfo(self->fileInfo(*index));
}

void QDirModel_refresh(QDirModel* self) {
	self->refresh();
}

struct miqt_string QDirModel_tr2(const char* s, const char* c) {
	QString _ret = QDirModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QDirModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_trUtf82(const char* s, const char* c) {
	QString _ret = QDirModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDirModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QDirModel_index2(const QDirModel* self, struct miqt_string path, int column) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString, static_cast<int>(column)));
}

void QDirModel_refresh1(QDirModel* self, QModelIndex* parent) {
	self->refresh(*parent);
}

bool QDirModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QDirModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_index(row, column, parent);
}

bool QDirModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__parent = slot;
	return true;
}

QModelIndex* QDirModel_virtualbase_parent(const void* self, QModelIndex* child) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_parent(child);
}

bool QDirModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowCount = slot;
	return true;
}

int QDirModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_rowCount(parent);
}

bool QDirModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__columnCount = slot;
	return true;
}

int QDirModel_virtualbase_columnCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_columnCount(parent);
}

bool QDirModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

QVariant* QDirModel_virtualbase_data(const void* self, QModelIndex* index, int role) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_data(index, role);
}

bool QDirModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

bool QDirModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_setData(index, value, role);
}

bool QDirModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QDirModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_headerData(section, orientation, role);
}

bool QDirModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasChildren = slot;
	return true;
}

bool QDirModel_virtualbase_hasChildren(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_hasChildren(index);
}

bool QDirModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__flags = slot;
	return true;
}

int QDirModel_virtualbase_flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_flags(index);
}

bool QDirModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sort = slot;
	return true;
}

void QDirModel_virtualbase_sort(void* self, int column, int order) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_sort(column, order);
}

bool QDirModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QDirModel_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_mimeTypes();
}

bool QDirModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QDirModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_mimeData(indexes);
}

bool QDirModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QDirModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_dropMimeData(data, action, row, column, parent);
}

bool QDirModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QDirModel_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_supportedDropActions();
}

bool QDirModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QDirModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_sibling(row, column, idx);
}

bool QDirModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QDirModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_setHeaderData(section, orientation, value, role);
}

bool QDirModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QDirModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_itemData(index);
}

bool QDirModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setItemData = slot;
	return true;
}

bool QDirModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_setItemData(index, roles);
}

bool QDirModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QDirModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_canDropMimeData(data, action, row, column, parent);
}

bool QDirModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QDirModel_virtualbase_supportedDragActions(const void* self) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_supportedDragActions();
}

bool QDirModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertRows = slot;
	return true;
}

bool QDirModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_insertRows(row, count, parent);
}

bool QDirModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertColumns = slot;
	return true;
}

bool QDirModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_insertColumns(column, count, parent);
}

bool QDirModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeRows = slot;
	return true;
}

bool QDirModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_removeRows(row, count, parent);
}

bool QDirModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeColumns = slot;
	return true;
}

bool QDirModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_removeColumns(column, count, parent);
}

bool QDirModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveRows = slot;
	return true;
}

bool QDirModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QDirModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveColumns = slot;
	return true;
}

bool QDirModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QDirModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fetchMore = slot;
	return true;
}

void QDirModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_fetchMore(parent);
}

bool QDirModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QDirModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_canFetchMore(parent);
}

bool QDirModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QDirModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_buddy(index);
}

bool QDirModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QDirModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_match(start, role, value, hits, flags);
}

bool QDirModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__span = slot;
	return true;
}

QSize* QDirModel_virtualbase_span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_span(index);
}

bool QDirModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QDirModel_virtualbase_roleNames(const void* self) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_roleNames();
}

bool QDirModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__submit = slot;
	return true;
}

bool QDirModel_virtualbase_submit(void* self) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_submit();
}

bool QDirModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__revert = slot;
	return true;
}

void QDirModel_virtualbase_revert(void* self) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_revert();
}

bool QDirModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDirModel_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_event(event);
}

bool QDirModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDirModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QDirModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDirModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_timerEvent(event);
}

bool QDirModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDirModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_childEvent(event);
}

bool QDirModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDirModel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_customEvent(event);
}

bool QDirModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDirModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_connectNotify(signal);
}

bool QDirModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDirModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_disconnectNotify(signal);
}

void QDirModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->resetInternalData();

}

QModelIndex* QDirModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));

}

void QDirModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
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

bool QDirModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);

}

void QDirModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QDirModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertRows();

}

void QDirModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QDirModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveRows();

}

bool QDirModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));

}

void QDirModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveRows();

}

void QDirModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QDirModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertColumns();

}

void QDirModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QDirModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveColumns();

}

bool QDirModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));

}

void QDirModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveColumns();

}

void QDirModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginResetModel();

}

void QDirModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endResetModel();

}

void QDirModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->changePersistentIndex(*from, *to);

}

void QDirModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QDirModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
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

QObject* QDirModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDirModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDirModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDirModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDirModel_delete(QDirModel* self) {
	delete self;
}

