#include "gen_qmainwindow.h"
#include "qmainwindow.h"

#include <QByteArray>
#include <QDockWidget>
#include <QList>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QMetaObject>
#include <QPoint>
#include <QSize>
#include <QStatusBar>
#include <QString>
#include <QToolBar>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QMainWindow_MetaObject(QMainWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void QMainWindow_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMainWindow_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QMainWindow_IconSize(QMainWindow* self) {
	QSize ret = self->iconSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QMainWindow_SetIconSize(QMainWindow* self, QSize* iconSize) {
	self->setIconSize(*iconSize);
}

bool QMainWindow_IsAnimated(QMainWindow* self) {
	return self->isAnimated();
}

bool QMainWindow_IsDockNestingEnabled(QMainWindow* self) {
	return self->isDockNestingEnabled();
}

bool QMainWindow_DocumentMode(QMainWindow* self) {
	return self->documentMode();
}

void QMainWindow_SetDocumentMode(QMainWindow* self, bool enabled) {
	self->setDocumentMode(enabled);
}

bool QMainWindow_IsSeparator(QMainWindow* self, QPoint* pos) {
	return self->isSeparator(*pos);
}

QMenuBar* QMainWindow_MenuBar(QMainWindow* self) {
	return self->menuBar();
}

void QMainWindow_SetMenuBar(QMainWindow* self, QMenuBar* menubar) {
	self->setMenuBar(menubar);
}

QWidget* QMainWindow_MenuWidget(QMainWindow* self) {
	return self->menuWidget();
}

void QMainWindow_SetMenuWidget(QMainWindow* self, QWidget* menubar) {
	self->setMenuWidget(menubar);
}

QStatusBar* QMainWindow_StatusBar(QMainWindow* self) {
	return self->statusBar();
}

void QMainWindow_SetStatusBar(QMainWindow* self, QStatusBar* statusbar) {
	self->setStatusBar(statusbar);
}

QWidget* QMainWindow_CentralWidget(QMainWindow* self) {
	return self->centralWidget();
}

void QMainWindow_SetCentralWidget(QMainWindow* self, QWidget* widget) {
	self->setCentralWidget(widget);
}

QWidget* QMainWindow_TakeCentralWidget(QMainWindow* self) {
	return self->takeCentralWidget();
}

void QMainWindow_InsertToolBarBreak(QMainWindow* self, QToolBar* before) {
	self->insertToolBarBreak(before);
}

void QMainWindow_AddToolBar(QMainWindow* self, QToolBar* toolbar) {
	self->addToolBar(toolbar);
}

QToolBar* QMainWindow_AddToolBarWithTitle(QMainWindow* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return self->addToolBar(title_QString);
}

void QMainWindow_InsertToolBar(QMainWindow* self, QToolBar* before, QToolBar* toolbar) {
	self->insertToolBar(before, toolbar);
}

void QMainWindow_RemoveToolBar(QMainWindow* self, QToolBar* toolbar) {
	self->removeToolBar(toolbar);
}

void QMainWindow_RemoveToolBarBreak(QMainWindow* self, QToolBar* before) {
	self->removeToolBarBreak(before);
}

bool QMainWindow_UnifiedTitleAndToolBarOnMac(QMainWindow* self) {
	return self->unifiedTitleAndToolBarOnMac();
}

bool QMainWindow_ToolBarBreak(QMainWindow* self, QToolBar* toolbar) {
	return self->toolBarBreak(toolbar);
}

void QMainWindow_TabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second) {
	self->tabifyDockWidget(first, second);
}

void QMainWindow_TabifiedDockWidgets(QMainWindow* self, QDockWidget* dockwidget, QDockWidget*** _out, size_t* _out_len) {
	QList<QDockWidget *> ret = self->tabifiedDockWidgets(dockwidget);
	// Convert QList<> from C++ memory to manually-managed C memory
	QDockWidget** __out = static_cast<QDockWidget**>(malloc(sizeof(QDockWidget*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QMainWindow_RemoveDockWidget(QMainWindow* self, QDockWidget* dockwidget) {
	self->removeDockWidget(dockwidget);
}

bool QMainWindow_RestoreDockWidget(QMainWindow* self, QDockWidget* dockwidget) {
	return self->restoreDockWidget(dockwidget);
}

QByteArray* QMainWindow_SaveState(QMainWindow* self) {
	QByteArray ret = self->saveState();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

bool QMainWindow_RestoreState(QMainWindow* self, QByteArray* state) {
	return self->restoreState(*state);
}

QMenu* QMainWindow_CreatePopupMenu(QMainWindow* self) {
	return self->createPopupMenu();
}

void QMainWindow_SetAnimated(QMainWindow* self, bool enabled) {
	self->setAnimated(enabled);
}

void QMainWindow_SetDockNestingEnabled(QMainWindow* self, bool enabled) {
	self->setDockNestingEnabled(enabled);
}

void QMainWindow_SetUnifiedTitleAndToolBarOnMac(QMainWindow* self, bool set) {
	self->setUnifiedTitleAndToolBarOnMac(set);
}

void QMainWindow_IconSizeChanged(QMainWindow* self, QSize* iconSize) {
	self->iconSizeChanged(*iconSize);
}

void QMainWindow_connect_IconSizeChanged(QMainWindow* self, void* slot) {
	QMainWindow::connect(self, static_cast<void (QMainWindow::*)(const QSize&)>(&QMainWindow::iconSizeChanged), self, [=](const QSize& iconSize) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMainWindow_TabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget) {
	self->tabifiedDockWidgetActivated(dockWidget);
}

void QMainWindow_connect_TabifiedDockWidgetActivated(QMainWindow* self, void* slot) {
	QMainWindow::connect(self, static_cast<void (QMainWindow::*)(QDockWidget*)>(&QMainWindow::tabifiedDockWidgetActivated), self, [=](QDockWidget* dockWidget) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMainWindow_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMainWindow_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMainWindow_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMainWindow_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QMainWindow_SaveState1(QMainWindow* self, int version) {
	QByteArray ret = self->saveState(static_cast<int>(version));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

bool QMainWindow_RestoreState2(QMainWindow* self, QByteArray* state, int version) {
	return self->restoreState(*state, static_cast<int>(version));
}

void QMainWindow_Delete(QMainWindow* self) {
	delete self;
}

