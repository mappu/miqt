#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QIdentityProxyModel>
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
#include <QVariant>
#include <qidentityproxymodel.h>
#include "gen_qidentityproxymodel.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QIdentityProxyModel_ColumnCount(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_Index(void*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_MapFromSource(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_MapToSource(void*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_Parent(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QIdentityProxyModel_RowCount(void*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QIdentityProxyModel_HeaderData(void*, intptr_t, int, int, int);
bool miqt_exec_callback_QIdentityProxyModel_DropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_Sibling(void*, intptr_t, int, int, QModelIndex*);
QItemSelection* miqt_exec_callback_QIdentityProxyModel_MapSelectionFromSource(void*, intptr_t, QItemSelection*);
QItemSelection* miqt_exec_callback_QIdentityProxyModel_MapSelectionToSource(void*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QIdentityProxyModel_Match(void*, intptr_t, QModelIndex*, int, QVariant*, int, int);
void miqt_exec_callback_QIdentityProxyModel_SetSourceModel(void*, intptr_t, QAbstractItemModel*);
bool miqt_exec_callback_QIdentityProxyModel_InsertColumns(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_InsertRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_RemoveColumns(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_RemoveRows(void*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_MoveRows(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QIdentityProxyModel_MoveColumns(void*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QIdentityProxyModel_Submit(void*, intptr_t);
void miqt_exec_callback_QIdentityProxyModel_Revert(void*, intptr_t);
QVariant* miqt_exec_callback_QIdentityProxyModel_Data(void*, intptr_t, QModelIndex*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QIdentityProxyModel_ItemData(void*, intptr_t, QModelIndex*);
int miqt_exec_callback_QIdentityProxyModel_Flags(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_SetData(void*, intptr_t, QModelIndex*, QVariant*, int);
bool miqt_exec_callback_QIdentityProxyModel_SetItemData(void*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QIdentityProxyModel_SetHeaderData(void*, intptr_t, int, int, QVariant*, int);
QModelIndex* miqt_exec_callback_QIdentityProxyModel_Buddy(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_CanFetchMore(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QIdentityProxyModel_FetchMore(void*, intptr_t, QModelIndex*);
void miqt_exec_callback_QIdentityProxyModel_Sort(void*, intptr_t, int, int);
QSize* miqt_exec_callback_QIdentityProxyModel_Span(void*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QIdentityProxyModel_HasChildren(void*, intptr_t, QModelIndex*);
QMimeData* miqt_exec_callback_QIdentityProxyModel_MimeData(void*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QIdentityProxyModel_CanDropMimeData(void*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QIdentityProxyModel_MimeTypes(void*, intptr_t);
int miqt_exec_callback_QIdentityProxyModel_SupportedDragActions(void*, intptr_t);
int miqt_exec_callback_QIdentityProxyModel_SupportedDropActions(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQIdentityProxyModel : public virtual QIdentityProxyModel {
public:

	MiqtVirtualQIdentityProxyModel(): QIdentityProxyModel() {};
	MiqtVirtualQIdentityProxyModel(QObject* parent): QIdentityProxyModel(parent) {};

	virtual ~MiqtVirtualQIdentityProxyModel() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ColumnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__ColumnCount == 0) {
			return QIdentityProxyModel::columnCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QIdentityProxyModel_ColumnCount(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__ColumnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ColumnCount(QModelIndex* parent) const {

		return QIdentityProxyModel::columnCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__Index == 0) {
			return QIdentityProxyModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_Index(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__Index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QIdentityProxyModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (handle__MapFromSource == 0) {
			return QIdentityProxyModel::mapFromSource(sourceIndex);
		}
		
		const QModelIndex& sourceIndex_ret = sourceIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_MapFromSource(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__MapFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MapFromSource(QModelIndex* sourceIndex) const {

		return new QModelIndex(QIdentityProxyModel::mapFromSource(*sourceIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (handle__MapToSource == 0) {
			return QIdentityProxyModel::mapToSource(proxyIndex);
		}
		
		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_MapToSource(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__MapToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_MapToSource(QModelIndex* proxyIndex) const {

		return new QModelIndex(QIdentityProxyModel::mapToSource(*proxyIndex));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__Parent == 0) {
			return QIdentityProxyModel::parent(child);
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_Parent(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__Parent, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Parent(QModelIndex* child) const {

		return new QModelIndex(QIdentityProxyModel::parent(*child));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__RowCount == 0) {
			return QIdentityProxyModel::rowCount(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QIdentityProxyModel_RowCount(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__RowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_RowCount(QModelIndex* parent) const {

		return QIdentityProxyModel::rowCount(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__HeaderData == 0) {
			return QIdentityProxyModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QIdentityProxyModel_HeaderData(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__HeaderData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_HeaderData(int section, int orientation, int role) const {

		return new QVariant(QIdentityProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__DropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QIdentityProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__Sibling == 0) {
			return QIdentityProxyModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_Sibling(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__Sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QIdentityProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapSelectionFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
		if (handle__MapSelectionFromSource == 0) {
			return QIdentityProxyModel::mapSelectionFromSource(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QIdentityProxyModel_MapSelectionFromSource(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__MapSelectionFromSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_MapSelectionFromSource(QItemSelection* selection) const {

		return new QItemSelection(QIdentityProxyModel::mapSelectionFromSource(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MapSelectionToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
		if (handle__MapSelectionToSource == 0) {
			return QIdentityProxyModel::mapSelectionToSource(selection);
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);

		QItemSelection* callback_return_value = miqt_exec_callback_QIdentityProxyModel_MapSelectionToSource(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__MapSelectionToSource, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QItemSelection* virtualbase_MapSelectionToSource(QItemSelection* selection) const {

		return new QItemSelection(QIdentityProxyModel::mapSelectionToSource(*selection));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__Match == 0) {
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QIdentityProxyModel_Match(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__Match, sigval1, sigval2, sigval3, sigval4, sigval5);
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
	intptr_t handle__SetSourceModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
		if (handle__SetSourceModel == 0) {
			QIdentityProxyModel::setSourceModel(sourceModel);
			return;
		}
		
		QAbstractItemModel* sigval1 = sourceModel;

		miqt_exec_callback_QIdentityProxyModel_SetSourceModel(this, handle__SetSourceModel, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetSourceModel(QAbstractItemModel* sourceModel) {

		QIdentityProxyModel::setSourceModel(sourceModel);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__InsertColumns == 0) {
			return QIdentityProxyModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_InsertColumns(this, handle__InsertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertColumns(int column, int count, QModelIndex* parent) {

		return QIdentityProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__InsertRows == 0) {
			return QIdentityProxyModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_InsertRows(this, handle__InsertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertRows(int row, int count, QModelIndex* parent) {

		return QIdentityProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__RemoveColumns == 0) {
			return QIdentityProxyModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_RemoveColumns(this, handle__RemoveColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveColumns(int column, int count, QModelIndex* parent) {

		return QIdentityProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__RemoveRows == 0) {
			return QIdentityProxyModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_RemoveRows(this, handle__RemoveRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveRows(int row, int count, QModelIndex* parent) {

		return QIdentityProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveRows == 0) {
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

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_MoveRows(this, handle__MoveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QIdentityProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveColumns == 0) {
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

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_MoveColumns(this, handle__MoveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QIdentityProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__Submit == 0) {
			return QIdentityProxyModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_Submit(this, handle__Submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Submit() {

		return QIdentityProxyModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__Revert == 0) {
			QIdentityProxyModel::revert();
			return;
		}
		

		miqt_exec_callback_QIdentityProxyModel_Revert(this, handle__Revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Revert() {

		QIdentityProxyModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
		if (handle__Data == 0) {
			return QIdentityProxyModel::data(proxyIndex, role);
		}
		
		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QIdentityProxyModel_Data(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_Data(QModelIndex* proxyIndex, int role) const {

		return new QVariant(QIdentityProxyModel::data(*proxyIndex, static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__ItemData == 0) {
			return QIdentityProxyModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QIdentityProxyModel_ItemData(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__ItemData, sigval1);
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
	intptr_t handle__Flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__Flags == 0) {
			return QIdentityProxyModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QIdentityProxyModel_Flags(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__Flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QIdentityProxyModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			return QIdentityProxyModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetData(QModelIndex* index, QVariant* value, int role) {

		return QIdentityProxyModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__SetItemData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_SetItemData(this, handle__SetItemData, sigval1, sigval2);

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

		return QIdentityProxyModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__SetHeaderData == 0) {
			return QIdentityProxyModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_SetHeaderData(this, handle__SetHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetHeaderData(int section, int orientation, QVariant* value, int role) {

		return QIdentityProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__Buddy == 0) {
			return QIdentityProxyModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QIdentityProxyModel_Buddy(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__Buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Buddy(QModelIndex* index) const {

		return new QModelIndex(QIdentityProxyModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__CanFetchMore == 0) {
			return QIdentityProxyModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_CanFetchMore(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__CanFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanFetchMore(QModelIndex* parent) const {

		return QIdentityProxyModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__FetchMore == 0) {
			QIdentityProxyModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QIdentityProxyModel_FetchMore(this, handle__FetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FetchMore(QModelIndex* parent) {

		QIdentityProxyModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__Sort == 0) {
			QIdentityProxyModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QIdentityProxyModel_Sort(this, handle__Sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Sort(int column, int order) {

		QIdentityProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__Span == 0) {
			return QIdentityProxyModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QIdentityProxyModel_Span(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__Span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Span(QModelIndex* index) const {

		return new QSize(QIdentityProxyModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__HasChildren == 0) {
			return QIdentityProxyModel::hasChildren(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_HasChildren(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__HasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasChildren(QModelIndex* parent) const {

		return QIdentityProxyModel::hasChildren(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__MimeData == 0) {
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

		QMimeData* callback_return_value = miqt_exec_callback_QIdentityProxyModel_MimeData(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__MimeData, sigval1);

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

		return QIdentityProxyModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__CanDropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QIdentityProxyModel_CanDropMimeData(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__CanDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QIdentityProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QIdentityProxyModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QIdentityProxyModel_MimeTypes(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__MimeTypes);
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
	intptr_t handle__SupportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__SupportedDragActions == 0) {
			return QIdentityProxyModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QIdentityProxyModel_SupportedDragActions(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__SupportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDragActions() const {

		Qt::DropActions _ret = QIdentityProxyModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QIdentityProxyModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QIdentityProxyModel_SupportedDropActions(const_cast<MiqtVirtualQIdentityProxyModel*>(this), handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QIdentityProxyModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

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

QMetaObject* QIdentityProxyModel_MetaObject(const QIdentityProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QIdentityProxyModel_Metacast(QIdentityProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QIdentityProxyModel_Tr(const char* s) {
	QString _ret = QIdentityProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIdentityProxyModel_TrUtf8(const char* s) {
	QString _ret = QIdentityProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QIdentityProxyModel_ColumnCount(const QIdentityProxyModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QModelIndex* QIdentityProxyModel_Index(const QIdentityProxyModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QIdentityProxyModel_MapFromSource(const QIdentityProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QModelIndex* QIdentityProxyModel_MapToSource(const QIdentityProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QIdentityProxyModel_Parent(const QIdentityProxyModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

int QIdentityProxyModel_RowCount(const QIdentityProxyModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

QVariant* QIdentityProxyModel_HeaderData(const QIdentityProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QIdentityProxyModel_DropMimeData(QIdentityProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

QModelIndex* QIdentityProxyModel_Sibling(const QIdentityProxyModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QItemSelection* QIdentityProxyModel_MapSelectionFromSource(const QIdentityProxyModel* self, QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionFromSource(*selection));
}

QItemSelection* QIdentityProxyModel_MapSelectionToSource(const QIdentityProxyModel* self, QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionToSource(*selection));
}

struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_Match(const QIdentityProxyModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
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

void QIdentityProxyModel_SetSourceModel(QIdentityProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

bool QIdentityProxyModel_InsertColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_InsertRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_RemoveColumns(QIdentityProxyModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_RemoveRows(QIdentityProxyModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QIdentityProxyModel_MoveRows(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QIdentityProxyModel_MoveColumns(QIdentityProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

struct miqt_string QIdentityProxyModel_Tr2(const char* s, const char* c) {
	QString _ret = QIdentityProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIdentityProxyModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QIdentityProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIdentityProxyModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QIdentityProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIdentityProxyModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QIdentityProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIdentityProxyModel_override_virtual_ColumnCount(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__ColumnCount = slot;
}

int QIdentityProxyModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_ColumnCount(parent);
}

void QIdentityProxyModel_override_virtual_Index(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Index = slot;
}

QModelIndex* QIdentityProxyModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Index(row, column, parent);
}

void QIdentityProxyModel_override_virtual_MapFromSource(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__MapFromSource = slot;
}

QModelIndex* QIdentityProxyModel_virtualbase_MapFromSource(const void* self, QModelIndex* sourceIndex) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_MapFromSource(sourceIndex);
}

void QIdentityProxyModel_override_virtual_MapToSource(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__MapToSource = slot;
}

QModelIndex* QIdentityProxyModel_virtualbase_MapToSource(const void* self, QModelIndex* proxyIndex) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_MapToSource(proxyIndex);
}

void QIdentityProxyModel_override_virtual_Parent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Parent = slot;
}

QModelIndex* QIdentityProxyModel_virtualbase_Parent(const void* self, QModelIndex* child) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Parent(child);
}

void QIdentityProxyModel_override_virtual_RowCount(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__RowCount = slot;
}

int QIdentityProxyModel_virtualbase_RowCount(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_RowCount(parent);
}

void QIdentityProxyModel_override_virtual_HeaderData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__HeaderData = slot;
}

QVariant* QIdentityProxyModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_HeaderData(section, orientation, role);
}

void QIdentityProxyModel_override_virtual_DropMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__DropMimeData = slot;
}

bool QIdentityProxyModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_DropMimeData(data, action, row, column, parent);
}

void QIdentityProxyModel_override_virtual_Sibling(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Sibling = slot;
}

QModelIndex* QIdentityProxyModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Sibling(row, column, idx);
}

void QIdentityProxyModel_override_virtual_MapSelectionFromSource(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__MapSelectionFromSource = slot;
}

QItemSelection* QIdentityProxyModel_virtualbase_MapSelectionFromSource(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_MapSelectionFromSource(selection);
}

void QIdentityProxyModel_override_virtual_MapSelectionToSource(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__MapSelectionToSource = slot;
}

QItemSelection* QIdentityProxyModel_virtualbase_MapSelectionToSource(const void* self, QItemSelection* selection) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_MapSelectionToSource(selection);
}

void QIdentityProxyModel_override_virtual_Match(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Match = slot;
}

struct miqt_array /* of QModelIndex* */  QIdentityProxyModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Match(start, role, value, hits, flags);
}

void QIdentityProxyModel_override_virtual_SetSourceModel(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__SetSourceModel = slot;
}

void QIdentityProxyModel_virtualbase_SetSourceModel(void* self, QAbstractItemModel* sourceModel) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_SetSourceModel(sourceModel);
}

void QIdentityProxyModel_override_virtual_InsertColumns(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__InsertColumns = slot;
}

bool QIdentityProxyModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_InsertColumns(column, count, parent);
}

void QIdentityProxyModel_override_virtual_InsertRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__InsertRows = slot;
}

bool QIdentityProxyModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_InsertRows(row, count, parent);
}

void QIdentityProxyModel_override_virtual_RemoveColumns(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__RemoveColumns = slot;
}

bool QIdentityProxyModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_RemoveColumns(column, count, parent);
}

void QIdentityProxyModel_override_virtual_RemoveRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__RemoveRows = slot;
}

bool QIdentityProxyModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_RemoveRows(row, count, parent);
}

void QIdentityProxyModel_override_virtual_MoveRows(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__MoveRows = slot;
}

bool QIdentityProxyModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_MoveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

void QIdentityProxyModel_override_virtual_MoveColumns(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__MoveColumns = slot;
}

bool QIdentityProxyModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_MoveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

void QIdentityProxyModel_override_virtual_Submit(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Submit = slot;
}

bool QIdentityProxyModel_virtualbase_Submit(void* self) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Submit();
}

void QIdentityProxyModel_override_virtual_Revert(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Revert = slot;
}

void QIdentityProxyModel_virtualbase_Revert(void* self) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Revert();
}

void QIdentityProxyModel_override_virtual_Data(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Data = slot;
}

QVariant* QIdentityProxyModel_virtualbase_Data(const void* self, QModelIndex* proxyIndex, int role) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Data(proxyIndex, role);
}

void QIdentityProxyModel_override_virtual_ItemData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__ItemData = slot;
}

struct miqt_map /* of int to QVariant* */  QIdentityProxyModel_virtualbase_ItemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_ItemData(index);
}

void QIdentityProxyModel_override_virtual_Flags(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Flags = slot;
}

int QIdentityProxyModel_virtualbase_Flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Flags(index);
}

void QIdentityProxyModel_override_virtual_SetData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__SetData = slot;
}

bool QIdentityProxyModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_SetData(index, value, role);
}

void QIdentityProxyModel_override_virtual_SetItemData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__SetItemData = slot;
}

bool QIdentityProxyModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_SetItemData(index, roles);
}

void QIdentityProxyModel_override_virtual_SetHeaderData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__SetHeaderData = slot;
}

bool QIdentityProxyModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_SetHeaderData(section, orientation, value, role);
}

void QIdentityProxyModel_override_virtual_Buddy(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Buddy = slot;
}

QModelIndex* QIdentityProxyModel_virtualbase_Buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Buddy(index);
}

void QIdentityProxyModel_override_virtual_CanFetchMore(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__CanFetchMore = slot;
}

bool QIdentityProxyModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_CanFetchMore(parent);
}

void QIdentityProxyModel_override_virtual_FetchMore(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__FetchMore = slot;
}

void QIdentityProxyModel_virtualbase_FetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_FetchMore(parent);
}

void QIdentityProxyModel_override_virtual_Sort(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Sort = slot;
}

void QIdentityProxyModel_virtualbase_Sort(void* self, int column, int order) {
	( (MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Sort(column, order);
}

void QIdentityProxyModel_override_virtual_Span(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__Span = slot;
}

QSize* QIdentityProxyModel_virtualbase_Span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_Span(index);
}

void QIdentityProxyModel_override_virtual_HasChildren(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__HasChildren = slot;
}

bool QIdentityProxyModel_virtualbase_HasChildren(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_HasChildren(parent);
}

void QIdentityProxyModel_override_virtual_MimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__MimeData = slot;
}

QMimeData* QIdentityProxyModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_MimeData(indexes);
}

void QIdentityProxyModel_override_virtual_CanDropMimeData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__CanDropMimeData = slot;
}

bool QIdentityProxyModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_CanDropMimeData(data, action, row, column, parent);
}

void QIdentityProxyModel_override_virtual_MimeTypes(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__MimeTypes = slot;
}

struct miqt_array /* of struct miqt_string */  QIdentityProxyModel_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_MimeTypes();
}

void QIdentityProxyModel_override_virtual_SupportedDragActions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__SupportedDragActions = slot;
}

int QIdentityProxyModel_virtualbase_SupportedDragActions(const void* self) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_SupportedDragActions();
}

void QIdentityProxyModel_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQIdentityProxyModel*>( (QIdentityProxyModel*)(self) )->handle__SupportedDropActions = slot;
}

int QIdentityProxyModel_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQIdentityProxyModel*)(self) )->virtualbase_SupportedDropActions();
}

void QIdentityProxyModel_Delete(QIdentityProxyModel* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQIdentityProxyModel*>( self );
	} else {
		delete self;
	}
}

