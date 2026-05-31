#include <QEvent>
#include <QList>
#include <qwt_picker_machine.h>
#include "gen_qwt_picker_machine.h"

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_array /* of int */  miqt_exec_callback_QwtPickerMachine_transition(QwtPickerMachine*, intptr_t, QwtEventPattern*, QEvent*);
struct miqt_array /* of int */  miqt_exec_callback_QwtPickerTrackerMachine_transition(QwtPickerTrackerMachine*, intptr_t, QwtEventPattern*, QEvent*);
struct miqt_array /* of int */  miqt_exec_callback_QwtPickerClickPointMachine_transition(QwtPickerClickPointMachine*, intptr_t, QwtEventPattern*, QEvent*);
struct miqt_array /* of int */  miqt_exec_callback_QwtPickerDragPointMachine_transition(QwtPickerDragPointMachine*, intptr_t, QwtEventPattern*, QEvent*);
struct miqt_array /* of int */  miqt_exec_callback_QwtPickerClickRectMachine_transition(QwtPickerClickRectMachine*, intptr_t, QwtEventPattern*, QEvent*);
struct miqt_array /* of int */  miqt_exec_callback_QwtPickerDragRectMachine_transition(QwtPickerDragRectMachine*, intptr_t, QwtEventPattern*, QEvent*);
struct miqt_array /* of int */  miqt_exec_callback_QwtPickerDragLineMachine_transition(QwtPickerDragLineMachine*, intptr_t, QwtEventPattern*, QEvent*);
struct miqt_array /* of int */  miqt_exec_callback_QwtPickerPolygonMachine_transition(QwtPickerPolygonMachine*, intptr_t, QwtEventPattern*, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPickerMachine final : public QwtPickerMachine {
public:

	MiqtVirtualQwtPickerMachine(QwtPickerMachine::SelectionType param1): QwtPickerMachine(param1) {}
	MiqtVirtualQwtPickerMachine(const QwtPickerMachine& param1): QwtPickerMachine(param1) {}

	virtual ~MiqtVirtualQwtPickerMachine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transition = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QwtPickerMachine::Command> transition(const QwtEventPattern& param1, const QEvent* param2) override {
		if (handle__transition == 0) {
			return QList<QwtPickerMachine::Command>(); // Pure virtual, there is no base we can call
		}

		const QwtEventPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern* sigval1 = const_cast<QwtEventPattern*>(&param1_ret);
		QEvent* sigval2 = (QEvent*) param2;
		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QwtPickerMachine_transition(this, handle__transition, sigval1, sigval2);
		QList<QwtPickerMachine::Command> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<QwtPickerMachine::Command>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

};

QwtPickerMachine* QwtPickerMachine_new(int param1) {
	return new (std::nothrow) MiqtVirtualQwtPickerMachine(static_cast<QwtPickerMachine::SelectionType>(param1));
}

QwtPickerMachine* QwtPickerMachine_new2(QwtPickerMachine* param1) {
	return new (std::nothrow) MiqtVirtualQwtPickerMachine(*param1);
}

struct miqt_array /* of int */  QwtPickerMachine_transition(QwtPickerMachine* self, QwtEventPattern* param1, QEvent* param2) {
	QList<QwtPickerMachine::Command> _ret = self->transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QwtPickerMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPickerMachine_reset(QwtPickerMachine* self) {
	self->reset();
}

int QwtPickerMachine_state(const QwtPickerMachine* self) {
	return self->state();
}

void QwtPickerMachine_setState(QwtPickerMachine* self, int state) {
	self->setState(static_cast<int>(state));
}

int QwtPickerMachine_selectionType(const QwtPickerMachine* self) {
	QwtPickerMachine::SelectionType _ret = self->selectionType();
	return static_cast<int>(_ret);
}

bool QwtPickerMachine_override_virtual_transition(void* self, intptr_t slot) {
	MiqtVirtualQwtPickerMachine* self_cast = dynamic_cast<MiqtVirtualQwtPickerMachine*>( (QwtPickerMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = slot;
	return true;
}

void QwtPickerMachine_delete(QwtPickerMachine* self) {
	delete self;
}

class MiqtVirtualQwtPickerTrackerMachine final : public QwtPickerTrackerMachine {
public:

	MiqtVirtualQwtPickerTrackerMachine(): QwtPickerTrackerMachine() {}
	MiqtVirtualQwtPickerTrackerMachine(const QwtPickerTrackerMachine& param1): QwtPickerTrackerMachine(param1) {}

	virtual ~MiqtVirtualQwtPickerTrackerMachine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transition = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QwtPickerMachine::Command> transition(const QwtEventPattern& param1, const QEvent* param2) override {
		if (handle__transition == 0) {
			return QwtPickerTrackerMachine::transition(param1, param2);
		}

		const QwtEventPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern* sigval1 = const_cast<QwtEventPattern*>(&param1_ret);
		QEvent* sigval2 = (QEvent*) param2;
		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QwtPickerTrackerMachine_transition(this, handle__transition, sigval1, sigval2);
		QList<QwtPickerMachine::Command> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<QwtPickerMachine::Command>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of int */  QwtPickerTrackerMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

};

QwtPickerTrackerMachine* QwtPickerTrackerMachine_new() {
	return new (std::nothrow) MiqtVirtualQwtPickerTrackerMachine();
}

QwtPickerTrackerMachine* QwtPickerTrackerMachine_new2(QwtPickerTrackerMachine* param1) {
	return new (std::nothrow) MiqtVirtualQwtPickerTrackerMachine(*param1);
}

void QwtPickerTrackerMachine_virtbase(QwtPickerTrackerMachine* src, QwtPickerMachine** outptr_QwtPickerMachine) {
	*outptr_QwtPickerMachine = static_cast<QwtPickerMachine*>(src);
}

struct miqt_array /* of int */  QwtPickerTrackerMachine_transition(QwtPickerTrackerMachine* self, QwtEventPattern* param1, QEvent* param2) {
	QList<QwtPickerMachine::Command> _ret = self->transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QwtPickerMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QwtPickerTrackerMachine_override_virtual_transition(void* self, intptr_t slot) {
	MiqtVirtualQwtPickerTrackerMachine* self_cast = dynamic_cast<MiqtVirtualQwtPickerTrackerMachine*>( (QwtPickerTrackerMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = slot;
	return true;
}

struct miqt_array /* of int */  QwtPickerTrackerMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2) {
	QList<MiqtVirtualQwtPickerTrackerMachine::Command> _ret = static_cast<MiqtVirtualQwtPickerTrackerMachine*>(self)->QwtPickerTrackerMachine::transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		MiqtVirtualQwtPickerTrackerMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPickerTrackerMachine_delete(QwtPickerTrackerMachine* self) {
	delete self;
}

class MiqtVirtualQwtPickerClickPointMachine final : public QwtPickerClickPointMachine {
public:

	MiqtVirtualQwtPickerClickPointMachine(): QwtPickerClickPointMachine() {}
	MiqtVirtualQwtPickerClickPointMachine(const QwtPickerClickPointMachine& param1): QwtPickerClickPointMachine(param1) {}

	virtual ~MiqtVirtualQwtPickerClickPointMachine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transition = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QwtPickerMachine::Command> transition(const QwtEventPattern& param1, const QEvent* param2) override {
		if (handle__transition == 0) {
			return QwtPickerClickPointMachine::transition(param1, param2);
		}

		const QwtEventPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern* sigval1 = const_cast<QwtEventPattern*>(&param1_ret);
		QEvent* sigval2 = (QEvent*) param2;
		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QwtPickerClickPointMachine_transition(this, handle__transition, sigval1, sigval2);
		QList<QwtPickerMachine::Command> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<QwtPickerMachine::Command>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of int */  QwtPickerClickPointMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

};

QwtPickerClickPointMachine* QwtPickerClickPointMachine_new() {
	return new (std::nothrow) MiqtVirtualQwtPickerClickPointMachine();
}

QwtPickerClickPointMachine* QwtPickerClickPointMachine_new2(QwtPickerClickPointMachine* param1) {
	return new (std::nothrow) MiqtVirtualQwtPickerClickPointMachine(*param1);
}

void QwtPickerClickPointMachine_virtbase(QwtPickerClickPointMachine* src, QwtPickerMachine** outptr_QwtPickerMachine) {
	*outptr_QwtPickerMachine = static_cast<QwtPickerMachine*>(src);
}

struct miqt_array /* of int */  QwtPickerClickPointMachine_transition(QwtPickerClickPointMachine* self, QwtEventPattern* param1, QEvent* param2) {
	QList<QwtPickerMachine::Command> _ret = self->transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QwtPickerMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QwtPickerClickPointMachine_override_virtual_transition(void* self, intptr_t slot) {
	MiqtVirtualQwtPickerClickPointMachine* self_cast = dynamic_cast<MiqtVirtualQwtPickerClickPointMachine*>( (QwtPickerClickPointMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = slot;
	return true;
}

struct miqt_array /* of int */  QwtPickerClickPointMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2) {
	QList<MiqtVirtualQwtPickerClickPointMachine::Command> _ret = static_cast<MiqtVirtualQwtPickerClickPointMachine*>(self)->QwtPickerClickPointMachine::transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		MiqtVirtualQwtPickerClickPointMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPickerClickPointMachine_delete(QwtPickerClickPointMachine* self) {
	delete self;
}

class MiqtVirtualQwtPickerDragPointMachine final : public QwtPickerDragPointMachine {
public:

	MiqtVirtualQwtPickerDragPointMachine(): QwtPickerDragPointMachine() {}
	MiqtVirtualQwtPickerDragPointMachine(const QwtPickerDragPointMachine& param1): QwtPickerDragPointMachine(param1) {}

	virtual ~MiqtVirtualQwtPickerDragPointMachine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transition = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QwtPickerMachine::Command> transition(const QwtEventPattern& param1, const QEvent* param2) override {
		if (handle__transition == 0) {
			return QwtPickerDragPointMachine::transition(param1, param2);
		}

		const QwtEventPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern* sigval1 = const_cast<QwtEventPattern*>(&param1_ret);
		QEvent* sigval2 = (QEvent*) param2;
		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QwtPickerDragPointMachine_transition(this, handle__transition, sigval1, sigval2);
		QList<QwtPickerMachine::Command> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<QwtPickerMachine::Command>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of int */  QwtPickerDragPointMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

};

QwtPickerDragPointMachine* QwtPickerDragPointMachine_new() {
	return new (std::nothrow) MiqtVirtualQwtPickerDragPointMachine();
}

QwtPickerDragPointMachine* QwtPickerDragPointMachine_new2(QwtPickerDragPointMachine* param1) {
	return new (std::nothrow) MiqtVirtualQwtPickerDragPointMachine(*param1);
}

void QwtPickerDragPointMachine_virtbase(QwtPickerDragPointMachine* src, QwtPickerMachine** outptr_QwtPickerMachine) {
	*outptr_QwtPickerMachine = static_cast<QwtPickerMachine*>(src);
}

struct miqt_array /* of int */  QwtPickerDragPointMachine_transition(QwtPickerDragPointMachine* self, QwtEventPattern* param1, QEvent* param2) {
	QList<QwtPickerMachine::Command> _ret = self->transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QwtPickerMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QwtPickerDragPointMachine_override_virtual_transition(void* self, intptr_t slot) {
	MiqtVirtualQwtPickerDragPointMachine* self_cast = dynamic_cast<MiqtVirtualQwtPickerDragPointMachine*>( (QwtPickerDragPointMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = slot;
	return true;
}

struct miqt_array /* of int */  QwtPickerDragPointMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2) {
	QList<MiqtVirtualQwtPickerDragPointMachine::Command> _ret = static_cast<MiqtVirtualQwtPickerDragPointMachine*>(self)->QwtPickerDragPointMachine::transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		MiqtVirtualQwtPickerDragPointMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPickerDragPointMachine_delete(QwtPickerDragPointMachine* self) {
	delete self;
}

class MiqtVirtualQwtPickerClickRectMachine final : public QwtPickerClickRectMachine {
public:

	MiqtVirtualQwtPickerClickRectMachine(): QwtPickerClickRectMachine() {}
	MiqtVirtualQwtPickerClickRectMachine(const QwtPickerClickRectMachine& param1): QwtPickerClickRectMachine(param1) {}

	virtual ~MiqtVirtualQwtPickerClickRectMachine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transition = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QwtPickerMachine::Command> transition(const QwtEventPattern& param1, const QEvent* param2) override {
		if (handle__transition == 0) {
			return QwtPickerClickRectMachine::transition(param1, param2);
		}

		const QwtEventPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern* sigval1 = const_cast<QwtEventPattern*>(&param1_ret);
		QEvent* sigval2 = (QEvent*) param2;
		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QwtPickerClickRectMachine_transition(this, handle__transition, sigval1, sigval2);
		QList<QwtPickerMachine::Command> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<QwtPickerMachine::Command>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of int */  QwtPickerClickRectMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

};

QwtPickerClickRectMachine* QwtPickerClickRectMachine_new() {
	return new (std::nothrow) MiqtVirtualQwtPickerClickRectMachine();
}

QwtPickerClickRectMachine* QwtPickerClickRectMachine_new2(QwtPickerClickRectMachine* param1) {
	return new (std::nothrow) MiqtVirtualQwtPickerClickRectMachine(*param1);
}

void QwtPickerClickRectMachine_virtbase(QwtPickerClickRectMachine* src, QwtPickerMachine** outptr_QwtPickerMachine) {
	*outptr_QwtPickerMachine = static_cast<QwtPickerMachine*>(src);
}

struct miqt_array /* of int */  QwtPickerClickRectMachine_transition(QwtPickerClickRectMachine* self, QwtEventPattern* param1, QEvent* param2) {
	QList<QwtPickerMachine::Command> _ret = self->transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QwtPickerMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QwtPickerClickRectMachine_override_virtual_transition(void* self, intptr_t slot) {
	MiqtVirtualQwtPickerClickRectMachine* self_cast = dynamic_cast<MiqtVirtualQwtPickerClickRectMachine*>( (QwtPickerClickRectMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = slot;
	return true;
}

struct miqt_array /* of int */  QwtPickerClickRectMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2) {
	QList<MiqtVirtualQwtPickerClickRectMachine::Command> _ret = static_cast<MiqtVirtualQwtPickerClickRectMachine*>(self)->QwtPickerClickRectMachine::transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		MiqtVirtualQwtPickerClickRectMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPickerClickRectMachine_delete(QwtPickerClickRectMachine* self) {
	delete self;
}

class MiqtVirtualQwtPickerDragRectMachine final : public QwtPickerDragRectMachine {
public:

	MiqtVirtualQwtPickerDragRectMachine(): QwtPickerDragRectMachine() {}
	MiqtVirtualQwtPickerDragRectMachine(const QwtPickerDragRectMachine& param1): QwtPickerDragRectMachine(param1) {}

	virtual ~MiqtVirtualQwtPickerDragRectMachine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transition = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QwtPickerMachine::Command> transition(const QwtEventPattern& param1, const QEvent* param2) override {
		if (handle__transition == 0) {
			return QwtPickerDragRectMachine::transition(param1, param2);
		}

		const QwtEventPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern* sigval1 = const_cast<QwtEventPattern*>(&param1_ret);
		QEvent* sigval2 = (QEvent*) param2;
		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QwtPickerDragRectMachine_transition(this, handle__transition, sigval1, sigval2);
		QList<QwtPickerMachine::Command> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<QwtPickerMachine::Command>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of int */  QwtPickerDragRectMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

};

QwtPickerDragRectMachine* QwtPickerDragRectMachine_new() {
	return new (std::nothrow) MiqtVirtualQwtPickerDragRectMachine();
}

QwtPickerDragRectMachine* QwtPickerDragRectMachine_new2(QwtPickerDragRectMachine* param1) {
	return new (std::nothrow) MiqtVirtualQwtPickerDragRectMachine(*param1);
}

void QwtPickerDragRectMachine_virtbase(QwtPickerDragRectMachine* src, QwtPickerMachine** outptr_QwtPickerMachine) {
	*outptr_QwtPickerMachine = static_cast<QwtPickerMachine*>(src);
}

struct miqt_array /* of int */  QwtPickerDragRectMachine_transition(QwtPickerDragRectMachine* self, QwtEventPattern* param1, QEvent* param2) {
	QList<QwtPickerMachine::Command> _ret = self->transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QwtPickerMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QwtPickerDragRectMachine_override_virtual_transition(void* self, intptr_t slot) {
	MiqtVirtualQwtPickerDragRectMachine* self_cast = dynamic_cast<MiqtVirtualQwtPickerDragRectMachine*>( (QwtPickerDragRectMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = slot;
	return true;
}

struct miqt_array /* of int */  QwtPickerDragRectMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2) {
	QList<MiqtVirtualQwtPickerDragRectMachine::Command> _ret = static_cast<MiqtVirtualQwtPickerDragRectMachine*>(self)->QwtPickerDragRectMachine::transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		MiqtVirtualQwtPickerDragRectMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPickerDragRectMachine_delete(QwtPickerDragRectMachine* self) {
	delete self;
}

class MiqtVirtualQwtPickerDragLineMachine final : public QwtPickerDragLineMachine {
public:

	MiqtVirtualQwtPickerDragLineMachine(): QwtPickerDragLineMachine() {}
	MiqtVirtualQwtPickerDragLineMachine(const QwtPickerDragLineMachine& param1): QwtPickerDragLineMachine(param1) {}

	virtual ~MiqtVirtualQwtPickerDragLineMachine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transition = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QwtPickerMachine::Command> transition(const QwtEventPattern& param1, const QEvent* param2) override {
		if (handle__transition == 0) {
			return QwtPickerDragLineMachine::transition(param1, param2);
		}

		const QwtEventPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern* sigval1 = const_cast<QwtEventPattern*>(&param1_ret);
		QEvent* sigval2 = (QEvent*) param2;
		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QwtPickerDragLineMachine_transition(this, handle__transition, sigval1, sigval2);
		QList<QwtPickerMachine::Command> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<QwtPickerMachine::Command>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of int */  QwtPickerDragLineMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

};

QwtPickerDragLineMachine* QwtPickerDragLineMachine_new() {
	return new (std::nothrow) MiqtVirtualQwtPickerDragLineMachine();
}

QwtPickerDragLineMachine* QwtPickerDragLineMachine_new2(QwtPickerDragLineMachine* param1) {
	return new (std::nothrow) MiqtVirtualQwtPickerDragLineMachine(*param1);
}

void QwtPickerDragLineMachine_virtbase(QwtPickerDragLineMachine* src, QwtPickerMachine** outptr_QwtPickerMachine) {
	*outptr_QwtPickerMachine = static_cast<QwtPickerMachine*>(src);
}

struct miqt_array /* of int */  QwtPickerDragLineMachine_transition(QwtPickerDragLineMachine* self, QwtEventPattern* param1, QEvent* param2) {
	QList<QwtPickerMachine::Command> _ret = self->transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QwtPickerMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QwtPickerDragLineMachine_override_virtual_transition(void* self, intptr_t slot) {
	MiqtVirtualQwtPickerDragLineMachine* self_cast = dynamic_cast<MiqtVirtualQwtPickerDragLineMachine*>( (QwtPickerDragLineMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = slot;
	return true;
}

struct miqt_array /* of int */  QwtPickerDragLineMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2) {
	QList<MiqtVirtualQwtPickerDragLineMachine::Command> _ret = static_cast<MiqtVirtualQwtPickerDragLineMachine*>(self)->QwtPickerDragLineMachine::transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		MiqtVirtualQwtPickerDragLineMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPickerDragLineMachine_delete(QwtPickerDragLineMachine* self) {
	delete self;
}

class MiqtVirtualQwtPickerPolygonMachine final : public QwtPickerPolygonMachine {
public:

	MiqtVirtualQwtPickerPolygonMachine(): QwtPickerPolygonMachine() {}
	MiqtVirtualQwtPickerPolygonMachine(const QwtPickerPolygonMachine& param1): QwtPickerPolygonMachine(param1) {}

	virtual ~MiqtVirtualQwtPickerPolygonMachine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__transition = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QwtPickerMachine::Command> transition(const QwtEventPattern& param1, const QEvent* param2) override {
		if (handle__transition == 0) {
			return QwtPickerPolygonMachine::transition(param1, param2);
		}

		const QwtEventPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern* sigval1 = const_cast<QwtEventPattern*>(&param1_ret);
		QEvent* sigval2 = (QEvent*) param2;
		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QwtPickerPolygonMachine_transition(this, handle__transition, sigval1, sigval2);
		QList<QwtPickerMachine::Command> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<QwtPickerMachine::Command>(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of int */  QwtPickerPolygonMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2);

};

QwtPickerPolygonMachine* QwtPickerPolygonMachine_new() {
	return new (std::nothrow) MiqtVirtualQwtPickerPolygonMachine();
}

QwtPickerPolygonMachine* QwtPickerPolygonMachine_new2(QwtPickerPolygonMachine* param1) {
	return new (std::nothrow) MiqtVirtualQwtPickerPolygonMachine(*param1);
}

void QwtPickerPolygonMachine_virtbase(QwtPickerPolygonMachine* src, QwtPickerMachine** outptr_QwtPickerMachine) {
	*outptr_QwtPickerMachine = static_cast<QwtPickerMachine*>(src);
}

struct miqt_array /* of int */  QwtPickerPolygonMachine_transition(QwtPickerPolygonMachine* self, QwtEventPattern* param1, QEvent* param2) {
	QList<QwtPickerMachine::Command> _ret = self->transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QwtPickerMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QwtPickerPolygonMachine_override_virtual_transition(void* self, intptr_t slot) {
	MiqtVirtualQwtPickerPolygonMachine* self_cast = dynamic_cast<MiqtVirtualQwtPickerPolygonMachine*>( (QwtPickerPolygonMachine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = slot;
	return true;
}

struct miqt_array /* of int */  QwtPickerPolygonMachine_virtualbase_transition(void* self, QwtEventPattern* param1, QEvent* param2) {
	QList<MiqtVirtualQwtPickerPolygonMachine::Command> _ret = static_cast<MiqtVirtualQwtPickerPolygonMachine*>(self)->QwtPickerPolygonMachine::transition(*param1, param2);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		MiqtVirtualQwtPickerPolygonMachine::Command _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPickerPolygonMachine_delete(QwtPickerPolygonMachine* self) {
	delete self;
}

