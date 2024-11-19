#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleApplication>
#include <QAccessibleInterface>
#include <QAccessibleObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include <qaccessibleobject.h>
#include "gen_qaccessibleobject.h"
#include "_cgo_export.h"

bool QAccessibleObject_IsValid(const QAccessibleObject* self) {
	return self->isValid();
}

QObject* QAccessibleObject_Object(const QAccessibleObject* self) {
	return self->object();
}

QRect* QAccessibleObject_Rect(const QAccessibleObject* self) {
	return new QRect(self->rect());
}

void QAccessibleObject_SetText(QAccessibleObject* self, int t, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(static_cast<QAccessible::Text>(t), text_QString);
}

QAccessibleInterface* QAccessibleObject_ChildAt(const QAccessibleObject* self, int x, int y) {
	return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

class MiqtVirtualQAccessibleApplication : public virtual QAccessibleApplication {
public:

	MiqtVirtualQAccessibleApplication(): QAccessibleApplication() {};

	virtual ~MiqtVirtualQAccessibleApplication() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Window = 0;

	// Subclass to allow providing a Go implementation
	virtual QWindow* window() const override {
		if (handle__Window == 0) {
			return QAccessibleApplication::window();
		}
		

		QWindow* callback_return_value = miqt_exec_callback_QAccessibleApplication_Window(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__Window);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWindow* virtualbase_Window() const {

		return QAccessibleApplication::window();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int childCount() const override {
		if (handle__ChildCount == 0) {
			return QAccessibleApplication::childCount();
		}
		

		int callback_return_value = miqt_exec_callback_QAccessibleApplication_ChildCount(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__ChildCount);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_ChildCount() const {

		return QAccessibleApplication::childCount();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IndexOfChild = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOfChild(const QAccessibleInterface* param1) const override {
		if (handle__IndexOfChild == 0) {
			return QAccessibleApplication::indexOfChild(param1);
		}
		
		QAccessibleInterface* sigval1 = (QAccessibleInterface*) param1;

		int callback_return_value = miqt_exec_callback_QAccessibleApplication_IndexOfChild(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__IndexOfChild, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_IndexOfChild(QAccessibleInterface* param1) const {

		return QAccessibleApplication::indexOfChild(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusChild = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* focusChild() const override {
		if (handle__FocusChild == 0) {
			return QAccessibleApplication::focusChild();
		}
		

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QAccessibleApplication_FocusChild(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__FocusChild);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAccessibleInterface* virtualbase_FocusChild() const {

		return QAccessibleApplication::focusChild();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* parent() const override {
		if (handle__Parent == 0) {
			return QAccessibleApplication::parent();
		}
		

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QAccessibleApplication_Parent(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__Parent);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAccessibleInterface* virtualbase_Parent() const {

		return QAccessibleApplication::parent();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Child = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* child(int index) const override {
		if (handle__Child == 0) {
			return QAccessibleApplication::child(index);
		}
		
		int sigval1 = index;

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QAccessibleApplication_Child(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__Child, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAccessibleInterface* virtualbase_Child(int index) const {

		return QAccessibleApplication::child(static_cast<int>(index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Text = 0;

	// Subclass to allow providing a Go implementation
	virtual QString text(QAccessible::Text t) const override {
		if (handle__Text == 0) {
			return QAccessibleApplication::text(t);
		}
		
		QAccessible::Text t_ret = t;
		int sigval1 = static_cast<int>(t_ret);

		struct miqt_string callback_return_value = miqt_exec_callback_QAccessibleApplication_Text(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__Text, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// Wrapper to allow calling protected method
	struct miqt_string virtualbase_Text(int t) const {

		QString _ret = QAccessibleApplication::text(static_cast<QAccessible::Text>(t));
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _b = _ret.toUtf8();
		struct miqt_string _ms;
		_ms.len = _b.length();
		_ms.data = static_cast<char*>(malloc(_ms.len));
		memcpy(_ms.data, _b.data(), _ms.len);
		return _ms;

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Role = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessible::Role role() const override {
		if (handle__Role == 0) {
			return QAccessibleApplication::role();
		}
		

		int callback_return_value = miqt_exec_callback_QAccessibleApplication_Role(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__Role);

		return static_cast<QAccessible::Role>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Role() const {

		QAccessible::Role _ret = QAccessibleApplication::role();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__State = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessible::State state() const override {
		if (handle__State == 0) {
			return QAccessibleApplication::state();
		}
		

		QAccessible__State* callback_return_value = miqt_exec_callback_QAccessibleApplication_State(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__State);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAccessible__State* virtualbase_State() const {

		return new QAccessible::State(QAccessibleApplication::state());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsValid = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isValid() const override {
		if (handle__IsValid == 0) {
			return QAccessibleApplication::isValid();
		}
		

		bool callback_return_value = miqt_exec_callback_QAccessibleApplication_IsValid(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__IsValid);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsValid() const {

		return QAccessibleApplication::isValid();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Object = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* object() const override {
		if (handle__Object == 0) {
			return QAccessibleApplication::object();
		}
		

		QObject* callback_return_value = miqt_exec_callback_QAccessibleApplication_Object(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__Object);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QObject* virtualbase_Object() const {

		return QAccessibleApplication::object();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Rect = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect rect() const override {
		if (handle__Rect == 0) {
			return QAccessibleApplication::rect();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QAccessibleApplication_Rect(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__Rect);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QRect* virtualbase_Rect() const {

		return new QRect(QAccessibleApplication::rect());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetText = 0;

	// Subclass to allow providing a Go implementation
	virtual void setText(QAccessible::Text t, const QString& text) override {
		if (handle__SetText == 0) {
			QAccessibleApplication::setText(t, text);
			return;
		}
		
		QAccessible::Text t_ret = t;
		int sigval1 = static_cast<int>(t_ret);
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval2 = text_ms;

		miqt_exec_callback_QAccessibleApplication_SetText(this, handle__SetText, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetText(int t, struct miqt_string text) {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QAccessibleApplication::setText(static_cast<QAccessible::Text>(t), text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* childAt(int x, int y) const override {
		if (handle__ChildAt == 0) {
			return QAccessibleApplication::childAt(x, y);
		}
		
		int sigval1 = x;
		int sigval2 = y;

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QAccessibleApplication_ChildAt(const_cast<MiqtVirtualQAccessibleApplication*>(this), handle__ChildAt, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QAccessibleInterface* virtualbase_ChildAt(int x, int y) const {

		return QAccessibleApplication::childAt(static_cast<int>(x), static_cast<int>(y));

	}

};

void QAccessibleApplication_new(QAccessibleApplication** outptr_QAccessibleApplication, QAccessibleObject** outptr_QAccessibleObject, QAccessibleInterface** outptr_QAccessibleInterface) {
	MiqtVirtualQAccessibleApplication* ret = new MiqtVirtualQAccessibleApplication();
	*outptr_QAccessibleApplication = ret;
	*outptr_QAccessibleObject = static_cast<QAccessibleObject*>(ret);
	*outptr_QAccessibleInterface = static_cast<QAccessibleInterface*>(ret);
}

QWindow* QAccessibleApplication_Window(const QAccessibleApplication* self) {
	return self->window();
}

int QAccessibleApplication_ChildCount(const QAccessibleApplication* self) {
	return self->childCount();
}

int QAccessibleApplication_IndexOfChild(const QAccessibleApplication* self, QAccessibleInterface* param1) {
	return self->indexOfChild(param1);
}

QAccessibleInterface* QAccessibleApplication_FocusChild(const QAccessibleApplication* self) {
	return self->focusChild();
}

QAccessibleInterface* QAccessibleApplication_Parent(const QAccessibleApplication* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleApplication_Child(const QAccessibleApplication* self, int index) {
	return self->child(static_cast<int>(index));
}

struct miqt_string QAccessibleApplication_Text(const QAccessibleApplication* self, int t) {
	QString _ret = self->text(static_cast<QAccessible::Text>(t));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleApplication_Role(const QAccessibleApplication* self) {
	QAccessible::Role _ret = self->role();
	return static_cast<int>(_ret);
}

QAccessible__State* QAccessibleApplication_State(const QAccessibleApplication* self) {
	return new QAccessible::State(self->state());
}

void QAccessibleApplication_override_virtual_Window(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__Window = slot;
}

QWindow* QAccessibleApplication_virtualbase_Window(const void* self) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_Window();
}

void QAccessibleApplication_override_virtual_ChildCount(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__ChildCount = slot;
}

int QAccessibleApplication_virtualbase_ChildCount(const void* self) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_ChildCount();
}

void QAccessibleApplication_override_virtual_IndexOfChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__IndexOfChild = slot;
}

int QAccessibleApplication_virtualbase_IndexOfChild(const void* self, QAccessibleInterface* param1) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_IndexOfChild(param1);
}

void QAccessibleApplication_override_virtual_FocusChild(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__FocusChild = slot;
}

QAccessibleInterface* QAccessibleApplication_virtualbase_FocusChild(const void* self) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_FocusChild();
}

void QAccessibleApplication_override_virtual_Parent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__Parent = slot;
}

QAccessibleInterface* QAccessibleApplication_virtualbase_Parent(const void* self) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_Parent();
}

void QAccessibleApplication_override_virtual_Child(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__Child = slot;
}

QAccessibleInterface* QAccessibleApplication_virtualbase_Child(const void* self, int index) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_Child(index);
}

void QAccessibleApplication_override_virtual_Text(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__Text = slot;
}

struct miqt_string QAccessibleApplication_virtualbase_Text(const void* self, int t) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_Text(t);
}

void QAccessibleApplication_override_virtual_Role(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__Role = slot;
}

int QAccessibleApplication_virtualbase_Role(const void* self) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_Role();
}

void QAccessibleApplication_override_virtual_State(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__State = slot;
}

QAccessible__State* QAccessibleApplication_virtualbase_State(const void* self) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_State();
}

void QAccessibleApplication_override_virtual_IsValid(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__IsValid = slot;
}

bool QAccessibleApplication_virtualbase_IsValid(const void* self) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_IsValid();
}

void QAccessibleApplication_override_virtual_Object(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__Object = slot;
}

QObject* QAccessibleApplication_virtualbase_Object(const void* self) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_Object();
}

void QAccessibleApplication_override_virtual_Rect(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__Rect = slot;
}

QRect* QAccessibleApplication_virtualbase_Rect(const void* self) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_Rect();
}

void QAccessibleApplication_override_virtual_SetText(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__SetText = slot;
}

void QAccessibleApplication_virtualbase_SetText(void* self, int t, struct miqt_string text) {
	( (MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_SetText(t, text);
}

void QAccessibleApplication_override_virtual_ChildAt(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQAccessibleApplication*>( (QAccessibleApplication*)(self) )->handle__ChildAt = slot;
}

QAccessibleInterface* QAccessibleApplication_virtualbase_ChildAt(const void* self, int x, int y) {
	return ( (const MiqtVirtualQAccessibleApplication*)(self) )->virtualbase_ChildAt(x, y);
}

void QAccessibleApplication_Delete(QAccessibleApplication* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQAccessibleApplication*>( self );
	} else {
		delete self;
	}
}

