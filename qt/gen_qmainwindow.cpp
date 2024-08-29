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
#include <QByteArray>
#include <cstring>
#include <QToolBar>
#include <QWidget>
#include "qmainwindow.h"

#include "gen_qmainwindow.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMainWindow* QMainWindow_new() {
	return new QMainWindow();
}

QMainWindow* QMainWindow_new2(QWidget* parent) {
	return new QMainWindow(parent);
}

QMainWindow* QMainWindow_new3(QWidget* parent, int flags) {
	return new QMainWindow(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QMainWindow_MetaObject(QMainWindow* self) {
	return (QMetaObject*) const_cast<const QMainWindow*>(self)->metaObject();
}

void QMainWindow_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMainWindow_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QMainWindow_IconSize(QMainWindow* self) {
	QSize ret = const_cast<const QMainWindow*>(self)->iconSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QMainWindow_SetIconSize(QMainWindow* self, QSize* iconSize) {
	self->setIconSize(*iconSize);
}

uintptr_t QMainWindow_ToolButtonStyle(QMainWindow* self) {
	Qt::ToolButtonStyle ret = const_cast<const QMainWindow*>(self)->toolButtonStyle();
	return static_cast<uintptr_t>(ret);
}

void QMainWindow_SetToolButtonStyle(QMainWindow* self, uintptr_t toolButtonStyle) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

bool QMainWindow_IsAnimated(QMainWindow* self) {
	return const_cast<const QMainWindow*>(self)->isAnimated();
}

bool QMainWindow_IsDockNestingEnabled(QMainWindow* self) {
	return const_cast<const QMainWindow*>(self)->isDockNestingEnabled();
}

bool QMainWindow_DocumentMode(QMainWindow* self) {
	return const_cast<const QMainWindow*>(self)->documentMode();
}

void QMainWindow_SetDocumentMode(QMainWindow* self, bool enabled) {
	self->setDocumentMode(enabled);
}

uintptr_t QMainWindow_TabShape(QMainWindow* self) {
	QTabWidget::TabShape ret = const_cast<const QMainWindow*>(self)->tabShape();
	return static_cast<uintptr_t>(ret);
}

void QMainWindow_SetTabShape(QMainWindow* self, uintptr_t tabShape) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(tabShape));
}

uintptr_t QMainWindow_TabPosition(QMainWindow* self, uintptr_t area) {
	QTabWidget::TabPosition ret = const_cast<const QMainWindow*>(self)->tabPosition(static_cast<Qt::DockWidgetArea>(area));
	return static_cast<uintptr_t>(ret);
}

void QMainWindow_SetTabPosition(QMainWindow* self, int areas, uintptr_t tabPosition) {
	self->setTabPosition(static_cast<Qt::DockWidgetAreas>(areas), static_cast<QTabWidget::TabPosition>(tabPosition));
}

void QMainWindow_SetDockOptions(QMainWindow* self, int options) {
	self->setDockOptions(static_cast<QMainWindow::DockOptions>(options));
}

int QMainWindow_DockOptions(QMainWindow* self) {
	QMainWindow::DockOptions ret = const_cast<const QMainWindow*>(self)->dockOptions();
	return static_cast<int>(ret);
}

bool QMainWindow_IsSeparator(QMainWindow* self, QPoint* pos) {
	return const_cast<const QMainWindow*>(self)->isSeparator(*pos);
}

QMenuBar* QMainWindow_MenuBar(QMainWindow* self) {
	return const_cast<const QMainWindow*>(self)->menuBar();
}

void QMainWindow_SetMenuBar(QMainWindow* self, QMenuBar* menubar) {
	self->setMenuBar(menubar);
}

QWidget* QMainWindow_MenuWidget(QMainWindow* self) {
	return const_cast<const QMainWindow*>(self)->menuWidget();
}

void QMainWindow_SetMenuWidget(QMainWindow* self, QWidget* menubar) {
	self->setMenuWidget(menubar);
}

QStatusBar* QMainWindow_StatusBar(QMainWindow* self) {
	return const_cast<const QMainWindow*>(self)->statusBar();
}

void QMainWindow_SetStatusBar(QMainWindow* self, QStatusBar* statusbar) {
	self->setStatusBar(statusbar);
}

QWidget* QMainWindow_CentralWidget(QMainWindow* self) {
	return const_cast<const QMainWindow*>(self)->centralWidget();
}

void QMainWindow_SetCentralWidget(QMainWindow* self, QWidget* widget) {
	self->setCentralWidget(widget);
}

QWidget* QMainWindow_TakeCentralWidget(QMainWindow* self) {
	return self->takeCentralWidget();
}

void QMainWindow_SetCorner(QMainWindow* self, uintptr_t corner, uintptr_t area) {
	self->setCorner(static_cast<Qt::Corner>(corner), static_cast<Qt::DockWidgetArea>(area));
}

uintptr_t QMainWindow_Corner(QMainWindow* self, uintptr_t corner) {
	Qt::DockWidgetArea ret = const_cast<const QMainWindow*>(self)->corner(static_cast<Qt::Corner>(corner));
	return static_cast<uintptr_t>(ret);
}

void QMainWindow_AddToolBarBreak(QMainWindow* self) {
	self->addToolBarBreak();
}

void QMainWindow_InsertToolBarBreak(QMainWindow* self, QToolBar* before) {
	self->insertToolBarBreak(before);
}

void QMainWindow_AddToolBar(QMainWindow* self, uintptr_t area, QToolBar* toolbar) {
	self->addToolBar(static_cast<Qt::ToolBarArea>(area), toolbar);
}

void QMainWindow_AddToolBarWithToolbar(QMainWindow* self, QToolBar* toolbar) {
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
	return const_cast<const QMainWindow*>(self)->unifiedTitleAndToolBarOnMac();
}

uintptr_t QMainWindow_ToolBarArea(QMainWindow* self, QToolBar* toolbar) {
	Qt::ToolBarArea ret = const_cast<const QMainWindow*>(self)->toolBarArea(toolbar);
	return static_cast<uintptr_t>(ret);
}

bool QMainWindow_ToolBarBreak(QMainWindow* self, QToolBar* toolbar) {
	return const_cast<const QMainWindow*>(self)->toolBarBreak(toolbar);
}

void QMainWindow_AddDockWidget(QMainWindow* self, uintptr_t area, QDockWidget* dockwidget) {
	self->addDockWidget(static_cast<Qt::DockWidgetArea>(area), dockwidget);
}

void QMainWindow_AddDockWidget2(QMainWindow* self, uintptr_t area, QDockWidget* dockwidget, uintptr_t orientation) {
	self->addDockWidget(static_cast<Qt::DockWidgetArea>(area), dockwidget, static_cast<Qt::Orientation>(orientation));
}

void QMainWindow_SplitDockWidget(QMainWindow* self, QDockWidget* after, QDockWidget* dockwidget, uintptr_t orientation) {
	self->splitDockWidget(after, dockwidget, static_cast<Qt::Orientation>(orientation));
}

void QMainWindow_TabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second) {
	self->tabifyDockWidget(first, second);
}

