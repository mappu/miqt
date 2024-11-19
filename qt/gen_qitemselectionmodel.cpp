#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QItemSelectionModel>
#include <QItemSelectionRange>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPersistentModelIndex>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qitemselectionmodel.h>
#include "gen_qitemselectionmodel.h"
#include "_cgo_export.h"

void QItemSelectionRange_new(QItemSelectionRange** outptr_QItemSelectionRange) {
	QItemSelectionRange* ret = new QItemSelectionRange();
	*outptr_QItemSelectionRange = ret;
}

void QItemSelectionRange_new2(QItemSelectionRange* other, QItemSelectionRange** outptr_QItemSelectionRange) {
	QItemSelectionRange* ret = new QItemSelectionRange(*other);
	*outptr_QItemSelectionRange = ret;
}

void QItemSelectionRange_new3(QModelIndex* topL, QModelIndex* bottomR, QItemSelectionRange** outptr_QItemSelectionRange) {
	QItemSelectionRange* ret = new QItemSelectionRange(*topL, *bottomR);
	*outptr_QItemSelectionRange = ret;
}

void QItemSelectionRange_new4(QModelIndex* index, QItemSelectionRange** outptr_QItemSelectionRange) {
	QItemSelectionRange* ret = new QItemSelectionRange(*index);
	*outptr_QItemSelectionRange = ret;
}

void QItemSelectionRange_OperatorAssign(QItemSelectionRange* self, QItemSelectionRange* other) {
	self->operator=(*other);
}

void QItemSelectionRange_Swap(QItemSelectionRange* self, QItemSelectionRange* other) {
	self->swap(*other);
}

int QItemSelectionRange_Top(const QItemSelectionRange* self) {
	return self->top();
}

int QItemSelectionRange_Left(const QItemSelectionRange* self) {
	return self->left();
}

int QItemSelectionRange_Bottom(const QItemSelectionRange* self) {
	return self->bottom();
}

int QItemSelectionRange_Right(const QItemSelectionRange* self) {
	return self->right();
}

int QItemSelectionRange_Width(const QItemSelectionRange* self) {
	return self->width();
}

int QItemSelectionRange_Height(const QItemSelectionRange* self) {
	return self->height();
}

QPersistentModelIndex* QItemSelectionRange_TopLeft(const QItemSelectionRange* self) {
	const QPersistentModelIndex& _ret = self->topLeft();
	// Cast returned reference into pointer
	return const_cast<QPersistentModelIndex*>(&_ret);
}

QPersistentModelIndex* QItemSelectionRange_BottomRight(const QItemSelectionRange* self) {
	const QPersistentModelIndex& _ret = self->bottomRight();
	// Cast returned reference into pointer
	return const_cast<QPersistentModelIndex*>(&_ret);
}

QModelIndex* QItemSelectionRange_Parent(const QItemSelectionRange* self) {
	return new QModelIndex(self->parent());
}

QAbstractItemModel* QItemSelectionRange_Model(const QItemSelectionRange* self) {
	return (QAbstractItemModel*) self->model();
}

bool QItemSelectionRange_Contains(const QItemSelectionRange* self, QModelIndex* index) {
	return self->contains(*index);
}

bool QItemSelectionRange_Contains2(const QItemSelectionRange* self, int row, int column, QModelIndex* parentIndex) {
	return self->contains(static_cast<int>(row), static_cast<int>(column), *parentIndex);
}

bool QItemSelectionRange_Intersects(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return self->intersects(*other);
}

QItemSelectionRange* QItemSelectionRange_Intersected(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return new QItemSelectionRange(self->intersected(*other));
}

bool QItemSelectionRange_OperatorEqual(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return self->operator==(*other);
}

bool QItemSelectionRange_OperatorNotEqual(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return self->operator!=(*other);
}

bool QItemSelectionRange_OperatorLesser(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return self->operator<(*other);
}

bool QItemSelectionRange_IsValid(const QItemSelectionRange* self) {
	return self->isValid();
}

bool QItemSelectionRange_IsEmpty(const QItemSelectionRange* self) {
	return self->isEmpty();
}

struct miqt_array /* of QModelIndex* */  QItemSelectionRange_Indexes(const QItemSelectionRange* self) {
	QModelIndexList _ret = self->indexes();
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

void QItemSelectionRange_Delete(QItemSelectionRange* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QItemSelectionRange*>( self );
	} else {
		delete self;
	}
}

class MiqtVirtualQItemSelectionModel : public virtual QItemSelectionModel {
public:

	MiqtVirtualQItemSelectionModel(): QItemSelectionModel() {};
	MiqtVirtualQItemSelectionModel(QAbstractItemModel* model, QObject* parent): QItemSelectionModel(model, parent) {};
	MiqtVirtualQItemSelectionModel(QAbstractItemModel* model): QItemSelectionModel(model) {};

