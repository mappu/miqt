#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMenu>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qmdisubwindow.h"

#include "gen_qmdisubwindow.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMdiSubWindow* QMdiSubWindow_new() {
	return new QMdiSubWindow();
}

QMdiSubWindow* QMdiSubWindow_new2(QWidget* parent) {
	return new QMdiSubWindow(parent);
}

QMdiSubWindow* QMdiSubWindow_new3(QWidget* parent, int flags) {
	return new QMdiSubWindow(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QMdiSubWindow_MetaObject(const QMdiSubWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void QMdiSubWindow_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiSubWindow_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QMdiSubWindow_SizeHint(const QMdiSubWindow* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QMdiSubWindow_MinimumSizeHint(const QMdiSubWindow* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QMdiSubWindow_SetWidget(QMdiSubWindow* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QMdiSubWindow_Widget(const QMdiSubWindow* self) {
	return self->widget();
}

QWidget* QMdiSubWindow_MaximizedButtonsWidget(const QMdiSubWindow* self) {
	return self->maximizedButtonsWidget();
}

QWidget* QMdiSubWindow_MaximizedSystemMenuIconWidget(const QMdiSubWindow* self) {
	return self->maximizedSystemMenuIconWidget();
}

bool QMdiSubWindow_IsShaded(const QMdiSubWindow* self) {
	return self->isShaded();
}

void QMdiSubWindow_SetOption(QMdiSubWindow* self, uintptr_t option) {
	self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option));
}

bool QMdiSubWindow_TestOption(const QMdiSubWindow* self, uintptr_t param1) {
	return self->testOption(static_cast<QMdiSubWindow::SubWindowOption>(param1));
}

void QMdiSubWindow_SetKeyboardSingleStep(QMdiSubWindow* self, int step) {
	self->setKeyboardSingleStep(static_cast<int>(step));
}

int QMdiSubWindow_KeyboardSingleStep(const QMdiSubWindow* self) {
	return self->keyboardSingleStep();
}

void QMdiSubWindow_SetKeyboardPageStep(QMdiSubWindow* self, int step) {
	self->setKeyboardPageStep(static_cast<int>(step));
}

int QMdiSubWindow_KeyboardPageStep(const QMdiSubWindow* self) {
	return self->keyboardPageStep();
}

void QMdiSubWindow_SetSystemMenu(QMdiSubWindow* self, QMenu* systemMenu) {
	self->setSystemMenu(systemMenu);
}

QMenu* QMdiSubWindow_SystemMenu(const QMdiSubWindow* self) {
	return self->systemMenu();
}

QMdiArea* QMdiSubWindow_MdiArea(const QMdiSubWindow* self) {
	return self->mdiArea();
}

void QMdiSubWindow_WindowStateChanged(QMdiSubWindow* self, int oldState, int newState) {
	self->windowStateChanged(static_cast<Qt::WindowStates>(oldState), static_cast<Qt::WindowStates>(newState));
}

void QMdiSubWindow_connect_WindowStateChanged(QMdiSubWindow* self, void* slot) {
	QMdiSubWindow::connect(self, static_cast<void (QMdiSubWindow::*)(Qt::WindowStates, Qt::WindowStates)>(&QMdiSubWindow::windowStateChanged), self, [=](Qt::WindowStates oldState, Qt::WindowStates newState) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMdiSubWindow_AboutToActivate(QMdiSubWindow* self) {
	self->aboutToActivate();
}

void QMdiSubWindow_connect_AboutToActivate(QMdiSubWindow* self, void* slot) {
	QMdiSubWindow::connect(self, static_cast<void (QMdiSubWindow::*)()>(&QMdiSubWindow::aboutToActivate), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self) {
	self->showSystemMenu();
}

void QMdiSubWindow_ShowShaded(QMdiSubWindow* self) {
	self->showShaded();
}

void QMdiSubWindow_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiSubWindow_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiSubWindow_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiSubWindow_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiSubWindow_SetOption2(QMdiSubWindow* self, uintptr_t option, bool on) {
	self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option), on);
}

void QMdiSubWindow_Delete(QMdiSubWindow* self) {
	delete self;
}

