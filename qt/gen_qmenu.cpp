#include <QAction>
#include <QIcon>
#include <QList>
#include <QMenu>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qmenu.h>
#include "gen_qmenu.h"
#include "_cgo_export.h"

QMenu* QMenu_new(QWidget* parent) {
	return new QMenu(parent);
}

QMenu* QMenu_new2() {
	return new QMenu();
}

QMenu* QMenu_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QMenu(title_QString);
}

QMenu* QMenu_new4(struct miqt_string title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QMenu(title_QString, parent);
}

QMetaObject* QMenu_MetaObject(const QMenu* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMenu_Metacast(QMenu* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMenu_Tr(const char* s) {
	QString _ret = QMenu::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenu_TrUtf8(const char* s) {
	QString _ret = QMenu::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QMenu_AddAction(QMenu* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QMenu_AddAction2(QMenu* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(*icon, text_QString);
}

QAction* QMenu_AddMenu(QMenu* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenu_AddMenuWithTitle(QMenu* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(title_QString);
}

QMenu* QMenu_AddMenu2(QMenu* self, QIcon* icon, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(*icon, title_QString);
}

QAction* QMenu_AddSeparator(QMenu* self) {
	return self->addSeparator();
}

QAction* QMenu_AddSection(QMenu* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSection(text_QString);
}

QAction* QMenu_AddSection2(QMenu* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSection(*icon, text_QString);
}

QAction* QMenu_InsertMenu(QMenu* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

QAction* QMenu_InsertSeparator(QMenu* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenu_InsertSection(QMenu* self, QAction* before, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertSection(before, text_QString);
}

QAction* QMenu_InsertSection2(QMenu* self, QAction* before, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->insertSection(before, *icon, text_QString);
}

bool QMenu_IsEmpty(const QMenu* self) {
	return self->isEmpty();
}

void QMenu_Clear(QMenu* self) {
	self->clear();
}

void QMenu_SetTearOffEnabled(QMenu* self, bool tearOffEnabled) {
	self->setTearOffEnabled(tearOffEnabled);
}

bool QMenu_IsTearOffEnabled(const QMenu* self) {
	return self->isTearOffEnabled();
}

bool QMenu_IsTearOffMenuVisible(const QMenu* self) {
	return self->isTearOffMenuVisible();
}

void QMenu_ShowTearOffMenu(QMenu* self) {
	self->showTearOffMenu();
}

void QMenu_ShowTearOffMenuWithPos(QMenu* self, QPoint* pos) {
	self->showTearOffMenu(*pos);
}

void QMenu_HideTearOffMenu(QMenu* self) {
	self->hideTearOffMenu();
}

void QMenu_SetDefaultAction(QMenu* self, QAction* defaultAction) {
	self->setDefaultAction(defaultAction);
}

QAction* QMenu_DefaultAction(const QMenu* self) {
	return self->defaultAction();
}

void QMenu_SetActiveAction(QMenu* self, QAction* act) {
	self->setActiveAction(act);
}

QAction* QMenu_ActiveAction(const QMenu* self) {
	return self->activeAction();
}

void QMenu_Popup(QMenu* self, QPoint* pos) {
	self->popup(*pos);
}

QAction* QMenu_Exec(QMenu* self) {
	return self->exec();
}

QAction* QMenu_ExecWithPos(QMenu* self, QPoint* pos) {
	return self->exec(*pos);
}

QAction* QMenu_Exec2(struct miqt_array* /* of QAction* */ actions, QPoint* pos) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions->len);
	QAction** actions_arr = static_cast<QAction**>(actions->data);
	for(size_t i = 0; i < actions->len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	return QMenu::exec(actions_QList, *pos);
}

QSize* QMenu_SizeHint(const QMenu* self) {
	return new QSize(self->sizeHint());
}

QRect* QMenu_ActionGeometry(const QMenu* self, QAction* param1) {
	return new QRect(self->actionGeometry(param1));
}

QAction* QMenu_ActionAt(const QMenu* self, QPoint* param1) {
	return self->actionAt(*param1);
}

QAction* QMenu_MenuAction(const QMenu* self) {
	return self->menuAction();
}

struct miqt_string QMenu_Title(const QMenu* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMenu_SetTitle(QMenu* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

QIcon* QMenu_Icon(const QMenu* self) {
	return new QIcon(self->icon());
}

void QMenu_SetIcon(QMenu* self, QIcon* icon) {
	self->setIcon(*icon);
}

void QMenu_SetNoReplayFor(QMenu* self, QWidget* widget) {
	self->setNoReplayFor(widget);
}

bool QMenu_SeparatorsCollapsible(const QMenu* self) {
	return self->separatorsCollapsible();
}

void QMenu_SetSeparatorsCollapsible(QMenu* self, bool collapse) {
	self->setSeparatorsCollapsible(collapse);
}

bool QMenu_ToolTipsVisible(const QMenu* self) {
	return self->toolTipsVisible();
}

void QMenu_SetToolTipsVisible(QMenu* self, bool visible) {
	self->setToolTipsVisible(visible);
}

void QMenu_AboutToShow(QMenu* self) {
	self->aboutToShow();
}

void QMenu_connect_AboutToShow(QMenu* self, intptr_t slot) {
	QMenu::connect(self, static_cast<void (QMenu::*)()>(&QMenu::aboutToShow), self, [=]() {
		miqt_exec_callback_QMenu_AboutToShow(slot);
	});
}

void QMenu_AboutToHide(QMenu* self) {
	self->aboutToHide();
}

void QMenu_connect_AboutToHide(QMenu* self, intptr_t slot) {
	QMenu::connect(self, static_cast<void (QMenu::*)()>(&QMenu::aboutToHide), self, [=]() {
		miqt_exec_callback_QMenu_AboutToHide(slot);
	});
}

void QMenu_Triggered(QMenu* self, QAction* action) {
	self->triggered(action);
}

void QMenu_connect_Triggered(QMenu* self, intptr_t slot) {
	QMenu::connect(self, static_cast<void (QMenu::*)(QAction*)>(&QMenu::triggered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenu_Triggered(slot, sigval1);
	});
}

void QMenu_Hovered(QMenu* self, QAction* action) {
	self->hovered(action);
}

void QMenu_connect_Hovered(QMenu* self, intptr_t slot) {
	QMenu::connect(self, static_cast<void (QMenu::*)(QAction*)>(&QMenu::hovered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenu_Hovered(slot, sigval1);
	});
}

struct miqt_string QMenu_Tr2(const char* s, const char* c) {
	QString _ret = QMenu::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenu_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMenu::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenu_TrUtf82(const char* s, const char* c) {
	QString _ret = QMenu::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenu_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMenu::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMenu_Popup2(QMenu* self, QPoint* pos, QAction* at) {
	self->popup(*pos, at);
}

QAction* QMenu_Exec22(QMenu* self, QPoint* pos, QAction* at) {
	return self->exec(*pos, at);
}

QAction* QMenu_Exec3(struct miqt_array* /* of QAction* */ actions, QPoint* pos, QAction* at) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions->len);
	QAction** actions_arr = static_cast<QAction**>(actions->data);
	for(size_t i = 0; i < actions->len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	return QMenu::exec(actions_QList, *pos, at);
}

QAction* QMenu_Exec4(struct miqt_array* /* of QAction* */ actions, QPoint* pos, QAction* at, QWidget* parent) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions->len);
	QAction** actions_arr = static_cast<QAction**>(actions->data);
	for(size_t i = 0; i < actions->len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	return QMenu::exec(actions_QList, *pos, at, parent);
}

void QMenu_Delete(QMenu* self) {
	delete self;
}

