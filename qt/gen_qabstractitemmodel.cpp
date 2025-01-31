#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QAbstractTableModel>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractitemmodel.h>
#include "gen_qabstractitemmodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractItemModel_DataChanged(intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QAbstractItemModel_HeaderDataChanged(intptr_t, int, int, int);
void miqt_exec_callback_QAbstractItemModel_LayoutChanged(intptr_t);
void miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged(intptr_t);
void miqt_exec_callback_QAbstractItemModel_DataChanged3(intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QAbstractItemModel_LayoutChanged1(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ );
void miqt_exec_callback_QAbstractItemModel_LayoutChanged2(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ , int);
void miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged1(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ );
void miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged2(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ , int);
QModelIndex* miqt_exec_callback_QAbstractItemModel_Index(const QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractItemModel_Parent(const QAbstractItemModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractItemModel_Sibling(const QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_RowCount(const QAbstractItemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_ColumnCount(const QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_HasChildren(const QAbstractItemModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QAbstractItemModel_Data(const QAbstractItemModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QAbstractItemModel_SetData(QAbstractItemModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QAbstractItemModel_HeaderData(const QAbstractItemModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QAbstractItemModel_SetHeaderData(QAbstractItemModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractItemModel_ItemData(const QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_SetItemData(QAbstractItemModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractItemModel_MimeTypes(const QAbstractItemModel*, intptr_t);
QMimeData* miqt_exec_callback_QAbstractItemModel_MimeData(const QAbstractItemModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractItemModel_CanDropMimeData(const QAbstractItemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_DropMimeData(QAbstractItemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_SupportedDropActions(const QAbstractItemModel*, intptr_t);
int miqt_exec_callback_QAbstractItemModel_SupportedDragActions(const QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_InsertRows(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_InsertColumns(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_RemoveRows(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_RemoveColumns(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_MoveRows(QAbstractItemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractItemModel_MoveColumns(QAbstractItemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractItemModel_FetchMore(QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_CanFetchMore(const QAbstractItemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_Flags(const QAbstractItemModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemModel_Sort(QAbstractItemModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QAbstractItemModel_Buddy(const QAbstractItemModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractItemModel_Match(const QAbstractItemModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QAbstractItemModel_Span(const QAbstractItemModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractItemModel_RoleNames(const QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_Submit(QAbstractItemModel*, intptr_t);
void miqt_exec_callback_QAbstractItemModel_Revert(QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_Event(QAbstractItemModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractItemModel_EventFilter(QAbstractItemModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractItemModel_TimerEvent(QAbstractItemModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractItemModel_ChildEvent(QAbstractItemModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractItemModel_CustomEvent(QAbstractItemModel*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemModel_ConnectNotify(QAbstractItemModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractItemModel_DisconnectNotify(QAbstractItemModel*, intptr_t, QMetaMethod*);
QModelIndex* miqt_exec_callback_QAbstractTableModel_Index(const QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractTableModel_Sibling(const QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_DropMimeData(QAbstractTableModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_Flags(const QAbstractTableModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_RowCount(const QAbstractTableModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_ColumnCount(const QAbstractTableModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QAbstractTableModel_Data(const QAbstractTableModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QAbstractTableModel_SetData(QAbstractTableModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QAbstractTableModel_HeaderData(const QAbstractTableModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QAbstractTableModel_SetHeaderData(QAbstractTableModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractTableModel_ItemData(const QAbstractTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_SetItemData(QAbstractTableModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractTableModel_MimeTypes(const QAbstractTableModel*, intptr_t);
QMimeData* miqt_exec_callback_QAbstractTableModel_MimeData(const QAbstractTableModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractTableModel_CanDropMimeData(const QAbstractTableModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_SupportedDropActions(const QAbstractTableModel*, intptr_t);
int miqt_exec_callback_QAbstractTableModel_SupportedDragActions(const QAbstractTableModel*, intptr_t);
bool miqt_exec_callback_QAbstractTableModel_InsertRows(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_InsertColumns(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_RemoveRows(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_RemoveColumns(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_MoveRows(QAbstractTableModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractTableModel_MoveColumns(QAbstractTableModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractTableModel_FetchMore(QAbstractTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_CanFetchMore(const QAbstractTableModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractTableModel_Sort(QAbstractTableModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QAbstractTableModel_Buddy(const QAbstractTableModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractTableModel_Match(const QAbstractTableModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QAbstractTableModel_Span(const QAbstractTableModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractTableModel_RoleNames(const QAbstractTableModel*, intptr_t);
bool miqt_exec_callback_QAbstractTableModel_Submit(QAbstractTableModel*, intptr_t);
void miqt_exec_callback_QAbstractTableModel_Revert(QAbstractTableModel*, intptr_t);
bool miqt_exec_callback_QAbstractTableModel_Event(QAbstractTableModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractTableModel_EventFilter(QAbstractTableModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractTableModel_TimerEvent(QAbstractTableModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractTableModel_ChildEvent(QAbstractTableModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractTableModel_CustomEvent(QAbstractTableModel*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractTableModel_ConnectNotify(QAbstractTableModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractTableModel_DisconnectNotify(QAbstractTableModel*, intptr_t, QMetaMethod*);
QModelIndex* miqt_exec_callback_QAbstractListModel_Index(const QAbstractListModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractListModel_Sibling(const QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_DropMimeData(QAbstractListModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractListModel_Flags(const QAbstractListModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractListModel_RowCount(const QAbstractListModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QAbstractListModel_Data(const QAbstractListModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QAbstractListModel_SetData(QAbstractListModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QAbstractListModel_HeaderData(const QAbstractListModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QAbstractListModel_SetHeaderData(QAbstractListModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractListModel_ItemData(const QAbstractListModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_SetItemData(QAbstractListModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractListModel_MimeTypes(const QAbstractListModel*, intptr_t);
QMimeData* miqt_exec_callback_QAbstractListModel_MimeData(const QAbstractListModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractListModel_CanDropMimeData(const QAbstractListModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractListModel_SupportedDropActions(const QAbstractListModel*, intptr_t);
int miqt_exec_callback_QAbstractListModel_SupportedDragActions(const QAbstractListModel*, intptr_t);
bool miqt_exec_callback_QAbstractListModel_InsertRows(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_InsertColumns(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_RemoveRows(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_RemoveColumns(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_MoveRows(QAbstractListModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractListModel_MoveColumns(QAbstractListModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractListModel_FetchMore(QAbstractListModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_CanFetchMore(const QAbstractListModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractListModel_Sort(QAbstractListModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QAbstractListModel_Buddy(const QAbstractListModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractListModel_Match(const QAbstractListModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QAbstractListModel_Span(const QAbstractListModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractListModel_RoleNames(const QAbstractListModel*, intptr_t);
bool miqt_exec_callback_QAbstractListModel_Submit(QAbstractListModel*, intptr_t);
void miqt_exec_callback_QAbstractListModel_Revert(QAbstractListModel*, intptr_t);
bool miqt_exec_callback_QAbstractListModel_Event(QAbstractListModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractListModel_EventFilter(QAbstractListModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractListModel_TimerEvent(QAbstractListModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractListModel_ChildEvent(QAbstractListModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractListModel_CustomEvent(QAbstractListModel*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractListModel_ConnectNotify(QAbstractListModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractListModel_DisconnectNotify(QAbstractListModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QModelIndex* QModelIndex_new() {
	return new QModelIndex();
}

QModelIndex* QModelIndex_new2(QModelIndex* param1) {
	return new QModelIndex(*param1);
}

int QModelIndex_Row(const QModelIndex* self) {
	return self->row();
}

int QModelIndex_Column(const QModelIndex* self) {
	return self->column();
}

uintptr_t QModelIndex_InternalId(const QModelIndex* self) {
	quintptr _ret = self->internalId();
	return static_cast<uintptr_t>(_ret);
}

void* QModelIndex_InternalPointer(const QModelIndex* self) {
	return self->internalPointer();
}

QModelIndex* QModelIndex_Parent(const QModelIndex* self) {
	return new QModelIndex(self->parent());
}

QModelIndex* QModelIndex_Sibling(const QModelIndex* self, int row, int column) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QModelIndex_SiblingAtColumn(const QModelIndex* self, int column) {
	return new QModelIndex(self->siblingAtColumn(static_cast<int>(column)));
}

QModelIndex* QModelIndex_SiblingAtRow(const QModelIndex* self, int row) {
	return new QModelIndex(self->siblingAtRow(static_cast<int>(row)));
}

QModelIndex* QModelIndex_Child(const QModelIndex* self, int row, int column) {
	return new QModelIndex(self->child(static_cast<int>(row), static_cast<int>(column)));
}

QVariant* QModelIndex_Data(const QModelIndex* self) {
	return new QVariant(self->data());
}

int QModelIndex_Flags(const QModelIndex* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QAbstractItemModel* QModelIndex_Model(const QModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QModelIndex_IsValid(const QModelIndex* self) {
	return self->isValid();
}

bool QModelIndex_OperatorEqual(const QModelIndex* self, QModelIndex* other) {
	return (*self == *other);
}

bool QModelIndex_OperatorNotEqual(const QModelIndex* self, QModelIndex* other) {
	return (*self != *other);
}

bool QModelIndex_OperatorLesser(const QModelIndex* self, QModelIndex* other) {
	return (*self < *other);
}

QVariant* QModelIndex_Data1(const QModelIndex* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QModelIndex_Delete(QModelIndex* self) {
	delete self;
}

QPersistentModelIndex* QPersistentModelIndex_new() {
	return new QPersistentModelIndex();
}

QPersistentModelIndex* QPersistentModelIndex_new2(QModelIndex* index) {
	return new QPersistentModelIndex(*index);
}

QPersistentModelIndex* QPersistentModelIndex_new3(QPersistentModelIndex* other) {
	return new QPersistentModelIndex(*other);
}

bool QPersistentModelIndex_OperatorLesser(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return (*self < *other);
}

bool QPersistentModelIndex_OperatorEqual(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return (*self == *other);
}

bool QPersistentModelIndex_OperatorNotEqual(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return (*self != *other);
}

void QPersistentModelIndex_OperatorAssign(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->operator=(*other);
}

void QPersistentModelIndex_Swap(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->swap(*other);
}

bool QPersistentModelIndex_OperatorEqualWithOther(const QPersistentModelIndex* self, QModelIndex* other) {
	return (*self == *other);
}

bool QPersistentModelIndex_OperatorNotEqualWithOther(const QPersistentModelIndex* self, QModelIndex* other) {
	return (*self != *other);
}

void QPersistentModelIndex_OperatorAssignWithOther(QPersistentModelIndex* self, QModelIndex* other) {
	self->operator=(*other);
}

QModelIndex* QPersistentModelIndex_ToConstQModelIndexBitwiseAnd(const QPersistentModelIndex* self) {
	const QModelIndex& _ret = self->operator const QModelIndex &();
	// Cast returned reference into pointer
	return const_cast<QModelIndex*>(&_ret);
}

int QPersistentModelIndex_Row(const QPersistentModelIndex* self) {
	return self->row();
}

int QPersistentModelIndex_Column(const QPersistentModelIndex* self) {
	return self->column();
}

void* QPersistentModelIndex_InternalPointer(const QPersistentModelIndex* self) {
	return self->internalPointer();
}

uintptr_t QPersistentModelIndex_InternalId(const QPersistentModelIndex* self) {
	quintptr _ret = self->internalId();
	return static_cast<uintptr_t>(_ret);
}

QModelIndex* QPersistentModelIndex_Parent(const QPersistentModelIndex* self) {
	return new QModelIndex(self->parent());
}

QModelIndex* QPersistentModelIndex_Sibling(const QPersistentModelIndex* self, int row, int column) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QPersistentModelIndex_Child(const QPersistentModelIndex* self, int row, int column) {
	return new QModelIndex(self->child(static_cast<int>(row), static_cast<int>(column)));
}

QVariant* QPersistentModelIndex_Data(const QPersistentModelIndex* self) {
	return new QVariant(self->data());
}

int QPersistentModelIndex_Flags(const QPersistentModelIndex* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QAbstractItemModel* QPersistentModelIndex_Model(const QPersistentModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QPersistentModelIndex_IsValid(const QPersistentModelIndex* self) {
	return self->isValid();
}

QVariant* QPersistentModelIndex_Data1(const QPersistentModelIndex* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QPersistentModelIndex_Delete(QPersistentModelIndex* self) {
	delete self;
}

class MiqtVirtualQAbstractItemModel final : public QAbstractItemModel {
public:

	MiqtVirtualQAbstractItemModel(): QAbstractItemModel() {};
	MiqtVirtualQAbstractItemModel(QObject* parent): QAbstractItemModel(parent) {};

	virtual ~MiqtVirtualQAbstractItemModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__Index == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_Index(this, handle__Index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__Parent == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_Parent(this, handle__Parent, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__Sibling == 0) {
			return QAbstractItemModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_Sibling(this, handle__Sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QAbstractItemModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__RowCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_RowCount(this, handle__RowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ColumnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__ColumnCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_ColumnCount(this, handle__ColumnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__HasChildren == 0) {
			return QAbstractItemModel::hasChildren(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_HasChildren(this, handle__HasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasChildren(QModelIndex* parent) const {

		return QAbstractItemModel::hasChildren(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__Data == 0) {
			return QVariant(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemModel_Data(this, handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			return QAbstractItemModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetData(QModelIndex* index, QVariant* value, int role) {

		return QAbstractItemModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__HeaderData == 0) {
			return QAbstractItemModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemModel_HeaderData(this, handle__HeaderData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_HeaderData(int section, int orientation, int role) const {

		return new QVariant(QAbstractItemModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__SetHeaderData == 0) {
			return QAbstractItemModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_SetHeaderData(this, handle__SetHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetHeaderData(int section, int orientation, QVariant* value, int role) {

		return QAbstractItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__ItemData == 0) {
			return QAbstractItemModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractItemModel_ItemData(this, handle__ItemData, sigval1);
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

		QMap<int, QVariant> _ret = QAbstractItemModel::itemData(*index);
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
			return QAbstractItemModel::setItemData(index, roles);
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

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_SetItemData(this, handle__SetItemData, sigval1, sigval2);

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

		return QAbstractItemModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QAbstractItemModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractItemModel_MimeTypes(this, handle__MimeTypes);
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

		QStringList _ret = QAbstractItemModel::mimeTypes();
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
			return QAbstractItemModel::mimeData(indexes);
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

		QMimeData* callback_return_value = miqt_exec_callback_QAbstractItemModel_MimeData(this, handle__MimeData, sigval1);

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

		return QAbstractItemModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__CanDropMimeData == 0) {
			return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_CanDropMimeData(this, handle__CanDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QAbstractItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__DropMimeData == 0) {
			return QAbstractItemModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QAbstractItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QAbstractItemModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_SupportedDropActions(this, handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QAbstractItemModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__SupportedDragActions == 0) {
			return QAbstractItemModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_SupportedDragActions(this, handle__SupportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDragActions() const {

		Qt::DropActions _ret = QAbstractItemModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__InsertRows == 0) {
			return QAbstractItemModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_InsertRows(this, handle__InsertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertRows(int row, int count, QModelIndex* parent) {

		return QAbstractItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__InsertColumns == 0) {
			return QAbstractItemModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_InsertColumns(this, handle__InsertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertColumns(int column, int count, QModelIndex* parent) {

		return QAbstractItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__RemoveRows == 0) {
			return QAbstractItemModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_RemoveRows(this, handle__RemoveRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveRows(int row, int count, QModelIndex* parent) {

		return QAbstractItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__RemoveColumns == 0) {
			return QAbstractItemModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_RemoveColumns(this, handle__RemoveColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveColumns(int column, int count, QModelIndex* parent) {

		return QAbstractItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveRows == 0) {
			return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_MoveRows(this, handle__MoveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveColumns == 0) {
			return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_MoveColumns(this, handle__MoveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__FetchMore == 0) {
			QAbstractItemModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QAbstractItemModel_FetchMore(this, handle__FetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FetchMore(QModelIndex* parent) {

		QAbstractItemModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__CanFetchMore == 0) {
			return QAbstractItemModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_CanFetchMore(this, handle__CanFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanFetchMore(QModelIndex* parent) const {

		return QAbstractItemModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__Flags == 0) {
			return QAbstractItemModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_Flags(this, handle__Flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QAbstractItemModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__Sort == 0) {
			QAbstractItemModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QAbstractItemModel_Sort(this, handle__Sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Sort(int column, int order) {

		QAbstractItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__Buddy == 0) {
			return QAbstractItemModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_Buddy(this, handle__Buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Buddy(QModelIndex* index) const {

		return new QModelIndex(QAbstractItemModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__Match == 0) {
			return QAbstractItemModel::match(start, role, value, hits, flags);
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractItemModel_Match(this, handle__Match, sigval1, sigval2, sigval3, sigval4, sigval5);
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

		QModelIndexList _ret = QAbstractItemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
			return QAbstractItemModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemModel_Span(this, handle__Span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Span(QModelIndex* index) const {

		return new QSize(QAbstractItemModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RoleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__RoleNames == 0) {
			return QAbstractItemModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractItemModel_RoleNames(this, handle__RoleNames);
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

		QHash<int, QByteArray> _ret = QAbstractItemModel::roleNames();
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
			return QAbstractItemModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_Submit(this, handle__Submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Submit() {

		return QAbstractItemModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__Revert == 0) {
			QAbstractItemModel::revert();
			return;
		}
		

		miqt_exec_callback_QAbstractItemModel_Revert(this, handle__Revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Revert() {

		QAbstractItemModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractItemModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractItemModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractItemModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractItemModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractItemModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemModel_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractItemModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractItemModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemModel_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractItemModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractItemModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemModel_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractItemModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractItemModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractItemModel_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractItemModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractItemModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractItemModel_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractItemModel::disconnectNotify(*signal);

	}

};

QAbstractItemModel* QAbstractItemModel_new() {
	return new MiqtVirtualQAbstractItemModel();
}

QAbstractItemModel* QAbstractItemModel_new2(QObject* parent) {
	return new MiqtVirtualQAbstractItemModel(parent);
}

void QAbstractItemModel_virtbase(QAbstractItemModel* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractItemModel_MetaObject(const QAbstractItemModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractItemModel_Metacast(QAbstractItemModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractItemModel_Tr(const char* s) {
	QString _ret = QAbstractItemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_TrUtf8(const char* s) {
	QString _ret = QAbstractItemModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemModel_HasIndex(const QAbstractItemModel* self, int row, int column) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column));
}

QModelIndex* QAbstractItemModel_Index(const QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractItemModel_Parent(const QAbstractItemModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QAbstractItemModel_Sibling(const QAbstractItemModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

int QAbstractItemModel_RowCount(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QAbstractItemModel_ColumnCount(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QAbstractItemModel_HasChildren(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QAbstractItemModel_Data(const QAbstractItemModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QAbstractItemModel_SetData(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QAbstractItemModel_HeaderData(const QAbstractItemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractItemModel_SetHeaderData(QAbstractItemModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

struct miqt_map /* of int to QVariant* */  QAbstractItemModel_ItemData(const QAbstractItemModel* self, QModelIndex* index) {
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

bool QAbstractItemModel_SetItemData(QAbstractItemModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

struct miqt_array /* of struct miqt_string */  QAbstractItemModel_MimeTypes(const QAbstractItemModel* self) {
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

QMimeData* QAbstractItemModel_MimeData(const QAbstractItemModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QAbstractItemModel_CanDropMimeData(const QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_DropMimeData(QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractItemModel_SupportedDropActions(const QAbstractItemModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

int QAbstractItemModel_SupportedDragActions(const QAbstractItemModel* self) {
	Qt::DropActions _ret = self->supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_InsertRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_InsertColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_RemoveRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_RemoveColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_MoveRows(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_MoveColumns(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_InsertRow(QAbstractItemModel* self, int row) {
	return self->insertRow(static_cast<int>(row));
}

bool QAbstractItemModel_InsertColumn(QAbstractItemModel* self, int column) {
	return self->insertColumn(static_cast<int>(column));
}

bool QAbstractItemModel_RemoveRow(QAbstractItemModel* self, int row) {
	return self->removeRow(static_cast<int>(row));
}

bool QAbstractItemModel_RemoveColumn(QAbstractItemModel* self, int column) {
	return self->removeColumn(static_cast<int>(column));
}

bool QAbstractItemModel_MoveRow(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRow(*sourceParent, static_cast<int>(sourceRow), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_MoveColumn(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumn(*sourceParent, static_cast<int>(sourceColumn), *destinationParent, static_cast<int>(destinationChild));
}

void QAbstractItemModel_FetchMore(QAbstractItemModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QAbstractItemModel_CanFetchMore(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

int QAbstractItemModel_Flags(const QAbstractItemModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QAbstractItemModel_Sort(QAbstractItemModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QModelIndex* QAbstractItemModel_Buddy(const QAbstractItemModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_Match(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
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

QSize* QAbstractItemModel_Span(const QAbstractItemModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_RoleNames(const QAbstractItemModel* self) {
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

bool QAbstractItemModel_CheckIndex(const QAbstractItemModel* self, QModelIndex* index) {
	return self->checkIndex(*index);
}

void QAbstractItemModel_DataChanged(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight) {
	self->dataChanged(*topLeft, *bottomRight);
}

void QAbstractItemModel_connect_DataChanged(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QVector<int>&)>(&QAbstractItemModel::dataChanged), self, [=](const QModelIndex& topLeft, const QModelIndex& bottomRight) {
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		miqt_exec_callback_QAbstractItemModel_DataChanged(slot, sigval1, sigval2);
	});
}

void QAbstractItemModel_HeaderDataChanged(QAbstractItemModel* self, int orientation, int first, int last) {
	self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_connect_HeaderDataChanged(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(Qt::Orientation, int, int)>(&QAbstractItemModel::headerDataChanged), self, [=](Qt::Orientation orientation, int first, int last) {
		Qt::Orientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_HeaderDataChanged(slot, sigval1, sigval2, sigval3);
	});
}

void QAbstractItemModel_LayoutChanged(QAbstractItemModel* self) {
	self->layoutChanged();
}

void QAbstractItemModel_connect_LayoutChanged(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [=]() {
		miqt_exec_callback_QAbstractItemModel_LayoutChanged(slot);
	});
}

void QAbstractItemModel_LayoutAboutToBeChanged(QAbstractItemModel* self) {
	self->layoutAboutToBeChanged();
}

void QAbstractItemModel_connect_LayoutAboutToBeChanged(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [=]() {
		miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged(slot);
	});
}

bool QAbstractItemModel_Submit(QAbstractItemModel* self) {
	return self->submit();
}

void QAbstractItemModel_Revert(QAbstractItemModel* self) {
	self->revert();
}

struct miqt_string QAbstractItemModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractItemModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemModel_HasIndex3(const QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_InsertRow2(QAbstractItemModel* self, int row, QModelIndex* parent) {
	return self->insertRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_InsertColumn2(QAbstractItemModel* self, int column, QModelIndex* parent) {
	return self->insertColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_RemoveRow2(QAbstractItemModel* self, int row, QModelIndex* parent) {
	return self->removeRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_RemoveColumn2(QAbstractItemModel* self, int column, QModelIndex* parent) {
	return self->removeColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_CheckIndex2(const QAbstractItemModel* self, QModelIndex* index, int options) {
	return self->checkIndex(*index, static_cast<QAbstractItemModel::CheckIndexOptions>(options));
}

void QAbstractItemModel_DataChanged3(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QAbstractItemModel_connect_DataChanged3(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QVector<int>&)>(&QAbstractItemModel::dataChanged), self, [=](const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) {
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		const QVector<int>& roles_ret = roles;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
		for (size_t i = 0, e = roles_ret.length(); i < e; ++i) {
			roles_arr[i] = roles_ret[i];
		}
		struct miqt_array roles_out;
		roles_out.len = roles_ret.length();
		roles_out.data = static_cast<void*>(roles_arr);
		struct miqt_array /* of int */  sigval3 = roles_out;
		miqt_exec_callback_QAbstractItemModel_DataChanged3(slot, sigval1, sigval2, sigval3);
	});
}

void QAbstractItemModel_LayoutChanged1(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutChanged(parents_QList);
}

void QAbstractItemModel_connect_LayoutChanged1(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [=](const QList<QPersistentModelIndex>& parents) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		miqt_exec_callback_QAbstractItemModel_LayoutChanged1(slot, sigval1);
	});
}

void QAbstractItemModel_LayoutChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_connect_LayoutChanged2(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [=](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		QAbstractItemModel::LayoutChangeHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QAbstractItemModel_LayoutChanged2(slot, sigval1, sigval2);
	});
}

void QAbstractItemModel_LayoutAboutToBeChanged1(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutAboutToBeChanged(parents_QList);
}

void QAbstractItemModel_connect_LayoutAboutToBeChanged1(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [=](const QList<QPersistentModelIndex>& parents) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged1(slot, sigval1);
	});
}

void QAbstractItemModel_LayoutAboutToBeChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutAboutToBeChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_connect_LayoutAboutToBeChanged2(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [=](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		QAbstractItemModel::LayoutChangeHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QAbstractItemModel_LayoutAboutToBeChanged2(slot, sigval1, sigval2);
	});
}

bool QAbstractItemModel_override_virtual_Index(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Index = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_Parent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Parent = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_Sibling(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sibling = slot;
	return true;
}

QModelIndex* QAbstractItemModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_Sibling(row, column, idx);
}

bool QAbstractItemModel_override_virtual_RowCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowCount = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_ColumnCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ColumnCount = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_HasChildren(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasChildren = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_HasChildren(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_HasChildren(parent);
}

bool QAbstractItemModel_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_SetData(index, value, role);
}

bool QAbstractItemModel_override_virtual_HeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeaderData = slot;
	return true;
}

QVariant* QAbstractItemModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_HeaderData(section, orientation, role);
}

bool QAbstractItemModel_override_virtual_SetHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetHeaderData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_SetHeaderData(section, orientation, value, role);
}

bool QAbstractItemModel_override_virtual_ItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractItemModel_virtualbase_ItemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_ItemData(index);
}

bool QAbstractItemModel_override_virtual_SetItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetItemData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_SetItemData(index, roles);
}

bool QAbstractItemModel_override_virtual_MimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractItemModel_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_MimeTypes();
}

bool QAbstractItemModel_override_virtual_MimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeData = slot;
	return true;
}

QMimeData* QAbstractItemModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_MimeData(indexes);
}

bool QAbstractItemModel_override_virtual_CanDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanDropMimeData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_CanDropMimeData(data, action, row, column, parent);
}

bool QAbstractItemModel_override_virtual_DropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropMimeData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_DropMimeData(data, action, row, column, parent);
}

bool QAbstractItemModel_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDropActions = slot;
	return true;
}

int QAbstractItemModel_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_SupportedDropActions();
}

bool QAbstractItemModel_override_virtual_SupportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDragActions = slot;
	return true;
}

int QAbstractItemModel_virtualbase_SupportedDragActions(const void* self) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_SupportedDragActions();
}

bool QAbstractItemModel_override_virtual_InsertRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertRows = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_InsertRows(row, count, parent);
}

bool QAbstractItemModel_override_virtual_InsertColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertColumns = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_InsertColumns(column, count, parent);
}

bool QAbstractItemModel_override_virtual_RemoveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveRows = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_RemoveRows(row, count, parent);
}

bool QAbstractItemModel_override_virtual_RemoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveColumns = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_RemoveColumns(column, count, parent);
}

bool QAbstractItemModel_override_virtual_MoveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveRows = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_MoveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QAbstractItemModel_override_virtual_MoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveColumns = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_MoveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QAbstractItemModel_override_virtual_FetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FetchMore = slot;
	return true;
}

void QAbstractItemModel_virtualbase_FetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_FetchMore(parent);
}

bool QAbstractItemModel_override_virtual_CanFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanFetchMore = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_CanFetchMore(parent);
}

bool QAbstractItemModel_override_virtual_Flags(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Flags = slot;
	return true;
}

int QAbstractItemModel_virtualbase_Flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_Flags(index);
}

bool QAbstractItemModel_override_virtual_Sort(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sort = slot;
	return true;
}

void QAbstractItemModel_virtualbase_Sort(void* self, int column, int order) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_Sort(column, order);
}

bool QAbstractItemModel_override_virtual_Buddy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Buddy = slot;
	return true;
}

QModelIndex* QAbstractItemModel_virtualbase_Buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_Buddy(index);
}

bool QAbstractItemModel_override_virtual_Match(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_Match(start, role, value, hits, flags);
}

bool QAbstractItemModel_override_virtual_Span(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Span = slot;
	return true;
}

QSize* QAbstractItemModel_virtualbase_Span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_Span(index);
}

bool QAbstractItemModel_override_virtual_RoleNames(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RoleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_virtualbase_RoleNames(const void* self) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_RoleNames();
}

bool QAbstractItemModel_override_virtual_Submit(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Submit = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_Submit(void* self) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_Submit();
}

bool QAbstractItemModel_override_virtual_Revert(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Revert = slot;
	return true;
}

void QAbstractItemModel_virtualbase_Revert(void* self) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_Revert();
}

bool QAbstractItemModel_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_Event(event);
}

bool QAbstractItemModel_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAbstractItemModel_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAbstractItemModel_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_TimerEvent(event);
}

bool QAbstractItemModel_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAbstractItemModel_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_ChildEvent(event);
}

bool QAbstractItemModel_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAbstractItemModel_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_CustomEvent(event);
}

bool QAbstractItemModel_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAbstractItemModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAbstractItemModel_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAbstractItemModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractItemModel_Delete(QAbstractItemModel* self) {
	delete self;
}

class MiqtVirtualQAbstractTableModel final : public QAbstractTableModel {
public:

	MiqtVirtualQAbstractTableModel(): QAbstractTableModel() {};
	MiqtVirtualQAbstractTableModel(QObject* parent): QAbstractTableModel(parent) {};

	virtual ~MiqtVirtualQAbstractTableModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__Index == 0) {
			return QAbstractTableModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractTableModel_Index(this, handle__Index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QAbstractTableModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__Sibling == 0) {
			return QAbstractTableModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractTableModel_Sibling(this, handle__Sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QAbstractTableModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__DropMimeData == 0) {
			return QAbstractTableModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QAbstractTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__Flags == 0) {
			return QAbstractTableModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_Flags(this, handle__Flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QAbstractTableModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__RowCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_RowCount(this, handle__RowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ColumnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__ColumnCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_ColumnCount(this, handle__ColumnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__Data == 0) {
			return QVariant(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractTableModel_Data(this, handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			return QAbstractTableModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetData(QModelIndex* index, QVariant* value, int role) {

		return QAbstractTableModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__HeaderData == 0) {
			return QAbstractTableModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractTableModel_HeaderData(this, handle__HeaderData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_HeaderData(int section, int orientation, int role) const {

		return new QVariant(QAbstractTableModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__SetHeaderData == 0) {
			return QAbstractTableModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_SetHeaderData(this, handle__SetHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetHeaderData(int section, int orientation, QVariant* value, int role) {

		return QAbstractTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__ItemData == 0) {
			return QAbstractTableModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractTableModel_ItemData(this, handle__ItemData, sigval1);
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

		QMap<int, QVariant> _ret = QAbstractTableModel::itemData(*index);
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
			return QAbstractTableModel::setItemData(index, roles);
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

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_SetItemData(this, handle__SetItemData, sigval1, sigval2);

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

		return QAbstractTableModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QAbstractTableModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractTableModel_MimeTypes(this, handle__MimeTypes);
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

		QStringList _ret = QAbstractTableModel::mimeTypes();
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
			return QAbstractTableModel::mimeData(indexes);
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

		QMimeData* callback_return_value = miqt_exec_callback_QAbstractTableModel_MimeData(this, handle__MimeData, sigval1);

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

		return QAbstractTableModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__CanDropMimeData == 0) {
			return QAbstractTableModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_CanDropMimeData(this, handle__CanDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QAbstractTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QAbstractTableModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_SupportedDropActions(this, handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QAbstractTableModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__SupportedDragActions == 0) {
			return QAbstractTableModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_SupportedDragActions(this, handle__SupportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDragActions() const {

		Qt::DropActions _ret = QAbstractTableModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__InsertRows == 0) {
			return QAbstractTableModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_InsertRows(this, handle__InsertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertRows(int row, int count, QModelIndex* parent) {

		return QAbstractTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__InsertColumns == 0) {
			return QAbstractTableModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_InsertColumns(this, handle__InsertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertColumns(int column, int count, QModelIndex* parent) {

		return QAbstractTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__RemoveRows == 0) {
			return QAbstractTableModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_RemoveRows(this, handle__RemoveRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveRows(int row, int count, QModelIndex* parent) {

		return QAbstractTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__RemoveColumns == 0) {
			return QAbstractTableModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_RemoveColumns(this, handle__RemoveColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveColumns(int column, int count, QModelIndex* parent) {

		return QAbstractTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveRows == 0) {
			return QAbstractTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_MoveRows(this, handle__MoveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveColumns == 0) {
			return QAbstractTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_MoveColumns(this, handle__MoveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__FetchMore == 0) {
			QAbstractTableModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QAbstractTableModel_FetchMore(this, handle__FetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FetchMore(QModelIndex* parent) {

		QAbstractTableModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__CanFetchMore == 0) {
			return QAbstractTableModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_CanFetchMore(this, handle__CanFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanFetchMore(QModelIndex* parent) const {

		return QAbstractTableModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__Sort == 0) {
			QAbstractTableModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QAbstractTableModel_Sort(this, handle__Sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Sort(int column, int order) {

		QAbstractTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__Buddy == 0) {
			return QAbstractTableModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractTableModel_Buddy(this, handle__Buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Buddy(QModelIndex* index) const {

		return new QModelIndex(QAbstractTableModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__Match == 0) {
			return QAbstractTableModel::match(start, role, value, hits, flags);
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractTableModel_Match(this, handle__Match, sigval1, sigval2, sigval3, sigval4, sigval5);
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

		QModelIndexList _ret = QAbstractTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
			return QAbstractTableModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QAbstractTableModel_Span(this, handle__Span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Span(QModelIndex* index) const {

		return new QSize(QAbstractTableModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RoleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__RoleNames == 0) {
			return QAbstractTableModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractTableModel_RoleNames(this, handle__RoleNames);
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

		QHash<int, QByteArray> _ret = QAbstractTableModel::roleNames();
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
			return QAbstractTableModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_Submit(this, handle__Submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Submit() {

		return QAbstractTableModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__Revert == 0) {
			QAbstractTableModel::revert();
			return;
		}
		

		miqt_exec_callback_QAbstractTableModel_Revert(this, handle__Revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Revert() {

		QAbstractTableModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractTableModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractTableModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractTableModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractTableModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractTableModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTableModel_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractTableModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractTableModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTableModel_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractTableModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractTableModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTableModel_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractTableModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractTableModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractTableModel_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractTableModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractTableModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractTableModel_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractTableModel::disconnectNotify(*signal);

	}

};

QAbstractTableModel* QAbstractTableModel_new() {
	return new MiqtVirtualQAbstractTableModel();
}

QAbstractTableModel* QAbstractTableModel_new2(QObject* parent) {
	return new MiqtVirtualQAbstractTableModel(parent);
}

void QAbstractTableModel_virtbase(QAbstractTableModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QAbstractTableModel_MetaObject(const QAbstractTableModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractTableModel_Metacast(QAbstractTableModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractTableModel_Tr(const char* s) {
	QString _ret = QAbstractTableModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_TrUtf8(const char* s) {
	QString _ret = QAbstractTableModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QAbstractTableModel_Index(const QAbstractTableModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractTableModel_Sibling(const QAbstractTableModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractTableModel_DropMimeData(QAbstractTableModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractTableModel_Flags(const QAbstractTableModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

struct miqt_string QAbstractTableModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractTableModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTableModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractTableModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractTableModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractTableModel_override_virtual_Index(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Index = slot;
	return true;
}

QModelIndex* QAbstractTableModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_Index(row, column, parent);
}

bool QAbstractTableModel_override_virtual_Sibling(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sibling = slot;
	return true;
}

QModelIndex* QAbstractTableModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_Sibling(row, column, idx);
}

bool QAbstractTableModel_override_virtual_DropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropMimeData = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_DropMimeData(data, action, row, column, parent);
}

bool QAbstractTableModel_override_virtual_Flags(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Flags = slot;
	return true;
}

int QAbstractTableModel_virtualbase_Flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_Flags(index);
}

bool QAbstractTableModel_override_virtual_RowCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowCount = slot;
	return true;
}

bool QAbstractTableModel_override_virtual_ColumnCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ColumnCount = slot;
	return true;
}

bool QAbstractTableModel_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

bool QAbstractTableModel_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_SetData(index, value, role);
}

bool QAbstractTableModel_override_virtual_HeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeaderData = slot;
	return true;
}

QVariant* QAbstractTableModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_HeaderData(section, orientation, role);
}

bool QAbstractTableModel_override_virtual_SetHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetHeaderData = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_SetHeaderData(section, orientation, value, role);
}

bool QAbstractTableModel_override_virtual_ItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractTableModel_virtualbase_ItemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_ItemData(index);
}

bool QAbstractTableModel_override_virtual_SetItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetItemData = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_SetItemData(index, roles);
}

bool QAbstractTableModel_override_virtual_MimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractTableModel_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_MimeTypes();
}

bool QAbstractTableModel_override_virtual_MimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeData = slot;
	return true;
}

QMimeData* QAbstractTableModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_MimeData(indexes);
}

bool QAbstractTableModel_override_virtual_CanDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanDropMimeData = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_CanDropMimeData(data, action, row, column, parent);
}

bool QAbstractTableModel_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDropActions = slot;
	return true;
}

int QAbstractTableModel_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_SupportedDropActions();
}

bool QAbstractTableModel_override_virtual_SupportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDragActions = slot;
	return true;
}

int QAbstractTableModel_virtualbase_SupportedDragActions(const void* self) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_SupportedDragActions();
}

bool QAbstractTableModel_override_virtual_InsertRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertRows = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_InsertRows(row, count, parent);
}

bool QAbstractTableModel_override_virtual_InsertColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertColumns = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_InsertColumns(column, count, parent);
}

bool QAbstractTableModel_override_virtual_RemoveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveRows = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_RemoveRows(row, count, parent);
}

bool QAbstractTableModel_override_virtual_RemoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveColumns = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_RemoveColumns(column, count, parent);
}

bool QAbstractTableModel_override_virtual_MoveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveRows = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_MoveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QAbstractTableModel_override_virtual_MoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveColumns = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_MoveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QAbstractTableModel_override_virtual_FetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FetchMore = slot;
	return true;
}

void QAbstractTableModel_virtualbase_FetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_FetchMore(parent);
}

bool QAbstractTableModel_override_virtual_CanFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanFetchMore = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_CanFetchMore(parent);
}

bool QAbstractTableModel_override_virtual_Sort(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sort = slot;
	return true;
}

void QAbstractTableModel_virtualbase_Sort(void* self, int column, int order) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_Sort(column, order);
}

bool QAbstractTableModel_override_virtual_Buddy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Buddy = slot;
	return true;
}

QModelIndex* QAbstractTableModel_virtualbase_Buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_Buddy(index);
}

bool QAbstractTableModel_override_virtual_Match(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractTableModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_Match(start, role, value, hits, flags);
}

bool QAbstractTableModel_override_virtual_Span(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Span = slot;
	return true;
}

QSize* QAbstractTableModel_virtualbase_Span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_Span(index);
}

bool QAbstractTableModel_override_virtual_RoleNames(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RoleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractTableModel_virtualbase_RoleNames(const void* self) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_RoleNames();
}

bool QAbstractTableModel_override_virtual_Submit(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Submit = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_Submit(void* self) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_Submit();
}

bool QAbstractTableModel_override_virtual_Revert(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Revert = slot;
	return true;
}

void QAbstractTableModel_virtualbase_Revert(void* self) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_Revert();
}

bool QAbstractTableModel_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_Event(event);
}

bool QAbstractTableModel_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAbstractTableModel_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAbstractTableModel_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_TimerEvent(event);
}

bool QAbstractTableModel_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAbstractTableModel_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_ChildEvent(event);
}

bool QAbstractTableModel_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAbstractTableModel_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_CustomEvent(event);
}

bool QAbstractTableModel_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAbstractTableModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAbstractTableModel_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAbstractTableModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractTableModel_Delete(QAbstractTableModel* self) {
	delete self;
}

class MiqtVirtualQAbstractListModel final : public QAbstractListModel {
public:

	MiqtVirtualQAbstractListModel(): QAbstractListModel() {};
	MiqtVirtualQAbstractListModel(QObject* parent): QAbstractListModel(parent) {};

	virtual ~MiqtVirtualQAbstractListModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__Index == 0) {
			return QAbstractListModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractListModel_Index(this, handle__Index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QAbstractListModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__Sibling == 0) {
			return QAbstractListModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractListModel_Sibling(this, handle__Sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QAbstractListModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__DropMimeData == 0) {
			return QAbstractListModel::dropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_DropMimeData(this, handle__DropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_DropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QAbstractListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__Flags == 0) {
			return QAbstractListModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QAbstractListModel_Flags(this, handle__Flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QAbstractListModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__RowCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractListModel_RowCount(this, handle__RowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__Data == 0) {
			return QVariant(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractListModel_Data(this, handle__Data, sigval1, sigval2);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__SetData == 0) {
			return QAbstractListModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_SetData(this, handle__SetData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetData(QModelIndex* index, QVariant* value, int role) {

		return QAbstractListModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__HeaderData == 0) {
			return QAbstractListModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractListModel_HeaderData(this, handle__HeaderData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_HeaderData(int section, int orientation, int role) const {

		return new QVariant(QAbstractListModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__SetHeaderData == 0) {
			return QAbstractListModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_SetHeaderData(this, handle__SetHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetHeaderData(int section, int orientation, QVariant* value, int role) {

		return QAbstractListModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__ItemData == 0) {
			return QAbstractListModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractListModel_ItemData(this, handle__ItemData, sigval1);
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

		QMap<int, QVariant> _ret = QAbstractListModel::itemData(*index);
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
			return QAbstractListModel::setItemData(index, roles);
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

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_SetItemData(this, handle__SetItemData, sigval1, sigval2);

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

		return QAbstractListModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__MimeTypes == 0) {
			return QAbstractListModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractListModel_MimeTypes(this, handle__MimeTypes);
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

		QStringList _ret = QAbstractListModel::mimeTypes();
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
			return QAbstractListModel::mimeData(indexes);
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

		QMimeData* callback_return_value = miqt_exec_callback_QAbstractListModel_MimeData(this, handle__MimeData, sigval1);

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

		return QAbstractListModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__CanDropMimeData == 0) {
			return QAbstractListModel::canDropMimeData(data, action, row, column, parent);
		}
		
		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_CanDropMimeData(this, handle__CanDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QAbstractListModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__SupportedDropActions == 0) {
			return QAbstractListModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractListModel_SupportedDropActions(this, handle__SupportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDropActions() const {

		Qt::DropActions _ret = QAbstractListModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SupportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__SupportedDragActions == 0) {
			return QAbstractListModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractListModel_SupportedDragActions(this, handle__SupportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_SupportedDragActions() const {

		Qt::DropActions _ret = QAbstractListModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__InsertRows == 0) {
			return QAbstractListModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_InsertRows(this, handle__InsertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertRows(int row, int count, QModelIndex* parent) {

		return QAbstractListModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InsertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__InsertColumns == 0) {
			return QAbstractListModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_InsertColumns(this, handle__InsertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_InsertColumns(int column, int count, QModelIndex* parent) {

		return QAbstractListModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__RemoveRows == 0) {
			return QAbstractListModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_RemoveRows(this, handle__RemoveRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveRows(int row, int count, QModelIndex* parent) {

		return QAbstractListModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RemoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__RemoveColumns == 0) {
			return QAbstractListModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_RemoveColumns(this, handle__RemoveColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_RemoveColumns(int column, int count, QModelIndex* parent) {

		return QAbstractListModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveRows == 0) {
			return QAbstractListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_MoveRows(this, handle__MoveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractListModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__MoveColumns == 0) {
			return QAbstractListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_MoveColumns(this, handle__MoveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_MoveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractListModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__FetchMore == 0) {
			QAbstractListModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QAbstractListModel_FetchMore(this, handle__FetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FetchMore(QModelIndex* parent) {

		QAbstractListModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CanFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__CanFetchMore == 0) {
			return QAbstractListModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_CanFetchMore(this, handle__CanFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_CanFetchMore(QModelIndex* parent) const {

		return QAbstractListModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__Sort == 0) {
			QAbstractListModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QAbstractListModel_Sort(this, handle__Sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Sort(int column, int order) {

		QAbstractListModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__Buddy == 0) {
			return QAbstractListModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractListModel_Buddy(this, handle__Buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_Buddy(QModelIndex* index) const {

		return new QModelIndex(QAbstractListModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__Match == 0) {
			return QAbstractListModel::match(start, role, value, hits, flags);
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractListModel_Match(this, handle__Match, sigval1, sigval2, sigval3, sigval4, sigval5);
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

		QModelIndexList _ret = QAbstractListModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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
			return QAbstractListModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QAbstractListModel_Span(this, handle__Span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_Span(QModelIndex* index) const {

		return new QSize(QAbstractListModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__RoleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__RoleNames == 0) {
			return QAbstractListModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractListModel_RoleNames(this, handle__RoleNames);
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

		QHash<int, QByteArray> _ret = QAbstractListModel::roleNames();
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
			return QAbstractListModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_Submit(this, handle__Submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Submit() {

		return QAbstractListModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__Revert == 0) {
			QAbstractListModel::revert();
			return;
		}
		

		miqt_exec_callback_QAbstractListModel_Revert(this, handle__Revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Revert() {

		QAbstractListModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAbstractListModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAbstractListModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAbstractListModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAbstractListModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAbstractListModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractListModel_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAbstractListModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAbstractListModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractListModel_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAbstractListModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAbstractListModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractListModel_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAbstractListModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAbstractListModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractListModel_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAbstractListModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAbstractListModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractListModel_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAbstractListModel::disconnectNotify(*signal);

	}

};

QAbstractListModel* QAbstractListModel_new() {
	return new MiqtVirtualQAbstractListModel();
}

QAbstractListModel* QAbstractListModel_new2(QObject* parent) {
	return new MiqtVirtualQAbstractListModel(parent);
}

void QAbstractListModel_virtbase(QAbstractListModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QAbstractListModel_MetaObject(const QAbstractListModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractListModel_Metacast(QAbstractListModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractListModel_Tr(const char* s) {
	QString _ret = QAbstractListModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_TrUtf8(const char* s) {
	QString _ret = QAbstractListModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QAbstractListModel_Index(const QAbstractListModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractListModel_Sibling(const QAbstractListModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractListModel_DropMimeData(QAbstractListModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractListModel_Flags(const QAbstractListModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

struct miqt_string QAbstractListModel_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractListModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractListModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractListModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractListModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractListModel_override_virtual_Index(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Index = slot;
	return true;
}

QModelIndex* QAbstractListModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_Index(row, column, parent);
}

bool QAbstractListModel_override_virtual_Sibling(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sibling = slot;
	return true;
}

QModelIndex* QAbstractListModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_Sibling(row, column, idx);
}

bool QAbstractListModel_override_virtual_DropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropMimeData = slot;
	return true;
}

bool QAbstractListModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_DropMimeData(data, action, row, column, parent);
}

bool QAbstractListModel_override_virtual_Flags(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Flags = slot;
	return true;
}

int QAbstractListModel_virtualbase_Flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_Flags(index);
}

bool QAbstractListModel_override_virtual_RowCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RowCount = slot;
	return true;
}

bool QAbstractListModel_override_virtual_Data(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Data = slot;
	return true;
}

bool QAbstractListModel_override_virtual_SetData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetData = slot;
	return true;
}

bool QAbstractListModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_SetData(index, value, role);
}

bool QAbstractListModel_override_virtual_HeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeaderData = slot;
	return true;
}

QVariant* QAbstractListModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_HeaderData(section, orientation, role);
}

bool QAbstractListModel_override_virtual_SetHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetHeaderData = slot;
	return true;
}

bool QAbstractListModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_SetHeaderData(section, orientation, value, role);
}

bool QAbstractListModel_override_virtual_ItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ItemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractListModel_virtualbase_ItemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_ItemData(index);
}

bool QAbstractListModel_override_virtual_SetItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetItemData = slot;
	return true;
}

bool QAbstractListModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_SetItemData(index, roles);
}

bool QAbstractListModel_override_virtual_MimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractListModel_virtualbase_MimeTypes(const void* self) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_MimeTypes();
}

bool QAbstractListModel_override_virtual_MimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MimeData = slot;
	return true;
}

QMimeData* QAbstractListModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_MimeData(indexes);
}

bool QAbstractListModel_override_virtual_CanDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanDropMimeData = slot;
	return true;
}

bool QAbstractListModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_CanDropMimeData(data, action, row, column, parent);
}

bool QAbstractListModel_override_virtual_SupportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDropActions = slot;
	return true;
}

int QAbstractListModel_virtualbase_SupportedDropActions(const void* self) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_SupportedDropActions();
}

bool QAbstractListModel_override_virtual_SupportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SupportedDragActions = slot;
	return true;
}

int QAbstractListModel_virtualbase_SupportedDragActions(const void* self) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_SupportedDragActions();
}

bool QAbstractListModel_override_virtual_InsertRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertRows = slot;
	return true;
}

bool QAbstractListModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_InsertRows(row, count, parent);
}

bool QAbstractListModel_override_virtual_InsertColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InsertColumns = slot;
	return true;
}

bool QAbstractListModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_InsertColumns(column, count, parent);
}

bool QAbstractListModel_override_virtual_RemoveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveRows = slot;
	return true;
}

bool QAbstractListModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_RemoveRows(row, count, parent);
}

bool QAbstractListModel_override_virtual_RemoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RemoveColumns = slot;
	return true;
}

bool QAbstractListModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_RemoveColumns(column, count, parent);
}

bool QAbstractListModel_override_virtual_MoveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveRows = slot;
	return true;
}

bool QAbstractListModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_MoveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QAbstractListModel_override_virtual_MoveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveColumns = slot;
	return true;
}

bool QAbstractListModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_MoveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QAbstractListModel_override_virtual_FetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FetchMore = slot;
	return true;
}

void QAbstractListModel_virtualbase_FetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_FetchMore(parent);
}

bool QAbstractListModel_override_virtual_CanFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CanFetchMore = slot;
	return true;
}

bool QAbstractListModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_CanFetchMore(parent);
}

bool QAbstractListModel_override_virtual_Sort(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Sort = slot;
	return true;
}

void QAbstractListModel_virtualbase_Sort(void* self, int column, int order) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_Sort(column, order);
}

bool QAbstractListModel_override_virtual_Buddy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Buddy = slot;
	return true;
}

QModelIndex* QAbstractListModel_virtualbase_Buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_Buddy(index);
}

bool QAbstractListModel_override_virtual_Match(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractListModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_Match(start, role, value, hits, flags);
}

bool QAbstractListModel_override_virtual_Span(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Span = slot;
	return true;
}

QSize* QAbstractListModel_virtualbase_Span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_Span(index);
}

bool QAbstractListModel_override_virtual_RoleNames(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__RoleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractListModel_virtualbase_RoleNames(const void* self) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_RoleNames();
}

bool QAbstractListModel_override_virtual_Submit(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Submit = slot;
	return true;
}

bool QAbstractListModel_virtualbase_Submit(void* self) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_Submit();
}

bool QAbstractListModel_override_virtual_Revert(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Revert = slot;
	return true;
}

void QAbstractListModel_virtualbase_Revert(void* self) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_Revert();
}

bool QAbstractListModel_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAbstractListModel_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_Event(event);
}

bool QAbstractListModel_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAbstractListModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAbstractListModel_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAbstractListModel_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_TimerEvent(event);
}

bool QAbstractListModel_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAbstractListModel_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_ChildEvent(event);
}

bool QAbstractListModel_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAbstractListModel_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_CustomEvent(event);
}

bool QAbstractListModel_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAbstractListModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAbstractListModel_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAbstractListModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAbstractListModel_Delete(QAbstractListModel* self) {
	delete self;
}

