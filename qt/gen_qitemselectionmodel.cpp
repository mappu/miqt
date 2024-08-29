#include <QAbstractItemModel>
#include <QItemSelectionModel>
#include <QItemSelectionRange>
#include <QList>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPersistentModelIndex>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qitemselectionmodel.h"

#include "gen_qitemselectionmodel.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QItemSelectionRange* QItemSelectionRange_new() {
	return new QItemSelectionRange();
}

QItemSelectionRange* QItemSelectionRange_new2(QItemSelectionRange* other) {
	return new QItemSelectionRange(*other);
}

QItemSelectionRange* QItemSelectionRange_new3(QModelIndex* topL, QModelIndex* bottomR) {
	return new QItemSelectionRange(*topL, *bottomR);
}

QItemSelectionRange* QItemSelectionRange_new4(QModelIndex* index) {
	return new QItemSelectionRange(*index);
}

void QItemSelectionRange_OperatorAssign(QItemSelectionRange* self, QItemSelectionRange* other) {
	self->operator=(*other);
}

void QItemSelectionRange_Swap(QItemSelectionRange* self, QItemSelectionRange* other) {
	self->swap(*other);
}

int QItemSelectionRange_Top(QItemSelectionRange* self) {
	return const_cast<const QItemSelectionRange*>(self)->top();
}

int QItemSelectionRange_Left(QItemSelectionRange* self) {
	return const_cast<const QItemSelectionRange*>(self)->left();
}

int QItemSelectionRange_Bottom(QItemSelectionRange* self) {
	return const_cast<const QItemSelectionRange*>(self)->bottom();
}

int QItemSelectionRange_Right(QItemSelectionRange* self) {
	return const_cast<const QItemSelectionRange*>(self)->right();
}

int QItemSelectionRange_Width(QItemSelectionRange* self) {
	return const_cast<const QItemSelectionRange*>(self)->width();
}

int QItemSelectionRange_Height(QItemSelectionRange* self) {
	return const_cast<const QItemSelectionRange*>(self)->height();
}

QPersistentModelIndex* QItemSelectionRange_TopLeft(QItemSelectionRange* self) {
	const QPersistentModelIndex& ret = const_cast<const QItemSelectionRange*>(self)->topLeft();
	// Cast returned reference into pointer
	return const_cast<QPersistentModelIndex*>(&ret);
}

QPersistentModelIndex* QItemSelectionRange_BottomRight(QItemSelectionRange* self) {
	const QPersistentModelIndex& ret = const_cast<const QItemSelectionRange*>(self)->bottomRight();
	// Cast returned reference into pointer
	return const_cast<QPersistentModelIndex*>(&ret);
}

