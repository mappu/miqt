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
#include "_cgo_export.h"

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

void* QMdiSubWindow_Metacast(QMdiSubWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QMdiSubWindow_Tr(const char* s) {
	QString _ret = QMdiSubWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMdiSubWindow_TrUtf8(const char* s) {
	QString _ret = QMdiSubWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QSize* QMdiSubWindow_SizeHint(const QMdiSubWindow* self) {
	return new QSize(self->sizeHint());
}

QSize* QMdiSubWindow_MinimumSizeHint(const QMdiSubWindow* self) {
	return new QSize(self->minimumSizeHint());
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

void QMdiSubWindow_SetOption(QMdiSubWindow* self, int option) {
	self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option));
}

bool QMdiSubWindow_TestOption(const QMdiSubWindow* self, int param1) {
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
		Qt::WindowStates oldState_ret = oldState;
		int sigval1 = static_cast<int>(oldState_ret);
		Qt::WindowStates newState_ret = newState;
		int sigval2 = static_cast<int>(newState_ret);
		miqt_exec_callback_QMdiSubWindow_WindowStateChanged(slot, sigval1, sigval2);
	});
}

void QMdiSubWindow_AboutToActivate(QMdiSubWindow* self) {
	self->aboutToActivate();
}

void QMdiSubWindow_connect_AboutToActivate(QMdiSubWindow* self, void* slot) {
	QMdiSubWindow::connect(self, static_cast<void (QMdiSubWindow::*)()>(&QMdiSubWindow::aboutToActivate), self, [=]() {
		miqt_exec_callback_QMdiSubWindow_AboutToActivate(slot);
	});
}

void QMdiSubWindow_ShowSystemMenu(QMdiSubWindow* self) {
	self->showSystemMenu();
}

void QMdiSubWindow_ShowShaded(QMdiSubWindow* self) {
	self->showShaded();
}

struct miqt_string* QMdiSubWindow_Tr2(const char* s, const char* c) {
	QString _ret = QMdiSubWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMdiSubWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMdiSubWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMdiSubWindow_TrUtf82(const char* s, const char* c) {
	QString _ret = QMdiSubWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMdiSubWindow_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMdiSubWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QMdiSubWindow_SetOption2(QMdiSubWindow* self, int option, bool on) {
	self->setOption(static_cast<QMdiSubWindow::SubWindowOption>(option), on);
}

void QMdiSubWindow_Delete(QMdiSubWindow* self) {
	delete self;
}

