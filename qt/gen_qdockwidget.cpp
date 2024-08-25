#include "gen_qdockwidget.h"
#include "qdockwidget.h"

#include <QAction>
#include <QDockWidget>
#include <QMetaObject>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QDockWidget_MetaObject(QDockWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void QDockWidget_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDockWidget_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QWidget* QDockWidget_Widget(QDockWidget* self) {
	return self->widget();
}

void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget) {
	self->setWidget(widget);
}

void QDockWidget_SetFloating(QDockWidget* self, bool floating) {
	self->setFloating(floating);
}

bool QDockWidget_IsFloating(QDockWidget* self) {
	return self->isFloating();
}

void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget) {
	self->setTitleBarWidget(widget);
}

QWidget* QDockWidget_TitleBarWidget(QDockWidget* self) {
	return self->titleBarWidget();
}

QAction* QDockWidget_ToggleViewAction(QDockWidget* self) {
	return self->toggleViewAction();
}

void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QDockWidget_connect_TopLevelChanged(QDockWidget* self, void* slot) {
	QDockWidget::connect(self, static_cast<void (QDockWidget::*)(bool)>(&QDockWidget::topLevelChanged), self, [=](bool topLevel) {
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

void QDockWidget_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDockWidget_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDockWidget_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QDockWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QDockWidget_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
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