QModelIndex* QItemSelectionRange_Parent(QItemSelectionRange* self) {
	QModelIndex ret = const_cast<const QItemSelectionRange*>(self)->parent();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

QAbstractItemModel* QItemSelectionRange_Model(QItemSelectionRange* self) {
	return (QAbstractItemModel*) const_cast<const QItemSelectionRange*>(self)->model();
}

bool QItemSelectionRange_Contains(QItemSelectionRange* self, QModelIndex* index) {
	return const_cast<const QItemSelectionRange*>(self)->contains(*index);
}

bool QItemSelectionRange_Contains2(QItemSelectionRange* self, int row, int column, QModelIndex* parentIndex) {
	return const_cast<const QItemSelectionRange*>(self)->contains(static_cast<int>(row), static_cast<int>(column), *parentIndex);
}

bool QItemSelectionRange_Intersects(QItemSelectionRange* self, QItemSelectionRange* other) {
	return const_cast<const QItemSelectionRange*>(self)->intersects(*other);
}

QItemSelectionRange* QItemSelectionRange_Intersected(QItemSelectionRange* self, QItemSelectionRange* other) {
	QItemSelectionRange ret = const_cast<const QItemSelectionRange*>(self)->intersected(*other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QItemSelectionRange*>(new QItemSelectionRange(ret));
}

bool QItemSelectionRange_OperatorEqual(QItemSelectionRange* self, QItemSelectionRange* other) {
	return const_cast<const QItemSelectionRange*>(self)->operator==(*other);
}

bool QItemSelectionRange_OperatorNotEqual(QItemSelectionRange* self, QItemSelectionRange* other) {
	return const_cast<const QItemSelectionRange*>(self)->operator!=(*other);
}

bool QItemSelectionRange_OperatorLesser(QItemSelectionRange* self, QItemSelectionRange* other) {
	return const_cast<const QItemSelectionRange*>(self)->operator<(*other);
}

bool QItemSelectionRange_IsValid(QItemSelectionRange* self) {
	return const_cast<const QItemSelectionRange*>(self)->isValid();
}

bool QItemSelectionRange_IsEmpty(QItemSelectionRange* self) {
	return const_cast<const QItemSelectionRange*>(self)->isEmpty();
}

void QItemSelectionRange_Indexes(QItemSelectionRange* self, QModelIndex*** _out, size_t* _out_len) {
	QModelIndexList ret = const_cast<const QItemSelectionRange*>(self)->indexes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** __out = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QModelIndex(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QItemSelectionRange_Delete(QItemSelectionRange* self) {
	delete self;
}

QItemSelectionModel* QItemSelectionModel_new() {
	return new QItemSelectionModel();
}

QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent) {
	return new QItemSelectionModel(model, parent);
}

QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model) {
	return new QItemSelectionModel(model);
}

QMetaObject* QItemSelectionModel_MetaObject(QItemSelectionModel* self) {
	return (QMetaObject*) const_cast<const QItemSelectionModel*>(self)->metaObject();
}

void QItemSelectionModel_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QItemSelectionModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QItemSelectionModel_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QItemSelectionModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QModelIndex* QItemSelectionModel_CurrentIndex(QItemSelectionModel* self) {
	QModelIndex ret = const_cast<const QItemSelectionModel*>(self)->currentIndex();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QModelIndex*>(new QModelIndex(ret));
}

bool QItemSelectionModel_IsSelected(QItemSelectionModel* self, QModelIndex* index) {
	return const_cast<const QItemSelectionModel*>(self)->isSelected(*index);
}

bool QItemSelectionModel_IsRowSelected(QItemSelectionModel* self, int row) {
	return const_cast<const QItemSelectionModel*>(self)->isRowSelected(static_cast<int>(row));
}

bool QItemSelectionModel_IsColumnSelected(QItemSelectionModel* self, int column) {
	return const_cast<const QItemSelectionModel*>(self)->isColumnSelected(static_cast<int>(column));
}

bool QItemSelectionModel_RowIntersectsSelection(QItemSelectionModel* self, int row) {
	return const_cast<const QItemSelectionModel*>(self)->rowIntersectsSelection(static_cast<int>(row));
}

bool QItemSelectionModel_ColumnIntersectsSelection(QItemSelectionModel* self, int column) {
	return const_cast<const QItemSelectionModel*>(self)->columnIntersectsSelection(static_cast<int>(column));
}

bool QItemSelectionModel_HasSelection(QItemSelectionModel* self) {
	return const_cast<const QItemSelectionModel*>(self)->hasSelection();
}

void QItemSelectionModel_SelectedIndexes(QItemSelectionModel* self, QModelIndex*** _out, size_t* _out_len) {
	QModelIndexList ret = const_cast<const QItemSelectionModel*>(self)->selectedIndexes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** __out = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QModelIndex(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QItemSelectionModel_SelectedRows(QItemSelectionModel* self, QModelIndex*** _out, size_t* _out_len) {
	QModelIndexList ret = const_cast<const QItemSelectionModel*>(self)->selectedRows();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** __out = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QModelIndex(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QItemSelectionModel_SelectedColumns(QItemSelectionModel* self, QModelIndex*** _out, size_t* _out_len) {
	QModelIndexList ret = const_cast<const QItemSelectionModel*>(self)->selectedColumns();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** __out = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QModelIndex(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QAbstractItemModel* QItemSelectionModel_Model(QItemSelectionModel* self) {
	return (QAbstractItemModel*) const_cast<const QItemSelectionModel*>(self)->model();
}

QAbstractItemModel* QItemSelectionModel_Model2(QItemSelectionModel* self) {
	return self->model();
}

void QItemSelectionModel_SetModel(QItemSelectionModel* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QItemSelectionModel_SetCurrentIndex(QItemSelectionModel* self, QModelIndex* index, int command) {
	self->setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QItemSelectionModel_Select(QItemSelectionModel* self, QModelIndex* index, int command) {
	self->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QItemSelectionModel_Clear(QItemSelectionModel* self) {
	self->clear();
}

void QItemSelectionModel_Reset(QItemSelectionModel* self) {
	self->reset();
}

void QItemSelectionModel_ClearSelection(QItemSelectionModel* self) {
	self->clearSelection();
}

void QItemSelectionModel_ClearCurrentIndex(QItemSelectionModel* self) {
	self->clearCurrentIndex();
}

void QItemSelectionModel_CurrentChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentChanged(*current, *previous);
}

void QItemSelectionModel_connect_CurrentChanged(QItemSelectionModel* self, void* slot) {
	QItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QItemSelectionModel_CurrentRowChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentRowChanged(*current, *previous);
}

void QItemSelectionModel_connect_CurrentRowChanged(QItemSelectionModel* self, void* slot) {
	QItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentRowChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QItemSelectionModel_CurrentColumnChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentColumnChanged(*current, *previous);
}

void QItemSelectionModel_connect_CurrentColumnChanged(QItemSelectionModel* self, void* slot) {
	QItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentColumnChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QItemSelectionModel_ModelChanged(QItemSelectionModel* self, QAbstractItemModel* model) {
	self->modelChanged(model);
}

void QItemSelectionModel_connect_ModelChanged(QItemSelectionModel* self, void* slot) {
	QItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(QAbstractItemModel*)>(&QItemSelectionModel::modelChanged), self, [=](QAbstractItemModel* model) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QItemSelectionModel_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QItemSelectionModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QItemSelectionModel_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QItemSelectionModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QItemSelectionModel_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QItemSelectionModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QItemSelectionModel_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QItemSelectionModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QItemSelectionModel_IsRowSelected2(QItemSelectionModel* self, int row, QModelIndex* parent) {
	return self->isRowSelected(static_cast<int>(row), *parent);
}

bool QItemSelectionModel_IsColumnSelected2(QItemSelectionModel* self, int column, QModelIndex* parent) {
	return self->isColumnSelected(static_cast<int>(column), *parent);
}

bool QItemSelectionModel_RowIntersectsSelection2(QItemSelectionModel* self, int row, QModelIndex* parent) {
	return self->rowIntersectsSelection(static_cast<int>(row), *parent);
}

bool QItemSelectionModel_ColumnIntersectsSelection2(QItemSelectionModel* self, int column, QModelIndex* parent) {
	return self->columnIntersectsSelection(static_cast<int>(column), *parent);
}

void QItemSelectionModel_SelectedRows1(QItemSelectionModel* self, int column, QModelIndex*** _out, size_t* _out_len) {
	QModelIndexList ret = self->selectedRows(static_cast<int>(column));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** __out = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QModelIndex(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QItemSelectionModel_SelectedColumns1(QItemSelectionModel* self, int row, QModelIndex*** _out, size_t* _out_len) {
	QModelIndexList ret = self->selectedColumns(static_cast<int>(row));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QModelIndex** __out = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QModelIndex(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QItemSelectionModel_Delete(QItemSelectionModel* self) {
	delete self;
}

