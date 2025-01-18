#include <QAbstractItemModel>
#include <QByteArray>
#include <QDirModel>
#include <QFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QList>
#include <QMap>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qdirmodel.h>
#include "gen_qdirmodel.h"

#ifdef __cplusplus
extern "C" {
#endif

QModelIndex* miqt_exec_callback_QDirModel_Index(void*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QDirModel_Parent(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QDirModel_RowCount(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QDirModel_ColumnCount(void*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QDirModel_Data(void*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QDirModel_SetData(void*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QDirModel_HeaderData(void*, intptr_t, int, int, int);
bool miqt_exec_callback_QDirModel_HasChildren(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QDirModel_Flags(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QDirModel_Sort(void*, intptr_t, int, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QDirModel_MimeTypes(void*, intptr_t);
QMimeData* miqt_exec_callback_QDirModel_MimeData(void*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QDirModel_DropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QDirModel_SupportedDropActions(void*, intptr_t);
QModelIndex* miqt_exec_callback_QDirModel_Sibling(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QDirModel_SetHeaderData(void*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QDirModel_ItemData(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QDirModel_SetItemData(void*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QDirModel_CanDropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QDirModel_SupportedDragActions(void*, intptr_t);
bool miqt_exec_callback_QDirModel_InsertRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QDirModel_InsertColumns(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QDirModel_RemoveRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QDirModel_RemoveColumns(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QDirModel_MoveRows(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QDirModel_MoveColumns(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QDirModel_FetchMore(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QDirModel_CanFetchMore(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QDirModel_Buddy(void*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QDirModel_Match(void*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QDirModel_Span(void*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QDirModel_RoleNames(void*, intptr_t);
bool miqt_exec_callback_QDirModel_Submit(void*, intptr_t);
void miqt_exec_callback_QDirModel_Revert(void*, intptr_t);
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
	intptr_t handle__Index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__Index == 0) {
			return QDirModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QDirModel_Index(const_cast<MiqtVirtualQDirModel*>(this), handle__Index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QDirModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__Parent == 0) {
			return QDirModel::parent(child);
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QDirModel_Parent(const_cast<MiqtVirtualQDirModel*>(this), handle__Parent, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Parent(QModelIndex* child) const {

		return new QModelIndex(QDirModel::parent(*child));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__RowCount == 0) {
			return QDirModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QDirModel_RowCount(const_cast<MiqtVirtualQDirModel*>(this), handle__RowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_RowCount(QModelIndex* parent) const {

		return QDirModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ColumnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__ColumnCount == 0) {
			return QDirModel::columnCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QDirModel_ColumnCount(const_cast<MiqtVirtualQDirModel*>(this), handle__ColumnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ColumnCount(QModelIndex* parent) const {

		return QDirModel::columnCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__Data == 0) {
			return QDirModel::data(index, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QDirModel_Data(const_cast<MiqtVirtualQDirModel*>(this), handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(QModelIndex* index, int role) const {

		return new QVariant(QDirModel::data(*index, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			return QDirModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QDirModel_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetData(QModelIndex* index, QVariant* value, int role) {

		return QDirModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__HeaderData == 0) {
			return QDirModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QDirModel_HeaderData(const_cast<MiqtVirtualQDirModel*>(this), handle__HeaderData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_HeaderData(int section, int orientation, int role) const {

		return new QVariant(QDirModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& index) const override {
		if (handle__HasChildren == 0) {
			return QDirModel::hasChildren(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_HasChildren(const_cast<MiqtVirtualQDirModel*>(this), handle__HasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasChildren(QModelIndex* index) const {

		return QDirModel::hasChildren(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__Flags == 0) {
			return QDirModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QDirModel_Flags(const_cast<MiqtVirtualQDirModel*>(this), handle__Flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QDirModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__Sort == 0) {
			QDirModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QDirModel_Sort(this, handle__Sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Sort(int column, int order) {

		QDirModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QDirModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QDirModel_MimeTypes(const_cast<MiqtVirtualQDirModel*>(this), handle__MimeTypes);
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
	struct miqt_array /* of struct miqt_string */  virtualbase_MimeTypes() const {

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
	intptr_t handle__MimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__MimeData == 0) {
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

		QMimeData* callback_return_value = miqt_exec_callback_QDirModel_MimeData(const_cast<MiqtVirtualQDirModel*>(this), handle__MimeData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMimeData* virtualbase_MimeData(struct miqt_array /* of QModelIndex* */  indexes) const {
		QModelIndexList indexes_QList;
		indexes_QList.reserve(indexes.len);
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
		for(size_t i = 0; i < indexes.len; ++i) {
			indexes_QList.push_back(*(indexes_arr[i]));
		}

		return QDirModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__DropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QDirModel_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QDirModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QDirModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QDirModel_SupportedDropActions(const_cast<MiqtVirtualQDirModel*>(this), handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QDirModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__Sibling == 0) {
			return QDirModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QDirModel_Sibling(const_cast<MiqtVirtualQDirModel*>(this), handle__Sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QDirModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__SetHeaderData == 0) {
			return QDirModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QDirModel_SetHeaderData(this, handle__SetHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetHeaderData(int section, int orientation, QVariant* value, int role) {

		return QDirModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__ItemData == 0) {
			return QDirModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QDirModel_ItemData(const_cast<MiqtVirtualQDirModel*>(this), handle__ItemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}

		return callback_return_value_QMap;
	}

	// Wrapper to allow calling protected method
	struct miqt_map /* of int to QVariant* */  virtualbase_ItemData(QModelIndex* index) const {

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
	intptr_t handle__SetItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__SetItemData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QDirModel_SetItemData(this, handle__SetItemData, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetItemData(QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
		QMap<int, QVariant> roles_QMap;
		int* roles_karr = static_cast<int*>(roles.keys);
		QVariant** roles_varr = static_cast<QVariant**>(roles.values);
		for(size_t i = 0; i < roles.len; ++i) {
			roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
		}

		return QDirModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__CanDropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QDirModel_CanDropMimeData(const_cast<MiqtVirtualQDirModel*>(this), handle__CanDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QDirModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__SupportedDragActions == 0) {
			return QDirModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QDirModel_SupportedDragActions(const_cast<MiqtVirtualQDirModel*>(this), handle__SupportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDragActions() const {

		Qt::DropActions _ret = QDirModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__InsertRows == 0) {
			return QDirModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_InsertRows(this, handle__InsertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertRows(int row, int count, QModelIndex* parent) {

		return QDirModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__InsertColumns == 0) {
			return QDirModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_InsertColumns(this, handle__InsertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertColumns(int column, int count, QModelIndex* parent) {

		return QDirModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__RemoveRows == 0) {
			return QDirModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_RemoveRows(this, handle__RemoveRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveRows(int row, int count, QModelIndex* parent) {

		return QDirModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__RemoveColumns == 0) {
			return QDirModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_RemoveColumns(this, handle__RemoveColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveColumns(int column, int count, QModelIndex* parent) {

		return QDirModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveRows == 0) {
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

		bool callback_return_value = miqt_exec_callback_QDirModel_MoveRows(this, handle__MoveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QDirModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveColumns == 0) {
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

		bool callback_return_value = miqt_exec_callback_QDirModel_MoveColumns(this, handle__MoveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QDirModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__FetchMore == 0) {
			QDirModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QDirModel_FetchMore(this, handle__FetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FetchMore(QModelIndex* parent) {

		QDirModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__CanFetchMore == 0) {
			return QDirModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QDirModel_CanFetchMore(const_cast<MiqtVirtualQDirModel*>(this), handle__CanFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanFetchMore(QModelIndex* parent) const {

		return QDirModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__Buddy == 0) {
			return QDirModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QDirModel_Buddy(const_cast<MiqtVirtualQDirModel*>(this), handle__Buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Buddy(QModelIndex* index) const {

		return new QModelIndex(QDirModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__Match == 0) {
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QDirModel_Match(const_cast<MiqtVirtualQDirModel*>(this), handle__Match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of QModelIndex* */  virtualbase_Match(QModelIndex* start, int role, QVariant* value, int hits, int flags) const {

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
	intptr_t handle__Span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__Span == 0) {
			return QDirModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QDirModel_Span(const_cast<MiqtVirtualQDirModel*>(this), handle__Span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Span(QModelIndex* index) const {

		return new QSize(QDirModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RoleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__RoleNames == 0) {
			return QDirModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QDirModel_RoleNames(const_cast<MiqtVirtualQDirModel*>(this), handle__RoleNames);
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
	struct miqt_map /* of int to struct miqt_string */  virtualbase_RoleNames() const {

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
	intptr_t handle__Submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__Submit == 0) {
			return QDirModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QDirModel_Submit(this, handle__Submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Submit() {

		return QDirModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__Revert == 0) {
			QDirModel::revert();
			return;
		}
		

		miqt_exec_callback_QDirModel_Revert(this, handle__Revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Revert() {

		QDirModel::revert();

	}

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

QMetaObject* QDirModel_MetaObject(const QDirModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDirModel_Metacast(QDirModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDirModel_Tr(const char* s) {
	QString _ret = QDirModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_TrUtf8(const char* s) {
	QString _ret = QDirModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QDirModel_Index(const QDirModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QDirModel_Parent(const QDirModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

int QDirModel_RowCount(const QDirModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QDirModel_ColumnCount(const QDirModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QDirModel_Data(const QDirModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QDirModel_SetData(QDirModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QDirModel_HeaderData(const QDirModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QDirModel_HasChildren(const QDirModel* self, QModelIndex* index) {
	return self->hasChildren(*index);
}

int QDirModel_Flags(const QDirModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QDirModel_Sort(QDirModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_array /* of struct miqt_string */  QDirModel_MimeTypes(const QDirModel* self) {
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

QMimeData* QDirModel_MimeData(const QDirModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QDirModel_DropMimeData(QDirModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QDirModel_SupportedDropActions(const QDirModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

void QDirModel_SetIconProvider(QDirModel* self, QFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QFileIconProvider* QDirModel_IconProvider(const QDirModel* self) {
	return self->iconProvider();
}

void QDirModel_SetNameFilters(QDirModel* self, struct miqt_array /* of struct miqt_string */  filters) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	self->setNameFilters(filters_QList);
}

struct miqt_array /* of struct miqt_string */  QDirModel_NameFilters(const QDirModel* self) {
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

void QDirModel_SetFilter(QDirModel* self, int filters) {
	self->setFilter(static_cast<QDir::Filters>(filters));
}

int QDirModel_Filter(const QDirModel* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QDirModel_SetSorting(QDirModel* self, int sort) {
	self->setSorting(static_cast<QDir::SortFlags>(sort));
}

int QDirModel_Sorting(const QDirModel* self) {
	QDir::SortFlags _ret = self->sorting();
	return static_cast<int>(_ret);
}

void QDirModel_SetResolveSymlinks(QDirModel* self, bool enable) {
	self->setResolveSymlinks(enable);
}

bool QDirModel_ResolveSymlinks(const QDirModel* self) {
	return self->resolveSymlinks();
}

void QDirModel_SetReadOnly(QDirModel* self, bool enable) {
	self->setReadOnly(enable);
}

bool QDirModel_IsReadOnly(const QDirModel* self) {
	return self->isReadOnly();
}

void QDirModel_SetLazyChildCount(QDirModel* self, bool enable) {
	self->setLazyChildCount(enable);
}

bool QDirModel_LazyChildCount(const QDirModel* self) {
	return self->lazyChildCount();
}

QModelIndex* QDirModel_IndexWithPath(const QDirModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString));
}

bool QDirModel_IsDir(const QDirModel* self, QModelIndex* index) {
	return self->isDir(*index);
}

QModelIndex* QDirModel_Mkdir(QDirModel* self, QModelIndex* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QModelIndex(self->mkdir(*parent, name_QString));
}

bool QDirModel_Rmdir(QDirModel* self, QModelIndex* index) {
	return self->rmdir(*index);
}

bool QDirModel_Remove(QDirModel* self, QModelIndex* index) {
	return self->remove(*index);
}

struct miqt_string QDirModel_FilePath(const QDirModel* self, QModelIndex* index) {
	QString _ret = self->filePath(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_FileName(const QDirModel* self, QModelIndex* index) {
	QString _ret = self->fileName(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QDirModel_FileIcon(const QDirModel* self, QModelIndex* index) {
	return new QIcon(self->fileIcon(*index));
}

QFileInfo* QDirModel_FileInfo(const QDirModel* self, QModelIndex* index) {
	return new QFileInfo(self->fileInfo(*index));
}

void QDirModel_Refresh(QDirModel* self) {
	self->refresh();
}

struct miqt_string QDirModel_Tr2(const char* s, const char* c) {
	QString _ret = QDirModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDirModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QDirModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDirModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDirModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QDirModel_Index2(const QDirModel* self, struct miqt_string path, int column) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString, static_cast<int>(column)));
}

void QDirModel_Refresh1(QDirModel* self, QModelIndex* parent) {
	self->refresh(*parent);
}

bool QDirModel_override_virtual_Index(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Index = slot;
	return true;
}

QModelIndex* QDirModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_Index(row, column, parent);
}

bool QDirModel_override_virtual_Parent(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Parent = slot;
	return true;
}

QModelIndex* QDirModel_virtualbase_Parent(const void* self, QModelIndex* child) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_Parent(child);
}

bool QDirModel_override_virtual_RowCount(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowCount = slot;
	return true;
}

int QDirModel_virtualbase_RowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_RowCount(parent);
}

bool QDirModel_override_virtual_ColumnCount(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ColumnCount = slot;
	return true;
}

int QDirModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_ColumnCount(parent);
}

bool QDirModel_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

QVariant* QDirModel_virtualbase_Data(const void* self, QModelIndex* index, int role) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_Data(index, role);
}

bool QDirModel_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

bool QDirModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_SetData(index, value, role);
}

bool QDirModel_override_virtual_HeaderData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeaderData = slot;
	return true;
}

QVariant* QDirModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_HeaderData(section, orientation, role);
}

bool QDirModel_override_virtual_HasChildren(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasChildren = slot;
	return true;
}

bool QDirModel_virtualbase_HasChildren(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_HasChildren(index);
}

bool QDirModel_override_virtual_Flags(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Flags = slot;
	return true;
}

int QDirModel_virtualbase_Flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_Flags(index);
}

bool QDirModel_override_virtual_Sort(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sort = slot;
	return true;
}

void QDirModel_virtualbase_Sort(void* self, int column, int order) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_Sort(column, order);
}

bool QDirModel_override_virtual_MimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QDirModel_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_MimeTypes();
}

bool QDirModel_override_virtual_MimeData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeData = slot;
	return true;
}

QMimeData* QDirModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_MimeData(indexes);
}

bool QDirModel_override_virtual_DropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropMimeData = slot;
	return true;
}

bool QDirModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_DropMimeData(data, action, row, column, parent);
}

bool QDirModel_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDropActions = slot;
	return true;
}

int QDirModel_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_SupportedDropActions();
}

bool QDirModel_override_virtual_Sibling(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sibling = slot;
	return true;
}

QModelIndex* QDirModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_Sibling(row, column, idx);
}

bool QDirModel_override_virtual_SetHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetHeaderData = slot;
	return true;
}

bool QDirModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_SetHeaderData(section, orientation, value, role);
}

bool QDirModel_override_virtual_ItemData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QDirModel_virtualbase_ItemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_ItemData(index);
}

bool QDirModel_override_virtual_SetItemData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetItemData = slot;
	return true;
}

bool QDirModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_SetItemData(index, roles);
}

bool QDirModel_override_virtual_CanDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanDropMimeData = slot;
	return true;
}

bool QDirModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_CanDropMimeData(data, action, row, column, parent);
}

bool QDirModel_override_virtual_SupportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDragActions = slot;
	return true;
}

int QDirModel_virtualbase_SupportedDragActions(const void* self) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_SupportedDragActions();
}

bool QDirModel_override_virtual_InsertRows(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertRows = slot;
	return true;
}

bool QDirModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_InsertRows(row, count, parent);
}

bool QDirModel_override_virtual_InsertColumns(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertColumns = slot;
	return true;
}

bool QDirModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_InsertColumns(column, count, parent);
}

bool QDirModel_override_virtual_RemoveRows(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveRows = slot;
	return true;
}

bool QDirModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_RemoveRows(row, count, parent);
}

bool QDirModel_override_virtual_RemoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveColumns = slot;
	return true;
}

bool QDirModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_RemoveColumns(column, count, parent);
}

bool QDirModel_override_virtual_MoveRows(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveRows = slot;
	return true;
}

bool QDirModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_MoveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QDirModel_override_virtual_MoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveColumns = slot;
	return true;
}

bool QDirModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_MoveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QDirModel_override_virtual_FetchMore(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FetchMore = slot;
	return true;
}

void QDirModel_virtualbase_FetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_FetchMore(parent);
}

bool QDirModel_override_virtual_CanFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanFetchMore = slot;
	return true;
}

bool QDirModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_CanFetchMore(parent);
}

bool QDirModel_override_virtual_Buddy(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Buddy = slot;
	return true;
}

QModelIndex* QDirModel_virtualbase_Buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_Buddy(index);
}

bool QDirModel_override_virtual_Match(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QDirModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_Match(start, role, value, hits, flags);
}

bool QDirModel_override_virtual_Span(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Span = slot;
	return true;
}

QSize* QDirModel_virtualbase_Span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_Span(index);
}

bool QDirModel_override_virtual_RoleNames(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RoleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QDirModel_virtualbase_RoleNames(const void* self) {
	return ( (const MiqtVirtualQDirModel*)(self) )->virtualbase_RoleNames();
}

bool QDirModel_override_virtual_Submit(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Submit = slot;
	return true;
}

bool QDirModel_virtualbase_Submit(void* self) {
	return ( (MiqtVirtualQDirModel*)(self) )->virtualbase_Submit();
}

bool QDirModel_override_virtual_Revert(void* self, intptr_t slot) {
	MiqtVirtualQDirModel* self_cast = dynamic_cast<MiqtVirtualQDirModel*>( (QDirModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Revert = slot;
	return true;
}

void QDirModel_virtualbase_Revert(void* self) {
	( (MiqtVirtualQDirModel*)(self) )->virtualbase_Revert();
}

void QDirModel_Delete(QDirModel* self) {
	delete self;
}

