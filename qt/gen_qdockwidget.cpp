#include <QAction>
#include <QDockWidget>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qdockwidget.h"

#include "gen_qdockwidget.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QDockWidget* QDockWidget_new(const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QDockWidget(title_QString);
}

QDockWidget* QDockWidget_new2() {
	return new QDockWidget();
}

QDockWidget* QDockWidget_new3(const char* title, size_t title_Strlen, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QDockWidget(title_QString, parent);
}

QDockWidget* QDockWidget_new4(const char* title, size_t title_Strlen, QWidget* parent, int flags) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QDockWidget(title_QString, parent, static_cast<Qt::WindowFlags>(flags));
}

QDockWidget* QDockWidget_new5(QWidget* parent) {
	return new QDockWidget(parent);
}

QDockWidget* QDockWidget_new6(QWidget* parent, int flags) {
	return new QDockWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QDockWidget_MetaObject(const QDockWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void QDockWidget_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDockWidget_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
	QDockWidget::DockWidgetFeatures ret = self->features();
	return static_cast<int>(ret);
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
	Qt::DockWidgetAreas ret = self->allowedAreas();
	return static_cast<int>(ret);
}

void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget) {
	self->setTitleBarWidget(widget);
}

QWidget* QDockWidget_TitleBarWidget(const QDockWidget* self) {
	return self->titleBarWidget();
}

bool QDockWidget_IsAreaAllowed(const QDockWidget* self, uintptr_t area) {
	return self->isAreaAllowed(static_cast<Qt::DockWidgetArea>(area));
}

QAction* QDockWidget_ToggleViewAction(const QDockWidget* self) {
	return self->toggleViewAction();
}

void QDockWidget_FeaturesChanged(QDockWidget* self, int features) {
	self->featuresChanged(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

void QDockWidget_connect_FeaturesChanged(QDockWidget* self, void* slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(QDockWidget::DockWidgetFeatures)>(&QDockWidget::featuresChanged), self, [=](QDockWidget::DockWidgetFeatures features) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QDockWidget_connect_TopLevelChanged(QDockWidget* self, void* slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::topLevelChanged), self, [=](bool topLevel) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas) {
	self->allowedAreasChanged(static_cast<Qt::DockWidgetAreas>(allowedAreas));
}

void QDockWidget_connect_AllowedAreasChanged(QDockWidget* self, void* slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(Qt::DockWidgetAreas)>(&QDockWidget::allowedAreasChanged), self, [=](Qt::DockWidgetAreas allowedAreas) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible) {
	self->visibilityChanged(visible);
}

void QDockWidget_connect_VisibilityChanged(QDockWidget* self, void* slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::visibilityChanged), self, [=](bool visible) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDockWidget_DockLocationChanged(QDockWidget* self, uintptr_t area) {
	self->dockLocationChanged(static_cast<Qt::DockWidgetArea>(area));
}

void QDockWidget_connect_DockLocationChanged(QDockWidget* self, void* slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(Qt::DockWidgetArea)>(&QDockWidget::dockLocationChanged), self, [=](Qt::DockWidgetArea area) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QDockWidget_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDockWidget_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDockWidget_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDockWidget_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDockWidget_Delete(QDockWidget* self) {
	delete self;
}

