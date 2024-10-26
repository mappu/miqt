#include <QAction>
#include <QDockWidget>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qdockwidget.h>
#include "gen_qdockwidget.h"
#include "_cgo_export.h"

QDockWidget* QDockWidget_new(QWidget* parent) {
	return new QDockWidget(parent);
}

QDockWidget* QDockWidget_new2(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QDockWidget(title_QString);
}

QDockWidget* QDockWidget_new3() {
	return new QDockWidget();
}

QDockWidget* QDockWidget_new4(struct miqt_string title, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QDockWidget(title_QString, parent);
}

QDockWidget* QDockWidget_new5(struct miqt_string title, QWidget* parent, int flags) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new QDockWidget(title_QString, parent, static_cast<Qt::WindowFlags>(flags));
}

QDockWidget* QDockWidget_new6(QWidget* parent, int flags) {
	return new QDockWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QDockWidget_MetaObject(const QDockWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDockWidget_Metacast(QDockWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDockWidget_Tr(const char* s) {
	QString _ret = QDockWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDockWidget_TrUtf8(const char* s) {
	QString _ret = QDockWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QDockWidget_Widget(const QDockWidget* self) {
	return self->widget();
}

void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget) {
	self->setWidget(widget);
}

void QDockWidget_SetFeatures(QDockWidget* self, int features) {
	self->setFeatures(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

int QDockWidget_Features(const QDockWidget* self) {
	QDockWidget::DockWidgetFeatures _ret = self->features();
	return static_cast<int>(_ret);
}

void QDockWidget_SetFloating(QDockWidget* self, bool floating) {
	self->setFloating(floating);
}

bool QDockWidget_IsFloating(const QDockWidget* self) {
	return self->isFloating();
}

void QDockWidget_SetAllowedAreas(QDockWidget* self, int areas) {
	self->setAllowedAreas(static_cast<Qt::DockWidgetAreas>(areas));
}

int QDockWidget_AllowedAreas(const QDockWidget* self) {
	Qt::DockWidgetAreas _ret = self->allowedAreas();
	return static_cast<int>(_ret);
}

void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget) {
	self->setTitleBarWidget(widget);
}

QWidget* QDockWidget_TitleBarWidget(const QDockWidget* self) {
	return self->titleBarWidget();
}

bool QDockWidget_IsAreaAllowed(const QDockWidget* self, int area) {
	return self->isAreaAllowed(static_cast<Qt::DockWidgetArea>(area));
}

QAction* QDockWidget_ToggleViewAction(const QDockWidget* self) {
	return self->toggleViewAction();
}

void QDockWidget_FeaturesChanged(QDockWidget* self, int features) {
	self->featuresChanged(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

void QDockWidget_connect_FeaturesChanged(QDockWidget* self, intptr_t slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(QDockWidget::DockWidgetFeatures)>(&QDockWidget::featuresChanged), self, [=](QDockWidget::DockWidgetFeatures features) {
		QDockWidget::DockWidgetFeatures features_ret = features;
		int sigval1 = static_cast<int>(features_ret);
		miqt_exec_callback_QDockWidget_FeaturesChanged(slot, sigval1);
	});
}

void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QDockWidget_connect_TopLevelChanged(QDockWidget* self, intptr_t slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::topLevelChanged), self, [=](bool topLevel) {
		bool sigval1 = topLevel;
		miqt_exec_callback_QDockWidget_TopLevelChanged(slot, sigval1);
	});
}

void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas) {
	self->allowedAreasChanged(static_cast<Qt::DockWidgetAreas>(allowedAreas));
}

void QDockWidget_connect_AllowedAreasChanged(QDockWidget* self, intptr_t slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(Qt::DockWidgetAreas)>(&QDockWidget::allowedAreasChanged), self, [=](Qt::DockWidgetAreas allowedAreas) {
		Qt::DockWidgetAreas allowedAreas_ret = allowedAreas;
		int sigval1 = static_cast<int>(allowedAreas_ret);
		miqt_exec_callback_QDockWidget_AllowedAreasChanged(slot, sigval1);
	});
}

void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible) {
	self->visibilityChanged(visible);
}

void QDockWidget_connect_VisibilityChanged(QDockWidget* self, intptr_t slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::visibilityChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QDockWidget_VisibilityChanged(slot, sigval1);
	});
}

void QDockWidget_DockLocationChanged(QDockWidget* self, int area) {
	self->dockLocationChanged(static_cast<Qt::DockWidgetArea>(area));
}

void QDockWidget_connect_DockLocationChanged(QDockWidget* self, intptr_t slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(Qt::DockWidgetArea)>(&QDockWidget::dockLocationChanged), self, [=](Qt::DockWidgetArea area) {
		Qt::DockWidgetArea area_ret = area;
		int sigval1 = static_cast<int>(area_ret);
		miqt_exec_callback_QDockWidget_DockLocationChanged(slot, sigval1);
	});
}

struct miqt_string QDockWidget_Tr2(const char* s, const char* c) {
	QString _ret = QDockWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDockWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDockWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDockWidget_TrUtf82(const char* s, const char* c) {
	QString _ret = QDockWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDockWidget_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QDockWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDockWidget_Delete(QDockWidget* self) {
	delete self;
}