void QMainWindow_TabifiedDockWidgets(QMainWindow* self, QDockWidget* dockwidget, QDockWidget*** _out, size_t* _out_len) {
	QList<QDockWidget*> ret = const_cast<const QMainWindow*>(self)->tabifiedDockWidgets(dockwidget);
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

uintptr_t QMainWindow_DockWidgetArea(QMainWindow* self, QDockWidget* dockwidget) {
	Qt::DockWidgetArea ret = const_cast<const QMainWindow*>(self)->dockWidgetArea(dockwidget);
	return static_cast<uintptr_t>(ret);
}

void QMainWindow_ResizeDocks(QMainWindow* self, QDockWidget** docks, size_t docks_len, int* sizes, size_t sizes_len, uintptr_t orientation) {
	QList<QDockWidget*> docks_QList;
	docks_QList.reserve(docks_len);
	for(size_t i = 0; i < docks_len; ++i) {
		docks_QList.push_back(docks[i]);
	}
	QList<int> sizes_QList;
	sizes_QList.reserve(sizes_len);
	for(size_t i = 0; i < sizes_len; ++i) {
		sizes_QList.push_back(sizes[i]);
	}
	self->resizeDocks(docks_QList, sizes_QList, static_cast<Qt::Orientation>(orientation));
}

QByteArray* QMainWindow_SaveState(QMainWindow* self) {
	QByteArray ret = const_cast<const QMainWindow*>(self)->saveState();
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

void QMainWindow_ToolButtonStyleChanged(QMainWindow* self, uintptr_t toolButtonStyle) {
	self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QMainWindow_connect_ToolButtonStyleChanged(QMainWindow* self, void* slot) {
	QMainWindow::connect(self, static_cast<void (QMainWindow::*)(Qt::ToolButtonStyle)>(&QMainWindow::toolButtonStyleChanged), self, [=](Qt::ToolButtonStyle toolButtonStyle) {
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

void QMainWindow_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMainWindow_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMainWindow_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMainWindow_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMainWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMainWindow_AddToolBarBreak1(QMainWindow* self, uintptr_t area) {
	self->addToolBarBreak(static_cast<Qt::ToolBarArea>(area));
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

