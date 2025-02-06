#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QGraphicsWidget>
#include <QIcon>
#include <QKeySequence>
#include <QList>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qaction.h>
#include "gen_qaction.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAction_changed(intptr_t);
void miqt_exec_callback_QAction_triggered(intptr_t);
void miqt_exec_callback_QAction_hovered(intptr_t);
void miqt_exec_callback_QAction_toggled(intptr_t, bool);
void miqt_exec_callback_QAction_triggered1(intptr_t, bool);
bool miqt_exec_callback_QAction_event(QAction*, intptr_t, QEvent*);
bool miqt_exec_callback_QAction_eventFilter(QAction*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAction_timerEvent(QAction*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAction_childEvent(QAction*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAction_customEvent(QAction*, intptr_t, QEvent*);
void miqt_exec_callback_QAction_connectNotify(QAction*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAction_disconnectNotify(QAction*, intptr_t, QMetaMethod*);
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
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QAction::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QAction_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QAction::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAction::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAction_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QAction::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAction::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAction_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QAction::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAction::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAction_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QAction::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAction::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAction_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QAction::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAction::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAction_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QAction::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAction::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAction_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QAction::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QAction_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAction_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAction_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAction_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QAction_metaObject(const QAction* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAction_metacast(QAction* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAction_tr(const char* s) {
	QString _ret = QAction::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAction_trUtf8(const char* s) {
	QString _ret = QAction::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setActionGroup(QAction* self, QActionGroup* group) {
	self->setActionGroup(group);
}

QActionGroup* QAction_actionGroup(const QAction* self) {
	return self->actionGroup();
}

void QAction_setIcon(QAction* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QAction_icon(const QAction* self) {
	return new QIcon(self->icon());
}

void QAction_setText(QAction* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

struct miqt_string QAction_text(const QAction* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setIconText(QAction* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setIconText(text_QString);
}

struct miqt_string QAction_iconText(const QAction* self) {
	QString _ret = self->iconText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setToolTip(QAction* self, struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	self->setToolTip(tip_QString);
}

struct miqt_string QAction_toolTip(const QAction* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setStatusTip(QAction* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QAction_statusTip(const QAction* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setWhatsThis(QAction* self, struct miqt_string what) {
	QString what_QString = QString::fromUtf8(what.data, what.len);
	self->setWhatsThis(what_QString);
}

struct miqt_string QAction_whatsThis(const QAction* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setPriority(QAction* self, int priority) {
	self->setPriority(static_cast<QAction::Priority>(priority));
}

int QAction_priority(const QAction* self) {
	QAction::Priority _ret = self->priority();
	return static_cast<int>(_ret);
}

QMenu* QAction_menu(const QAction* self) {
	return self->menu();
}

void QAction_setMenu(QAction* self, QMenu* menu) {
	self->setMenu(menu);
}

void QAction_setSeparator(QAction* self, bool b) {
	self->setSeparator(b);
}

bool QAction_isSeparator(const QAction* self) {
	return self->isSeparator();
}

void QAction_setShortcut(QAction* self, QKeySequence* shortcut) {
	self->setShortcut(*shortcut);
}

QKeySequence* QAction_shortcut(const QAction* self) {
	return new QKeySequence(self->shortcut());
}

void QAction_setShortcuts(QAction* self, struct miqt_array /* of QKeySequence* */  shortcuts) {
	QList<QKeySequence> shortcuts_QList;
	shortcuts_QList.reserve(shortcuts.len);
	QKeySequence** shortcuts_arr = static_cast<QKeySequence**>(shortcuts.data);
	for(size_t i = 0; i < shortcuts.len; ++i) {
		shortcuts_QList.push_back(*(shortcuts_arr[i]));
	}
	self->setShortcuts(shortcuts_QList);
}

void QAction_setShortcutsWithShortcuts(QAction* self, int shortcuts) {
	self->setShortcuts(static_cast<QKeySequence::StandardKey>(shortcuts));
}

struct miqt_array /* of QKeySequence* */  QAction_shortcuts(const QAction* self) {
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

void QAction_setShortcutContext(QAction* self, int context) {
	self->setShortcutContext(static_cast<Qt::ShortcutContext>(context));
}

int QAction_shortcutContext(const QAction* self) {
	Qt::ShortcutContext _ret = self->shortcutContext();
	return static_cast<int>(_ret);
}

void QAction_setAutoRepeat(QAction* self, bool autoRepeat) {
	self->setAutoRepeat(autoRepeat);
}

bool QAction_autoRepeat(const QAction* self) {
	return self->autoRepeat();
}

void QAction_setFont(QAction* self, QFont* font) {
	self->setFont(*font);
}

QFont* QAction_font(const QAction* self) {
	return new QFont(self->font());
}

void QAction_setCheckable(QAction* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QAction_isCheckable(const QAction* self) {
	return self->isCheckable();
}

QVariant* QAction_data(const QAction* self) {
	return new QVariant(self->data());
}

void QAction_setData(QAction* self, QVariant* var) {
	self->setData(*var);
}

bool QAction_isChecked(const QAction* self) {
	return self->isChecked();
}

bool QAction_isEnabled(const QAction* self) {
	return self->isEnabled();
}

bool QAction_isVisible(const QAction* self) {
	return self->isVisible();
}

void QAction_activate(QAction* self, int event) {
	self->activate(static_cast<QAction::ActionEvent>(event));
}

bool QAction_showStatusText(QAction* self) {
	return self->showStatusText();
}

void QAction_setMenuRole(QAction* self, int menuRole) {
	self->setMenuRole(static_cast<QAction::MenuRole>(menuRole));
}

int QAction_menuRole(const QAction* self) {
	QAction::MenuRole _ret = self->menuRole();
	return static_cast<int>(_ret);
}

void QAction_setIconVisibleInMenu(QAction* self, bool visible) {
	self->setIconVisibleInMenu(visible);
}

bool QAction_isIconVisibleInMenu(const QAction* self) {
	return self->isIconVisibleInMenu();
}

void QAction_setShortcutVisibleInContextMenu(QAction* self, bool show) {
	self->setShortcutVisibleInContextMenu(show);
}

bool QAction_isShortcutVisibleInContextMenu(const QAction* self) {
	return self->isShortcutVisibleInContextMenu();
}

QWidget* QAction_parentWidget(const QAction* self) {
	return self->parentWidget();
}

struct miqt_array /* of QWidget* */  QAction_associatedWidgets(const QAction* self) {
	QList<QWidget *> _ret = self->associatedWidgets();
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

struct miqt_array /* of QGraphicsWidget* */  QAction_associatedGraphicsWidgets(const QAction* self) {
	QList<QGraphicsWidget *> _ret = self->associatedGraphicsWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsWidget** _arr = static_cast<QGraphicsWidget**>(malloc(sizeof(QGraphicsWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAction_trigger(QAction* self) {
	self->trigger();
}

void QAction_hover(QAction* self) {
	self->hover();
}

void QAction_setChecked(QAction* self, bool checked) {
	self->setChecked(checked);
}

void QAction_toggle(QAction* self) {
	self->toggle();
}

void QAction_setEnabled(QAction* self, bool enabled) {
	self->setEnabled(enabled);
}

void QAction_setDisabled(QAction* self, bool b) {
	self->setDisabled(b);
}

void QAction_setVisible(QAction* self, bool visible) {
	self->setVisible(visible);
}

void QAction_changed(QAction* self) {
	self->changed();
}

void QAction_connect_changed(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)()>(&QAction::changed), self, [=]() {
		miqt_exec_callback_QAction_changed(slot);
	});
}

void QAction_triggered(QAction* self) {
	self->triggered();
}

void QAction_connect_triggered(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::triggered), self, [=]() {
		miqt_exec_callback_QAction_triggered(slot);
	});
}

void QAction_hovered(QAction* self) {
	self->hovered();
}

void QAction_connect_hovered(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)()>(&QAction::hovered), self, [=]() {
		miqt_exec_callback_QAction_hovered(slot);
	});
}

void QAction_toggled(QAction* self, bool param1) {
	self->toggled(param1);
}

void QAction_connect_toggled(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::toggled), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QAction_toggled(slot, sigval1);
	});
}

struct miqt_string QAction_tr2(const char* s, const char* c) {
	QString _ret = QAction::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAction_tr3(const char* s, const char* c, int n) {
	QString _ret = QAction::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAction_trUtf82(const char* s, const char* c) {
	QString _ret = QAction::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAction_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAction::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAction_showStatusText1(QAction* self, QWidget* widget) {
	return self->showStatusText(widget);
}

void QAction_triggered1(QAction* self, bool checked) {
	self->triggered(checked);
}

void QAction_connect_triggered1(QAction* self, intptr_t slot) {
	MiqtVirtualQAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::triggered), self, [=](bool checked) {
		bool sigval1 = checked;
		miqt_exec_callback_QAction_triggered1(slot, sigval1);
	});
}

bool QAction_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAction_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQAction*)(self) )->virtualbase_event(param1);
}

bool QAction_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAction_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAction*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QAction_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAction_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAction*)(self) )->virtualbase_timerEvent(event);
}

bool QAction_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAction_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAction*)(self) )->virtualbase_childEvent(event);
}

bool QAction_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAction_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAction*)(self) )->virtualbase_customEvent(event);
}

bool QAction_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAction_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAction*)(self) )->virtualbase_connectNotify(signal);
}

bool QAction_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAction_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAction*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QAction_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAction_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAction_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAction_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAction* self_cast = dynamic_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAction_delete(QAction* self) {
	delete self;
}

