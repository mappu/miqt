#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QList>
#include <QMap>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringListModel>
#include <QVariant>
#include <qstringlistmodel.h>
#include "gen_qstringlistmodel.h"
#include "_cgo_export.h"

class MiqtVirtualQStringListModel : public virtual QStringListModel {
public:

	MiqtVirtualQStringListModel(): QStringListModel() {};
	MiqtVirtualQStringListModel(const QStringList& strings): QStringListModel(strings) {};
	MiqtVirtualQStringListModel(QObject* parent): QStringListModel(parent) {};
	MiqtVirtualQStringListModel(const QStringList& strings, QObject* parent): QStringListModel(strings, parent) {};

	virtual ~MiqtVirtualQStringListModel() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__RowCount == 0) {
			return QStringListModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QStringListModel_RowCount(const_cast<MiqtVirtualQStringListModel*>(this), handle__RowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_RowCount(QModelIndex* parent) const {

		return QStringListModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__Sibling == 0) {
			return QStringListModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QStringListModel_Sibling(const_cast<MiqtVirtualQStringListModel*>(this), handle__Sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QStringListModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__Data == 0) {
			return QStringListModel::data(index, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QStringListModel_Data(const_cast<MiqtVirtualQStringListModel*>(this), handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(QModelIndex* index, int role) const {

		return new QVariant(QStringListModel::data(*index, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			return QStringListModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QStringListModel_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetData(QModelIndex* index, QVariant* value, int role) {

		return QStringListModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__Flags == 0) {
			return QStringListModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QStringListModel_Flags(const_cast<MiqtVirtualQStringListModel*>(this), handle__Flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QStringListModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__InsertRows == 0) {
			return QStringListModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStringListModel_InsertRows(this, handle__InsertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertRows(int row, int count, QModelIndex* parent) {

		return QStringListModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__RemoveRows == 0) {
			return QStringListModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QStringListModel_RemoveRows(this, handle__RemoveRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveRows(int row, int count, QModelIndex* parent) {

		return QStringListModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveRows == 0) {
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

		bool callback_return_value = miqt_exec_callback_QStringListModel_MoveRows(this, handle__MoveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QStringListModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__ItemData == 0) {
			return QStringListModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QStringListModel_ItemData(const_cast<MiqtVirtualQStringListModel*>(this), handle__ItemData, sigval1);
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
	intptr_t handle__SetItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__SetItemData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QStringListModel_SetItemData(this, handle__SetItemData, sigval1, sigval2);

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

		return QStringListModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__Sort == 0) {
			QStringListModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QStringListModel_Sort(this, handle__Sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Sort(int column, int order) {

		QStringListModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QStringListModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QStringListModel_SupportedDropActions(const_cast<MiqtVirtualQStringListModel*>(this), handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QStringListModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__Index == 0) {
			return QStringListModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QStringListModel_Index(const_cast<MiqtVirtualQStringListModel*>(this), handle__Index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QStringListModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__DropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QStringListModel_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QStringListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

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

QMetaObject* QStringListModel_MetaObject(const QStringListModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStringListModel_Metacast(QStringListModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStringListModel_Tr(const char* s) {
	QString _ret = QStringListModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStringListModel_TrUtf8(const char* s) {
	QString _ret = QStringListModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStringListModel_RowCount(const QStringListModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

QModelIndex* QStringListModel_Sibling(const QStringListModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QVariant* QStringListModel_Data(const QStringListModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QStringListModel_SetData(QStringListModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

int QStringListModel_Flags(const QStringListModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

bool QStringListModel_InsertRows(QStringListModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStringListModel_RemoveRows(QStringListModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QStringListModel_MoveRows(QStringListModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

struct miqt_map /* of int to QVariant* */  QStringListModel_ItemData(const QStringListModel* self, QModelIndex* index) {
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

bool QStringListModel_SetItemData(QStringListModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

void QStringListModel_Sort(QStringListModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_array /* of struct miqt_string */  QStringListModel_StringList(const QStringListModel* self) {
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

void QStringListModel_SetStringList(QStringListModel* self, struct miqt_array /* of struct miqt_string */  strings) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	self->setStringList(strings_QList);
}

int QStringListModel_SupportedDropActions(const QStringListModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_string QStringListModel_Tr2(const char* s, const char* c) {
	QString _ret = QStringListModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStringListModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStringListModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStringListModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QStringListModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStringListModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QStringListModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStringListModel_override_virtual_RowCount(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__RowCount = slot;
}

int QStringListModel_virtualbase_RowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_RowCount(parent);
}

void QStringListModel_override_virtual_Sibling(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__Sibling = slot;
}

QModelIndex* QStringListModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_Sibling(row, column, idx);
}

void QStringListModel_override_virtual_Data(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__Data = slot;
}

QVariant* QStringListModel_virtualbase_Data(const void* self, QModelIndex* index, int role) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_Data(index, role);
}

void QStringListModel_override_virtual_SetData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__SetData = slot;
}

bool QStringListModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_SetData(index, value, role);
}

void QStringListModel_override_virtual_Flags(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__Flags = slot;
}

int QStringListModel_virtualbase_Flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_Flags(index);
}

void QStringListModel_override_virtual_InsertRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__InsertRows = slot;
}

bool QStringListModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_InsertRows(row, count, parent);
}

void QStringListModel_override_virtual_RemoveRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__RemoveRows = slot;
}

bool QStringListModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_RemoveRows(row, count, parent);
}

void QStringListModel_override_virtual_MoveRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__MoveRows = slot;
}

bool QStringListModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_MoveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

void QStringListModel_override_virtual_ItemData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__ItemData = slot;
}

struct miqt_map /* of int to QVariant* */  QStringListModel_virtualbase_ItemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_ItemData(index);
}

void QStringListModel_override_virtual_SetItemData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__SetItemData = slot;
}

bool QStringListModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_SetItemData(index, roles);
}

void QStringListModel_override_virtual_Sort(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__Sort = slot;
}

void QStringListModel_virtualbase_Sort(void* self, int column, int order) {
	( (MiqtVirtualQStringListModel*)(self) )->virtualbase_Sort(column, order);
}

void QStringListModel_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__SupportedDropActions = slot;
}

int QStringListModel_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_SupportedDropActions();
}

void QStringListModel_override_virtual_Index(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__Index = slot;
}

QModelIndex* QStringListModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQStringListModel*)(self) )->virtualbase_Index(row, column, parent);
}

void QStringListModel_override_virtual_DropMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQStringListModel*>( (QStringListModel*)(self) )->handle__DropMimeData = slot;
}

bool QStringListModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQStringListModel*)(self) )->virtualbase_DropMimeData(data, action, row, column, parent);
}

void QStringListModel_Delete(QStringListModel* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQStringListModel*>( self );
	} else {
		delete self;
	}
}

