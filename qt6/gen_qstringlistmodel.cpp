#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
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
#include <QStringListModel>
#include <QTimerEvent>
#include <QVariant>
#include <qstringlistmodel.h>
#include "gen_qstringlistmodel.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QStringListModel_rowCount(const QStringListModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QStringListModel_sibling(const QStringListModel*, intptr_t, int, int, QModelIndex*);
QVariant* miqt_exec_callback_QStringListModel_data(const QStringListModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QStringListModel_setData(QStringListModel*, intptr_t, QModelIndex*, QVariant*, int);
bool miqt_exec_callback_QStringListModel_clearItemData(QStringListModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QStringListModel_flags(const QStringListModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QStringListModel_insertRows(QStringListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QStringListModel_removeRows(QStringListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QStringListModel_moveRows(QStringListModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QStringListModel_itemData(const QStringListModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QStringListModel_setItemData(QStringListModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
void miqt_exec_callback_QStringListModel_sort(QStringListModel*, intptr_t, int, int);
int miqt_exec_callback_QStringListModel_supportedDropActions(const QStringListModel*, intptr_t);
QModelIndex* miqt_exec_callback_QStringListModel_index(const QStringListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QStringListModel_dropMimeData(QStringListModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
QVariant* miqt_exec_callback_QStringListModel_headerData(const QStringListModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QStringListModel_setHeaderData(QStringListModel*, intptr_t, int, int, QVariant*, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QStringListModel_mimeTypes(const QStringListModel*, intptr_t);
QMimeData* miqt_exec_callback_QStringListModel_mimeData(const QStringListModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QStringListModel_canDropMimeData(const QStringListModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QStringListModel_supportedDragActions(const QStringListModel*, intptr_t);
bool miqt_exec_callback_QStringListModel_insertColumns(QStringListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QStringListModel_removeColumns(QStringListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QStringListModel_moveColumns(QStringListModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QStringListModel_fetchMore(QStringListModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QStringListModel_canFetchMore(const QStringListModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QStringListModel_buddy(const QStringListModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QStringListModel_match(const QStringListModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QStringListModel_span(const QStringListModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QStringListModel_roleNames(const QStringListModel*, intptr_t);
void miqt_exec_callback_QStringListModel_multiData(const QStringListModel*, intptr_t, QModelIndex*, QModelRoleDataSpan*);
bool miqt_exec_callback_QStringListModel_submit(QStringListModel*, intptr_t);
void miqt_exec_callback_QStringListModel_revert(QStringListModel*, intptr_t);
void miqt_exec_callback_QStringListModel_resetInternalData(QStringListModel*, intptr_t);
bool miqt_exec_callback_QStringListModel_event(QStringListModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QStringListModel_eventFilter(QStringListModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStringListModel_timerEvent(QStringListModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStringListModel_childEvent(QStringListModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStringListModel_customEvent(QStringListModel*, intptr_t, QEvent*);
void miqt_exec_callback_QStringListModel_connectNotify(QStringListModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStringListModel_disconnectNotify(QStringListModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStringListModel final : public QStringListModel {
public:

	MiqtVirtualQStringListModel(): QStringListModel() {};
	MiqtVirtualQStringListModel(const QStringList& strings): QStringListModel(strings) {};
	MiqtVirtualQStringListModel(QObject* parent): QStringListModel(parent) {};
	MiqtVirtualQStringListModel(const QStringList& strings, QObject* parent): QStringListModel(strings, parent) {};

	virtual ~MiqtVirtualQStringListModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QStringListModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QStringListModel_rowCount(this, handle__rowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_rowCount(QModelIndex* parent) const {

		return QStringListModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QStringListModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QStringListModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QStringListModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QStringListModel::data(index, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QStringListModel_data(this, handle__data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_data(QModelIndex* index, int role) const {

		return new QVariant(QStringListModel::data(*index, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QStringListModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QStringListModel_setData(this, handle__setData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setData(QModelIndex* index, QVariant* value, int role) {

		return QStringListModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__clearItemData == 0) {
			return QStringListModel::clearItemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QStringListModel_clearItemData(this, handle__clearItemData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_clearItemData(QModelIndex* index) {

		return QStringListModel::clearItemData(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QStringListModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QStringListModel_flags(this, handle__flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QStringListModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QStringListModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStringListModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertRows(int row, int count, QModelIndex* parent) {

		return QStringListModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QStringListModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStringListModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeRows(int row, int count, QModelIndex* parent) {

		return QStringListModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QStringListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QStringListModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QStringListModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QStringListModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QStringListModel_itemData(this, handle__itemData, sigval1);
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

		QMap<int, QVariant> _ret = QStringListModel::itemData(*index);
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
			return QStringListModel::setItemData(index, roles);
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

		bool callback_return_value = miqt_exec_callback_QStringListModel_setItemData(this, handle__setItemData, sigval1, sigval2);

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

		return QStringListModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QStringListModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QStringListModel_sort(this, handle__sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sort(int column, int order) {

		QStringListModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QStringListModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QStringListModel_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QStringListModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QStringListModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QStringListModel_index(this, handle__index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QStringListModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QStringListModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStringListModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QStringListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QStringListModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QStringListModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_headerData(int section, int orientation, int role) const {

		return new QVariant(QStringListModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QStringListModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QStringListModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setHeaderData(int section, int orientation, QVariant* value, int role) {

		return QStringListModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QStringListModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QStringListModel_mimeTypes(this, handle__mimeTypes);
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

		QStringList _ret = QStringListModel::mimeTypes();
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
			return QStringListModel::mimeData(indexes);
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

		QMimeData* callback_return_value = miqt_exec_callback_QStringListModel_mimeData(this, handle__mimeData, sigval1);

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

		return QStringListModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QStringListModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStringListModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QStringListModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QStringListModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QStringListModel_supportedDragActions(this, handle__supportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDragActions() const {

		Qt::DropActions _ret = QStringListModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QStringListModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStringListModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertColumns(int column, int count, QModelIndex* parent) {

		return QStringListModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QStringListModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStringListModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeColumns(int column, int count, QModelIndex* parent) {

		return QStringListModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QStringListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QStringListModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QStringListModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QStringListModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QStringListModel_fetchMore(this, handle__fetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fetchMore(QModelIndex* parent) {

		QStringListModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QStringListModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStringListModel_canFetchMore(this, handle__canFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canFetchMore(QModelIndex* parent) const {

		return QStringListModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QStringListModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QStringListModel_buddy(this, handle__buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_buddy(QModelIndex* index) const {

		return new QModelIndex(QStringListModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QStringListModel::match(start, role, value, hits, flags);
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QStringListModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
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

		QModelIndexList _ret = QStringListModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
			return QStringListModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QStringListModel_span(this, handle__span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_span(QModelIndex* index) const {

		return new QSize(QStringListModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QStringListModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QStringListModel_roleNames(this, handle__roleNames);
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

		QHash<int, QByteArray> _ret = QStringListModel::roleNames();
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
			QStringListModel::multiData(index, roleDataSpan);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelRoleDataSpan* sigval2 = new QModelRoleDataSpan(roleDataSpan);

		miqt_exec_callback_QStringListModel_multiData(this, handle__multiData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_multiData(QModelIndex* index, QModelRoleDataSpan* roleDataSpan) const {

		QStringListModel::multiData(*index, *roleDataSpan);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QStringListModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QStringListModel_submit(this, handle__submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_submit() {

		return QStringListModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QStringListModel::revert();
			return;
		}
		

		miqt_exec_callback_QStringListModel_revert(this, handle__revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_revert() {

		QStringListModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetInternalData = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetInternalData() override {
		if (handle__resetInternalData == 0) {
			QStringListModel::resetInternalData();
			return;
		}
		

		miqt_exec_callback_QStringListModel_resetInternalData(this, handle__resetInternalData);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_resetInternalData() {

		QStringListModel::resetInternalData();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QStringListModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QStringListModel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QStringListModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QStringListModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QStringListModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QStringListModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QStringListModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QStringListModel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QStringListModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QStringListModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QStringListModel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QStringListModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QStringListModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QStringListModel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QStringListModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QStringListModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStringListModel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QStringListModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QStringListModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QStringListModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QStringListModel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QModelIndex* QStringListModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QStringListModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QStringListModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QStringListModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QStringListModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QStringListModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QStringListModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QStringListModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QStringListModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QStringListModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QStringListModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QStringListModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QStringListModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QStringListModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QStringListModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QStringListModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QStringListModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QStringListModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QStringListModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QStringListModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QStringListModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStringListModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStringListModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStringListModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QStringListModel* QStringListModel_new() {
	return new MiqtVirtualQStringListModel();
}

QStringListModel* QStringListModel_new2(struct miqt_array /* of struct miqt_string */  strings) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQStringListModel(strings_QList);
}

QStringListModel* QStringListModel_new3(QObject* parent) {
	return new MiqtVirtualQStringListModel(parent);
}

QStringListModel* QStringListModel_new4(struct miqt_array /* of struct miqt_string */  strings, QObject* parent) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	return new MiqtVirtualQStringListModel(strings_QList, parent);
}

void QStringListModel_virtbase(QStringListModel* src, QAbstractListModel** outptr_QAbstractListModel) {
	*outptr_QAbstractListModel = static_cast<QAbstractListModel*>(src);
}

QMetaObject* QStringListModel_metaObject(const QStringListModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStringListModel_metacast(QStringListModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStringListModel_tr(const char* s) {
	QString _ret = QStringListModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStringListModel_rowCount(const QStringListModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

QModelIndex* QStringListModel_sibling(const QStringListModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QVariant* QStringListModel_data(const QStringListModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QStringListModel_setData(QStringListModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QStringListModel_clearItemData(QStringListModel* self, QModelIndex* index) {
	return self->clearItemData(*index);
}

int QStringListModel_flags(const QStringListModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

bool QStringListModel_insertRows(QStringListModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStringListModel_removeRows(QStringListModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStringListModel_moveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

struct miqt_map /* of int to QVariant* */  QStringListModel_itemData(const QStringListModel* self, QModelIndex* index) {
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

bool QStringListModel_setItemData(QStringListModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

void QStringListModel_sort(QStringListModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_array /* of struct miqt_string */  QStringListModel_stringList(const QStringListModel* self) {
	QStringList _ret = self->stringList();
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

void QStringListModel_setStringList(QStringListModel* self, struct miqt_array /* of struct miqt_string */  strings) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	self->setStringList(strings_QList);
}

int QStringListModel_supportedDropActions(const QStringListModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_string QStringListModel_tr2(const char* s, const char* c) {
	QString _ret = QStringListModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStringListModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QStringListModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStringListModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowCount = slot;
	return true;
}

int QStringListModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_rowCount(parent);
}

bool QStringListModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QStringListModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_sibling(row, column, idx);
}

bool QStringListModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

QVariant* QStringListModel_virtualbase_data(const void* self, QModelIndex* index, int role) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_data(index, role);
}

bool QStringListModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

bool QStringListModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_setData(index, value, role);
}

bool QStringListModel_override_virtual_clearItemData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clearItemData = slot;
	return true;
}

bool QStringListModel_virtualbase_clearItemData(void* self, QModelIndex* index) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_clearItemData(index);
}

bool QStringListModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__flags = slot;
	return true;
}

int QStringListModel_virtualbase_flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_flags(index);
}

bool QStringListModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertRows = slot;
	return true;
}

bool QStringListModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_insertRows(row, count, parent);
}

bool QStringListModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeRows = slot;
	return true;
}

bool QStringListModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_removeRows(row, count, parent);
}

bool QStringListModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveRows = slot;
	return true;
}

bool QStringListModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QStringListModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QStringListModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_itemData(index);
}

bool QStringListModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setItemData = slot;
	return true;
}

bool QStringListModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_setItemData(index, roles);
}

bool QStringListModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sort = slot;
	return true;
}

void QStringListModel_virtualbase_sort(void* self, int column, int order) {
	( (MiqtVirtualQStringListModel*)(self) )->virtualbase_sort(column, order);
}

bool QStringListModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QStringListModel_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_supportedDropActions();
}

bool QStringListModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QStringListModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_index(row, column, parent);
}

bool QStringListModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QStringListModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_dropMimeData(data, action, row, column, parent);
}

bool QStringListModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QStringListModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_headerData(section, orientation, role);
}

bool QStringListModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QStringListModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_setHeaderData(section, orientation, value, role);
}

bool QStringListModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QStringListModel_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_mimeTypes();
}

bool QStringListModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QStringListModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_mimeData(indexes);
}

bool QStringListModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QStringListModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_canDropMimeData(data, action, row, column, parent);
}

bool QStringListModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QStringListModel_virtualbase_supportedDragActions(const void* self) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_supportedDragActions();
}

bool QStringListModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertColumns = slot;
	return true;
}

bool QStringListModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_insertColumns(column, count, parent);
}

bool QStringListModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeColumns = slot;
	return true;
}

bool QStringListModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_removeColumns(column, count, parent);
}

bool QStringListModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveColumns = slot;
	return true;
}

bool QStringListModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QStringListModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fetchMore = slot;
	return true;
}

void QStringListModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQStringListModel*)(self) )->virtualbase_fetchMore(parent);
}

bool QStringListModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QStringListModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_canFetchMore(parent);
}

bool QStringListModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QStringListModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_buddy(index);
}

bool QStringListModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QStringListModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_match(start, role, value, hits, flags);
}

bool QStringListModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__span = slot;
	return true;
}

QSize* QStringListModel_virtualbase_span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_span(index);
}

bool QStringListModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QStringListModel_virtualbase_roleNames(const void* self) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_roleNames();
}

bool QStringListModel_override_virtual_multiData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__multiData = slot;
	return true;
}

void QStringListModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_multiData(index, roleDataSpan);
}

bool QStringListModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__submit = slot;
	return true;
}

bool QStringListModel_virtualbase_submit(void* self) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_submit();
}

bool QStringListModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__revert = slot;
	return true;
}

void QStringListModel_virtualbase_revert(void* self) {
	( (MiqtVirtualQStringListModel*)(self) )->virtualbase_revert();
}

bool QStringListModel_override_virtual_resetInternalData(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resetInternalData = slot;
	return true;
}

void QStringListModel_virtualbase_resetInternalData(void* self) {
	( (MiqtVirtualQStringListModel*)(self) )->virtualbase_resetInternalData();
}

bool QStringListModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QStringListModel_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_event(event);
}

bool QStringListModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QStringListModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QStringListModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QStringListModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQStringListModel*)(self) )->virtualbase_timerEvent(event);
}

bool QStringListModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QStringListModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQStringListModel*)(self) )->virtualbase_childEvent(event);
}

bool QStringListModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QStringListModel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQStringListModel*)(self) )->virtualbase_customEvent(event);
}

bool QStringListModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QStringListModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStringListModel*)(self) )->virtualbase_connectNotify(signal);
}

bool QStringListModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QStringListModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQStringListModel*)(self) )->virtualbase_disconnectNotify(signal);
}

QModelIndex* QStringListModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));

}

void QStringListModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
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

bool QStringListModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);

}

void QStringListModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QStringListModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertRows();

}

void QStringListModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QStringListModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveRows();

}

bool QStringListModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));

}

void QStringListModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveRows();

}

void QStringListModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QStringListModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertColumns();

}

void QStringListModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QStringListModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveColumns();

}

bool QStringListModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));

}

void QStringListModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveColumns();

}

void QStringListModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginResetModel();

}

void QStringListModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endResetModel();

}

void QStringListModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->changePersistentIndex(*from, *to);

}

void QStringListModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QStringListModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
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

QObject* QStringListModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QStringListModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QStringListModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QStringListModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStringListModel* self_cast = dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QStringListModel_delete(QStringListModel* self) {
	delete self;
}

