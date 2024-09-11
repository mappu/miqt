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
#include "qaction.h"

#include "gen_qaction.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QAction* QAction_new() {
	return new QAction();
}

QAction* QAction_new2(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QAction(text_QString);
}

QAction* QAction_new3(QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QAction(*icon, text_QString);
}

QAction* QAction_new4(QObject* parent) {
	return new QAction(parent);
}

QAction* QAction_new5(const char* text, size_t text_Strlen, QObject* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QAction(text_QString, parent);
}

QAction* QAction_new6(QIcon* icon, const char* text, size_t text_Strlen, QObject* parent) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return new QAction(*icon, text_QString, parent);
}

QMetaObject* QAction_MetaObject(const QAction* self) {
	return (QMetaObject*) self->metaObject();
}

void QAction_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAction::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAction_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAction::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
	QIcon ret = self->icon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QAction_SetText(QAction* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(text_QString);
}

void QAction_Text(const QAction* self, char** _out, int* _out_Strlen) {
	QString ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAction_SetIconText(QAction* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setIconText(text_QString);
}

void QAction_IconText(const QAction* self, char** _out, int* _out_Strlen) {
	QString ret = self->iconText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAction_SetToolTip(QAction* self, const char* tip, size_t tip_Strlen) {
	QString tip_QString = QString::fromUtf8(tip, tip_Strlen);
	self->setToolTip(tip_QString);
}

void QAction_ToolTip(const QAction* self, char** _out, int* _out_Strlen) {
	QString ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAction_SetStatusTip(QAction* self, const char* statusTip, size_t statusTip_Strlen) {
	QString statusTip_QString = QString::fromUtf8(statusTip, statusTip_Strlen);
	self->setStatusTip(statusTip_QString);
}

void QAction_StatusTip(const QAction* self, char** _out, int* _out_Strlen) {
	QString ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAction_SetWhatsThis(QAction* self, const char* what, size_t what_Strlen) {
	QString what_QString = QString::fromUtf8(what, what_Strlen);
	self->setWhatsThis(what_QString);
}

void QAction_WhatsThis(const QAction* self, char** _out, int* _out_Strlen) {
	QString ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAction_SetPriority(QAction* self, uintptr_t priority) {
	self->setPriority(static_cast<QAction::Priority>(priority));
}

uintptr_t QAction_Priority(const QAction* self) {
	QAction::Priority ret = self->priority();
	return static_cast<uintptr_t>(ret);
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
	QKeySequence ret = self->shortcut();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QKeySequence*>(new QKeySequence(ret));
}

void QAction_SetShortcuts(QAction* self, QKeySequence** shortcuts, size_t shortcuts_len) {
	QList<QKeySequence> shortcuts_QList;
	shortcuts_QList.reserve(shortcuts_len);
	for(size_t i = 0; i < shortcuts_len; ++i) {
		shortcuts_QList.push_back(*(shortcuts[i]));
	}
	self->setShortcuts(shortcuts_QList);
}

void QAction_SetShortcutsWithShortcuts(QAction* self, uintptr_t shortcuts) {
	self->setShortcuts(static_cast<QKeySequence::StandardKey>(shortcuts));
}

void QAction_Shortcuts(const QAction* self, QKeySequence*** _out, size_t* _out_len) {
	QList<QKeySequence> ret = self->shortcuts();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QKeySequence** __out = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QKeySequence(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QAction_SetShortcutContext(QAction* self, uintptr_t context) {
	self->setShortcutContext(static_cast<Qt::ShortcutContext>(context));
}

uintptr_t QAction_ShortcutContext(const QAction* self) {
	Qt::ShortcutContext ret = self->shortcutContext();
	return static_cast<uintptr_t>(ret);
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
	QFont ret = self->font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QAction_SetCheckable(QAction* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QAction_IsCheckable(const QAction* self) {
	return self->isCheckable();
}

QVariant* QAction_Data(const QAction* self) {
	QVariant ret = self->data();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
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

void QAction_Activate(QAction* self, uintptr_t event) {
	self->activate(static_cast<QAction::ActionEvent>(event));
}

bool QAction_ShowStatusText(QAction* self) {
	return self->showStatusText();
}

void QAction_SetMenuRole(QAction* self, uintptr_t menuRole) {
	self->setMenuRole(static_cast<QAction::MenuRole>(menuRole));
}

uintptr_t QAction_MenuRole(const QAction* self) {
	QAction::MenuRole ret = self->menuRole();
	return static_cast<uintptr_t>(ret);
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

void QAction_AssociatedWidgets(const QAction* self, QWidget*** _out, size_t* _out_len) {
	QList<QWidget*> ret = self->associatedWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** __out = static_cast<QWidget**>(malloc(sizeof(QWidget*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QAction_AssociatedGraphicsWidgets(const QAction* self, QGraphicsWidget*** _out, size_t* _out_len) {
	QList<QGraphicsWidget*> ret = self->associatedGraphicsWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsWidget** __out = static_cast<QGraphicsWidget**>(malloc(sizeof(QGraphicsWidget*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
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

void QAction_connect_Changed(QAction* self, void* slot) {
	QAction::connect(self, static_cast<void (QAction::*)()>(&QAction::changed), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAction_Triggered(QAction* self) {
	self->triggered();
}

void QAction_connect_Triggered(QAction* self, void* slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::triggered), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAction_Hovered(QAction* self) {
	self->hovered();
}

void QAction_connect_Hovered(QAction* self, void* slot) {
	QAction::connect(self, static_cast<void (QAction::*)()>(&QAction::hovered), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAction_Toggled(QAction* self, bool param1) {
	self->toggled(param1);
}

void QAction_connect_Toggled(QAction* self, void* slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::toggled), self, [=](bool param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAction_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAction::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAction_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAction::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAction_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAction::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAction_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAction::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QAction_ShowStatusText1(QAction* self, QWidget* widget) {
	return self->showStatusText(widget);
}

void QAction_Triggered1(QAction* self, bool checked) {
	self->triggered(checked);
}

void QAction_connect_Triggered1(QAction* self, void* slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::triggered), self, [=](bool checked) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAction_Delete(QAction* self) {
	delete self;
}

