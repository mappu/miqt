#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QIcon>
#include <QKeySequence>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qaction.h>
#include "gen_qaction.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAction_Changed(intptr_t);
void miqt_exec_callback_QAction_EnabledChanged(intptr_t, bool);
void miqt_exec_callback_QAction_CheckableChanged(intptr_t, bool);
void miqt_exec_callback_QAction_VisibleChanged(intptr_t);
void miqt_exec_callback_QAction_Triggered(intptr_t);
void miqt_exec_callback_QAction_Hovered(intptr_t);
void miqt_exec_callback_QAction_Toggled(intptr_t, bool);
void miqt_exec_callback_QAction_Triggered1(intptr_t, bool);
bool miqt_exec_callback_QAction_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAction_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAction_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAction_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAction_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAction_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAction_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAction final : public QAction {
public:

	MiqtVirtualQAction(): QAction() {};
	MiqtVirtualQAction(const QString& text): QAction(text) {};
	MiqtVirtualQAction(const QIcon& icon, const QString& text): QAction(icon, text) {};
	MiqtVirtualQAction(QObject* parent): QAction(parent) {};
	MiqtVirtualQAction(const QString& text, QObject* parent): QAction(text, parent) {};
	MiqtVirtualQAction(const QIcon& icon, const QString& text, QObject* parent): QAction(icon, text, parent) {};

	virtual ~MiqtVirtualQAction() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QAction::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QAction_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QAction::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAction::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAction_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAction::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAction::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAction_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAction::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAction::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAction_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAction::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAction::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAction_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAction::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAction::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAction_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAction::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAction::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAction_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAction::disconnectNotify(*signal);

	}

};

QAction* QAction_new() {
	return new MiqtVirtualQAction();
}

QAction* QAction_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQAction(text_QString);
}

QAction* QAction_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQAction(*icon, text_QString);
}

QAction* QAction_new4(QObject* parent) {
	return new MiqtVirtualQAction(parent);
}

QAction* QAction_new5(struct miqt_string text, QObject* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQAction(text_QString, parent);
}

QAction* QAction_new6(QIcon* icon, struct miqt_string text, QObject* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQAction(*icon, text_QString, parent);
}

