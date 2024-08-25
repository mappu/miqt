#include "gen_qmdisubwindow.h"
#include "qmdisubwindow.h"

#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMenu>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QMdiSubWindow_MetaObject(QMdiSubWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void QMdiSubWindow_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiSubWindow_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QMdiSubWindow_SizeHint(QMdiSubWindow* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QMdiSubWindow_MinimumSizeHint(QMdiSubWindow* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QMdiSubWindow_SetWidget(QMdiSubWindow* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QMdiSubWindow_Widget(QMdiSubWindow* self) {
	return self->widget();
}

QWidget* QMdiSubWindow_MaximizedButtonsWidget(QMdiSubWindow* self) {
	return self->maximizedButtonsWidget();
}

QWidget* QMdiSubWindow_MaximizedSystemMenuIconWidget(QMdiSubWindow* self) {
	return self->maximizedSystemMenuIconWidget();
}

bool QMdiSubWindow_IsShaded(QMdiSubWindow* self) {
	return self->isShaded();
}

void QMdiSubWindow_SetKeyboardSingleStep(QMdiSubWindow* self, int step) {
	self->setKeyboardSingleStep(static_cast<int>(step));
}

int QMdiSubWindow_KeyboardSingleStep(QMdiSubWindow* self) {
	return self->keyboardSingleStep();
}

void QMdiSubWindow_SetKeyboardPageStep(QMdiSubWindow* self, int step) {
	self->setKeyboardPageStep(static_cast<int>(step));
}

int QMdiSubWindow_KeyboardPageStep(QMdiSubWindow* self) {
	return self->keyboardPageStep();
}

void QMdiSubWindow_SetSystemMenu(QMdiSubWindow* self, QMenu* systemMenu) {
	self->setSystemMenu(systemMenu);
}

QMenu* QMdiSubWindow_SystemMenu(QMdiSubWindow* self) {
	return self->systemMenu();
}

QMdiArea* QMdiSubWindow_MdiArea(QMdiSubWindow* self) {
	return self->mdiArea();
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

void QMdiSubWindow_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiSubWindow_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiSubWindow_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiSubWindow_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMdiSubWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiSubWindow_Delete(QMdiSubWindow* self) {
	delete self;
}

