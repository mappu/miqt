#include <QDesignerLayoutDecorationExtension>
#include <QLayout>
#include <QLayoutItem>
#include <QList>
#include <QPair>
#include <QPoint>
#include <QRect>
#include <QWidget>
#include <layoutdecoration.h>
#include "gen_layoutdecoration.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_array /* of QWidget* */  miqt_exec_callback_QDesignerLayoutDecorationExtension_widgets(const QDesignerLayoutDecorationExtension*, intptr_t, QLayout*);
QRect* miqt_exec_callback_QDesignerLayoutDecorationExtension_itemInfo(const QDesignerLayoutDecorationExtension*, intptr_t, int);
int miqt_exec_callback_QDesignerLayoutDecorationExtension_indexOf(const QDesignerLayoutDecorationExtension*, intptr_t, QWidget*);
int miqt_exec_callback_QDesignerLayoutDecorationExtension_indexOfWithItem(const QDesignerLayoutDecorationExtension*, intptr_t, QLayoutItem*);
int miqt_exec_callback_QDesignerLayoutDecorationExtension_currentInsertMode(const QDesignerLayoutDecorationExtension*, intptr_t);
int miqt_exec_callback_QDesignerLayoutDecorationExtension_currentIndex(const QDesignerLayoutDecorationExtension*, intptr_t);
struct miqt_map /* tuple of int and int */  miqt_exec_callback_QDesignerLayoutDecorationExtension_currentCell(const QDesignerLayoutDecorationExtension*, intptr_t);
void miqt_exec_callback_QDesignerLayoutDecorationExtension_insertWidget(QDesignerLayoutDecorationExtension*, intptr_t, QWidget*, struct miqt_map /* tuple of int and int */ );
void miqt_exec_callback_QDesignerLayoutDecorationExtension_removeWidget(QDesignerLayoutDecorationExtension*, intptr_t, QWidget*);
void miqt_exec_callback_QDesignerLayoutDecorationExtension_insertRow(QDesignerLayoutDecorationExtension*, intptr_t, int);
void miqt_exec_callback_QDesignerLayoutDecorationExtension_insertColumn(QDesignerLayoutDecorationExtension*, intptr_t, int);
void miqt_exec_callback_QDesignerLayoutDecorationExtension_simplify(QDesignerLayoutDecorationExtension*, intptr_t);
int miqt_exec_callback_QDesignerLayoutDecorationExtension_findItemAt(const QDesignerLayoutDecorationExtension*, intptr_t, QPoint*);
int miqt_exec_callback_QDesignerLayoutDecorationExtension_findItemAt2(const QDesignerLayoutDecorationExtension*, intptr_t, int, int);
void miqt_exec_callback_QDesignerLayoutDecorationExtension_adjustIndicator(QDesignerLayoutDecorationExtension*, intptr_t, QPoint*, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerLayoutDecorationExtension final : public QDesignerLayoutDecorationExtension {
public:

	MiqtVirtualQDesignerLayoutDecorationExtension(): QDesignerLayoutDecorationExtension() {}

	virtual ~MiqtVirtualQDesignerLayoutDecorationExtension() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgets = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QWidget *> widgets(QLayout* layout) const override {
		if (handle__widgets == 0) {
			return QList<QWidget *>(); // Pure virtual, there is no base we can call
		}

		QLayout* sigval1 = layout;
		struct miqt_array /* of QWidget* */  callback_return_value = miqt_exec_callback_QDesignerLayoutDecorationExtension_widgets(this, handle__widgets, sigval1);
		QList<QWidget *> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QWidget** callback_return_value_arr = static_cast<QWidget**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(callback_return_value_arr[i]);
		}
		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemInfo = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect itemInfo(int index) const override {
		if (handle__itemInfo == 0) {
			return QRect(); // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		QRect* callback_return_value = miqt_exec_callback_QDesignerLayoutDecorationExtension_itemInfo(this, handle__itemInfo, sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* widget) const override {
		if (handle__indexOf == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = widget;
		int callback_return_value = miqt_exec_callback_QDesignerLayoutDecorationExtension_indexOf(this, handle__indexOf, sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOfWithItem = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QLayoutItem* item) const override {
		if (handle__indexOfWithItem == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		QLayoutItem* sigval1 = item;
		int callback_return_value = miqt_exec_callback_QDesignerLayoutDecorationExtension_indexOfWithItem(this, handle__indexOfWithItem, sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentInsertMode = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerLayoutDecorationExtension::InsertMode currentInsertMode() const override {
		if (handle__currentInsertMode == 0) {
			return (QDesignerLayoutDecorationExtension::InsertMode)(0); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerLayoutDecorationExtension_currentInsertMode(this, handle__currentInsertMode);
		return static_cast<QDesignerLayoutDecorationExtension::InsertMode>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual int currentIndex() const override {
		if (handle__currentIndex == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerLayoutDecorationExtension_currentIndex(this, handle__currentIndex);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__currentCell = 0;

	// Subclass to allow providing a Go implementation
	virtual QPair<int, int> currentCell() const override {
		if (handle__currentCell == 0) {
			return QPair<int, int>(); // Pure virtual, there is no base we can call
		}

		struct miqt_map /* tuple of int and int */  callback_return_value = miqt_exec_callback_QDesignerLayoutDecorationExtension_currentCell(this, handle__currentCell);
		QPair<int, int> callback_return_value_QPair;
		int* callback_return_value_first_arr = static_cast<int*>(callback_return_value.keys);
		int* callback_return_value_second_arr = static_cast<int*>(callback_return_value.values);
		callback_return_value_QPair.first = static_cast<int>(callback_return_value_first_arr[0]);
		callback_return_value_QPair.second = static_cast<int>(callback_return_value_second_arr[0]);
		return callback_return_value_QPair;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertWidget(QWidget* widget, const QPair<int, int>& cell) override {
		if (handle__insertWidget == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = widget;
		const QPair<int, int>& cell_ret = cell;
		// Convert QPair<> from C++ memory to manually-managed C memory
		int* cell_first_arr = static_cast<int*>(malloc(sizeof(int)));
		int* cell_second_arr = static_cast<int*>(malloc(sizeof(int)));
		cell_first_arr[0] = cell_ret.first;
		cell_second_arr[0] = cell_ret.second;
		struct miqt_map cell_out;
		cell_out.len = 1;
		cell_out.keys = static_cast<void*>(cell_first_arr);
		cell_out.values = static_cast<void*>(cell_second_arr);
		struct miqt_map /* tuple of int and int */  sigval2 = cell_out;
		miqt_exec_callback_QDesignerLayoutDecorationExtension_insertWidget(this, handle__insertWidget, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual void removeWidget(QWidget* widget) override {
		if (handle__removeWidget == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = widget;
		miqt_exec_callback_QDesignerLayoutDecorationExtension_removeWidget(this, handle__removeWidget, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRow = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertRow(int row) override {
		if (handle__insertRow == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = row;
		miqt_exec_callback_QDesignerLayoutDecorationExtension_insertRow(this, handle__insertRow, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumn = 0;

	// Subclass to allow providing a Go implementation
	virtual void insertColumn(int column) override {
		if (handle__insertColumn == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = column;
		miqt_exec_callback_QDesignerLayoutDecorationExtension_insertColumn(this, handle__insertColumn, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__simplify = 0;

	// Subclass to allow providing a Go implementation
	virtual void simplify() override {
		if (handle__simplify == 0) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerLayoutDecorationExtension_simplify(this, handle__simplify);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__findItemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual int findItemAt(const QPoint& pos) const override {
		if (handle__findItemAt == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		int callback_return_value = miqt_exec_callback_QDesignerLayoutDecorationExtension_findItemAt(this, handle__findItemAt, sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__findItemAt2 = 0;

	// Subclass to allow providing a Go implementation
	virtual int findItemAt(int row, int column) const override {
		if (handle__findItemAt2 == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int sigval1 = row;
		int sigval2 = column;
		int callback_return_value = miqt_exec_callback_QDesignerLayoutDecorationExtension_findItemAt2(this, handle__findItemAt2, sigval1, sigval2);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__adjustIndicator = 0;

	// Subclass to allow providing a Go implementation
	virtual void adjustIndicator(const QPoint& pos, int index) override {
		if (handle__adjustIndicator == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		int sigval2 = index;
		miqt_exec_callback_QDesignerLayoutDecorationExtension_adjustIndicator(this, handle__adjustIndicator, sigval1, sigval2);

	}

};

QDesignerLayoutDecorationExtension* QDesignerLayoutDecorationExtension_new() {
	return new (std::nothrow) MiqtVirtualQDesignerLayoutDecorationExtension();
}

struct miqt_array /* of QWidget* */  QDesignerLayoutDecorationExtension_widgets(const QDesignerLayoutDecorationExtension* self, QLayout* layout) {
	QList<QWidget *> _ret = self->widgets(layout);
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QRect* QDesignerLayoutDecorationExtension_itemInfo(const QDesignerLayoutDecorationExtension* self, int index) {
	return new QRect(self->itemInfo(static_cast<int>(index)));
}

int QDesignerLayoutDecorationExtension_indexOf(const QDesignerLayoutDecorationExtension* self, QWidget* widget) {
	return self->indexOf(widget);
}

int QDesignerLayoutDecorationExtension_indexOfWithItem(const QDesignerLayoutDecorationExtension* self, QLayoutItem* item) {
	return self->indexOf(item);
}

int QDesignerLayoutDecorationExtension_currentInsertMode(const QDesignerLayoutDecorationExtension* self) {
	QDesignerLayoutDecorationExtension::InsertMode _ret = self->currentInsertMode();
	return static_cast<int>(_ret);
}

int QDesignerLayoutDecorationExtension_currentIndex(const QDesignerLayoutDecorationExtension* self) {
	return self->currentIndex();
}

struct miqt_map /* tuple of int and int */  QDesignerLayoutDecorationExtension_currentCell(const QDesignerLayoutDecorationExtension* self) {
	QPair<int, int> _ret = self->currentCell();
	// Convert QPair<> from C++ memory to manually-managed C memory
	int* _first_arr = static_cast<int*>(malloc(sizeof(int)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

void QDesignerLayoutDecorationExtension_insertWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget, struct miqt_map /* tuple of int and int */  cell) {
	QPair<int, int> cell_QPair;
	int* cell_first_arr = static_cast<int*>(cell.keys);
	int* cell_second_arr = static_cast<int*>(cell.values);
	cell_QPair.first = static_cast<int>(cell_first_arr[0]);
	cell_QPair.second = static_cast<int>(cell_second_arr[0]);
	self->insertWidget(widget, cell_QPair);
}

void QDesignerLayoutDecorationExtension_removeWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget) {
	self->removeWidget(widget);
}

void QDesignerLayoutDecorationExtension_insertRow(QDesignerLayoutDecorationExtension* self, int row) {
	self->insertRow(static_cast<int>(row));
}

void QDesignerLayoutDecorationExtension_insertColumn(QDesignerLayoutDecorationExtension* self, int column) {
	self->insertColumn(static_cast<int>(column));
}

void QDesignerLayoutDecorationExtension_simplify(QDesignerLayoutDecorationExtension* self) {
	self->simplify();
}

int QDesignerLayoutDecorationExtension_findItemAt(const QDesignerLayoutDecorationExtension* self, QPoint* pos) {
	return self->findItemAt(*pos);
}

int QDesignerLayoutDecorationExtension_findItemAt2(const QDesignerLayoutDecorationExtension* self, int row, int column) {
	return self->findItemAt(static_cast<int>(row), static_cast<int>(column));
}

void QDesignerLayoutDecorationExtension_adjustIndicator(QDesignerLayoutDecorationExtension* self, QPoint* pos, int index) {
	self->adjustIndicator(*pos, static_cast<int>(index));
}

bool QDesignerLayoutDecorationExtension_override_virtual_widgets(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgets = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_itemInfo(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemInfo = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_indexOf(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOf = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_indexOfWithItem(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOfWithItem = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_currentInsertMode(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentInsertMode = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_currentIndex(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentIndex = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_currentCell(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentCell = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_insertWidget(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertWidget = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_removeWidget(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeWidget = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_insertRow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRow = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_insertColumn(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumn = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_simplify(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__simplify = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_findItemAt(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__findItemAt = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_findItemAt2(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__findItemAt2 = slot;
	return true;
}

bool QDesignerLayoutDecorationExtension_override_virtual_adjustIndicator(void* self, intptr_t slot) {
	MiqtVirtualQDesignerLayoutDecorationExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerLayoutDecorationExtension*>( (QDesignerLayoutDecorationExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__adjustIndicator = slot;
	return true;
}

void QDesignerLayoutDecorationExtension_delete(QDesignerLayoutDecorationExtension* self) {
	delete self;
}