void QAction_virtbase(QAction* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAction_MetaObject(const QAction* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAction_Metacast(QAction* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAction_Tr(const char* s) {
	QString _ret = QAction::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QObject* */  QAction_AssociatedObjects(const QAction* self) {
	QList<QObject *> _ret = self->associatedObjects();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAction_SetActionGroup(QAction* self, QActionGroup* group) {
	self->setActionGroup(group);
}

QActionGroup* QAction_ActionGroup(const QAction* self) {
	return self->actionGroup();
}

void QAction_SetIcon(QAction* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QAction_Icon(const QAction* self) {
	return new QIcon(self->icon());
}

void QAction_SetText(QAction* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

struct miqt_string QAction_Text(const QAction* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_SetIconText(QAction* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setIconText(text_QString);
}

struct miqt_string QAction_IconText(const QAction* self) {
	QString _ret = self->iconText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_SetToolTip(QAction* self, struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	self->setToolTip(tip_QString);
}

struct miqt_string QAction_ToolTip(const QAction* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_SetStatusTip(QAction* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QAction_StatusTip(const QAction* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_SetWhatsThis(QAction* self, struct miqt_string what) {
	QString what_QString = QString::fromUtf8(what.data, what.len);
	self->setWhatsThis(what_QString);
}

struct miqt_string QAction_WhatsThis(const QAction* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_SetPriority(QAction* self, int priority) {
	self->setPriority(static_cast<QAction::Priority>(priority));
}

int QAction_Priority(const QAction* self) {
	QAction::Priority _ret = self->priority();
	return static_cast<int>(_ret);
}

void QAction_SetSeparator(QAction* self, bool b) {
	self->setSeparator(b);
}

bool QAction_IsSeparator(const QAction* self) {
	return self->isSeparator();
}

void QAction_SetShortcut(QAction* self, QKeySequence* shortcut) {
	self->setShortcut(*shortcut);
}

QKeySequence* QAction_Shortcut(const QAction* self) {
	return new QKeySequence(self->shortcut());
}

void QAction_SetShortcuts(QAction* self, struct miqt_array /* of QKeySequence* */  shortcuts) {
	QList<QKeySequence> shortcuts_QList;
	shortcuts_QList.reserve(shortcuts.len);
	QKeySequence** shortcuts_arr = static_cast<QKeySequence**>(shortcuts.data);
	for(size_t i = 0; i < shortcuts.len; ++i) {
		shortcuts_QList.push_back(*(shortcuts_arr[i]));
	}
	self->setShortcuts(shortcuts_QList);
}

void QAction_SetShortcutsWithShortcuts(QAction* self, int shortcuts) {
	self->setShortcuts(static_cast<QKeySequence::StandardKey>(shortcuts));
}

struct miqt_array /* of QKeySequence* */  QAction_Shortcuts(const QAction* self) {
	QList<QKeySequence> _ret = self->shortcuts();
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAction_SetShortcutContext(QAction* self, int context) {
	self->setShortcutContext(static_cast<Qt::ShortcutContext>(context));
}

int QAction_ShortcutContext(const QAction* self) {
	Qt::ShortcutContext _ret = self->shortcutContext();
	return static_cast<int>(_ret);
}

void QAction_SetAutoRepeat(QAction* self, bool autoRepeat) {
	self->setAutoRepeat(autoRepeat);
}

bool QAction_AutoRepeat(const QAction* self) {
	return self->autoRepeat();
}

void QAction_SetFont(QAction* self, QFont* font) {
	self->setFont(*font);
}

QFont* QAction_Font(const QAction* self) {
	return new QFont(self->font());
}

void QAction_SetCheckable(QAction* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QAction_IsCheckable(const QAction* self) {
	return self->isCheckable();
}

QVariant* QAction_Data(const QAction* self) {
	return new QVariant(self->data());
}

void QAction_SetData(QAction* self, QVariant* varVal) {
	self->setData(*varVal);
}

bool QAction_IsChecked(const QAction* self) {
	return self->isChecked();
}

bool QAction_IsEnabled(const QAction* self) {
	return self->isEnabled();
}

bool QAction_IsVisible(const QAction* self) {
	return self->isVisible();
}

void QAction_Activate(QAction* self, int event) {
	self->activate(static_cast<QAction::ActionEvent>(event));
}

void QAction_SetMenuRole(QAction* self, int menuRole) {
	self->setMenuRole(static_cast<QAction::MenuRole>(menuRole));
}

int QAction_MenuRole(const QAction* self) {
	QAction::MenuRole _ret = self->menuRole();
	return static_cast<int>(_ret);
}

void QAction_SetIconVisibleInMenu(QAction* self, bool visible) {
	self->setIconVisibleInMenu(visible);
}

bool QAction_IsIconVisibleInMenu(const QAction* self) {
	return self->isIconVisibleInMenu();
}

void QAction_SetShortcutVisibleInContextMenu(QAction* self, bool show) {
	self->setShortcutVisibleInContextMenu(show);
}

bool QAction_IsShortcutVisibleInContextMenu(const QAction* self) {
	return self->isShortcutVisibleInContextMenu();
}

bool QAction_ShowStatusText(QAction* self) {
	return self->showStatusText();
}

void QAction_Trigger(QAction* self) {
	self->trigger();
}

void QAction_Hover(QAction* self) {
	self->hover();
}

void QAction_SetChecked(QAction* self, bool checked) {
	self->setChecked(checked);
}

void QAction_Toggle(QAction* self) {
	self->toggle();
}

void QAction_SetEnabled(QAction* self, bool enabled) {
	self->setEnabled(enabled);
}

void QAction_ResetEnabled(QAction* self) {
	self->resetEnabled();
}

void QAction_SetDisabled(QAction* self, bool b) {
	self->setDisabled(b);
}

void QAction_SetVisible(QAction* self, bool visible) {
	self->setVisible(visible);
}

void QAction_Changed(QAction* self) {
	self->changed();
}

void QAction_connect_Changed(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)()>(&QAction::changed), self, [=]() {
		miqt_exec_callback_QAction_Changed(slot);
	});
}

void QAction_EnabledChanged(QAction* self, bool enabled) {
	self->enabledChanged(enabled);
}

void QAction_connect_EnabledChanged(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::enabledChanged), self, [=](bool enabled) {
		bool sigval1 = enabled;
		miqt_exec_callback_QAction_EnabledChanged(slot, sigval1);
	});
}

void QAction_CheckableChanged(QAction* self, bool checkable) {
	self->checkableChanged(checkable);
}

void QAction_connect_CheckableChanged(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::checkableChanged), self, [=](bool checkable) {
		bool sigval1 = checkable;
		miqt_exec_callback_QAction_CheckableChanged(slot, sigval1);
	});
}

void QAction_VisibleChanged(QAction* self) {
	self->visibleChanged();
}

void QAction_connect_VisibleChanged(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)()>(&QAction::visibleChanged), self, [=]() {
		miqt_exec_callback_QAction_VisibleChanged(slot);
	});
}

void QAction_Triggered(QAction* self) {
	self->triggered();
}

void QAction_connect_Triggered(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::triggered), self, [=]() {
		miqt_exec_callback_QAction_Triggered(slot);
	});
}

void QAction_Hovered(QAction* self) {
	self->hovered();
}

void QAction_connect_Hovered(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)()>(&QAction::hovered), self, [=]() {
		miqt_exec_callback_QAction_Hovered(slot);
	});
}

void QAction_Toggled(QAction* self, bool param1) {
	self->toggled(param1);
}

void QAction_connect_Toggled(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::toggled), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QAction_Toggled(slot, sigval1);
	});
}

struct miqt_string QAction_Tr2(const char* s, const char* c) {
	QString _ret = QAction::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAction_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAction::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAction_ShowStatusText1(QAction* self, QObject* object) {
	return self->showStatusText(object);
}

void QAction_Triggered1(QAction* self, bool checked) {
	self->triggered(checked);
}

void QAction_connect_Triggered1(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::triggered), self, [=](bool checked) {
		bool sigval1 = checked;
		miqt_exec_callback_QAction_Triggered1(slot, sigval1);
	});
}

bool QAction_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAction_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQAction*)(self) )->virtualbase_Event(param1);
}

bool QAction_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAction_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAction*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAction_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAction_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAction*)(self) )->virtualbase_TimerEvent(event);
}

bool QAction_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAction_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAction*)(self) )->virtualbase_ChildEvent(event);
}

bool QAction_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAction_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAction*)(self) )->virtualbase_CustomEvent(event);
}

bool QAction_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAction_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAction*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAction_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAction_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAction*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAction_Delete(QAction* self) {
	delete self;
}

