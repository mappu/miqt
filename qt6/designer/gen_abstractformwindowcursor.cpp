#include <QDesignerFormWindowCursorInterface>
#include <QDesignerFormWindowInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <abstractformwindowcursor.h>
#include "gen_abstractformwindowcursor.h"

#ifdef __cplusplus
extern "C" {
#endif

QDesignerFormWindowInterface* miqt_exec_callback_QDesignerFormWindowCursorInterface_formWindow(const QDesignerFormWindowCursorInterface*, intptr_t);
bool miqt_exec_callback_QDesignerFormWindowCursorInterface_movePosition(QDesignerFormWindowCursorInterface*, intptr_t, int, int);
int miqt_exec_callback_QDesignerFormWindowCursorInterface_position(const QDesignerFormWindowCursorInterface*, intptr_t);
void miqt_exec_callback_QDesignerFormWindowCursorInterface_setPosition(QDesignerFormWindowCursorInterface*, intptr_t, int, int);
QWidget* miqt_exec_callback_QDesignerFormWindowCursorInterface_current(const QDesignerFormWindowCursorInterface*, intptr_t);
int miqt_exec_callback_QDesignerFormWindowCursorInterface_widgetCount(const QDesignerFormWindowCursorInterface*, intptr_t);
QWidget* miqt_exec_callback_QDesignerFormWindowCursorInterface_widget(const QDesignerFormWindowCursorInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerFormWindowCursorInterface_hasSelection(const QDesignerFormWindowCursorInterface*, intptr_t);
int miqt_exec_callback_QDesignerFormWindowCursorInterface_selectedWidgetCount(const QDesignerFormWindowCursorInterface*, intptr_t);
QWidget* miqt_exec_callback_QDesignerFormWindowCursorInterface_selectedWidget(const QDesignerFormWindowCursorInterface*, intptr_t, int);
void miqt_exec_callback_QDesignerFormWindowCursorInterface_setProperty(QDesignerFormWindowCursorInterface*, intptr_t, struct miqt_string, QVariant*);
void miqt_exec_callback_QDesignerFormWindowCursorInterface_setWidgetProperty(QDesignerFormWindowCursorInterface*, intptr_t, QWidget*, struct miqt_string, QVariant*);
void miqt_exec_callback_QDesignerFormWindowCursorInterface_resetWidgetProperty(QDesignerFormWindowCursorInterface*, intptr_t, QWidget*, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerFormWindowCursorInterface final : public QDesignerFormWindowCursorInterface {
public:

	MiqtVirtualQDesignerFormWindowCursorInterface(): QDesignerFormWindowCursorInterface() {}

	virtual ~MiqtVirtualQDesignerFormWindowCursorInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__formWindow = 0;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormWindowInterface* formWindow() const override {
		if (handle__formWindow == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowInterface* callback_return_value = miqt_exec_callback_QDesignerFormWindowCursorInterface_formWindow(this, handle__formWindow);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__movePosition = 0;

	// Subclass to allow providing a Go implementation
	virtual bool movePosition(QDesignerFormWindowCursorInterface::MoveOperation op, QDesignerFormWindowCursorInterface::MoveMode mode) override {
		if (handle__movePosition == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowCursorInterface::MoveOperation op_ret = op;
		int sigval1 = static_cast<int>(op_ret);
		QDesignerFormWindowCursorInterface::MoveMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QDesignerFormWindowCursorInterface_movePosition(this, handle__movePosition, sigval1, sigval2);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__position = 0;

	// Subclass to allow providing a Go implementation
	virtual int position() const override {
		if (handle__position == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerFormWindowCursorInterface_position(this, handle__position);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPosition = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPosition(int pos, QDesignerFormWindowCursorInterface::MoveMode mode) override {
		if (handle__setPosition == 0) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = pos;
		QDesignerFormWindowCursorInterface::MoveMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		miqt_exec_callback_QDesignerFormWindowCursorInterface_setPosition(this, handle__setPosition, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__current = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* current() const override {
		if (handle__current == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QWidget* callback_return_value = miqt_exec_callback_QDesignerFormWindowCursorInterface_current(this, handle__current);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widgetCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int widgetCount() const override {
		if (handle__widgetCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerFormWindowCursorInterface_widgetCount(this, handle__widgetCount);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget(int index) const override {
		if (handle__widget == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		QWidget* callback_return_value = miqt_exec_callback_QDesignerFormWindowCursorInterface_widget(this, handle__widget, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasSelection = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasSelection() const override {
		if (handle__hasSelection == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerFormWindowCursorInterface_hasSelection(this, handle__hasSelection);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedWidgetCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int selectedWidgetCount() const override {
		if (handle__selectedWidgetCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerFormWindowCursorInterface_selectedWidgetCount(this, handle__selectedWidgetCount);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__selectedWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* selectedWidget(int index) const override {
		if (handle__selectedWidget == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		QWidget* callback_return_value = miqt_exec_callback_QDesignerFormWindowCursorInterface_selectedWidget(this, handle__selectedWidget, sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void setProperty(const QString& name, const QVariant& value) override {
		if (handle__setProperty == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QDesignerFormWindowCursorInterface_setProperty(this, handle__setProperty, sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setWidgetProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void setWidgetProperty(QWidget* widget, const QString& name, const QVariant& value) override {
		if (handle__setWidgetProperty == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = widget;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval2 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QDesignerFormWindowCursorInterface_setWidgetProperty(this, handle__setWidgetProperty, sigval1, sigval2, sigval3);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resetWidgetProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual void resetWidgetProperty(QWidget* widget, const QString& name) override {
		if (handle__resetWidgetProperty == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = widget;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval2 = name_ms;
		miqt_exec_callback_QDesignerFormWindowCursorInterface_resetWidgetProperty(this, handle__resetWidgetProperty, sigval1, sigval2);

	}

};

QDesignerFormWindowCursorInterface* QDesignerFormWindowCursorInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerFormWindowCursorInterface();
}

QDesignerFormWindowInterface* QDesignerFormWindowCursorInterface_formWindow(const QDesignerFormWindowCursorInterface* self) {
	return self->formWindow();
}

bool QDesignerFormWindowCursorInterface_movePosition(QDesignerFormWindowCursorInterface* self, int op, int mode) {
	return self->movePosition(static_cast<QDesignerFormWindowCursorInterface::MoveOperation>(op), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
}

int QDesignerFormWindowCursorInterface_position(const QDesignerFormWindowCursorInterface* self) {
	return self->position();
}

void QDesignerFormWindowCursorInterface_setPosition(QDesignerFormWindowCursorInterface* self, int pos, int mode) {
	self->setPosition(static_cast<int>(pos), static_cast<QDesignerFormWindowCursorInterface::MoveMode>(mode));
}

QWidget* QDesignerFormWindowCursorInterface_current(const QDesignerFormWindowCursorInterface* self) {
	return self->current();
}

int QDesignerFormWindowCursorInterface_widgetCount(const QDesignerFormWindowCursorInterface* self) {
	return self->widgetCount();
}

QWidget* QDesignerFormWindowCursorInterface_widget(const QDesignerFormWindowCursorInterface* self, int index) {
	return self->widget(static_cast<int>(index));
}

bool QDesignerFormWindowCursorInterface_hasSelection(const QDesignerFormWindowCursorInterface* self) {
	return self->hasSelection();
}

int QDesignerFormWindowCursorInterface_selectedWidgetCount(const QDesignerFormWindowCursorInterface* self) {
	return self->selectedWidgetCount();
}

QWidget* QDesignerFormWindowCursorInterface_selectedWidget(const QDesignerFormWindowCursorInterface* self, int index) {
	return self->selectedWidget(static_cast<int>(index));
}

void QDesignerFormWindowCursorInterface_setProperty(QDesignerFormWindowCursorInterface* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setProperty(name_QString, *value);
}

void QDesignerFormWindowCursorInterface_setWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setWidgetProperty(widget, name_QString, *value);
}

void QDesignerFormWindowCursorInterface_resetWidgetProperty(QDesignerFormWindowCursorInterface* self, QWidget* widget, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->resetWidgetProperty(widget, name_QString);
}

bool QDesignerFormWindowCursorInterface_isWidgetSelected(const QDesignerFormWindowCursorInterface* self, QWidget* widget) {
	return self->isWidgetSelected(widget);
}

bool QDesignerFormWindowCursorInterface_override_virtual_formWindow(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__formWindow = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_movePosition(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__movePosition = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_position(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__position = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_setPosition(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPosition = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_current(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__current = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_widgetCount(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetCount = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_widget(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widget = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_hasSelection(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasSelection = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_selectedWidgetCount(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectedWidgetCount = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_selectedWidget(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectedWidget = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_setProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setProperty = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_setWidgetProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setWidgetProperty = slot;
	return true;
}

bool QDesignerFormWindowCursorInterface_override_virtual_resetWidgetProperty(void* self, intptr_t slot) {
	MiqtVirtualQDesignerFormWindowCursorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormWindowCursorInterface*>( (QDesignerFormWindowCursorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resetWidgetProperty = slot;
	return true;
}

void QDesignerFormWindowCursorInterface_delete(QDesignerFormWindowCursorInterface* self) {
	delete self;
}

