#include <QAbstractFileIconProvider>
#include <QAbstractItemModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QDateTime>
#include <QDir>
#include <QEvent>
#include <QFileInfo>
#include <QFileSystemModel>
#include <QIcon>
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
#include <qfilesystemmodel.h>
#include "gen_qfilesystemmodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QFileSystemModel_rootPathChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QFileSystemModel_fileRenamed(intptr_t, struct miqt_string, struct miqt_string, struct miqt_string);
void miqt_exec_callback_QFileSystemModel_directoryLoaded(intptr_t, struct miqt_string);
QModelIndex* miqt_exec_callback_QFileSystemModel_index(const QFileSystemModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QFileSystemModel_parent(const QFileSystemModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QFileSystemModel_sibling(const QFileSystemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_hasChildren(const QFileSystemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_canFetchMore(const QFileSystemModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QFileSystemModel_fetchMore(QFileSystemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QFileSystemModel_rowCount(const QFileSystemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QFileSystemModel_columnCount(const QFileSystemModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QFileSystemModel_data(const QFileSystemModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QFileSystemModel_setData(QFileSystemModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QFileSystemModel_headerData(const QFileSystemModel*, intptr_t, int, int, int);
int miqt_exec_callback_QFileSystemModel_flags(const QFileSystemModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QFileSystemModel_sort(QFileSystemModel*, intptr_t, int, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QFileSystemModel_mimeTypes(const QFileSystemModel*, intptr_t);
QMimeData* miqt_exec_callback_QFileSystemModel_mimeData(const QFileSystemModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QFileSystemModel_dropMimeData(QFileSystemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QFileSystemModel_supportedDropActions(const QFileSystemModel*, intptr_t);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QFileSystemModel_roleNames(const QFileSystemModel*, intptr_t);
void miqt_exec_callback_QFileSystemModel_timerEvent(QFileSystemModel*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QFileSystemModel_event(QFileSystemModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QFileSystemModel_setHeaderData(QFileSystemModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QFileSystemModel_itemData(const QFileSystemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_setItemData(QFileSystemModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QFileSystemModel_clearItemData(QFileSystemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_canDropMimeData(const QFileSystemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QFileSystemModel_supportedDragActions(const QFileSystemModel*, intptr_t);
bool miqt_exec_callback_QFileSystemModel_insertRows(QFileSystemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_insertColumns(QFileSystemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_removeRows(QFileSystemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_removeColumns(QFileSystemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_moveRows(QFileSystemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QFileSystemModel_moveColumns(QFileSystemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QFileSystemModel_buddy(const QFileSystemModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QFileSystemModel_match(const QFileSystemModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QFileSystemModel_span(const QFileSystemModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QFileSystemModel_multiData(const QFileSystemModel*, intptr_t, QModelIndex*, QModelRoleDataSpan*);
bool miqt_exec_callback_QFileSystemModel_submit(QFileSystemModel*, intptr_t);
void miqt_exec_callback_QFileSystemModel_revert(QFileSystemModel*, intptr_t);
void miqt_exec_callback_QFileSystemModel_resetInternalData(QFileSystemModel*, intptr_t);
bool miqt_exec_callback_QFileSystemModel_eventFilter(QFileSystemModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFileSystemModel_childEvent(QFileSystemModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFileSystemModel_customEvent(QFileSystemModel*, intptr_t, QEvent*);
void miqt_exec_callback_QFileSystemModel_connectNotify(QFileSystemModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFileSystemModel_disconnectNotify(QFileSystemModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFileSystemModel final : public QFileSystemModel {
public:

	MiqtVirtualQFileSystemModel(): QFileSystemModel() {};
	MiqtVirtualQFileSystemModel(QObject* parent): QFileSystemModel(parent) {};

	virtual ~MiqtVirtualQFileSystemModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QFileSystemModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QFileSystemModel_index(this, handle__index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QFileSystemModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__parent == 0) {
			return QFileSystemModel::parent(child);
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QFileSystemModel_parent(this, handle__parent, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_parent(QModelIndex* child) const {

		return new QModelIndex(QFileSystemModel::parent(*child));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QFileSystemModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QFileSystemModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QFileSystemModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__hasChildren == 0) {
			return QFileSystemModel::hasChildren(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_hasChildren(this, handle__hasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasChildren(QModelIndex* parent) const {

		return QFileSystemModel::hasChildren(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QFileSystemModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_canFetchMore(this, handle__canFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canFetchMore(QModelIndex* parent) const {

		return QFileSystemModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QFileSystemModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QFileSystemModel_fetchMore(this, handle__fetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fetchMore(QModelIndex* parent) {

		QFileSystemModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QFileSystemModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QFileSystemModel_rowCount(this, handle__rowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_rowCount(QModelIndex* parent) const {

		return QFileSystemModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return QFileSystemModel::columnCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QFileSystemModel_columnCount(this, handle__columnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_columnCount(QModelIndex* parent) const {

		return QFileSystemModel::columnCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QFileSystemModel::data(index, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QFileSystemModel_data(this, handle__data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_data(QModelIndex* index, int role) const {

		return new QVariant(QFileSystemModel::data(*index, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QFileSystemModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_setData(this, handle__setData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setData(QModelIndex* index, QVariant* value, int role) {

		return QFileSystemModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QFileSystemModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QFileSystemModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_headerData(int section, int orientation, int role) const {

		return new QVariant(QFileSystemModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QFileSystemModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QFileSystemModel_flags(this, handle__flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QFileSystemModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QFileSystemModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QFileSystemModel_sort(this, handle__sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sort(int column, int order) {

		QFileSystemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QFileSystemModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QFileSystemModel_mimeTypes(this, handle__mimeTypes);
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

		QStringList _ret = QFileSystemModel::mimeTypes();
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
			return QFileSystemModel::mimeData(indexes);
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

		QMimeData* callback_return_value = miqt_exec_callback_QFileSystemModel_mimeData(this, handle__mimeData, sigval1);

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

		return QFileSystemModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QFileSystemModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QFileSystemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QFileSystemModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QFileSystemModel_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QFileSystemModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QFileSystemModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QFileSystemModel_roleNames(this, handle__roleNames);
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

		QHash<int, QByteArray> _ret = QFileSystemModel::roleNames();
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
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QFileSystemModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QFileSystemModel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QFileSystemModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QFileSystemModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QFileSystemModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QFileSystemModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setHeaderData(int section, int orientation, QVariant* value, int role) {

		return QFileSystemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QFileSystemModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QFileSystemModel_itemData(this, handle__itemData, sigval1);
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

		QMap<int, QVariant> _ret = QFileSystemModel::itemData(*index);
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
			return QFileSystemModel::setItemData(index, roles);
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

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_setItemData(this, handle__setItemData, sigval1, sigval2);

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

		return QFileSystemModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__clearItemData == 0) {
			return QFileSystemModel::clearItemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_clearItemData(this, handle__clearItemData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_clearItemData(QModelIndex* index) {

		return QFileSystemModel::clearItemData(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QFileSystemModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QFileSystemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QFileSystemModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QFileSystemModel_supportedDragActions(this, handle__supportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDragActions() const {

		Qt::DropActions _ret = QFileSystemModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QFileSystemModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertRows(int row, int count, QModelIndex* parent) {

		return QFileSystemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QFileSystemModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertColumns(int column, int count, QModelIndex* parent) {

		return QFileSystemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QFileSystemModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeRows(int row, int count, QModelIndex* parent) {

		return QFileSystemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QFileSystemModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeColumns(int column, int count, QModelIndex* parent) {

		return QFileSystemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QFileSystemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QFileSystemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QFileSystemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QFileSystemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QFileSystemModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QFileSystemModel_buddy(this, handle__buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_buddy(QModelIndex* index) const {

		return new QModelIndex(QFileSystemModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QFileSystemModel::match(start, role, value, hits, flags);
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QFileSystemModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
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

		QModelIndexList _ret = QFileSystemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
			return QFileSystemModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QFileSystemModel_span(this, handle__span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_span(QModelIndex* index) const {

		return new QSize(QFileSystemModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__multiData = 0;

	// Subclass to allow providing a Go implementation
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (handle__multiData == 0) {
			QFileSystemModel::multiData(index, roleDataSpan);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelRoleDataSpan* sigval2 = new QModelRoleDataSpan(roleDataSpan);

		miqt_exec_callback_QFileSystemModel_multiData(this, handle__multiData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_multiData(QModelIndex* index, QModelRoleDataSpan* roleDataSpan) const {

		QFileSystemModel::multiData(*index, *roleDataSpan);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QFileSystemModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_submit(this, handle__submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_submit() {

		return QFileSystemModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QFileSystemModel::revert();
			return;
		}
		

		miqt_exec_callback_QFileSystemModel_revert(this, handle__revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_revert() {

		QFileSystemModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetInternalData = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetInternalData() override {
		if (handle__resetInternalData == 0) {
			QFileSystemModel::resetInternalData();
			return;
		}
		

		miqt_exec_callback_QFileSystemModel_resetInternalData(this, handle__resetInternalData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resetInternalData() {

		QFileSystemModel::resetInternalData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QFileSystemModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QFileSystemModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QFileSystemModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QFileSystemModel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QFileSystemModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QFileSystemModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QFileSystemModel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QFileSystemModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QFileSystemModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFileSystemModel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QFileSystemModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QFileSystemModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QFileSystemModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QFileSystemModel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QModelIndex* QFileSystemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QFileSystemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QFileSystemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QFileSystemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QFileSystemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QFileSystemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QFileSystemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QFileSystemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QFileSystemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QFileSystemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QFileSystemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QFileSystemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QFileSystemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QFileSystemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QFileSystemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFileSystemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFileSystemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFileSystemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFileSystemModel* QFileSystemModel_new() {
	return new MiqtVirtualQFileSystemModel();
}

QFileSystemModel* QFileSystemModel_new2(QObject* parent) {
	return new MiqtVirtualQFileSystemModel(parent);
}

void QFileSystemModel_virtbase(QFileSystemModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QFileSystemModel_metaObject(const QFileSystemModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFileSystemModel_metacast(QFileSystemModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFileSystemModel_tr(const char* s) {
	QString _ret = QFileSystemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileSystemModel_rootPathChanged(QFileSystemModel* self, struct miqt_string newPath) {
	QString newPath_QString = QString::fromUtf8(newPath.data, newPath.len);
	self->rootPathChanged(newPath_QString);
}

void QFileSystemModel_connect_rootPathChanged(QFileSystemModel* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&)>(&QFileSystemModel::rootPathChanged), self, [=](const QString& newPath) {
		const QString newPath_ret = newPath;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray newPath_b = newPath_ret.toUtf8();
		struct miqt_string newPath_ms;
		newPath_ms.len = newPath_b.length();
		newPath_ms.data = static_cast<char*>(malloc(newPath_ms.len));
		memcpy(newPath_ms.data, newPath_b.data(), newPath_ms.len);
		struct miqt_string sigval1 = newPath_ms;
		miqt_exec_callback_QFileSystemModel_rootPathChanged(slot, sigval1);
	});
}

void QFileSystemModel_fileRenamed(QFileSystemModel* self, struct miqt_string path, struct miqt_string oldName, struct miqt_string newName) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	self->fileRenamed(path_QString, oldName_QString, newName_QString);
}

void QFileSystemModel_connect_fileRenamed(QFileSystemModel* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&, const QString&, const QString&)>(&QFileSystemModel::fileRenamed), self, [=](const QString& path, const QString& oldName, const QString& newName) {
		const QString path_ret = path;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray path_b = path_ret.toUtf8();
		struct miqt_string path_ms;
		path_ms.len = path_b.length();
		path_ms.data = static_cast<char*>(malloc(path_ms.len));
		memcpy(path_ms.data, path_b.data(), path_ms.len);
		struct miqt_string sigval1 = path_ms;
		const QString oldName_ret = oldName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray oldName_b = oldName_ret.toUtf8();
		struct miqt_string oldName_ms;
		oldName_ms.len = oldName_b.length();
		oldName_ms.data = static_cast<char*>(malloc(oldName_ms.len));
		memcpy(oldName_ms.data, oldName_b.data(), oldName_ms.len);
		struct miqt_string sigval2 = oldName_ms;
		const QString newName_ret = newName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray newName_b = newName_ret.toUtf8();
		struct miqt_string newName_ms;
		newName_ms.len = newName_b.length();
		newName_ms.data = static_cast<char*>(malloc(newName_ms.len));
		memcpy(newName_ms.data, newName_b.data(), newName_ms.len);
		struct miqt_string sigval3 = newName_ms;
		miqt_exec_callback_QFileSystemModel_fileRenamed(slot, sigval1, sigval2, sigval3);
	});
}

void QFileSystemModel_directoryLoaded(QFileSystemModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->directoryLoaded(path_QString);
}

void QFileSystemModel_connect_directoryLoaded(QFileSystemModel* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&)>(&QFileSystemModel::directoryLoaded), self, [=](const QString& path) {
		const QString path_ret = path;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray path_b = path_ret.toUtf8();
		struct miqt_string path_ms;
		path_ms.len = path_b.length();
		path_ms.data = static_cast<char*>(malloc(path_ms.len));
		memcpy(path_ms.data, path_b.data(), path_ms.len);
		struct miqt_string sigval1 = path_ms;
		miqt_exec_callback_QFileSystemModel_directoryLoaded(slot, sigval1);
	});
}

QModelIndex* QFileSystemModel_index(const QFileSystemModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QFileSystemModel_indexWithPath(const QFileSystemModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString));
}

QModelIndex* QFileSystemModel_parent(const QFileSystemModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QFileSystemModel_sibling(const QFileSystemModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QFileSystemModel_hasChildren(const QFileSystemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

bool QFileSystemModel_canFetchMore(const QFileSystemModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

void QFileSystemModel_fetchMore(QFileSystemModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

int QFileSystemModel_rowCount(const QFileSystemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QFileSystemModel_columnCount(const QFileSystemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QFileSystemModel_myComputer(const QFileSystemModel* self) {
	return new QVariant(self->myComputer());
}

QVariant* QFileSystemModel_data(const QFileSystemModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QFileSystemModel_setData(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QFileSystemModel_headerData(const QFileSystemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

int QFileSystemModel_flags(const QFileSystemModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QFileSystemModel_sort(QFileSystemModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_array /* of struct miqt_string */  QFileSystemModel_mimeTypes(const QFileSystemModel* self) {
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

QMimeData* QFileSystemModel_mimeData(const QFileSystemModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QFileSystemModel_dropMimeData(QFileSystemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QFileSystemModel_supportedDropActions(const QFileSystemModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_map /* of int to struct miqt_string */  QFileSystemModel_roleNames(const QFileSystemModel* self) {
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

QModelIndex* QFileSystemModel_setRootPath(QFileSystemModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->setRootPath(path_QString));
}

struct miqt_string QFileSystemModel_rootPath(const QFileSystemModel* self) {
	QString _ret = self->rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QFileSystemModel_rootDirectory(const QFileSystemModel* self) {
	return new QDir(self->rootDirectory());
}

void QFileSystemModel_setIconProvider(QFileSystemModel* self, QAbstractFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QAbstractFileIconProvider* QFileSystemModel_iconProvider(const QFileSystemModel* self) {
	return self->iconProvider();
}

void QFileSystemModel_setFilter(QFileSystemModel* self, int filters) {
	self->setFilter(static_cast<QDir::Filters>(filters));
}

int QFileSystemModel_filter(const QFileSystemModel* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QFileSystemModel_setResolveSymlinks(QFileSystemModel* self, bool enable) {
	self->setResolveSymlinks(enable);
}

bool QFileSystemModel_resolveSymlinks(const QFileSystemModel* self) {
	return self->resolveSymlinks();
}

void QFileSystemModel_setReadOnly(QFileSystemModel* self, bool enable) {
	self->setReadOnly(enable);
}

bool QFileSystemModel_isReadOnly(const QFileSystemModel* self) {
	return self->isReadOnly();
}

void QFileSystemModel_setNameFilterDisables(QFileSystemModel* self, bool enable) {
	self->setNameFilterDisables(enable);
}

bool QFileSystemModel_nameFilterDisables(const QFileSystemModel* self) {
	return self->nameFilterDisables();
}

void QFileSystemModel_setNameFilters(QFileSystemModel* self, struct miqt_array /* of struct miqt_string */  filters) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	self->setNameFilters(filters_QList);
}

struct miqt_array /* of struct miqt_string */  QFileSystemModel_nameFilters(const QFileSystemModel* self) {
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

void QFileSystemModel_setOption(QFileSystemModel* self, int option) {
	self->setOption(static_cast<QFileSystemModel::Option>(option));
}

bool QFileSystemModel_testOption(const QFileSystemModel* self, int option) {
	return self->testOption(static_cast<QFileSystemModel::Option>(option));
}

void QFileSystemModel_setOptions(QFileSystemModel* self, int options) {
	self->setOptions(static_cast<QFileSystemModel::Options>(options));
}

int QFileSystemModel_options(const QFileSystemModel* self) {
	QFileSystemModel::Options _ret = self->options();
	return static_cast<int>(_ret);
}

struct miqt_string QFileSystemModel_filePath(const QFileSystemModel* self, QModelIndex* index) {
	QString _ret = self->filePath(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFileSystemModel_isDir(const QFileSystemModel* self, QModelIndex* index) {
	return self->isDir(*index);
}

long long QFileSystemModel_size(const QFileSystemModel* self, QModelIndex* index) {
	qint64 _ret = self->size(*index);
	return static_cast<long long>(_ret);
}

struct miqt_string QFileSystemModel_type(const QFileSystemModel* self, QModelIndex* index) {
	QString _ret = self->type(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QFileSystemModel_lastModified(const QFileSystemModel* self, QModelIndex* index) {
	return new QDateTime(self->lastModified(*index));
}

QModelIndex* QFileSystemModel_mkdir(QFileSystemModel* self, QModelIndex* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QModelIndex(self->mkdir(*parent, name_QString));
}

bool QFileSystemModel_rmdir(QFileSystemModel* self, QModelIndex* index) {
	return self->rmdir(*index);
}

struct miqt_string QFileSystemModel_fileName(const QFileSystemModel* self, QModelIndex* index) {
	QString _ret = self->fileName(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QFileSystemModel_fileIcon(const QFileSystemModel* self, QModelIndex* index) {
	return new QIcon(self->fileIcon(*index));
}

int QFileSystemModel_permissions(const QFileSystemModel* self, QModelIndex* index) {
	QFile::Permissions _ret = self->permissions(*index);
	return static_cast<int>(_ret);
}

QFileInfo* QFileSystemModel_fileInfo(const QFileSystemModel* self, QModelIndex* index) {
	return new QFileInfo(self->fileInfo(*index));
}

bool QFileSystemModel_remove(QFileSystemModel* self, QModelIndex* index) {
	return self->remove(*index);
}

struct miqt_string QFileSystemModel_tr2(const char* s, const char* c) {
	QString _ret = QFileSystemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileSystemModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QFileSystemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QFileSystemModel_index2(const QFileSystemModel* self, struct miqt_string path, int column) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString, static_cast<int>(column)));
}

QVariant* QFileSystemModel_myComputer1(const QFileSystemModel* self, int role) {
	return new QVariant(self->myComputer(static_cast<int>(role)));
}

void QFileSystemModel_setOption2(QFileSystemModel* self, int option, bool on) {
	self->setOption(static_cast<QFileSystemModel::Option>(option), on);
}

bool QFileSystemModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QFileSystemModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_index(row, column, parent);
}

bool QFileSystemModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__parent = slot;
	return true;
}

QModelIndex* QFileSystemModel_virtualbase_parent(const void* self, QModelIndex* child) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_parent(child);
}

bool QFileSystemModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QFileSystemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_sibling(row, column, idx);
}

bool QFileSystemModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasChildren = slot;
	return true;
}

bool QFileSystemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_hasChildren(parent);
}

bool QFileSystemModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QFileSystemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_canFetchMore(parent);
}

bool QFileSystemModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fetchMore = slot;
	return true;
}

void QFileSystemModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_fetchMore(parent);
}

bool QFileSystemModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowCount = slot;
	return true;
}

int QFileSystemModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_rowCount(parent);
}

bool QFileSystemModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__columnCount = slot;
	return true;
}

int QFileSystemModel_virtualbase_columnCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_columnCount(parent);
}

bool QFileSystemModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

QVariant* QFileSystemModel_virtualbase_data(const void* self, QModelIndex* index, int role) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_data(index, role);
}

bool QFileSystemModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_setData(index, value, role);
}

bool QFileSystemModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QFileSystemModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_headerData(section, orientation, role);
}

bool QFileSystemModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__flags = slot;
	return true;
}

int QFileSystemModel_virtualbase_flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_flags(index);
}

bool QFileSystemModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sort = slot;
	return true;
}

void QFileSystemModel_virtualbase_sort(void* self, int column, int order) {
	( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_sort(column, order);
}

bool QFileSystemModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QFileSystemModel_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_mimeTypes();
}

bool QFileSystemModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QFileSystemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_mimeData(indexes);
}

bool QFileSystemModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_dropMimeData(data, action, row, column, parent);
}

bool QFileSystemModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QFileSystemModel_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_supportedDropActions();
}

bool QFileSystemModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QFileSystemModel_virtualbase_roleNames(const void* self) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_roleNames();
}

bool QFileSystemModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QFileSystemModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_timerEvent(event);
}

bool QFileSystemModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QFileSystemModel_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_event(event);
}

bool QFileSystemModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_setHeaderData(section, orientation, value, role);
}

bool QFileSystemModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QFileSystemModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_itemData(index);
}

bool QFileSystemModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setItemData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_setItemData(index, roles);
}

bool QFileSystemModel_override_virtual_clearItemData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clearItemData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_clearItemData(void* self, QModelIndex* index) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_clearItemData(index);
}

bool QFileSystemModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_canDropMimeData(data, action, row, column, parent);
}

bool QFileSystemModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QFileSystemModel_virtualbase_supportedDragActions(const void* self) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_supportedDragActions();
}

bool QFileSystemModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertRows = slot;
	return true;
}

bool QFileSystemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_insertRows(row, count, parent);
}

bool QFileSystemModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertColumns = slot;
	return true;
}

bool QFileSystemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_insertColumns(column, count, parent);
}

bool QFileSystemModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeRows = slot;
	return true;
}

bool QFileSystemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_removeRows(row, count, parent);
}

bool QFileSystemModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeColumns = slot;
	return true;
}

bool QFileSystemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_removeColumns(column, count, parent);
}

bool QFileSystemModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveRows = slot;
	return true;
}

bool QFileSystemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QFileSystemModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveColumns = slot;
	return true;
}

bool QFileSystemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QFileSystemModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QFileSystemModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_buddy(index);
}

bool QFileSystemModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QFileSystemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_match(start, role, value, hits, flags);
}

bool QFileSystemModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__span = slot;
	return true;
}

QSize* QFileSystemModel_virtualbase_span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_span(index);
}

bool QFileSystemModel_override_virtual_multiData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__multiData = slot;
	return true;
}

void QFileSystemModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	( (const MiqtVirtualQFileSystemModel*)(self) )->virtualbase_multiData(index, roleDataSpan);
}

bool QFileSystemModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__submit = slot;
	return true;
}

bool QFileSystemModel_virtualbase_submit(void* self) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_submit();
}

bool QFileSystemModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__revert = slot;
	return true;
}

void QFileSystemModel_virtualbase_revert(void* self) {
	( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_revert();
}

bool QFileSystemModel_override_virtual_resetInternalData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resetInternalData = slot;
	return true;
}

void QFileSystemModel_virtualbase_resetInternalData(void* self) {
	( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_resetInternalData();
}

bool QFileSystemModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFileSystemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QFileSystemModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QFileSystemModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_childEvent(event);
}

bool QFileSystemModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QFileSystemModel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_customEvent(event);
}

bool QFileSystemModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QFileSystemModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_connectNotify(signal);
}

bool QFileSystemModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QFileSystemModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQFileSystemModel*)(self) )->virtualbase_disconnectNotify(signal);
}

QModelIndex* QFileSystemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));

}

void QFileSystemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
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

bool QFileSystemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);

}

void QFileSystemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QFileSystemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertRows();

}

void QFileSystemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QFileSystemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveRows();

}

bool QFileSystemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));

}

void QFileSystemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveRows();

}

void QFileSystemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QFileSystemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertColumns();

}

void QFileSystemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QFileSystemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveColumns();

}

bool QFileSystemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));

}

void QFileSystemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveColumns();

}

void QFileSystemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginResetModel();

}

void QFileSystemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endResetModel();

}

void QFileSystemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->changePersistentIndex(*from, *to);

}

void QFileSystemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QFileSystemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
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

QObject* QFileSystemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QFileSystemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QFileSystemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QFileSystemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFileSystemModel* self_cast = dynamic_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QFileSystemModel_delete(QFileSystemModel* self) {
	delete self;
}

