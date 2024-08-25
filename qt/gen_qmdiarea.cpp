#include "gen_qmdiarea.h"
#include "qmdiarea.h"

#include <QBrush>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMdiArea* QMdiArea_new() {
	return new QMdiArea();
}

QMdiArea* QMdiArea_new2(QWidget* parent) {
	return new QMdiArea(parent);
}

QMetaObject* QMdiArea_MetaObject(QMdiArea* self) {
	return (QMetaObject*) self->metaObject();
}

void QMdiArea_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiArea_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QMdiArea_SizeHint(QMdiArea* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QMdiArea_MinimumSizeHint(QMdiArea* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QMdiSubWindow* QMdiArea_CurrentSubWindow(QMdiArea* self) {
	return self->currentSubWindow();
}

QMdiSubWindow* QMdiArea_ActiveSubWindow(QMdiArea* self) {
	return self->activeSubWindow();
}

void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget) {
	self->removeSubWindow(widget);
}

QBrush* QMdiArea_Background(QMdiArea* self) {
	QBrush ret = self->background();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QMdiArea_SetBackground(QMdiArea* self, QBrush* background) {
	self->setBackground(*background);
}

bool QMdiArea_DocumentMode(QMdiArea* self) {
	return self->documentMode();
}

void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled) {
	self->setDocumentMode(enabled);
}

void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable) {
	self->setTabsClosable(closable);
}

bool QMdiArea_TabsClosable(QMdiArea* self) {
	return self->tabsClosable();
}

void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable) {
	self->setTabsMovable(movable);
}

bool QMdiArea_TabsMovable(QMdiArea* self) {
	return self->tabsMovable();
}

void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1) {
	self->subWindowActivated(param1);
}

void QMdiArea_connect_SubWindowActivated(QMdiArea* self, void* slot) {
	QMdiArea::connect(self, static_cast<void (QMdiArea::*)(QMdiSubWindow*)>(&QMdiArea::subWindowActivated), self, [=](QMdiSubWindow* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window) {
	self->setActiveSubWindow(window);
}

void QMdiArea_TileSubWindows(QMdiArea* self) {
	self->tileSubWindows();
}

void QMdiArea_CascadeSubWindows(QMdiArea* self) {
	self->cascadeSubWindows();
}

void QMdiArea_CloseActiveSubWindow(QMdiArea* self) {
	self->closeActiveSubWindow();
}

void QMdiArea_CloseAllSubWindows(QMdiArea* self) {
	self->closeAllSubWindows();
}

void QMdiArea_ActivateNextSubWindow(QMdiArea* self) {
	self->activateNextSubWindow();
}

void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self) {
	self->activatePreviousSubWindow();
}

void QMdiArea_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiArea_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiArea_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiArea_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiArea_Delete(QMdiArea* self) {
	delete self;
}

