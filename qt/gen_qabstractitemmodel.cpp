#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QAbstractTableModel>
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

void miqt_exec_callback_QAbstractItemModel_dataChanged(intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QAbstractItemModel_headerDataChanged(intptr_t, int, int, int);
void miqt_exec_callback_QAbstractItemModel_layoutChanged(intptr_t);
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged(intptr_t);
void miqt_exec_callback_QAbstractItemModel_dataChanged3(intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QAbstractItemModel_layoutChanged1(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ );
void miqt_exec_callback_QAbstractItemModel_layoutChanged2(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ , int);
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged1(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ );
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged2(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ , int);
QModelIndex* miqt_exec_callback_QAbstractItemModel_index(const QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractItemModel_parent(const QAbstractItemModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractItemModel_sibling(const QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_rowCount(const QAbstractItemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_columnCount(const QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_hasChildren(const QAbstractItemModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QAbstractItemModel_data(const QAbstractItemModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QAbstractItemModel_setData(QAbstractItemModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QAbstractItemModel_headerData(const QAbstractItemModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QAbstractItemModel_setHeaderData(QAbstractItemModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractItemModel_itemData(const QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_setItemData(QAbstractItemModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractItemModel_mimeTypes(const QAbstractItemModel*, intptr_t);
QMimeData* miqt_exec_callback_QAbstractItemModel_mimeData(const QAbstractItemModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractItemModel_canDropMimeData(const QAbstractItemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_dropMimeData(QAbstractItemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_supportedDropActions(const QAbstractItemModel*, intptr_t);
int miqt_exec_callback_QAbstractItemModel_supportedDragActions(const QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_insertRows(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_insertColumns(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_removeRows(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_removeColumns(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_moveRows(QAbstractItemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractItemModel_moveColumns(QAbstractItemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractItemModel_fetchMore(QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_canFetchMore(const QAbstractItemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_flags(const QAbstractItemModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemModel_sort(QAbstractItemModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QAbstractItemModel_buddy(const QAbstractItemModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractItemModel_match(const QAbstractItemModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QAbstractItemModel_span(const QAbstractItemModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractItemModel_roleNames(const QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_submit(QAbstractItemModel*, intptr_t);
void miqt_exec_callback_QAbstractItemModel_revert(QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_event(QAbstractItemModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractItemModel_eventFilter(QAbstractItemModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractItemModel_timerEvent(QAbstractItemModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractItemModel_childEvent(QAbstractItemModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractItemModel_customEvent(QAbstractItemModel*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemModel_connectNotify(QAbstractItemModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractItemModel_disconnectNotify(QAbstractItemModel*, intptr_t, QMetaMethod*);
QModelIndex* miqt_exec_callback_QAbstractTableModel_index(const QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractTableModel_sibling(const QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_dropMimeData(QAbstractTableModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_flags(const QAbstractTableModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_rowCount(const QAbstractTableModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_columnCount(const QAbstractTableModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QAbstractTableModel_data(const QAbstractTableModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QAbstractTableModel_setData(QAbstractTableModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QAbstractTableModel_headerData(const QAbstractTableModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QAbstractTableModel_setHeaderData(QAbstractTableModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractTableModel_itemData(const QAbstractTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_setItemData(QAbstractTableModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractTableModel_mimeTypes(const QAbstractTableModel*, intptr_t);
QMimeData* miqt_exec_callback_QAbstractTableModel_mimeData(const QAbstractTableModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractTableModel_canDropMimeData(const QAbstractTableModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_supportedDropActions(const QAbstractTableModel*, intptr_t);
int miqt_exec_callback_QAbstractTableModel_supportedDragActions(const QAbstractTableModel*, intptr_t);
bool miqt_exec_callback_QAbstractTableModel_insertRows(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_insertColumns(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_removeRows(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_removeColumns(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_moveRows(QAbstractTableModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractTableModel_moveColumns(QAbstractTableModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractTableModel_fetchMore(QAbstractTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_canFetchMore(const QAbstractTableModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractTableModel_sort(QAbstractTableModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QAbstractTableModel_buddy(const QAbstractTableModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractTableModel_match(const QAbstractTableModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QAbstractTableModel_span(const QAbstractTableModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractTableModel_roleNames(const QAbstractTableModel*, intptr_t);
bool miqt_exec_callback_QAbstractTableModel_submit(QAbstractTableModel*, intptr_t);
void miqt_exec_callback_QAbstractTableModel_revert(QAbstractTableModel*, intptr_t);
bool miqt_exec_callback_QAbstractTableModel_event(QAbstractTableModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractTableModel_eventFilter(QAbstractTableModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractTableModel_timerEvent(QAbstractTableModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractTableModel_childEvent(QAbstractTableModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractTableModel_customEvent(QAbstractTableModel*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractTableModel_connectNotify(QAbstractTableModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractTableModel_disconnectNotify(QAbstractTableModel*, intptr_t, QMetaMethod*);
QModelIndex* miqt_exec_callback_QAbstractListModel_index(const QAbstractListModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractListModel_sibling(const QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_dropMimeData(QAbstractListModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractListModel_flags(const QAbstractListModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractListModel_rowCount(const QAbstractListModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QAbstractListModel_data(const QAbstractListModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QAbstractListModel_setData(QAbstractListModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QAbstractListModel_headerData(const QAbstractListModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QAbstractListModel_setHeaderData(QAbstractListModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractListModel_itemData(const QAbstractListModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_setItemData(QAbstractListModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractListModel_mimeTypes(const QAbstractListModel*, intptr_t);
QMimeData* miqt_exec_callback_QAbstractListModel_mimeData(const QAbstractListModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractListModel_canDropMimeData(const QAbstractListModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractListModel_supportedDropActions(const QAbstractListModel*, intptr_t);
int miqt_exec_callback_QAbstractListModel_supportedDragActions(const QAbstractListModel*, intptr_t);
bool miqt_exec_callback_QAbstractListModel_insertRows(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_insertColumns(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_removeRows(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_removeColumns(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_moveRows(QAbstractListModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractListModel_moveColumns(QAbstractListModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractListModel_fetchMore(QAbstractListModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_canFetchMore(const QAbstractListModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractListModel_sort(QAbstractListModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QAbstractListModel_buddy(const QAbstractListModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractListModel_match(const QAbstractListModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QAbstractListModel_span(const QAbstractListModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractListModel_roleNames(const QAbstractListModel*, intptr_t);
bool miqt_exec_callback_QAbstractListModel_submit(QAbstractListModel*, intptr_t);
void miqt_exec_callback_QAbstractListModel_revert(QAbstractListModel*, intptr_t);
bool miqt_exec_callback_QAbstractListModel_event(QAbstractListModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractListModel_eventFilter(QAbstractListModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractListModel_timerEvent(QAbstractListModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractListModel_childEvent(QAbstractListModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractListModel_customEvent(QAbstractListModel*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractListModel_connectNotify(QAbstractListModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractListModel_disconnectNotify(QAbstractListModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QModelIndex* QModelIndex_new() {
	return new QModelIndex();
}

QModelIndex* QModelIndex_new2(QModelIndex* param1) {
	return new QModelIndex(*param1);
}

int QModelIndex_row(const QModelIndex* self) {
	return self->row();
}

int QModelIndex_column(const QModelIndex* self) {
	return self->column();
}

uintptr_t QModelIndex_internalId(const QModelIndex* self) {
	quintptr _ret = self->internalId();
	return static_cast<uintptr_t>(_ret);
}

void* QModelIndex_internalPointer(const QModelIndex* self) {
	return self->internalPointer();
}

QModelIndex* QModelIndex_parent(const QModelIndex* self) {
	return new QModelIndex(self->parent());
}

QModelIndex* QModelIndex_sibling(const QModelIndex* self, int row, int column) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QModelIndex_siblingAtColumn(const QModelIndex* self, int column) {
	return new QModelIndex(self->siblingAtColumn(static_cast<int>(column)));
}

QModelIndex* QModelIndex_siblingAtRow(const QModelIndex* self, int row) {
	return new QModelIndex(self->siblingAtRow(static_cast<int>(row)));
}

QModelIndex* QModelIndex_child(const QModelIndex* self, int row, int column) {
	return new QModelIndex(self->child(static_cast<int>(row), static_cast<int>(column)));
}

QVariant* QModelIndex_data(const QModelIndex* self) {
	return new QVariant(self->data());
}

int QModelIndex_flags(const QModelIndex* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QAbstractItemModel* QModelIndex_model(const QModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QModelIndex_isValid(const QModelIndex* self) {
	return self->isValid();
}

bool QModelIndex_operatorEqual(const QModelIndex* self, QModelIndex* other) {
	return (*self == *other);
}

bool QModelIndex_operatorNotEqual(const QModelIndex* self, QModelIndex* other) {
	return (*self != *other);
}

bool QModelIndex_operatorLesser(const QModelIndex* self, QModelIndex* other) {
	return (*self < *other);
}

QVariant* QModelIndex_data1(const QModelIndex* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QModelIndex_delete(QModelIndex* self) {
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

bool QPersistentModelIndex_operatorLesser(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return (*self < *other);
}

bool QPersistentModelIndex_operatorEqual(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return (*self == *other);
}

bool QPersistentModelIndex_operatorNotEqual(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return (*self != *other);
}

void QPersistentModelIndex_operatorAssign(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->operator=(*other);
}

void QPersistentModelIndex_swap(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->swap(*other);
}

bool QPersistentModelIndex_operatorEqualWithOther(const QPersistentModelIndex* self, QModelIndex* other) {
	return (*self == *other);
}

bool QPersistentModelIndex_operatorNotEqualWithOther(const QPersistentModelIndex* self, QModelIndex* other) {
	return (*self != *other);
}

void QPersistentModelIndex_operatorAssignWithOther(QPersistentModelIndex* self, QModelIndex* other) {
	self->operator=(*other);
}

QModelIndex* QPersistentModelIndex_ToConstQModelIndexBitwiseAnd(const QPersistentModelIndex* self) {
	const QModelIndex& _ret = self->operator const QModelIndex &();
	// Cast returned reference into pointer
	return const_cast<QModelIndex*>(&_ret);
}

int QPersistentModelIndex_row(const QPersistentModelIndex* self) {
	return self->row();
}

int QPersistentModelIndex_column(const QPersistentModelIndex* self) {
	return self->column();
}

void* QPersistentModelIndex_internalPointer(const QPersistentModelIndex* self) {
	return self->internalPointer();
}

uintptr_t QPersistentModelIndex_internalId(const QPersistentModelIndex* self) {
	quintptr _ret = self->internalId();
	return static_cast<uintptr_t>(_ret);
}

QModelIndex* QPersistentModelIndex_parent(const QPersistentModelIndex* self) {
	return new QModelIndex(self->parent());
}

QModelIndex* QPersistentModelIndex_sibling(const QPersistentModelIndex* self, int row, int column) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QPersistentModelIndex_child(const QPersistentModelIndex* self, int row, int column) {
	return new QModelIndex(self->child(static_cast<int>(row), static_cast<int>(column)));
}

QVariant* QPersistentModelIndex_data(const QPersistentModelIndex* self) {
	return new QVariant(self->data());
}

int QPersistentModelIndex_flags(const QPersistentModelIndex* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QAbstractItemModel* QPersistentModelIndex_model(const QPersistentModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QPersistentModelIndex_isValid(const QPersistentModelIndex* self) {
	return self->isValid();
}

QVariant* QPersistentModelIndex_data1(const QPersistentModelIndex* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QPersistentModelIndex_delete(QPersistentModelIndex* self) {
	delete self;
}

class MiqtVirtualQAbstractItemModel final : public QAbstractItemModel {
public:

	MiqtVirtualQAbstractItemModel(): QAbstractItemModel() {};
	MiqtVirtualQAbstractItemModel(QObject* parent): QAbstractItemModel(parent) {};

	virtual ~MiqtVirtualQAbstractItemModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_index(this, handle__index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__parent == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_parent(this, handle__parent, sigval1);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QAbstractItemModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QAbstractItemModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_rowCount(this, handle__rowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_columnCount(this, handle__columnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__hasChildren == 0) {
			return QAbstractItemModel::hasChildren(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_hasChildren(this, handle__hasChildren, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasChildren(QModelIndex* parent) const {

		return QAbstractItemModel::hasChildren(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QVariant(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemModel_data(this, handle__data, sigval1, sigval2);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QAbstractItemModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_setData(this, handle__setData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setData(QModelIndex* index, QVariant* value, int role) {

		return QAbstractItemModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QAbstractItemModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_headerData(int section, int orientation, int role) const {

		return new QVariant(QAbstractItemModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QAbstractItemModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setHeaderData(int section, int orientation, QVariant* value, int role) {

		return QAbstractItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QAbstractItemModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractItemModel_itemData(this, handle__itemData, sigval1);
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
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_setItemData(this, handle__setItemData, sigval1, sigval2);

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

		return QAbstractItemModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QAbstractItemModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractItemModel_mimeTypes(this, handle__mimeTypes);
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
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
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

		QMimeData* callback_return_value = miqt_exec_callback_QAbstractItemModel_mimeData(this, handle__mimeData, sigval1);

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

		return QAbstractItemModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QAbstractItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QAbstractItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QAbstractItemModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QAbstractItemModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QAbstractItemModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_supportedDragActions(this, handle__supportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDragActions() const {

		Qt::DropActions _ret = QAbstractItemModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QAbstractItemModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertRows(int row, int count, QModelIndex* parent) {

		return QAbstractItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QAbstractItemModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertColumns(int column, int count, QModelIndex* parent) {

		return QAbstractItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QAbstractItemModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeRows(int row, int count, QModelIndex* parent) {

		return QAbstractItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QAbstractItemModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeColumns(int column, int count, QModelIndex* parent) {

		return QAbstractItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QAbstractItemModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QAbstractItemModel_fetchMore(this, handle__fetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fetchMore(QModelIndex* parent) {

		QAbstractItemModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QAbstractItemModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_canFetchMore(this, handle__canFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canFetchMore(QModelIndex* parent) const {

		return QAbstractItemModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QAbstractItemModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_flags(this, handle__flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QAbstractItemModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QAbstractItemModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QAbstractItemModel_sort(this, handle__sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sort(int column, int order) {

		QAbstractItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QAbstractItemModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_buddy(this, handle__buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_buddy(QModelIndex* index) const {

		return new QModelIndex(QAbstractItemModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractItemModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
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
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QAbstractItemModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemModel_span(this, handle__span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_span(QModelIndex* index) const {

		return new QSize(QAbstractItemModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QAbstractItemModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractItemModel_roleNames(this, handle__roleNames);
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
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QAbstractItemModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_submit(this, handle__submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_submit() {

		return QAbstractItemModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QAbstractItemModel::revert();
			return;
		}
		

		miqt_exec_callback_QAbstractItemModel_revert(this, handle__revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_revert() {

		QAbstractItemModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractItemModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractItemModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractItemModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractItemModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractItemModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemModel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractItemModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractItemModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemModel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractItemModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractItemModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractItemModel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractItemModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractItemModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractItemModel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractItemModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractItemModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractItemModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractItemModel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractItemModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QAbstractItemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend QModelIndex* QAbstractItemModel_protectedbase_createIndex2(bool* _dynamic_cast_ok, const void* self, int row, int column, uintptr_t id);
	friend void QAbstractItemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QAbstractItemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QAbstractItemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractItemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QAbstractItemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractItemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QAbstractItemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QAbstractItemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QAbstractItemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QModelIndex* QAbstractItemModel_protectedbase_createIndex3(bool* _dynamic_cast_ok, const void* self, int row, int column, void* data);
	friend QObject* QAbstractItemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractItemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAbstractItemModel_metaObject(const QAbstractItemModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractItemModel_metacast(QAbstractItemModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractItemModel_tr(const char* s) {
	QString _ret = QAbstractItemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_trUtf8(const char* s) {
	QString _ret = QAbstractItemModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemModel_hasIndex(const QAbstractItemModel* self, int row, int column) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column));
}

QModelIndex* QAbstractItemModel_index(const QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractItemModel_parent(const QAbstractItemModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QAbstractItemModel_sibling(const QAbstractItemModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

int QAbstractItemModel_rowCount(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QAbstractItemModel_columnCount(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QAbstractItemModel_hasChildren(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QAbstractItemModel_data(const QAbstractItemModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QAbstractItemModel_setData(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QAbstractItemModel_headerData(const QAbstractItemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractItemModel_setHeaderData(QAbstractItemModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

struct miqt_map /* of int to QVariant* */  QAbstractItemModel_itemData(const QAbstractItemModel* self, QModelIndex* index) {
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

bool QAbstractItemModel_setItemData(QAbstractItemModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

struct miqt_array /* of struct miqt_string */  QAbstractItemModel_mimeTypes(const QAbstractItemModel* self) {
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

QMimeData* QAbstractItemModel_mimeData(const QAbstractItemModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QAbstractItemModel_canDropMimeData(const QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_dropMimeData(QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractItemModel_supportedDropActions(const QAbstractItemModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

int QAbstractItemModel_supportedDragActions(const QAbstractItemModel* self) {
	Qt::DropActions _ret = self->supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_insertRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_insertColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_removeRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_removeColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_moveRows(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_moveColumns(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_insertRow(QAbstractItemModel* self, int row) {
	return self->insertRow(static_cast<int>(row));
}

bool QAbstractItemModel_insertColumn(QAbstractItemModel* self, int column) {
	return self->insertColumn(static_cast<int>(column));
}

bool QAbstractItemModel_removeRow(QAbstractItemModel* self, int row) {
	return self->removeRow(static_cast<int>(row));
}

bool QAbstractItemModel_removeColumn(QAbstractItemModel* self, int column) {
	return self->removeColumn(static_cast<int>(column));
}

bool QAbstractItemModel_moveRow(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRow(*sourceParent, static_cast<int>(sourceRow), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_moveColumn(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumn(*sourceParent, static_cast<int>(sourceColumn), *destinationParent, static_cast<int>(destinationChild));
}

void QAbstractItemModel_fetchMore(QAbstractItemModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QAbstractItemModel_canFetchMore(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

int QAbstractItemModel_flags(const QAbstractItemModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QAbstractItemModel_sort(QAbstractItemModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QModelIndex* QAbstractItemModel_buddy(const QAbstractItemModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_match(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
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

QSize* QAbstractItemModel_span(const QAbstractItemModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_roleNames(const QAbstractItemModel* self) {
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

bool QAbstractItemModel_checkIndex(const QAbstractItemModel* self, QModelIndex* index) {
	return self->checkIndex(*index);
}

void QAbstractItemModel_dataChanged(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight) {
	self->dataChanged(*topLeft, *bottomRight);
}

void QAbstractItemModel_connect_dataChanged(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QVector<int>&)>(&QAbstractItemModel::dataChanged), self, [=](const QModelIndex& topLeft, const QModelIndex& bottomRight) {
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		miqt_exec_callback_QAbstractItemModel_dataChanged(slot, sigval1, sigval2);
	});
}

void QAbstractItemModel_headerDataChanged(QAbstractItemModel* self, int orientation, int first, int last) {
	self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_connect_headerDataChanged(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(Qt::Orientation, int, int)>(&QAbstractItemModel::headerDataChanged), self, [=](Qt::Orientation orientation, int first, int last) {
		Qt::Orientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_headerDataChanged(slot, sigval1, sigval2, sigval3);
	});
}

void QAbstractItemModel_layoutChanged(QAbstractItemModel* self) {
	self->layoutChanged();
}

void QAbstractItemModel_connect_layoutChanged(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [=]() {
		miqt_exec_callback_QAbstractItemModel_layoutChanged(slot);
	});
}

void QAbstractItemModel_layoutAboutToBeChanged(QAbstractItemModel* self) {
	self->layoutAboutToBeChanged();
}

void QAbstractItemModel_connect_layoutAboutToBeChanged(QAbstractItemModel* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [=]() {
		miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged(slot);
	});
}

bool QAbstractItemModel_submit(QAbstractItemModel* self) {
	return self->submit();
}

void QAbstractItemModel_revert(QAbstractItemModel* self) {
	self->revert();
}

struct miqt_string QAbstractItemModel_tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractItemModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemModel_hasIndex3(const QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_insertRow2(QAbstractItemModel* self, int row, QModelIndex* parent) {
	return self->insertRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_insertColumn2(QAbstractItemModel* self, int column, QModelIndex* parent) {
	return self->insertColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_removeRow2(QAbstractItemModel* self, int row, QModelIndex* parent) {
	return self->removeRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_removeColumn2(QAbstractItemModel* self, int column, QModelIndex* parent) {
	return self->removeColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_checkIndex2(const QAbstractItemModel* self, QModelIndex* index, int options) {
	return self->checkIndex(*index, static_cast<QAbstractItemModel::CheckIndexOptions>(options));
}

void QAbstractItemModel_dataChanged3(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QAbstractItemModel_connect_dataChanged3(QAbstractItemModel* self, intptr_t slot) {
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
		miqt_exec_callback_QAbstractItemModel_dataChanged3(slot, sigval1, sigval2, sigval3);
	});
}

void QAbstractItemModel_layoutChanged1(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutChanged(parents_QList);
}

void QAbstractItemModel_connect_layoutChanged1(QAbstractItemModel* self, intptr_t slot) {
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
		miqt_exec_callback_QAbstractItemModel_layoutChanged1(slot, sigval1);
	});
}

void QAbstractItemModel_layoutChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_connect_layoutChanged2(QAbstractItemModel* self, intptr_t slot) {
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
		miqt_exec_callback_QAbstractItemModel_layoutChanged2(slot, sigval1, sigval2);
	});
}

void QAbstractItemModel_layoutAboutToBeChanged1(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutAboutToBeChanged(parents_QList);
}

void QAbstractItemModel_connect_layoutAboutToBeChanged1(QAbstractItemModel* self, intptr_t slot) {
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
		miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged1(slot, sigval1);
	});
}

void QAbstractItemModel_layoutAboutToBeChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutAboutToBeChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_connect_layoutAboutToBeChanged2(QAbstractItemModel* self, intptr_t slot) {
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
		miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged2(slot, sigval1, sigval2);
	});
}

bool QAbstractItemModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__index = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__parent = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QAbstractItemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_sibling(row, column, idx);
}

bool QAbstractItemModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowCount = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__columnCount = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasChildren = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_hasChildren(parent);
}

bool QAbstractItemModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_setData(index, value, role);
}

bool QAbstractItemModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QAbstractItemModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_headerData(section, orientation, role);
}

bool QAbstractItemModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_setHeaderData(section, orientation, value, role);
}

bool QAbstractItemModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractItemModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_itemData(index);
}

bool QAbstractItemModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setItemData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_setItemData(index, roles);
}

bool QAbstractItemModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractItemModel_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_mimeTypes();
}

bool QAbstractItemModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QAbstractItemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_mimeData(indexes);
}

bool QAbstractItemModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_canDropMimeData(data, action, row, column, parent);
}

bool QAbstractItemModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_dropMimeData(data, action, row, column, parent);
}

bool QAbstractItemModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QAbstractItemModel_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_supportedDropActions();
}

bool QAbstractItemModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QAbstractItemModel_virtualbase_supportedDragActions(const void* self) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_supportedDragActions();
}

bool QAbstractItemModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertRows = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_insertRows(row, count, parent);
}

bool QAbstractItemModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertColumns = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_insertColumns(column, count, parent);
}

bool QAbstractItemModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeRows = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_removeRows(row, count, parent);
}

bool QAbstractItemModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeColumns = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_removeColumns(column, count, parent);
}

bool QAbstractItemModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveRows = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QAbstractItemModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveColumns = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QAbstractItemModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fetchMore = slot;
	return true;
}

void QAbstractItemModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_fetchMore(parent);
}

bool QAbstractItemModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_canFetchMore(parent);
}

bool QAbstractItemModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__flags = slot;
	return true;
}

int QAbstractItemModel_virtualbase_flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_flags(index);
}

bool QAbstractItemModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sort = slot;
	return true;
}

void QAbstractItemModel_virtualbase_sort(void* self, int column, int order) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_sort(column, order);
}

bool QAbstractItemModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QAbstractItemModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_buddy(index);
}

bool QAbstractItemModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_match(start, role, value, hits, flags);
}

bool QAbstractItemModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__span = slot;
	return true;
}

QSize* QAbstractItemModel_virtualbase_span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_span(index);
}

bool QAbstractItemModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_virtualbase_roleNames(const void* self) {
	return ( (const MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_roleNames();
}

bool QAbstractItemModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__submit = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_submit(void* self) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_submit();
}

bool QAbstractItemModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__revert = slot;
	return true;
}

void QAbstractItemModel_virtualbase_revert(void* self) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_revert();
}

bool QAbstractItemModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_event(event);
}

bool QAbstractItemModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractItemModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractItemModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractItemModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractItemModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractItemModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractItemModel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractItemModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractItemModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractItemModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractItemModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractItemModel*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAbstractItemModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->resetInternalData();

}

QModelIndex* QAbstractItemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));

}

QModelIndex* QAbstractItemModel_protectedbase_createIndex2(bool* _dynamic_cast_ok, const void* self, int row, int column, uintptr_t id) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column), static_cast<quintptr>(id)));

}

void QAbstractItemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
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

bool QAbstractItemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);

}

void QAbstractItemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractItemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertRows();

}

void QAbstractItemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractItemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveRows();

}

bool QAbstractItemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));

}

void QAbstractItemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveRows();

}

void QAbstractItemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractItemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertColumns();

}

void QAbstractItemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractItemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveColumns();

}

bool QAbstractItemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));

}

void QAbstractItemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveColumns();

}

void QAbstractItemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginResetModel();

}

void QAbstractItemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endResetModel();

}

void QAbstractItemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->changePersistentIndex(*from, *to);

}

void QAbstractItemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
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

QModelIndex* QAbstractItemModel_protectedbase_createIndex3(bool* _dynamic_cast_ok, const void* self, int row, int column, void* data) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column), data));

}

QObject* QAbstractItemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractItemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractItemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractItemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractItemModel_delete(QAbstractItemModel* self) {
	delete self;
}

class MiqtVirtualQAbstractTableModel final : public QAbstractTableModel {
public:

	MiqtVirtualQAbstractTableModel(): QAbstractTableModel() {};
	MiqtVirtualQAbstractTableModel(QObject* parent): QAbstractTableModel(parent) {};

	virtual ~MiqtVirtualQAbstractTableModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QAbstractTableModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractTableModel_index(this, handle__index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QAbstractTableModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QAbstractTableModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractTableModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QAbstractTableModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QAbstractTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QAbstractTableModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_flags(this, handle__flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QAbstractTableModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_rowCount(this, handle__rowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_columnCount(this, handle__columnCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QVariant(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractTableModel_data(this, handle__data, sigval1, sigval2);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QAbstractTableModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_setData(this, handle__setData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setData(QModelIndex* index, QVariant* value, int role) {

		return QAbstractTableModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QAbstractTableModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractTableModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_headerData(int section, int orientation, int role) const {

		return new QVariant(QAbstractTableModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QAbstractTableModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setHeaderData(int section, int orientation, QVariant* value, int role) {

		return QAbstractTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QAbstractTableModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractTableModel_itemData(this, handle__itemData, sigval1);
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
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_setItemData(this, handle__setItemData, sigval1, sigval2);

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

		return QAbstractTableModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QAbstractTableModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractTableModel_mimeTypes(this, handle__mimeTypes);
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
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
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

		QMimeData* callback_return_value = miqt_exec_callback_QAbstractTableModel_mimeData(this, handle__mimeData, sigval1);

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

		return QAbstractTableModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QAbstractTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QAbstractTableModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QAbstractTableModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QAbstractTableModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_supportedDragActions(this, handle__supportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDragActions() const {

		Qt::DropActions _ret = QAbstractTableModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QAbstractTableModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertRows(int row, int count, QModelIndex* parent) {

		return QAbstractTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QAbstractTableModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertColumns(int column, int count, QModelIndex* parent) {

		return QAbstractTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QAbstractTableModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeRows(int row, int count, QModelIndex* parent) {

		return QAbstractTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QAbstractTableModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeColumns(int column, int count, QModelIndex* parent) {

		return QAbstractTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QAbstractTableModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QAbstractTableModel_fetchMore(this, handle__fetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fetchMore(QModelIndex* parent) {

		QAbstractTableModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QAbstractTableModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_canFetchMore(this, handle__canFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canFetchMore(QModelIndex* parent) const {

		return QAbstractTableModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QAbstractTableModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QAbstractTableModel_sort(this, handle__sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sort(int column, int order) {

		QAbstractTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QAbstractTableModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractTableModel_buddy(this, handle__buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_buddy(QModelIndex* index) const {

		return new QModelIndex(QAbstractTableModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractTableModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
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
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QAbstractTableModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QAbstractTableModel_span(this, handle__span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_span(QModelIndex* index) const {

		return new QSize(QAbstractTableModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QAbstractTableModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractTableModel_roleNames(this, handle__roleNames);
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
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QAbstractTableModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_submit(this, handle__submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_submit() {

		return QAbstractTableModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QAbstractTableModel::revert();
			return;
		}
		

		miqt_exec_callback_QAbstractTableModel_revert(this, handle__revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_revert() {

		QAbstractTableModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractTableModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractTableModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractTableModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractTableModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractTableModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTableModel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractTableModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractTableModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTableModel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractTableModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractTableModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractTableModel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractTableModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractTableModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractTableModel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractTableModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractTableModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractTableModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractTableModel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractTableModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QAbstractTableModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QAbstractTableModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QAbstractTableModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QAbstractTableModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractTableModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractTableModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractTableModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QAbstractTableModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractTableModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractTableModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractTableModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QAbstractTableModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QAbstractTableModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QAbstractTableModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QAbstractTableModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractTableModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractTableModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractTableModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAbstractTableModel_metaObject(const QAbstractTableModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractTableModel_metacast(QAbstractTableModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractTableModel_tr(const char* s) {
	QString _ret = QAbstractTableModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_trUtf8(const char* s) {
	QString _ret = QAbstractTableModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QAbstractTableModel_index(const QAbstractTableModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractTableModel_sibling(const QAbstractTableModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractTableModel_dropMimeData(QAbstractTableModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractTableModel_flags(const QAbstractTableModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

struct miqt_string QAbstractTableModel_tr2(const char* s, const char* c) {
	QString _ret = QAbstractTableModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTableModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractTableModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractTableModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractTableModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QAbstractTableModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_index(row, column, parent);
}

bool QAbstractTableModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QAbstractTableModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_sibling(row, column, idx);
}

bool QAbstractTableModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_dropMimeData(data, action, row, column, parent);
}

bool QAbstractTableModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__flags = slot;
	return true;
}

int QAbstractTableModel_virtualbase_flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_flags(index);
}

bool QAbstractTableModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowCount = slot;
	return true;
}

bool QAbstractTableModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__columnCount = slot;
	return true;
}

bool QAbstractTableModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

bool QAbstractTableModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_setData(index, value, role);
}

bool QAbstractTableModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QAbstractTableModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_headerData(section, orientation, role);
}

bool QAbstractTableModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_setHeaderData(section, orientation, value, role);
}

bool QAbstractTableModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractTableModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_itemData(index);
}

bool QAbstractTableModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setItemData = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_setItemData(index, roles);
}

bool QAbstractTableModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractTableModel_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_mimeTypes();
}

bool QAbstractTableModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QAbstractTableModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_mimeData(indexes);
}

bool QAbstractTableModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_canDropMimeData(data, action, row, column, parent);
}

bool QAbstractTableModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QAbstractTableModel_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_supportedDropActions();
}

bool QAbstractTableModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QAbstractTableModel_virtualbase_supportedDragActions(const void* self) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_supportedDragActions();
}

bool QAbstractTableModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertRows = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_insertRows(row, count, parent);
}

bool QAbstractTableModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertColumns = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_insertColumns(column, count, parent);
}

bool QAbstractTableModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeRows = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_removeRows(row, count, parent);
}

bool QAbstractTableModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeColumns = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_removeColumns(column, count, parent);
}

bool QAbstractTableModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveRows = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QAbstractTableModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveColumns = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QAbstractTableModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fetchMore = slot;
	return true;
}

void QAbstractTableModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_fetchMore(parent);
}

bool QAbstractTableModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_canFetchMore(parent);
}

bool QAbstractTableModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sort = slot;
	return true;
}

void QAbstractTableModel_virtualbase_sort(void* self, int column, int order) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_sort(column, order);
}

bool QAbstractTableModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QAbstractTableModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_buddy(index);
}

bool QAbstractTableModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractTableModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_match(start, role, value, hits, flags);
}

bool QAbstractTableModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__span = slot;
	return true;
}

QSize* QAbstractTableModel_virtualbase_span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_span(index);
}

bool QAbstractTableModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractTableModel_virtualbase_roleNames(const void* self) {
	return ( (const MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_roleNames();
}

bool QAbstractTableModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__submit = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_submit(void* self) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_submit();
}

bool QAbstractTableModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__revert = slot;
	return true;
}

void QAbstractTableModel_virtualbase_revert(void* self) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_revert();
}

bool QAbstractTableModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_event(event);
}

bool QAbstractTableModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractTableModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractTableModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractTableModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractTableModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractTableModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractTableModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractTableModel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractTableModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractTableModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractTableModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractTableModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractTableModel*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAbstractTableModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->resetInternalData();

}

QModelIndex* QAbstractTableModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));

}

void QAbstractTableModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
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

bool QAbstractTableModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);

}

void QAbstractTableModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractTableModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertRows();

}

void QAbstractTableModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractTableModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveRows();

}

bool QAbstractTableModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));

}

void QAbstractTableModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveRows();

}

void QAbstractTableModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractTableModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertColumns();

}

void QAbstractTableModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractTableModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveColumns();

}

bool QAbstractTableModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));

}

void QAbstractTableModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveColumns();

}

void QAbstractTableModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginResetModel();

}

void QAbstractTableModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endResetModel();

}

void QAbstractTableModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->changePersistentIndex(*from, *to);

}

void QAbstractTableModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QAbstractTableModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
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

QObject* QAbstractTableModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractTableModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractTableModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractTableModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractTableModel_delete(QAbstractTableModel* self) {
	delete self;
}

class MiqtVirtualQAbstractListModel final : public QAbstractListModel {
public:

	MiqtVirtualQAbstractListModel(): QAbstractListModel() {};
	MiqtVirtualQAbstractListModel(QObject* parent): QAbstractListModel(parent) {};

	virtual ~MiqtVirtualQAbstractListModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QAbstractListModel::index(row, column, parent);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractListModel_index(this, handle__index, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_index(int row, int column, QModelIndex* parent) const {

		return new QModelIndex(QAbstractListModel::index(static_cast<int>(row), static_cast<int>(column), *parent));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QAbstractListModel::sibling(row, column, idx);
		}
		
		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractListModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_sibling(int row, int column, QModelIndex* idx) const {

		return new QModelIndex(QAbstractListModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_dropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) {

		return QAbstractListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QAbstractListModel::flags(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		int callback_return_value = miqt_exec_callback_QAbstractListModel_flags(this, handle__flags, sigval1);

		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_flags(QModelIndex* index) const {

		Qt::ItemFlags _ret = QAbstractListModel::flags(*index);
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		int callback_return_value = miqt_exec_callback_QAbstractListModel_rowCount(this, handle__rowCount, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QVariant(); // Pure virtual, there is no base we can call
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractListModel_data(this, handle__data, sigval1, sigval2);

		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QAbstractListModel::setData(index, value, role);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_setData(this, handle__setData, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setData(QModelIndex* index, QVariant* value, int role) {

		return QAbstractListModel::setData(*index, *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QAbstractListModel::headerData(section, orientation, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;

		QVariant* callback_return_value = miqt_exec_callback_QAbstractListModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_headerData(int section, int orientation, int role) const {

		return new QVariant(QAbstractListModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QAbstractListModel::setHeaderData(section, orientation, value, role);
		}
		
		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_setHeaderData(int section, int orientation, QVariant* value, int role) {

		return QAbstractListModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QAbstractListModel::itemData(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractListModel_itemData(this, handle__itemData, sigval1);
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
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_setItemData(this, handle__setItemData, sigval1, sigval2);

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

		return QAbstractListModel::setItemData(*index, roles_QMap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QAbstractListModel::mimeTypes();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractListModel_mimeTypes(this, handle__mimeTypes);
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
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
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

		QMimeData* callback_return_value = miqt_exec_callback_QAbstractListModel_mimeData(this, handle__mimeData, sigval1);

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

		return QAbstractListModel::mimeData(indexes_QList);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canDropMimeData(QMimeData* data, int action, int row, int column, QModelIndex* parent) const {

		return QAbstractListModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QAbstractListModel::supportedDropActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractListModel_supportedDropActions(this, handle__supportedDropActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDropActions() const {

		Qt::DropActions _ret = QAbstractListModel::supportedDropActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QAbstractListModel::supportedDragActions();
		}
		

		int callback_return_value = miqt_exec_callback_QAbstractListModel_supportedDragActions(this, handle__supportedDragActions);

		return static_cast<Qt::DropActions>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_supportedDragActions() const {

		Qt::DropActions _ret = QAbstractListModel::supportedDragActions();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QAbstractListModel::insertRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertRows(int row, int count, QModelIndex* parent) {

		return QAbstractListModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QAbstractListModel::insertColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_insertColumns(int column, int count, QModelIndex* parent) {

		return QAbstractListModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QAbstractListModel::removeRows(row, count, parent);
		}
		
		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeRows(int row, int count, QModelIndex* parent) {

		return QAbstractListModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QAbstractListModel::removeColumns(column, count, parent);
		}
		
		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_removeColumns(int column, int count, QModelIndex* parent) {

		return QAbstractListModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveRows(QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractListModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
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

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_moveColumns(QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {

		return QAbstractListModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QAbstractListModel::fetchMore(parent);
			return;
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		miqt_exec_callback_QAbstractListModel_fetchMore(this, handle__fetchMore, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_fetchMore(QModelIndex* parent) {

		QAbstractListModel::fetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QAbstractListModel::canFetchMore(parent);
		}
		
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_canFetchMore(this, handle__canFetchMore, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_canFetchMore(QModelIndex* parent) const {

		return QAbstractListModel::canFetchMore(*parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QAbstractListModel::sort(column, order);
			return;
		}
		
		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);

		miqt_exec_callback_QAbstractListModel_sort(this, handle__sort, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_sort(int column, int order) {

		QAbstractListModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QAbstractListModel::buddy(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractListModel_buddy(this, handle__buddy, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QModelIndex* virtualbase_buddy(QModelIndex* index) const {

		return new QModelIndex(QAbstractListModel::buddy(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
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

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractListModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
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
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QAbstractListModel::span(index);
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QAbstractListModel_span(this, handle__span, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_span(QModelIndex* index) const {

		return new QSize(QAbstractListModel::span(*index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QAbstractListModel::roleNames();
		}
		

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractListModel_roleNames(this, handle__roleNames);
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
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QAbstractListModel::submit();
		}
		

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_submit(this, handle__submit);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_submit() {

		return QAbstractListModel::submit();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QAbstractListModel::revert();
			return;
		}
		

		miqt_exec_callback_QAbstractListModel_revert(this, handle__revert);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_revert() {

		QAbstractListModel::revert();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractListModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QAbstractListModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractListModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAbstractListModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAbstractListModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAbstractListModel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAbstractListModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAbstractListModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAbstractListModel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAbstractListModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAbstractListModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAbstractListModel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAbstractListModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAbstractListModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractListModel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAbstractListModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAbstractListModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAbstractListModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAbstractListModel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QAbstractListModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QAbstractListModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QAbstractListModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QAbstractListModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QAbstractListModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractListModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractListModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractListModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QAbstractListModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractListModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractListModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractListModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QAbstractListModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QAbstractListModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QAbstractListModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QAbstractListModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractListModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractListModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractListModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAbstractListModel_metaObject(const QAbstractListModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractListModel_metacast(QAbstractListModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractListModel_tr(const char* s) {
	QString _ret = QAbstractListModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_trUtf8(const char* s) {
	QString _ret = QAbstractListModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QAbstractListModel_index(const QAbstractListModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractListModel_sibling(const QAbstractListModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractListModel_dropMimeData(QAbstractListModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractListModel_flags(const QAbstractListModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

struct miqt_string QAbstractListModel_tr2(const char* s, const char* c) {
	QString _ret = QAbstractListModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractListModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractListModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractListModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractListModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QAbstractListModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_index(row, column, parent);
}

bool QAbstractListModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QAbstractListModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_sibling(row, column, idx);
}

bool QAbstractListModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QAbstractListModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_dropMimeData(data, action, row, column, parent);
}

bool QAbstractListModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__flags = slot;
	return true;
}

int QAbstractListModel_virtualbase_flags(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_flags(index);
}

bool QAbstractListModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__rowCount = slot;
	return true;
}

bool QAbstractListModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__data = slot;
	return true;
}

bool QAbstractListModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setData = slot;
	return true;
}

bool QAbstractListModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_setData(index, value, role);
}

bool QAbstractListModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QAbstractListModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_headerData(section, orientation, role);
}

bool QAbstractListModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QAbstractListModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_setHeaderData(section, orientation, value, role);
}

bool QAbstractListModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractListModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_itemData(index);
}

bool QAbstractListModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setItemData = slot;
	return true;
}

bool QAbstractListModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_setItemData(index, roles);
}

bool QAbstractListModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractListModel_virtualbase_mimeTypes(const void* self) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_mimeTypes();
}

bool QAbstractListModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QAbstractListModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_mimeData(indexes);
}

bool QAbstractListModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QAbstractListModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_canDropMimeData(data, action, row, column, parent);
}

bool QAbstractListModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QAbstractListModel_virtualbase_supportedDropActions(const void* self) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_supportedDropActions();
}

bool QAbstractListModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QAbstractListModel_virtualbase_supportedDragActions(const void* self) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_supportedDragActions();
}

bool QAbstractListModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertRows = slot;
	return true;
}

bool QAbstractListModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_insertRows(row, count, parent);
}

bool QAbstractListModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__insertColumns = slot;
	return true;
}

bool QAbstractListModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_insertColumns(column, count, parent);
}

bool QAbstractListModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeRows = slot;
	return true;
}

bool QAbstractListModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_removeRows(row, count, parent);
}

bool QAbstractListModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__removeColumns = slot;
	return true;
}

bool QAbstractListModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_removeColumns(column, count, parent);
}

bool QAbstractListModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveRows = slot;
	return true;
}

bool QAbstractListModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
}

bool QAbstractListModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__moveColumns = slot;
	return true;
}

bool QAbstractListModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
}

bool QAbstractListModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fetchMore = slot;
	return true;
}

void QAbstractListModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_fetchMore(parent);
}

bool QAbstractListModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QAbstractListModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_canFetchMore(parent);
}

bool QAbstractListModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sort = slot;
	return true;
}

void QAbstractListModel_virtualbase_sort(void* self, int column, int order) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_sort(column, order);
}

bool QAbstractListModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QAbstractListModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_buddy(index);
}

bool QAbstractListModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractListModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_match(start, role, value, hits, flags);
}

bool QAbstractListModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__span = slot;
	return true;
}

QSize* QAbstractListModel_virtualbase_span(const void* self, QModelIndex* index) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_span(index);
}

bool QAbstractListModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractListModel_virtualbase_roleNames(const void* self) {
	return ( (const MiqtVirtualQAbstractListModel*)(self) )->virtualbase_roleNames();
}

bool QAbstractListModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__submit = slot;
	return true;
}

bool QAbstractListModel_virtualbase_submit(void* self) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_submit();
}

bool QAbstractListModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__revert = slot;
	return true;
}

void QAbstractListModel_virtualbase_revert(void* self) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_revert();
}

bool QAbstractListModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAbstractListModel_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_event(event);
}

bool QAbstractListModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractListModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAbstractListModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAbstractListModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_timerEvent(event);
}

bool QAbstractListModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAbstractListModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_childEvent(event);
}

bool QAbstractListModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAbstractListModel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_customEvent(event);
}

bool QAbstractListModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAbstractListModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_connectNotify(signal);
}

bool QAbstractListModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAbstractListModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAbstractListModel*)(self) )->virtualbase_disconnectNotify(signal);
}

void QAbstractListModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->resetInternalData();

}

QModelIndex* QAbstractListModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));

}

void QAbstractListModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
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

bool QAbstractListModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);

}

void QAbstractListModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractListModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertRows();

}

void QAbstractListModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractListModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveRows();

}

bool QAbstractListModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));

}

void QAbstractListModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveRows();

}

void QAbstractListModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractListModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endInsertColumns();

}

void QAbstractListModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));

}

void QAbstractListModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endRemoveColumns();

}

bool QAbstractListModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));

}

void QAbstractListModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endMoveColumns();

}

void QAbstractListModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->beginResetModel();

}

void QAbstractListModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->endResetModel();

}

void QAbstractListModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->changePersistentIndex(*from, *to);

}

void QAbstractListModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QAbstractListModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
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

QObject* QAbstractListModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAbstractListModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAbstractListModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAbstractListModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAbstractListModel_delete(QAbstractListModel* self) {
	delete self;
}

