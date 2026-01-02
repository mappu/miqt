#include <QAction>
#include <QDesignerTaskMenuExtension>
#include <QList>
#include <taskmenu.h>
#include "gen_taskmenu.h"

#ifdef __cplusplus
extern "C" {
#endif

QAction* miqt_exec_callback_QDesignerTaskMenuExtension_preferredEditAction(const QDesignerTaskMenuExtension*, intptr_t);
struct miqt_array /* of QAction* */  miqt_exec_callback_QDesignerTaskMenuExtension_taskActions(const QDesignerTaskMenuExtension*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerTaskMenuExtension final : public QDesignerTaskMenuExtension {
public:

	MiqtVirtualQDesignerTaskMenuExtension(): QDesignerTaskMenuExtension() {}

	virtual ~MiqtVirtualQDesignerTaskMenuExtension() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__preferredEditAction = 0;

	// Subclass to allow providing a Go implementation
	virtual QAction* preferredEditAction() const override {
		if (handle__preferredEditAction == 0) {
			return QDesignerTaskMenuExtension::preferredEditAction();
		}

		QAction* callback_return_value = miqt_exec_callback_QDesignerTaskMenuExtension_preferredEditAction(this, handle__preferredEditAction);
		return callback_return_value;
	}

	friend QAction* QDesignerTaskMenuExtension_virtualbase_preferredEditAction(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__taskActions = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QAction *> taskActions() const override {
		if (handle__taskActions == 0) {
			return QList<QAction *>(); // Pure virtual, there is no base we can call
		}

		struct miqt_array /* of QAction* */  callback_return_value = miqt_exec_callback_QDesignerTaskMenuExtension_taskActions(this, handle__taskActions);
		QList<QAction *> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QAction** callback_return_value_arr = static_cast<QAction**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(callback_return_value_arr[i]);
		}
		return callback_return_value_QList;
	}

};

QDesignerTaskMenuExtension* QDesignerTaskMenuExtension_new() {
	return new (std::nothrow) MiqtVirtualQDesignerTaskMenuExtension();
}

QAction* QDesignerTaskMenuExtension_preferredEditAction(const QDesignerTaskMenuExtension* self) {
	return self->preferredEditAction();
}

struct miqt_array /* of QAction* */  QDesignerTaskMenuExtension_taskActions(const QDesignerTaskMenuExtension* self) {
	QList<QAction *> _ret = self->taskActions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QDesignerTaskMenuExtension_override_virtual_preferredEditAction(void* self, intptr_t slot) {
	MiqtVirtualQDesignerTaskMenuExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerTaskMenuExtension*>( (QDesignerTaskMenuExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__preferredEditAction = slot;
	return true;
}

QAction* QDesignerTaskMenuExtension_virtualbase_preferredEditAction(const void* self) {
	return static_cast<const MiqtVirtualQDesignerTaskMenuExtension*>(self)->QDesignerTaskMenuExtension::preferredEditAction();
}

bool QDesignerTaskMenuExtension_override_virtual_taskActions(void* self, intptr_t slot) {
	MiqtVirtualQDesignerTaskMenuExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerTaskMenuExtension*>( (QDesignerTaskMenuExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__taskActions = slot;
	return true;
}

void QDesignerTaskMenuExtension_delete(QDesignerTaskMenuExtension* self) {
	delete self;
}

