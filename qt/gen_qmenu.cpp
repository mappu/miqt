#include "gen_qmenu.h"
#include "qmenu.h"

#include <QAction>
#include <QIcon>
#include <QList>
#include <QMenu>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMenu* QMenu_new() {
	return new QMenu();
}

QMenu* QMenu_new2(const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QMenu(title_QString);
}

QMenu* QMenu_new3(QWidget* parent) {
	return new QMenu(parent);
}

QMenu* QMenu_new4(const char* title, size_t title_Strlen, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QMenu(title_QString, parent);
}

QMetaObject* QMenu_MetaObject(QMenu* self) {
	return (QMetaObject*) self->metaObject();
}

void QMenu_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMenu::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenu_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMenu::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAction* QMenu_AddAction(QMenu* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addAction(text_QString);
}

QAction* QMenu_AddAction2(QMenu* self, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addAction(*icon, text_QString);
}

QAction* QMenu_AddMenu(QMenu* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenu_AddMenuWithTitle(QMenu* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return self->addMenu(title_QString);
}

QMenu* QMenu_AddMenu2(QMenu* self, QIcon* icon, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return self->addMenu(*icon, title_QString);
}

QAction* QMenu_AddSeparator(QMenu* self) {
	return self->addSeparator();
}

QAction* QMenu_AddSection(QMenu* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addSection(text_QString);
}

QAction* QMenu_AddSection2(QMenu* self, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addSection(*icon, text_QString);
}

QAction* QMenu_InsertMenu(QMenu* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

QAction* QMenu_InsertSeparator(QMenu* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenu_InsertSection(QMenu* self, QAction* before, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->insertSection(before, text_QString);
}

QAction* QMenu_InsertSection2(QMenu* self, QAction* before, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->insertSection(before, *icon, text_QString);
}

bool QMenu_IsEmpty(QMenu* self) {
	return self->isEmpty();
}

void QMenu_Clear(QMenu* self) {
	self->clear();
}

void QMenu_SetTearOffEnabled(QMenu* self, bool tearOffEnabled) {
	self->setTearOffEnabled(tearOffEnabled);
}

bool QMenu_IsTearOffEnabled(QMenu* self) {
	return self->isTearOffEnabled();
}

bool QMenu_IsTearOffMenuVisible(QMenu* self) {
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

QAction* QMenu_DefaultAction(QMenu* self) {
	return self->defaultAction();
}

void QMenu_SetActiveAction(QMenu* self, QAction* act) {
	self->setActiveAction(act);
}

QAction* QMenu_ActiveAction(QMenu* self) {
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

QAction* QMenu_Exec2(QAction** actions, size_t actions_len, QPoint* pos) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions_len);
	for(size_t i = 0; i < actions_len; ++i) {
		actions_QList.push_back(actions[i]);
	}
	return QMenu::exec(actions_QList, *pos);
}

QSize* QMenu_SizeHint(QMenu* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QMenu_ActionGeometry(QMenu* self, QAction* param1) {
	QRect ret = self->actionGeometry(param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QAction* QMenu_ActionAt(QMenu* self, QPoint* param1) {
	return self->actionAt(*param1);
}

QAction* QMenu_MenuAction(QMenu* self) {
	return self->menuAction();
}

void QMenu_Title(QMenu* self, char** _out, int* _out_Strlen) {
	QString ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenu_SetTitle(QMenu* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	self->setTitle(title_QString);
}

QIcon* QMenu_Icon(QMenu* self) {
	QIcon ret = self->icon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QMenu_SetIcon(QMenu* self, QIcon* icon) {
	self->setIcon(*icon);
}

void QMenu_SetNoReplayFor(QMenu* self, QWidget* widget) {
	self->setNoReplayFor(widget);
}

bool QMenu_SeparatorsCollapsible(QMenu* self) {
	return self->separatorsCollapsible();
}

void QMenu_SetSeparatorsCollapsible(QMenu* self, bool collapse) {
	self->setSeparatorsCollapsible(collapse);
}

bool QMenu_ToolTipsVisible(QMenu* self) {
	return self->toolTipsVisible();
}

void QMenu_SetToolTipsVisible(QMenu* self, bool visible) {
	self->setToolTipsVisible(visible);
}

void QMenu_AboutToShow(QMenu* self) {
	self->aboutToShow();
}

void QMenu_connect_AboutToShow(QMenu* self, void* slot) {
	QMenu::connect(self, static_cast<void (QMenu::*)()>(&QMenu::aboutToShow), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMenu_AboutToHide(QMenu* self) {
	self->aboutToHide();
}

void QMenu_connect_AboutToHide(QMenu* self, void* slot) {
	QMenu::connect(self, static_cast<void (QMenu::*)()>(&QMenu::aboutToHide), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMenu_Triggered(QMenu* self, QAction* action) {
	self->triggered(action);
}

void QMenu_connect_Triggered(QMenu* self, void* slot) {
	QMenu::connect(self, static_cast<void (QMenu::*)(QAction*)>(&QMenu::triggered), self, [=](QAction* action) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMenu_Hovered(QMenu* self, QAction* action) {
	self->hovered(action);
}

void QMenu_connect_Hovered(QMenu* self, void* slot) {
	QMenu::connect(self, static_cast<void (QMenu::*)(QAction*)>(&QMenu::hovered), self, [=](QAction* action) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMenu_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMenu::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenu_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMenu::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenu_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMenu::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenu_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMenu::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenu_Popup2(QMenu* self, QPoint* pos, QAction* at) {
	self->popup(*pos, at);
}

QAction* QMenu_Exec22(QMenu* self, QPoint* pos, QAction* at) {
	return self->exec(*pos, at);
}

QAction* QMenu_Exec3(QAction** actions, size_t actions_len, QPoint* pos, QAction* at) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions_len);
	for(size_t i = 0; i < actions_len; ++i) {
		actions_QList.push_back(actions[i]);
	}
	return QMenu::exec(actions_QList, *pos, at);
}

QAction* QMenu_Exec4(QAction** actions, size_t actions_len, QPoint* pos, QAction* at, QWidget* parent) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions_len);
	for(size_t i = 0; i < actions_len; ++i) {
		actions_QList.push_back(actions[i]);
	}
	return QMenu::exec(actions_QList, *pos, at, parent);
}

void QMenu_Delete(QMenu* self) {
	delete self;
}

