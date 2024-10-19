#include <QAction>
#include <QActionGroup>
#include <QFont>
#include <QGraphicsWidget>
#include <QIcon>
#include <QKeySequence>
#include <QList>
#include <QMenu>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <qaction.h>
#include "gen_qaction.h"
#include "_cgo_export.h"

QAction* QAction_new() {
	return new QAction();
}

QAction* QAction_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QAction(text_QString);
}

QAction* QAction_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QAction(*icon, text_QString);
}

QAction* QAction_new4(QObject* parent) {
	return new QAction(parent);
}

QAction* QAction_new5(struct miqt_string text, QObject* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QAction(text_QString, parent);
}

QAction* QAction_new6(QIcon* icon, struct miqt_string text, QObject* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QAction(*icon, text_QString, parent);
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

struct miqt_string QAction_TrUtf8(const char* s) {
	QString _ret = QAction::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

QMenu* QAction_Menu(const QAction* self) {
	return self->menu();
}

void QAction_SetMenu(QAction* self, QMenu* menu) {
	self->setMenu(menu);
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

void QAction_SetShortcuts(QAction* self, struct miqt_array* /* of QKeySequence* */ shortcuts) {
	QList<QKeySequence> shortcuts_QList;
	shortcuts_QList.reserve(shortcuts->len);
	QKeySequence** shortcuts_arr = static_cast<QKeySequence**>(shortcuts->data);
	for(size_t i = 0; i < shortcuts->len; ++i) {
		shortcuts_QList.push_back(*(shortcuts_arr[i]));
	}
	self->setShortcuts(shortcuts_QList);
}

void QAction_SetShortcutsWithShortcuts(QAction* self, int shortcuts) {
	self->setShortcuts(static_cast<QKeySequence::StandardKey>(shortcuts));
}

struct miqt_array* QAction_Shortcuts(const QAction* self) {
	QList<QKeySequence> _ret = self->shortcuts();
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
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

bool QAction_ShowStatusText(QAction* self) {
	return self->showStatusText();
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

QWidget* QAction_ParentWidget(const QAction* self) {
	return self->parentWidget();
}

struct miqt_array* QAction_AssociatedWidgets(const QAction* self) {
	QList<QWidget *> _ret = self->associatedWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QAction_AssociatedGraphicsWidgets(const QAction* self) {
	QList<QGraphicsWidget *> _ret = self->associatedGraphicsWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsWidget** _arr = static_cast<QGraphicsWidget**>(malloc(sizeof(QGraphicsWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
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
	QAction::connect(self, static_cast<void (QAction::*)()>(&QAction::changed), self, [=]() {
		miqt_exec_callback_QAction_Changed(slot);
	});
}

void QAction_Triggered(QAction* self) {
	self->triggered();
}

void QAction_connect_Triggered(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::triggered), self, [=]() {
		miqt_exec_callback_QAction_Triggered(slot);
	});
}

void QAction_Hovered(QAction* self) {
	self->hovered();
}

void QAction_connect_Hovered(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)()>(&QAction::hovered), self, [=]() {
		miqt_exec_callback_QAction_Hovered(slot);
	});
}

void QAction_Toggled(QAction* self, bool param1) {
	self->toggled(param1);
}

void QAction_connect_Toggled(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::toggled), self, [=](bool param1) {
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

struct miqt_string QAction_TrUtf82(const char* s, const char* c) {
	QString _ret = QAction::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAction_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAction::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAction_ShowStatusText1(QAction* self, QWidget* widget) {
	return self->showStatusText(widget);
}

void QAction_Triggered1(QAction* self, bool checked) {
	self->triggered(checked);
}

void QAction_connect_Triggered1(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::triggered), self, [=](bool checked) {
		bool sigval1 = checked;
		miqt_exec_callback_QAction_Triggered1(slot, sigval1);
	});
}

void QAction_Delete(QAction* self) {
	delete self;
}

