#include <QAbstractItemModel>
#include <QChildEvent>
#include <QEvent>
#include <QItemSelection>
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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QItemSelectionModel_selectionChanged(intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QItemSelectionModel_currentChanged(intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QItemSelectionModel_currentRowChanged(intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QItemSelectionModel_currentColumnChanged(intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QItemSelectionModel_modelChanged(intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QItemSelectionModel_setCurrentIndex(QItemSelectionModel*, intptr_t, QModelIndex*, int);
void miqt_exec_callback_QItemSelectionModel_select(QItemSelectionModel*, intptr_t, QModelIndex*, int);
void miqt_exec_callback_QItemSelectionModel_select2(QItemSelectionModel*, intptr_t, QItemSelection*, int);
void miqt_exec_callback_QItemSelectionModel_clear(QItemSelectionModel*, intptr_t);
void miqt_exec_callback_QItemSelectionModel_reset(QItemSelectionModel*, intptr_t);
void miqt_exec_callback_QItemSelectionModel_clearCurrentIndex(QItemSelectionModel*, intptr_t);
bool miqt_exec_callback_QItemSelectionModel_event(QItemSelectionModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QItemSelectionModel_eventFilter(QItemSelectionModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QItemSelectionModel_timerEvent(QItemSelectionModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QItemSelectionModel_childEvent(QItemSelectionModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QItemSelectionModel_customEvent(QItemSelectionModel*, intptr_t, QEvent*);
void miqt_exec_callback_QItemSelectionModel_connectNotify(QItemSelectionModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QItemSelectionModel_disconnectNotify(QItemSelectionModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

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

void QItemSelectionRange_operatorAssign(QItemSelectionRange* self, QItemSelectionRange* other) {
	self->operator=(*other);
}

void QItemSelectionRange_swap(QItemSelectionRange* self, QItemSelectionRange* other) {
	self->swap(*other);
}

int QItemSelectionRange_top(const QItemSelectionRange* self) {
	return self->top();
}

int QItemSelectionRange_left(const QItemSelectionRange* self) {
	return self->left();
}

int QItemSelectionRange_bottom(const QItemSelectionRange* self) {
	return self->bottom();
}

int QItemSelectionRange_right(const QItemSelectionRange* self) {
	return self->right();
}

int QItemSelectionRange_width(const QItemSelectionRange* self) {
	return self->width();
}

int QItemSelectionRange_height(const QItemSelectionRange* self) {
	return self->height();
}

QPersistentModelIndex* QItemSelectionRange_topLeft(const QItemSelectionRange* self) {
	const QPersistentModelIndex& _ret = self->topLeft();
	// Cast returned reference into pointer
	return const_cast<QPersistentModelIndex*>(&_ret);
}

QPersistentModelIndex* QItemSelectionRange_bottomRight(const QItemSelectionRange* self) {
	const QPersistentModelIndex& _ret = self->bottomRight();
	// Cast returned reference into pointer
	return const_cast<QPersistentModelIndex*>(&_ret);
}

QModelIndex* QItemSelectionRange_parent(const QItemSelectionRange* self) {
	return new QModelIndex(self->parent());
}

QAbstractItemModel* QItemSelectionRange_model(const QItemSelectionRange* self) {
	return (QAbstractItemModel*) self->model();
}

bool QItemSelectionRange_contains(const QItemSelectionRange* self, QModelIndex* index) {
	return self->contains(*index);
}

bool QItemSelectionRange_contains2(const QItemSelectionRange* self, int row, int column, QModelIndex* parentIndex) {
	return self->contains(static_cast<int>(row), static_cast<int>(column), *parentIndex);
}

bool QItemSelectionRange_intersects(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return self->intersects(*other);
}

QItemSelectionRange* QItemSelectionRange_intersected(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return new QItemSelectionRange(self->intersected(*other));
}

bool QItemSelectionRange_operatorEqual(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return (*self == *other);
}

bool QItemSelectionRange_operatorNotEqual(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return (*self != *other);
}

bool QItemSelectionRange_operatorLesser(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return (*self < *other);
}

bool QItemSelectionRange_isValid(const QItemSelectionRange* self) {
	return self->isValid();
}

bool QItemSelectionRange_isEmpty(const QItemSelectionRange* self) {
	return self->isEmpty();
}

struct miqt_array /* of QModelIndex* */  QItemSelectionRange_indexes(const QItemSelectionRange* self) {
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

void QItemSelectionRange_delete(QItemSelectionRange* self) {
	delete self;
}

class MiqtVirtualQItemSelectionModel final : public QItemSelectionModel {
public:

	MiqtVirtualQItemSelectionModel(): QItemSelectionModel() {};
	MiqtVirtualQItemSelectionModel(QAbstractItemModel* model, QObject* parent): QItemSelectionModel(model, parent) {};
	MiqtVirtualQItemSelectionModel(QAbstractItemModel* model): QItemSelectionModel(model) {};

	virtual ~MiqtVirtualQItemSelectionModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCurrentIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCurrentIndex(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setCurrentIndex == 0) {
			QItemSelectionModel::setCurrentIndex(index, command);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QItemSelectionModel_setCurrentIndex(this, handle__setCurrentIndex, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setCurrentIndex(QModelIndex* index, int command) {

		QItemSelectionModel::setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__select = 0;

	// Subclass to allow providing a Go implementation
	virtual void select(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
		if (handle__select == 0) {
			QItemSelectionModel::select(index, command);
			return;
		}
		
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QItemSelectionModel_select(this, handle__select, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_select(QModelIndex* index, int command) {

		QItemSelectionModel::select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__select2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
		if (handle__select2 == 0) {
			QItemSelectionModel::select(selection, command);
			return;
		}
		
		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);

		miqt_exec_callback_QItemSelectionModel_select2(this, handle__select2, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_select2(QItemSelection* selection, int command) {

		QItemSelectionModel::select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QItemSelectionModel::clear();
			return;
		}
		

		miqt_exec_callback_QItemSelectionModel_clear(this, handle__clear);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_clear() {

		QItemSelectionModel::clear();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QItemSelectionModel::reset();
			return;
		}
		

		miqt_exec_callback_QItemSelectionModel_reset(this, handle__reset);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_reset() {

		QItemSelectionModel::reset();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearCurrentIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void clearCurrentIndex() override {
		if (handle__clearCurrentIndex == 0) {
			QItemSelectionModel::clearCurrentIndex();
			return;
		}
		

		miqt_exec_callback_QItemSelectionModel_clearCurrentIndex(this, handle__clearCurrentIndex);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_clearCurrentIndex() {

		QItemSelectionModel::clearCurrentIndex();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QItemSelectionModel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QItemSelectionModel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QItemSelectionModel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QItemSelectionModel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QItemSelectionModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QItemSelectionModel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QItemSelectionModel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QItemSelectionModel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QItemSelectionModel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QItemSelectionModel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QItemSelectionModel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QItemSelectionModel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QItemSelectionModel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QItemSelectionModel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QItemSelectionModel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QItemSelectionModel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QItemSelectionModel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QItemSelectionModel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QItemSelectionModel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QItemSelectionModel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QItemSelectionModel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QItemSelectionModel_protectedbase_emitSelectionChanged(bool* _dynamic_cast_ok, void* self, QItemSelection* newSelection, QItemSelection* oldSelection);
	friend QObject* QItemSelectionModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QItemSelectionModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QItemSelectionModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QItemSelectionModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QItemSelectionModel* QItemSelectionModel_new() {
	return new MiqtVirtualQItemSelectionModel();
}

QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent) {
	return new MiqtVirtualQItemSelectionModel(model, parent);
}

QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model) {
	return new MiqtVirtualQItemSelectionModel(model);
}

void QItemSelectionModel_virtbase(QItemSelectionModel* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QItemSelectionModel_metaObject(const QItemSelectionModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QItemSelectionModel_metacast(QItemSelectionModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QItemSelectionModel_tr(const char* s) {
	QString _ret = QItemSelectionModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemSelectionModel_trUtf8(const char* s) {
	QString _ret = QItemSelectionModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QItemSelectionModel_currentIndex(const QItemSelectionModel* self) {
	return new QModelIndex(self->currentIndex());
}

bool QItemSelectionModel_isSelected(const QItemSelectionModel* self, QModelIndex* index) {
	return self->isSelected(*index);
}

bool QItemSelectionModel_isRowSelected(const QItemSelectionModel* self, int row) {
	return self->isRowSelected(static_cast<int>(row));
}

bool QItemSelectionModel_isColumnSelected(const QItemSelectionModel* self, int column) {
	return self->isColumnSelected(static_cast<int>(column));
}

bool QItemSelectionModel_rowIntersectsSelection(const QItemSelectionModel* self, int row) {
	return self->rowIntersectsSelection(static_cast<int>(row));
}

bool QItemSelectionModel_columnIntersectsSelection(const QItemSelectionModel* self, int column) {
	return self->columnIntersectsSelection(static_cast<int>(column));
}

bool QItemSelectionModel_hasSelection(const QItemSelectionModel* self) {
	return self->hasSelection();
}

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedIndexes(const QItemSelectionModel* self) {
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

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedRows(const QItemSelectionModel* self) {
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

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedColumns(const QItemSelectionModel* self) {
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

QItemSelection* QItemSelectionModel_selection(const QItemSelectionModel* self) {
	return new QItemSelection(self->selection());
}

QAbstractItemModel* QItemSelectionModel_model(const QItemSelectionModel* self) {
	return (QAbstractItemModel*) self->model();
}

QAbstractItemModel* QItemSelectionModel_model2(QItemSelectionModel* self) {
	return self->model();
}

void QItemSelectionModel_setModel(QItemSelectionModel* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QItemSelectionModel_setCurrentIndex(QItemSelectionModel* self, QModelIndex* index, int command) {
	self->setCurrentIndex(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QItemSelectionModel_select(QItemSelectionModel* self, QModelIndex* index, int command) {
	self->select(*index, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QItemSelectionModel_select2(QItemSelectionModel* self, QItemSelection* selection, int command) {
	self->select(*selection, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QItemSelectionModel_clear(QItemSelectionModel* self) {
	self->clear();
}

void QItemSelectionModel_reset(QItemSelectionModel* self) {
	self->reset();
}

void QItemSelectionModel_clearSelection(QItemSelectionModel* self) {
	self->clearSelection();
}

void QItemSelectionModel_clearCurrentIndex(QItemSelectionModel* self) {
	self->clearCurrentIndex();
}

void QItemSelectionModel_selectionChanged(QItemSelectionModel* self, QItemSelection* selected, QItemSelection* deselected) {
	self->selectionChanged(*selected, *deselected);
}

void QItemSelectionModel_connect_selectionChanged(QItemSelectionModel* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QItemSelection&, const QItemSelection&)>(&QItemSelectionModel::selectionChanged), self, [=](const QItemSelection& selected, const QItemSelection& deselected) {
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
		miqt_exec_callback_QItemSelectionModel_selectionChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_currentChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentChanged(*current, *previous);
}

void QItemSelectionModel_connect_currentChanged(QItemSelectionModel* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QItemSelectionModel_currentChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_currentRowChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentRowChanged(*current, *previous);
}

void QItemSelectionModel_connect_currentRowChanged(QItemSelectionModel* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentRowChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QItemSelectionModel_currentRowChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_currentColumnChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentColumnChanged(*current, *previous);
}

void QItemSelectionModel_connect_currentColumnChanged(QItemSelectionModel* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentColumnChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QItemSelectionModel_currentColumnChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_modelChanged(QItemSelectionModel* self, QAbstractItemModel* model) {
	self->modelChanged(model);
}

void QItemSelectionModel_connect_modelChanged(QItemSelectionModel* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(QAbstractItemModel*)>(&QItemSelectionModel::modelChanged), self, [=](QAbstractItemModel* model) {
		QAbstractItemModel* sigval1 = model;
		miqt_exec_callback_QItemSelectionModel_modelChanged(slot, sigval1);
	});
}

struct miqt_string QItemSelectionModel_tr2(const char* s, const char* c) {
	QString _ret = QItemSelectionModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemSelectionModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QItemSelectionModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemSelectionModel_trUtf82(const char* s, const char* c) {
	QString _ret = QItemSelectionModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemSelectionModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QItemSelectionModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QItemSelectionModel_isRowSelected2(const QItemSelectionModel* self, int row, QModelIndex* parent) {
	return self->isRowSelected(static_cast<int>(row), *parent);
}

bool QItemSelectionModel_isColumnSelected2(const QItemSelectionModel* self, int column, QModelIndex* parent) {
	return self->isColumnSelected(static_cast<int>(column), *parent);
}

bool QItemSelectionModel_rowIntersectsSelection2(const QItemSelectionModel* self, int row, QModelIndex* parent) {
	return self->rowIntersectsSelection(static_cast<int>(row), *parent);
}

bool QItemSelectionModel_columnIntersectsSelection2(const QItemSelectionModel* self, int column, QModelIndex* parent) {
	return self->columnIntersectsSelection(static_cast<int>(column), *parent);
}

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedRows1(const QItemSelectionModel* self, int column) {
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

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedColumns1(const QItemSelectionModel* self, int row) {
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

bool QItemSelectionModel_override_virtual_setCurrentIndex(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setCurrentIndex = slot;
	return true;
}

void QItemSelectionModel_virtualbase_setCurrentIndex(void* self, QModelIndex* index, int command) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_setCurrentIndex(index, command);
}

bool QItemSelectionModel_override_virtual_select(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__select = slot;
	return true;
}

void QItemSelectionModel_virtualbase_select(void* self, QModelIndex* index, int command) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_select(index, command);
}

bool QItemSelectionModel_override_virtual_select2(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__select2 = slot;
	return true;
}

void QItemSelectionModel_virtualbase_select2(void* self, QItemSelection* selection, int command) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_select2(selection, command);
}

bool QItemSelectionModel_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clear = slot;
	return true;
}

void QItemSelectionModel_virtualbase_clear(void* self) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_clear();
}

bool QItemSelectionModel_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

void QItemSelectionModel_virtualbase_reset(void* self) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_reset();
}

bool QItemSelectionModel_override_virtual_clearCurrentIndex(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clearCurrentIndex = slot;
	return true;
}

void QItemSelectionModel_virtualbase_clearCurrentIndex(void* self) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_clearCurrentIndex();
}

bool QItemSelectionModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QItemSelectionModel_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_event(event);
}

bool QItemSelectionModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QItemSelectionModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QItemSelectionModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QItemSelectionModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_timerEvent(event);
}

bool QItemSelectionModel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QItemSelectionModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_childEvent(event);
}

bool QItemSelectionModel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QItemSelectionModel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_customEvent(event);
}

bool QItemSelectionModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QItemSelectionModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_connectNotify(signal);
}

bool QItemSelectionModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QItemSelectionModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQItemSelectionModel*)(self) )->virtualbase_disconnectNotify(signal);
}

void QItemSelectionModel_protectedbase_emitSelectionChanged(bool* _dynamic_cast_ok, void* self, QItemSelection* newSelection, QItemSelection* oldSelection) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->emitSelectionChanged(*newSelection, *oldSelection);

}

QObject* QItemSelectionModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QItemSelectionModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QItemSelectionModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QItemSelectionModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQItemSelectionModel* self_cast = dynamic_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QItemSelectionModel_delete(QItemSelectionModel* self) {
	delete self;
}

QItemSelection* QItemSelection_new() {
	return new QItemSelection();
}

QItemSelection* QItemSelection_new2(QModelIndex* topLeft, QModelIndex* bottomRight) {
	return new QItemSelection(*topLeft, *bottomRight);
}

void QItemSelection_select(QItemSelection* self, QModelIndex* topLeft, QModelIndex* bottomRight) {
	self->select(*topLeft, *bottomRight);
}

bool QItemSelection_contains(const QItemSelection* self, QModelIndex* index) {
	return self->contains(*index);
}

struct miqt_array /* of QModelIndex* */  QItemSelection_indexes(const QItemSelection* self) {
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

void QItemSelection_merge(QItemSelection* self, QItemSelection* other, int command) {
	self->merge(*other, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QItemSelection_split(QItemSelectionRange* range, QItemSelectionRange* other, QItemSelection* result) {
	QItemSelection::split(*range, *other, result);
}

void QItemSelection_operatorAssign(QItemSelection* self, QItemSelection* param1) {
	self->operator=(*param1);
}

void QItemSelection_delete(QItemSelection* self) {
	delete self;
}