	virtual ~MiqtVirtualQItemSelectionModel() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetCurrentIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCurrentIndex(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
		if (handle__SetCurrentIndex == 0) {
			QItemSelectionModel::setCurrentIndex(index, command);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QItemSelectionModel_SetCurrentIndex(this, handle__SetCurrentIndex, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetCurrentIndex(QModelIndex* index, int command) {

		QItemSelectionModel::setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Select = 0;

	// Subclass to allow providing a Go implementation
	virtual void select(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
		if (handle__Select == 0) {
			QItemSelectionModel::select(index, command);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QItemSelectionModel_Select(this, handle__Select, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Select(QModelIndex* index, int command) {

		QItemSelectionModel::select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__Clear == 0) {
			QItemSelectionModel::clear();
			return;
		}
		

		miqt_exec_callback_QItemSelectionModel_Clear(this, handle__Clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Clear() {

		QItemSelectionModel::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__Reset == 0) {
			QItemSelectionModel::reset();
			return;
		}
		

		miqt_exec_callback_QItemSelectionModel_Reset(this, handle__Reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Reset() {

		QItemSelectionModel::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ClearCurrentIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void clearCurrentIndex() override {
		if (handle__ClearCurrentIndex == 0) {
			QItemSelectionModel::clearCurrentIndex();
			return;
		}
		

		miqt_exec_callback_QItemSelectionModel_ClearCurrentIndex(this, handle__ClearCurrentIndex);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ClearCurrentIndex() {

		QItemSelectionModel::clearCurrentIndex();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QItemSelectionModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QItemSelectionModel_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QItemSelectionModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QItemSelectionModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QItemSelectionModel_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QItemSelectionModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QItemSelectionModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QItemSelectionModel_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QItemSelectionModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QItemSelectionModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QItemSelectionModel_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QItemSelectionModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QItemSelectionModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QItemSelectionModel_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QItemSelectionModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QItemSelectionModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QItemSelectionModel_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QItemSelectionModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QItemSelectionModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QItemSelectionModel_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QItemSelectionModel::disconnectNotify(*signal);

	}

};

void QItemSelectionModel_new(QItemSelectionModel** outptr_QItemSelectionModel, QObject** outptr_QObject) {
	MiqtVirtualQItemSelectionModel* ret = new MiqtVirtualQItemSelectionModel();
	*outptr_QItemSelectionModel = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent, QItemSelectionModel** outptr_QItemSelectionModel, QObject** outptr_QObject) {
	MiqtVirtualQItemSelectionModel* ret = new MiqtVirtualQItemSelectionModel(model, parent);
	*outptr_QItemSelectionModel = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QItemSelectionModel_new3(QAbstractItemModel* model, QItemSelectionModel** outptr_QItemSelectionModel, QObject** outptr_QObject) {
	MiqtVirtualQItemSelectionModel* ret = new MiqtVirtualQItemSelectionModel(model);
	*outptr_QItemSelectionModel = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QItemSelectionModel_MetaObject(const QItemSelectionModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QItemSelectionModel_Metacast(QItemSelectionModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QItemSelectionModel_Tr(const char* s) {
	QString _ret = QItemSelectionModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemSelectionModel_TrUtf8(const char* s) {
	QString _ret = QItemSelectionModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QItemSelectionModel_CurrentIndex(const QItemSelectionModel* self) {
	return new QModelIndex(self->currentIndex());
}

bool QItemSelectionModel_IsSelected(const QItemSelectionModel* self, QModelIndex* index) {
	return self->isSelected(*index);
}

bool QItemSelectionModel_IsRowSelected(const QItemSelectionModel* self, int row) {
	return self->isRowSelected(static_cast<int>(row));
}

bool QItemSelectionModel_IsColumnSelected(const QItemSelectionModel* self, int column) {
	return self->isColumnSelected(static_cast<int>(column));
}

bool QItemSelectionModel_RowIntersectsSelection(const QItemSelectionModel* self, int row) {
	return self->rowIntersectsSelection(static_cast<int>(row));
}

bool QItemSelectionModel_ColumnIntersectsSelection(const QItemSelectionModel* self, int column) {
	return self->columnIntersectsSelection(static_cast<int>(column));
}

bool QItemSelectionModel_HasSelection(const QItemSelectionModel* self) {
	return self->hasSelection();
}

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_SelectedIndexes(const QItemSelectionModel* self) {
	QModelIndexList _ret = self->selectedIndexes();
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

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_SelectedRows(const QItemSelectionModel* self) {
	QModelIndexList _ret = self->selectedRows();
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

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_SelectedColumns(const QItemSelectionModel* self) {
	QModelIndexList _ret = self->selectedColumns();
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

QAbstractItemModel* QItemSelectionModel_Model(const QItemSelectionModel* self) {
	return (QAbstractItemModel*) self->model();
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

void QItemSelectionModel_connect_CurrentChanged(QItemSelectionModel* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QItemSelectionModel_CurrentChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_CurrentRowChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentRowChanged(*current, *previous);
}

void QItemSelectionModel_connect_CurrentRowChanged(QItemSelectionModel* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentRowChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QItemSelectionModel_CurrentRowChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_CurrentColumnChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentColumnChanged(*current, *previous);
}

void QItemSelectionModel_connect_CurrentColumnChanged(QItemSelectionModel* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentColumnChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QItemSelectionModel_CurrentColumnChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_ModelChanged(QItemSelectionModel* self, QAbstractItemModel* model) {
	self->modelChanged(model);
}

void QItemSelectionModel_connect_ModelChanged(QItemSelectionModel* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(QAbstractItemModel*)>(&QItemSelectionModel::modelChanged), self, [=](QAbstractItemModel* model) {
		QAbstractItemModel* sigval1 = model;
		miqt_exec_callback_QItemSelectionModel_ModelChanged(slot, sigval1);
	});
}

struct miqt_string QItemSelectionModel_Tr2(const char* s, const char* c) {
	QString _ret = QItemSelectionModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemSelectionModel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QItemSelectionModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemSelectionModel_TrUtf82(const char* s, const char* c) {
	QString _ret = QItemSelectionModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemSelectionModel_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QItemSelectionModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QItemSelectionModel_IsRowSelected2(const QItemSelectionModel* self, int row, QModelIndex* parent) {
	return self->isRowSelected(static_cast<int>(row), *parent);
}

bool QItemSelectionModel_IsColumnSelected2(const QItemSelectionModel* self, int column, QModelIndex* parent) {
	return self->isColumnSelected(static_cast<int>(column), *parent);
}

bool QItemSelectionModel_RowIntersectsSelection2(const QItemSelectionModel* self, int row, QModelIndex* parent) {
	return self->rowIntersectsSelection(static_cast<int>(row), *parent);
}

bool QItemSelectionModel_ColumnIntersectsSelection2(const QItemSelectionModel* self, int column, QModelIndex* parent) {
	return self->columnIntersectsSelection(static_cast<int>(column), *parent);
}

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_SelectedRows1(const QItemSelectionModel* self, int column) {
	QModelIndexList _ret = self->selectedRows(static_cast<int>(column));
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

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_SelectedColumns1(const QItemSelectionModel* self, int row) {
	QModelIndexList _ret = self->selectedColumns(static_cast<int>(row));
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

void QItemSelectionModel_override_virtual_SetCurrentIndex(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__SetCurrentIndex = slot;
}

void QItemSelectionModel_virtualbase_SetCurrentIndex(void* self, QModelIndex* index, int command) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_SetCurrentIndex(index, command);
}

void QItemSelectionModel_override_virtual_Select(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__Select = slot;
}

void QItemSelectionModel_virtualbase_Select(void* self, QModelIndex* index, int command) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_Select(index, command);
}

void QItemSelectionModel_override_virtual_Clear(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__Clear = slot;
}

void QItemSelectionModel_virtualbase_Clear(void* self) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_Clear();
}

void QItemSelectionModel_override_virtual_Reset(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__Reset = slot;
}

void QItemSelectionModel_virtualbase_Reset(void* self) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_Reset();
}

void QItemSelectionModel_override_virtual_ClearCurrentIndex(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__ClearCurrentIndex = slot;
}

void QItemSelectionModel_virtualbase_ClearCurrentIndex(void* self) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_ClearCurrentIndex();
}

void QItemSelectionModel_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__Event = slot;
}

bool QItemSelectionModel_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_Event(event);
}

void QItemSelectionModel_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__EventFilter = slot;
}

bool QItemSelectionModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_EventFilter(watched, event);
}

void QItemSelectionModel_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__TimerEvent = slot;
}

void QItemSelectionModel_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_TimerEvent(event);
}

void QItemSelectionModel_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__ChildEvent = slot;
}

void QItemSelectionModel_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_ChildEvent(event);
}

void QItemSelectionModel_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__CustomEvent = slot;
}

void QItemSelectionModel_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_CustomEvent(event);
}

void QItemSelectionModel_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__ConnectNotify = slot;
}

void QItemSelectionModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_ConnectNotify(signal);
}

void QItemSelectionModel_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) )->handle__DisconnectNotify = slot;
}

void QItemSelectionModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QItemSelectionModel_Delete(QItemSelectionModel* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQItemSelectionModel*>( self );
	} else {
		delete self;
	}
}

