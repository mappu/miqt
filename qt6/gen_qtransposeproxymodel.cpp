#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QItemSelection>
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
#include <QTransposeProxyModel>
#include <QVariant>
#include <qtransposeproxymodel.h>
#include "gen_qtransposeproxymodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QTransposeProxyModel_SetSourceModel(void*, intptr_t, QAbstractItemModel*);
int miqt_exec_callback_QTransposeProxyModel_RowCount(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QTransposeProxyModel_ColumnCount(void*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QTransposeProxyModel_HeaderData(void*, intptr_t, int, int, int);
bool miqt_exec_callback_QTransposeProxyModel_SetHeaderData(void*, intptr_t, int, int, QVariant*, int);
bool miqt_exec_callback_QTransposeProxyModel_SetItemData(void*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
QSize* miqt_exec_callback_QTransposeProxyModel_Span(void*, intptr_t, QModelIndex*);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QTransposeProxyModel_ItemData(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_MapFromSource(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_MapToSource(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_Parent(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_Index(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_InsertRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_RemoveRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_MoveRows(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QTransposeProxyModel_InsertColumns(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_RemoveColumns(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_MoveColumns(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QTransposeProxyModel_Sort(void*, intptr_t, int, int);
QItemSelection* miqt_exec_callback_QTransposeProxyModel_MapSelectionToSource(void*, intptr_t, QItemSelection*);
QItemSelection* miqt_exec_callback_QTransposeProxyModel_MapSelectionFromSource(void*, intptr_t, QItemSelection*);
bool miqt_exec_callback_QTransposeProxyModel_Submit(void*, intptr_t);
void miqt_exec_callback_QTransposeProxyModel_Revert(void*, intptr_t);
QVariant* miqt_exec_callback_QTransposeProxyModel_Data(void*, intptr_t, QModelIndex*, int);
int miqt_exec_callback_QTransposeProxyModel_Flags(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_SetData(void*, intptr_t, QModelIndex*, QVariant*, int);
bool miqt_exec_callback_QTransposeProxyModel_ClearItemData(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_Buddy(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_CanFetchMore(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTransposeProxyModel_FetchMore(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_HasChildren(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QTransposeProxyModel_Sibling(void*, intptr_t, int, int, QModelIndex*);
QMimeData* miqt_exec_callback_QTransposeProxyModel_MimeData(void*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QTransposeProxyModel_CanDropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QTransposeProxyModel_DropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QTransposeProxyModel_MimeTypes(void*, intptr_t);
int miqt_exec_callback_QTransposeProxyModel_SupportedDragActions(void*, intptr_t);
int miqt_exec_callback_QTransposeProxyModel_SupportedDropActions(void*, intptr_t);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QTransposeProxyModel_RoleNames(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTransposeProxyModel final : public QTransposeProxyModel {
public:

	MiqtVirtualQTransposeProxyModel(): QTransposeProxyModel() {};
	MiqtVirtualQTransposeProxyModel(QObject* parent): QTransposeProxyModel(parent) {};

	virtual ~MiqtVirtualQTransposeProxyModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetSourceModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSourceModel(QAbstractItemModel* newSourceModel) override {
		if (handle__SetSourceModel == 0) {
			QTransposeProxyModel::setSourceModel(newSourceModel);
			return;
		}
		
		QAbstractItemModel* sigval1 = newSourceModel;

		miqt_exec_callback_QTransposeProxyModel_SetSourceModel(this, handle__SetSourceModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSourceModel(QAbstractItemModel* newSourceModel) {

		QTransposeProxyModel::setSourceModel(newSourceModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__RowCount == 0) {
			return QTransposeProxyModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QTransposeProxyModel_RowCount(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__RowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_RowCount(QModelIndex* parent) const {

		return QTransposeProxyModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ColumnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__ColumnCount == 0) {
			return QTransposeProxyModel::columnCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QTransposeProxyModel_ColumnCount(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__ColumnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ColumnCount(QModelIndex* parent) const {

		return QTransposeProxyModel::columnCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__HeaderData == 0) {
			return QTransposeProxyModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QTransposeProxyModel_HeaderData(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__HeaderData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_HeaderData(int section, int orientation, int role) const {

		return new QVariant(QTransposeProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__SetHeaderData == 0) {
			return QTransposeProxyModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_SetHeaderData(this, handle__SetHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetHeaderData(int section, int orientation, QVariant* value, int role) {

		return QTransposeProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__SetItemData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_SetItemData(this, handle__SetItemData, sigval1, sigval2);

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

		return QTransposeProxyModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__Span == 0) {
			return QTransposeProxyModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QTransposeProxyModel_Span(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__Span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Span(QModelIndex* index) const {

		return new QSize(QTransposeProxyModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__ItemData == 0) {
			return QTransposeProxyModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QTransposeProxyModel_ItemData(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__ItemData, sigval1);
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

		QMap<int, QVariant> _ret = QTransposeProxyModel::itemData(*index);
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
	intptr_t handle__MapFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (handle__MapFromSource == 0) {
			return QTransposeProxyModel::mapFromSource(sourceIndex);
		}
		
		const QModelIndex& sourceIndex_ret = sourceIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_MapFromSource(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__MapFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MapFromSource(QModelIndex* sourceIndex) const {

		return new QModelIndex(QTransposeProxyModel::mapFromSource(*sourceIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (handle__MapToSource == 0) {
			return QTransposeProxyModel::mapToSource(proxyIndex);
		}
		
		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_MapToSource(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__MapToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MapToSource(QModelIndex* proxyIndex) const {

		return new QModelIndex(QTransposeProxyModel::mapToSource(*proxyIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& index) const override {
		if (handle__Parent == 0) {
			return QTransposeProxyModel::parent(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_Parent(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__Parent, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Parent(QModelIndex* index) const {

		return new QModelIndex(QTransposeProxyModel::parent(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__Index == 0) {
			return QTransposeProxyModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_Index(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__Index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QTransposeProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__InsertRows == 0) {
			return QTransposeProxyModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_InsertRows(this, handle__InsertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertRows(int row, int count, QModelIndex* parent) {

		return QTransposeProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__RemoveRows == 0) {
			return QTransposeProxyModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_RemoveRows(this, handle__RemoveRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveRows(int row, int count, QModelIndex* parent) {

		return QTransposeProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveRows == 0) {
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

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_MoveRows(this, handle__MoveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QTransposeProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__InsertColumns == 0) {
			return QTransposeProxyModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_InsertColumns(this, handle__InsertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertColumns(int column, int count, QModelIndex* parent) {

		return QTransposeProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__RemoveColumns == 0) {
			return QTransposeProxyModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_RemoveColumns(this, handle__RemoveColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveColumns(int column, int count, QModelIndex* parent) {

		return QTransposeProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveColumns == 0) {
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

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_MoveColumns(this, handle__MoveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QTransposeProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__Sort == 0) {
			QTransposeProxyModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QTransposeProxyModel_Sort(this, handle__Sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Sort(int column, int order) {

		QTransposeProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapSelectionToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
		if (handle__MapSelectionToSource == 0) {
			return QTransposeProxyModel::mapSelectionToSource(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QTransposeProxyModel_MapSelectionToSource(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__MapSelectionToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_MapSelectionToSource(QItemSelection* selection) const {

		return new QItemSelection(QTransposeProxyModel::mapSelectionToSource(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapSelectionFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
		if (handle__MapSelectionFromSource == 0) {
			return QTransposeProxyModel::mapSelectionFromSource(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QTransposeProxyModel_MapSelectionFromSource(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__MapSelectionFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_MapSelectionFromSource(QItemSelection* selection) const {

		return new QItemSelection(QTransposeProxyModel::mapSelectionFromSource(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__Submit == 0) {
			return QTransposeProxyModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_Submit(this, handle__Submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Submit() {

		return QTransposeProxyModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__Revert == 0) {
			QTransposeProxyModel::revert();
			return;
		}
		

		miqt_exec_callback_QTransposeProxyModel_Revert(this, handle__Revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Revert() {

		QTransposeProxyModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
		if (handle__Data == 0) {
			return QTransposeProxyModel::data(proxyIndex, role);
		}
		
		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QTransposeProxyModel_Data(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(QModelIndex* proxyIndex, int role) const {

		return new QVariant(QTransposeProxyModel::data(*proxyIndex, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__Flags == 0) {
			return QTransposeProxyModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QTransposeProxyModel_Flags(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__Flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QTransposeProxyModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			return QTransposeProxyModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetData(QModelIndex* index, QVariant* value, int role) {

		return QTransposeProxyModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ClearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__ClearItemData == 0) {
			return QTransposeProxyModel::clearItemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_ClearItemData(this, handle__ClearItemData, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_ClearItemData(QModelIndex* index) {

		return QTransposeProxyModel::clearItemData(*index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__Buddy == 0) {
			return QTransposeProxyModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_Buddy(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__Buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Buddy(QModelIndex* index) const {

		return new QModelIndex(QTransposeProxyModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__CanFetchMore == 0) {
			return QTransposeProxyModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_CanFetchMore(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__CanFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanFetchMore(QModelIndex* parent) const {

		return QTransposeProxyModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__FetchMore == 0) {
			QTransposeProxyModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QTransposeProxyModel_FetchMore(this, handle__FetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FetchMore(QModelIndex* parent) {

		QTransposeProxyModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__HasChildren == 0) {
			return QTransposeProxyModel::hasChildren(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_HasChildren(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__HasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasChildren(QModelIndex* parent) const {

		return QTransposeProxyModel::hasChildren(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__Sibling == 0) {
			return QTransposeProxyModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QTransposeProxyModel_Sibling(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__Sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QTransposeProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__MimeData == 0) {
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

		QMimeData* callback_return_value = miqt_exec_callback_QTransposeProxyModel_MimeData(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__MimeData, sigval1);

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

		return QTransposeProxyModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__CanDropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_CanDropMimeData(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__CanDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QTransposeProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__DropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QTransposeProxyModel_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QTransposeProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QTransposeProxyModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QTransposeProxyModel_MimeTypes(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__MimeTypes);
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

		QStringList _ret = QTransposeProxyModel::mimeTypes();
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
	intptr_t handle__SupportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__SupportedDragActions == 0) {
			return QTransposeProxyModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QTransposeProxyModel_SupportedDragActions(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__SupportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDragActions() const {

		Qt::DropActions _ret = QTransposeProxyModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QTransposeProxyModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QTransposeProxyModel_SupportedDropActions(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QTransposeProxyModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RoleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__RoleNames == 0) {
			return QTransposeProxyModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QTransposeProxyModel_RoleNames(const_cast<MiqtVirtualQTransposeProxyModel*>(this), handle__RoleNames);
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

		QHash<int, QByteArray> _ret = QTransposeProxyModel::roleNames();
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

};

QTransposeProxyModel* QTransposeProxyModel_new() {
	return new MiqtVirtualQTransposeProxyModel();
}

QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent) {
	return new MiqtVirtualQTransposeProxyModel(parent);
}

void QTransposeProxyModel_virtbase(QTransposeProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel) {
	*outptr_QAbstractProxyModel = static_cast<QAbstractProxyModel*>(src);
}

QMetaObject* QTransposeProxyModel_MetaObject(const QTransposeProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTransposeProxyModel_Metacast(QTransposeProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTransposeProxyModel_Tr(const char* s) {
	QString _ret = QTransposeProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel) {
	self->setSourceModel(newSourceModel);
}

int QTransposeProxyModel_RowCount(const QTransposeProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QTransposeProxyModel_ColumnCount(const QTransposeProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QTransposeProxyModel_HeaderData(const QTransposeProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QTransposeProxyModel_SetItemData(QTransposeProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

QSize* QTransposeProxyModel_Span(const QTransposeProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_ItemData(const QTransposeProxyModel* self, QModelIndex* index) {
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

QModelIndex* QTransposeProxyModel_MapFromSource(const QTransposeProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QTransposeProxyModel_MapToSource(const QTransposeProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QTransposeProxyModel_Parent(const QTransposeProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->parent(*index));
}

QModelIndex* QTransposeProxyModel_Index(const QTransposeProxyModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_string QTransposeProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QTransposeProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTransposeProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTransposeProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTransposeProxyModel_override_virtual_SetSourceModel(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetSourceModel = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_SetSourceModel(void* self, QAbstractItemModel* newSourceModel) {
	( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_SetSourceModel(newSourceModel);
}

bool QTransposeProxyModel_override_virtual_RowCount(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowCount = slot;
	return true;
}

int QTransposeProxyModel_virtualbase_RowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_RowCount(parent);
}

bool QTransposeProxyModel_override_virtual_ColumnCount(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ColumnCount = slot;
	return true;
}

int QTransposeProxyModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_ColumnCount(parent);
}

bool QTransposeProxyModel_override_virtual_HeaderData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeaderData = slot;
	return true;
}

QVariant* QTransposeProxyModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_HeaderData(section, orientation, role);
}

bool QTransposeProxyModel_override_virtual_SetHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetHeaderData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_SetHeaderData(section, orientation, value, role);
}

bool QTransposeProxyModel_override_virtual_SetItemData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetItemData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_SetItemData(index, roles);
}

bool QTransposeProxyModel_override_virtual_Span(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Span = slot;
	return true;
}

QSize* QTransposeProxyModel_virtualbase_Span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_Span(index);
}

bool QTransposeProxyModel_override_virtual_ItemData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_virtualbase_ItemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_ItemData(index);
}

bool QTransposeProxyModel_override_virtual_MapFromSource(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapFromSource = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_MapFromSource(const void* self, QModelIndex* sourceIndex) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_MapFromSource(sourceIndex);
}

bool QTransposeProxyModel_override_virtual_MapToSource(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapToSource = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_MapToSource(const void* self, QModelIndex* proxyIndex) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_MapToSource(proxyIndex);
}

bool QTransposeProxyModel_override_virtual_Parent(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Parent = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_Parent(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_Parent(index);
}

bool QTransposeProxyModel_override_virtual_Index(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Index = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_Index(row, column, parent);
}

bool QTransposeProxyModel_override_virtual_InsertRows(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertRows = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_InsertRows(row, count, parent);
}

bool QTransposeProxyModel_override_virtual_RemoveRows(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveRows = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_RemoveRows(row, count, parent);
}

bool QTransposeProxyModel_override_virtual_MoveRows(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveRows = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_MoveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QTransposeProxyModel_override_virtual_InsertColumns(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertColumns = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_InsertColumns(column, count, parent);
}

bool QTransposeProxyModel_override_virtual_RemoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveColumns = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_RemoveColumns(column, count, parent);
}

bool QTransposeProxyModel_override_virtual_MoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveColumns = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_MoveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QTransposeProxyModel_override_virtual_Sort(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sort = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_Sort(void* self, int column, int order) {
	( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_Sort(column, order);
}

bool QTransposeProxyModel_override_virtual_MapSelectionToSource(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapSelectionToSource = slot;
	return true;
}

QItemSelection* QTransposeProxyModel_virtualbase_MapSelectionToSource(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_MapSelectionToSource(selection);
}

bool QTransposeProxyModel_override_virtual_MapSelectionFromSource(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MapSelectionFromSource = slot;
	return true;
}

QItemSelection* QTransposeProxyModel_virtualbase_MapSelectionFromSource(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_MapSelectionFromSource(selection);
}

bool QTransposeProxyModel_override_virtual_Submit(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Submit = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_Submit(void* self) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_Submit();
}

bool QTransposeProxyModel_override_virtual_Revert(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Revert = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_Revert(void* self) {
	( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_Revert();
}

bool QTransposeProxyModel_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

QVariant* QTransposeProxyModel_virtualbase_Data(const void* self, QModelIndex* proxyIndex, int role) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_Data(proxyIndex, role);
}

bool QTransposeProxyModel_override_virtual_Flags(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Flags = slot;
	return true;
}

int QTransposeProxyModel_virtualbase_Flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_Flags(index);
}

bool QTransposeProxyModel_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_SetData(index, value, role);
}

bool QTransposeProxyModel_override_virtual_ClearItemData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ClearItemData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_ClearItemData(void* self, QModelIndex* index) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_ClearItemData(index);
}

bool QTransposeProxyModel_override_virtual_Buddy(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Buddy = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_Buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_Buddy(index);
}

bool QTransposeProxyModel_override_virtual_CanFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanFetchMore = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_CanFetchMore(parent);
}

bool QTransposeProxyModel_override_virtual_FetchMore(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FetchMore = slot;
	return true;
}

void QTransposeProxyModel_virtualbase_FetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_FetchMore(parent);
}

bool QTransposeProxyModel_override_virtual_HasChildren(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasChildren = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_HasChildren(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_HasChildren(parent);
}

bool QTransposeProxyModel_override_virtual_Sibling(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sibling = slot;
	return true;
}

QModelIndex* QTransposeProxyModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_Sibling(row, column, idx);
}

bool QTransposeProxyModel_override_virtual_MimeData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeData = slot;
	return true;
}

QMimeData* QTransposeProxyModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_MimeData(indexes);
}

bool QTransposeProxyModel_override_virtual_CanDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanDropMimeData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_CanDropMimeData(data, action, row, column, parent);
}

bool QTransposeProxyModel_override_virtual_DropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropMimeData = slot;
	return true;
}

bool QTransposeProxyModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_DropMimeData(data, action, row, column, parent);
}

bool QTransposeProxyModel_override_virtual_MimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QTransposeProxyModel_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_MimeTypes();
}

bool QTransposeProxyModel_override_virtual_SupportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDragActions = slot;
	return true;
}

int QTransposeProxyModel_virtualbase_SupportedDragActions(const void* self) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_SupportedDragActions();
}

bool QTransposeProxyModel_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDropActions = slot;
	return true;
}

int QTransposeProxyModel_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_SupportedDropActions();
}

bool QTransposeProxyModel_override_virtual_RoleNames(void* self, intptr_t slot) {
	MiqtVirtualQTransposeProxyModel* self_cast = dynamic_cast<MiqtVirtualQTransposeProxyModel*>( (QTransposeProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RoleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QTransposeProxyModel_virtualbase_RoleNames(const void* self) {
	return ( (const MiqtVirtualQTransposeProxyModel*)(self) )->virtualbase_RoleNames();
}

void QTransposeProxyModel_Delete(QTransposeProxyModel* self) {
	delete self;
}

