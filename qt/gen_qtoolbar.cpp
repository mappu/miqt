#include <QAction>
#include <QIcon>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QToolBar>
#include <QWidget>
#include "qtoolbar.h"

#include "gen_qtoolbar.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QToolBar* QToolBar_new(const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QToolBar(title_QString);
}

QToolBar* QToolBar_new2() {
	return new QToolBar();
}

QToolBar* QToolBar_new3(const char* title, size_t title_Strlen, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QToolBar(title_QString, parent);
}

QToolBar* QToolBar_new4(QWidget* parent) {
	return new QToolBar(parent);
}

QMetaObject* QToolBar_MetaObject(QToolBar* self) {
	return (QMetaObject*) const_cast<const QToolBar*>(self)->metaObject();
}

void QToolBar_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_SetMovable(QToolBar* self, bool movable) {
	self->setMovable(movable);
}

bool QToolBar_IsMovable(QToolBar* self) {
	return const_cast<const QToolBar*>(self)->isMovable();
}

void QToolBar_SetAllowedAreas(QToolBar* self, int areas) {
	self->setAllowedAreas(static_cast<Qt::ToolBarAreas>(areas));
}

int QToolBar_AllowedAreas(QToolBar* self) {
	Qt::ToolBarAreas ret = const_cast<const QToolBar*>(self)->allowedAreas();
	return static_cast<int>(ret);
}

bool QToolBar_IsAreaAllowed(QToolBar* self, uintptr_t area) {
	return const_cast<const QToolBar*>(self)->isAreaAllowed(static_cast<Qt::ToolBarArea>(area));
}

void QToolBar_SetOrientation(QToolBar* self, uintptr_t orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

uintptr_t QToolBar_Orientation(QToolBar* self) {
	Qt::Orientation ret = const_cast<const QToolBar*>(self)->orientation();
	return static_cast<uintptr_t>(ret);
}

void QToolBar_Clear(QToolBar* self) {
	self->clear();
}

QAction* QToolBar_AddAction(QToolBar* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addAction(text_QString);
}

QAction* QToolBar_AddAction2(QToolBar* self, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addAction(*icon, text_QString);
}

QAction* QToolBar_AddSeparator(QToolBar* self) {
	return self->addSeparator();
}

QAction* QToolBar_InsertSeparator(QToolBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QToolBar_AddWidget(QToolBar* self, QWidget* widget) {
	return self->addWidget(widget);
}

QAction* QToolBar_InsertWidget(QToolBar* self, QAction* before, QWidget* widget) {
	return self->insertWidget(before, widget);
}

QRect* QToolBar_ActionGeometry(QToolBar* self, QAction* action) {
	QRect ret = const_cast<const QToolBar*>(self)->actionGeometry(action);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QAction* QToolBar_ActionAt(QToolBar* self, QPoint* p) {
	return const_cast<const QToolBar*>(self)->actionAt(*p);
}

QAction* QToolBar_ActionAt2(QToolBar* self, int x, int y) {
	return const_cast<const QToolBar*>(self)->actionAt(static_cast<int>(x), static_cast<int>(y));
}

QAction* QToolBar_ToggleViewAction(QToolBar* self) {
	return const_cast<const QToolBar*>(self)->toggleViewAction();
}

QSize* QToolBar_IconSize(QToolBar* self) {
	QSize ret = const_cast<const QToolBar*>(self)->iconSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

uintptr_t QToolBar_ToolButtonStyle(QToolBar* self) {
	Qt::ToolButtonStyle ret = const_cast<const QToolBar*>(self)->toolButtonStyle();
	return static_cast<uintptr_t>(ret);
}

QWidget* QToolBar_WidgetForAction(QToolBar* self, QAction* action) {
	return const_cast<const QToolBar*>(self)->widgetForAction(action);
}

bool QToolBar_IsFloatable(QToolBar* self) {
	return const_cast<const QToolBar*>(self)->isFloatable();
}

void QToolBar_SetFloatable(QToolBar* self, bool floatable) {
	self->setFloatable(floatable);
}

bool QToolBar_IsFloating(QToolBar* self) {
	return const_cast<const QToolBar*>(self)->isFloating();
}

void QToolBar_SetIconSize(QToolBar* self, QSize* iconSize) {
	self->setIconSize(*iconSize);
}

void QToolBar_SetToolButtonStyle(QToolBar* self, uintptr_t toolButtonStyle) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_ActionTriggered(QToolBar* self, QAction* action) {
	self->actionTriggered(action);
}

void QToolBar_connect_ActionTriggered(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(QAction*)>(&QToolBar::actionTriggered), self, [=](QAction* action) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_MovableChanged(QToolBar* self, bool movable) {
	self->movableChanged(movable);
}

void QToolBar_connect_MovableChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::movableChanged), self, [=](bool movable) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_AllowedAreasChanged(QToolBar* self, int allowedAreas) {
	self->allowedAreasChanged(static_cast<Qt::ToolBarAreas>(allowedAreas));
}

void QToolBar_connect_AllowedAreasChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::ToolBarAreas)>(&QToolBar::allowedAreasChanged), self, [=](Qt::ToolBarAreas allowedAreas) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_OrientationChanged(QToolBar* self, uintptr_t orientation) {
	self->orientationChanged(static_cast<Qt::Orientation>(orientation));
}

void QToolBar_connect_OrientationChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::Orientation)>(&QToolBar::orientationChanged), self, [=](Qt::Orientation orientation) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_IconSizeChanged(QToolBar* self, QSize* iconSize) {
	self->iconSizeChanged(*iconSize);
}

void QToolBar_connect_IconSizeChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(const QSize&)>(&QToolBar::iconSizeChanged), self, [=](const QSize& iconSize) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_ToolButtonStyleChanged(QToolBar* self, uintptr_t toolButtonStyle) {
	self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_connect_ToolButtonStyleChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::ToolButtonStyle)>(&QToolBar::toolButtonStyleChanged), self, [=](Qt::ToolButtonStyle toolButtonStyle) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_TopLevelChanged(QToolBar* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QToolBar_connect_TopLevelChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::topLevelChanged), self, [=](bool topLevel) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_VisibilityChanged(QToolBar* self, bool visible) {
	self->visibilityChanged(visible);
}

void QToolBar_connect_VisibilityChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::visibilityChanged), self, [=](bool visible) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_Delete(QToolBar* self) {
	delete self;
}

