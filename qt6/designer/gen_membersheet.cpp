#include <QByteArray>
#include <QDesignerMemberSheetExtension>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <membersheet.h>
#include "gen_membersheet.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QDesignerMemberSheetExtension_count(const QDesignerMemberSheetExtension*, intptr_t);
int miqt_exec_callback_QDesignerMemberSheetExtension_indexOf(const QDesignerMemberSheetExtension*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDesignerMemberSheetExtension_memberName(const QDesignerMemberSheetExtension*, intptr_t, int);
struct miqt_string miqt_exec_callback_QDesignerMemberSheetExtension_memberGroup(const QDesignerMemberSheetExtension*, intptr_t, int);
void miqt_exec_callback_QDesignerMemberSheetExtension_setMemberGroup(QDesignerMemberSheetExtension*, intptr_t, int, struct miqt_string);
bool miqt_exec_callback_QDesignerMemberSheetExtension_isVisible(const QDesignerMemberSheetExtension*, intptr_t, int);
void miqt_exec_callback_QDesignerMemberSheetExtension_setVisible(QDesignerMemberSheetExtension*, intptr_t, int, bool);
bool miqt_exec_callback_QDesignerMemberSheetExtension_isSignal(const QDesignerMemberSheetExtension*, intptr_t, int);
bool miqt_exec_callback_QDesignerMemberSheetExtension_isSlot(const QDesignerMemberSheetExtension*, intptr_t, int);
bool miqt_exec_callback_QDesignerMemberSheetExtension_inheritedFromWidget(const QDesignerMemberSheetExtension*, intptr_t, int);
struct miqt_string miqt_exec_callback_QDesignerMemberSheetExtension_declaredInClass(const QDesignerMemberSheetExtension*, intptr_t, int);
struct miqt_string miqt_exec_callback_QDesignerMemberSheetExtension_signature(const QDesignerMemberSheetExtension*, intptr_t, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QDesignerMemberSheetExtension_parameterTypes(const QDesignerMemberSheetExtension*, intptr_t, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QDesignerMemberSheetExtension_parameterNames(const QDesignerMemberSheetExtension*, intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerMemberSheetExtension final : public QDesignerMemberSheetExtension {
public:

	MiqtVirtualQDesignerMemberSheetExtension(): QDesignerMemberSheetExtension() {}

	virtual ~MiqtVirtualQDesignerMemberSheetExtension() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_count(this, handle__count);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QString& name) const override {
		if (handle__indexOf == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		int callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_indexOf(this, handle__indexOf, sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__memberName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString memberName(int index) const override {
		if (handle__memberName == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_memberName(this, handle__memberName, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__memberGroup = 0;

	// Subclass to allow providing a Go implementation
	virtual QString memberGroup(int index) const override {
		if (handle__memberGroup == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_memberGroup(this, handle__memberGroup, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMemberGroup = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMemberGroup(int index, const QString& group) override {
		if (handle__setMemberGroup == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		const QString group_ret = group;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray group_b = group_ret.toUtf8();
		struct miqt_string group_ms;
		group_ms.len = group_b.length();
		group_ms.data = static_cast<char*>(malloc(group_ms.len));
		memcpy(group_ms.data, group_b.data(), group_ms.len);
		struct miqt_string sigval2 = group_ms;
		miqt_exec_callback_QDesignerMemberSheetExtension_setMemberGroup(this, handle__setMemberGroup, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isVisible(int index) const override {
		if (handle__isVisible == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_isVisible(this, handle__isVisible, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(int index, bool b) override {
		if (handle__setVisible == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool sigval2 = b;
		miqt_exec_callback_QDesignerMemberSheetExtension_setVisible(this, handle__setVisible, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSignal = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSignal(int index) const override {
		if (handle__isSignal == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_isSignal(this, handle__isSignal, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSlot = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSlot(int index) const override {
		if (handle__isSlot == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_isSlot(this, handle__isSlot, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inheritedFromWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual bool inheritedFromWidget(int index) const override {
		if (handle__inheritedFromWidget == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_inheritedFromWidget(this, handle__inheritedFromWidget, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__declaredInClass = 0;

	// Subclass to allow providing a Go implementation
	virtual QString declaredInClass(int index) const override {
		if (handle__declaredInClass == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_declaredInClass(this, handle__declaredInClass, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__signature = 0;

	// Subclass to allow providing a Go implementation
	virtual QString signature(int index) const override {
		if (handle__signature == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_signature(this, handle__signature, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parameterTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QByteArray> parameterTypes(int index) const override {
		if (handle__parameterTypes == 0) {
			return QList<QByteArray>(); // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_parameterTypes(this, handle__parameterTypes, sigval1);
		QList<QByteArray> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QByteArray callback_return_value_arr_i_QByteArray(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QByteArray);
		}
		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parameterNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QByteArray> parameterNames(int index) const override {
		if (handle__parameterNames == 0) {
			return QList<QByteArray>(); // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QDesignerMemberSheetExtension_parameterNames(this, handle__parameterNames, sigval1);
		QList<QByteArray> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QByteArray callback_return_value_arr_i_QByteArray(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QByteArray);
		}
		return callback_return_value_QList;
	}

};

QDesignerMemberSheetExtension* QDesignerMemberSheetExtension_new() {
	return new (std::nothrow) MiqtVirtualQDesignerMemberSheetExtension();
}

int QDesignerMemberSheetExtension_count(const QDesignerMemberSheetExtension* self) {
	return self->count();
}

int QDesignerMemberSheetExtension_indexOf(const QDesignerMemberSheetExtension* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->indexOf(name_QString);
}

struct miqt_string QDesignerMemberSheetExtension_memberName(const QDesignerMemberSheetExtension* self, int index) {
	QString _ret = self->memberName(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerMemberSheetExtension_memberGroup(const QDesignerMemberSheetExtension* self, int index) {
	QString _ret = self->memberGroup(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerMemberSheetExtension_setMemberGroup(QDesignerMemberSheetExtension* self, int index, struct miqt_string group) {
	QString group_QString = QString::fromUtf8(group.data, group.len);
	self->setMemberGroup(static_cast<int>(index), group_QString);
}

bool QDesignerMemberSheetExtension_isVisible(const QDesignerMemberSheetExtension* self, int index) {
	return self->isVisible(static_cast<int>(index));
}

void QDesignerMemberSheetExtension_setVisible(QDesignerMemberSheetExtension* self, int index, bool b) {
	self->setVisible(static_cast<int>(index), b);
}

bool QDesignerMemberSheetExtension_isSignal(const QDesignerMemberSheetExtension* self, int index) {
	return self->isSignal(static_cast<int>(index));
}

bool QDesignerMemberSheetExtension_isSlot(const QDesignerMemberSheetExtension* self, int index) {
	return self->isSlot(static_cast<int>(index));
}

bool QDesignerMemberSheetExtension_inheritedFromWidget(const QDesignerMemberSheetExtension* self, int index) {
	return self->inheritedFromWidget(static_cast<int>(index));
}

struct miqt_string QDesignerMemberSheetExtension_declaredInClass(const QDesignerMemberSheetExtension* self, int index) {
	QString _ret = self->declaredInClass(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerMemberSheetExtension_signature(const QDesignerMemberSheetExtension* self, int index) {
	QString _ret = self->signature(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QDesignerMemberSheetExtension_parameterTypes(const QDesignerMemberSheetExtension* self, int index) {
	QList<QByteArray> _ret = self->parameterTypes(static_cast<int>(index));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QDesignerMemberSheetExtension_parameterNames(const QDesignerMemberSheetExtension* self, int index) {
	QList<QByteArray> _ret = self->parameterNames(static_cast<int>(index));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QDesignerMemberSheetExtension_override_virtual_count(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__count = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_indexOf(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOf = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_memberName(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__memberName = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_memberGroup(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__memberGroup = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_setMemberGroup(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setMemberGroup = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_isVisible(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isVisible = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_isSignal(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSignal = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_isSlot(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSlot = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_inheritedFromWidget(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inheritedFromWidget = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_declaredInClass(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__declaredInClass = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_signature(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__signature = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_parameterTypes(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parameterTypes = slot;
	return true;
}

bool QDesignerMemberSheetExtension_override_virtual_parameterNames(void* self, intptr_t slot) {
	MiqtVirtualQDesignerMemberSheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerMemberSheetExtension*>( (QDesignerMemberSheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parameterNames = slot;
	return true;
}

void QDesignerMemberSheetExtension_delete(QDesignerMemberSheetExtension* self) {
	delete self;
}

