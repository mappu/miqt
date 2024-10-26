#include <QAction>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QToolBar>
#include <QWidget>
#include <qtoolbar.h>
#include "gen_qtoolbar.h"
#include "_cgo_export.h"

QToolBar* QToolBar_new(QWidget* parent) {
	return new QToolBar(parent);
}

QToolBar* QToolBar_new2(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QToolBar(title_QString);
}

QToolBar* QToolBar_new3() {
	return new QToolBar();
}

QToolBar* QToolBar_new4(struct miqt_string title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QToolBar(title_QString, parent);
}

QMetaObject* QToolBar_MetaObject(const QToolBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QToolBar_Metacast(QToolBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QToolBar_Tr(const char* s) {
	QString _ret = QToolBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QToolBar_SetMovable(QToolBar* self, bool movable) {
	self->setMovable(movable);
}

bool QToolBar_IsMovable(const QToolBar* self) {
	return self->isMovable();
}

void QToolBar_SetAllowedAreas(QToolBar* self, int areas) {
	self->setAllowedAreas(static_cast<Qt::ToolBarAreas>(areas));
}

int QToolBar_AllowedAreas(const QToolBar* self) {
	Qt::ToolBarAreas _ret = self->allowedAreas();
	return static_cast<int>(_ret);
}

bool QToolBar_IsAreaAllowed(const QToolBar* self, int area) {
	return self->isAreaAllowed(static_cast<Qt::ToolBarArea>(area));
}

void QToolBar_SetOrientation(QToolBar* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QToolBar_Orientation(const QToolBar* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QToolBar_Clear(QToolBar* self) {
	self->clear();
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

QRect* QToolBar_ActionGeometry(const QToolBar* self, QAction* action) {
	return new QRect(self->actionGeometry(action));
}

QAction* QToolBar_ActionAt(const QToolBar* self, QPoint* p) {
	return self->actionAt(*p);
}

QAction* QToolBar_ActionAt2(const QToolBar* self, int x, int y) {
	return self->actionAt(static_cast<int>(x), static_cast<int>(y));
}

QAction* QToolBar_ToggleViewAction(const QToolBar* self) {
	return self->toggleViewAction();
}

QSize* QToolBar_IconSize(const QToolBar* self) {
	return new QSize(self->iconSize());
}

int QToolBar_ToolButtonStyle(const QToolBar* self) {
	Qt::ToolButtonStyle _ret = self->toolButtonStyle();
	return static_cast<int>(_ret);
}

QWidget* QToolBar_WidgetForAction(const QToolBar* self, QAction* action) {
	return self->widgetForAction(action);
}

bool QToolBar_IsFloatable(const QToolBar* self) {
	return self->isFloatable();
}

void QToolBar_SetFloatable(QToolBar* self, bool floatable) {
	self->setFloatable(floatable);
}

bool QToolBar_IsFloating(const QToolBar* self) {
	return self->isFloating();
}

void QToolBar_SetIconSize(QToolBar* self, QSize* iconSize) {
	self->setIconSize(*iconSize);
}

void QToolBar_SetToolButtonStyle(QToolBar* self, int toolButtonStyle) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_ActionTriggered(QToolBar* self, QAction* action) {
	self->actionTriggered(action);
}

void QToolBar_connect_ActionTriggered(QToolBar* self, intptr_t slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(QAction*)>(&QToolBar::actionTriggered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QToolBar_ActionTriggered(slot, sigval1);
	});
}

void QToolBar_MovableChanged(QToolBar* self, bool movable) {
	self->movableChanged(movable);
}

void QToolBar_connect_MovableChanged(QToolBar* self, intptr_t slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::movableChanged), self, [=](bool movable) {
		bool sigval1 = movable;
		miqt_exec_callback_QToolBar_MovableChanged(slot, sigval1);
	});
}

void QToolBar_AllowedAreasChanged(QToolBar* self, int allowedAreas) {
	self->allowedAreasChanged(static_cast<Qt::ToolBarAreas>(allowedAreas));
}

void QToolBar_connect_AllowedAreasChanged(QToolBar* self, intptr_t slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::ToolBarAreas)>(&QToolBar::allowedAreasChanged), self, [=](Qt::ToolBarAreas allowedAreas) {
		Qt::ToolBarAreas allowedAreas_ret = allowedAreas;
		int sigval1 = static_cast<int>(allowedAreas_ret);
		miqt_exec_callback_QToolBar_AllowedAreasChanged(slot, sigval1);
	});
}

void QToolBar_OrientationChanged(QToolBar* self, int orientation) {
	self->orientationChanged(static_cast<Qt::Orientation>(orientation));
}

void QToolBar_connect_OrientationChanged(QToolBar* self, intptr_t slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::Orientation)>(&QToolBar::orientationChanged), self, [=](Qt::Orientation orientation) {
		Qt::Orientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QToolBar_OrientationChanged(slot, sigval1);
	});
}

void QToolBar_IconSizeChanged(QToolBar* self, QSize* iconSize) {
	self->iconSizeChanged(*iconSize);
}

void QToolBar_connect_IconSizeChanged(QToolBar* self, intptr_t slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(const QSize&)>(&QToolBar::iconSizeChanged), self, [=](const QSize& iconSize) {
		const QSize& iconSize_ret = iconSize;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&iconSize_ret);
		miqt_exec_callback_QToolBar_IconSizeChanged(slot, sigval1);
	});
}

void QToolBar_ToolButtonStyleChanged(QToolBar* self, int toolButtonStyle) {
	self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_connect_ToolButtonStyleChanged(QToolBar* self, intptr_t slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(Qt::ToolButtonStyle)>(&QToolBar::toolButtonStyleChanged), self, [=](Qt::ToolButtonStyle toolButtonStyle) {
		Qt::ToolButtonStyle toolButtonStyle_ret = toolButtonStyle;
		int sigval1 = static_cast<int>(toolButtonStyle_ret);
		miqt_exec_callback_QToolBar_ToolButtonStyleChanged(slot, sigval1);
	});
}

void QToolBar_TopLevelChanged(QToolBar* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QToolBar_connect_TopLevelChanged(QToolBar* self, intptr_t slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::topLevelChanged), self, [=](bool topLevel) {
		bool sigval1 = topLevel;
		miqt_exec_callback_QToolBar_TopLevelChanged(slot, sigval1);
	});
}

void QToolBar_VisibilityChanged(QToolBar* self, bool visible) {
	self->visibilityChanged(visible);
}

void QToolBar_connect_VisibilityChanged(QToolBar* self, intptr_t slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::visibilityChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QToolBar_VisibilityChanged(slot, sigval1);
	});
}

struct miqt_string QToolBar_Tr2(const char* s, const char* c) {
	QString _ret = QToolBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QToolBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QToolBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QToolBar_Delete(QToolBar* self) {
	delete self;
}

