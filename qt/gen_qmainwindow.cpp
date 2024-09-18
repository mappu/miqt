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
#include "_cgo_export.h"

QMainWindow* QMainWindow_new() {
	return new QMainWindow();
}

QMainWindow* QMainWindow_new2(QWidget* parent) {
	return new QMainWindow(parent);
}

QMainWindow* QMainWindow_new3(QWidget* parent, int flags) {
	return new QMainWindow(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QMainWindow_MetaObject(const QMainWindow* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QMainWindow_Tr(const char* s) {
	QString _ret = QMainWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMainWindow_TrUtf8(const char* s) {
	QString _ret = QMainWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QSize* QMainWindow_IconSize(const QMainWindow* self) {
	return new QSize(self->iconSize());
}

void QMainWindow_SetIconSize(QMainWindow* self, QSize* iconSize) {
	self->setIconSize(*iconSize);
}

int QMainWindow_ToolButtonStyle(const QMainWindow* self) {
	Qt::ToolButtonStyle _ret = self->toolButtonStyle();
	return static_cast<int>(_ret);
}

void QMainWindow_SetToolButtonStyle(QMainWindow* self, int toolButtonStyle) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

bool QMainWindow_IsAnimated(const QMainWindow* self) {
	return self->isAnimated();
}

bool QMainWindow_IsDockNestingEnabled(const QMainWindow* self) {
	return self->isDockNestingEnabled();
}

bool QMainWindow_DocumentMode(const QMainWindow* self) {
	return self->documentMode();
}

void QMainWindow_SetDocumentMode(QMainWindow* self, bool enabled) {
	self->setDocumentMode(enabled);
}

int QMainWindow_TabShape(const QMainWindow* self) {
	QTabWidget::TabShape _ret = self->tabShape();
	return static_cast<int>(_ret);
}

void QMainWindow_SetTabShape(QMainWindow* self, int tabShape) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(tabShape));
}

int QMainWindow_TabPosition(const QMainWindow* self, int area) {
	QTabWidget::TabPosition _ret = self->tabPosition(static_cast<Qt::DockWidgetArea>(area));
	return static_cast<int>(_ret);
}

void QMainWindow_SetTabPosition(QMainWindow* self, int areas, int tabPosition) {
	self->setTabPosition(static_cast<Qt::DockWidgetAreas>(areas), static_cast<QTabWidget::TabPosition>(tabPosition));
}

void QMainWindow_SetDockOptions(QMainWindow* self, int options) {
	self->setDockOptions(static_cast<QMainWindow::DockOptions>(options));
}

int QMainWindow_DockOptions(const QMainWindow* self) {
	QMainWindow::DockOptions _ret = self->dockOptions();
	return static_cast<int>(_ret);
}

bool QMainWindow_IsSeparator(const QMainWindow* self, QPoint* pos) {
	return self->isSeparator(*pos);
}

QMenuBar* QMainWindow_MenuBar(const QMainWindow* self) {
	return self->menuBar();
}

void QMainWindow_SetMenuBar(QMainWindow* self, QMenuBar* menubar) {
	self->setMenuBar(menubar);
}

QWidget* QMainWindow_MenuWidget(const QMainWindow* self) {
	return self->menuWidget();
}

void QMainWindow_SetMenuWidget(QMainWindow* self, QWidget* menubar) {
	self->setMenuWidget(menubar);
}

QStatusBar* QMainWindow_StatusBar(const QMainWindow* self) {
	return self->statusBar();
}

void QMainWindow_SetStatusBar(QMainWindow* self, QStatusBar* statusbar) {
	self->setStatusBar(statusbar);
}

QWidget* QMainWindow_CentralWidget(const QMainWindow* self) {
	return self->centralWidget();
}

void QMainWindow_SetCentralWidget(QMainWindow* self, QWidget* widget) {
	self->setCentralWidget(widget);
}

QWidget* QMainWindow_TakeCentralWidget(QMainWindow* self) {
	return self->takeCentralWidget();
}

void QMainWindow_SetCorner(QMainWindow* self, int corner, int area) {
	self->setCorner(static_cast<Qt::Corner>(corner), static_cast<Qt::DockWidgetArea>(area));
}

int QMainWindow_Corner(const QMainWindow* self, int corner) {
	Qt::DockWidgetArea _ret = self->corner(static_cast<Qt::Corner>(corner));
	return static_cast<int>(_ret);
}

void QMainWindow_AddToolBarBreak(QMainWindow* self) {
	self->addToolBarBreak();
}

void QMainWindow_InsertToolBarBreak(QMainWindow* self, QToolBar* before) {
	self->insertToolBarBreak(before);
}

void QMainWindow_AddToolBar(QMainWindow* self, int area, QToolBar* toolbar) {
	self->addToolBar(static_cast<Qt::ToolBarArea>(area), toolbar);
}

void QMainWindow_AddToolBarWithToolbar(QMainWindow* self, QToolBar* toolbar) {
	self->addToolBar(toolbar);
}

QToolBar* QMainWindow_AddToolBarWithTitle(QMainWindow* self, struct miqt_string* title) {
	QString title_QString = QString::fromUtf8(&title->data, title->len);
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

bool QMainWindow_UnifiedTitleAndToolBarOnMac(const QMainWindow* self) {
	return self->unifiedTitleAndToolBarOnMac();
}

int QMainWindow_ToolBarArea(const QMainWindow* self, QToolBar* toolbar) {
	Qt::ToolBarArea _ret = self->toolBarArea(toolbar);
	return static_cast<int>(_ret);
}

bool QMainWindow_ToolBarBreak(const QMainWindow* self, QToolBar* toolbar) {
	return self->toolBarBreak(toolbar);
}

void QMainWindow_AddDockWidget(QMainWindow* self, int area, QDockWidget* dockwidget) {
	self->addDockWidget(static_cast<Qt::DockWidgetArea>(area), dockwidget);
}

void QMainWindow_AddDockWidget2(QMainWindow* self, int area, QDockWidget* dockwidget, int orientation) {
	self->addDockWidget(static_cast<Qt::DockWidgetArea>(area), dockwidget, static_cast<Qt::Orientation>(orientation));
}

void QMainWindow_SplitDockWidget(QMainWindow* self, QDockWidget* after, QDockWidget* dockwidget, int orientation) {
	self->splitDockWidget(after, dockwidget, static_cast<Qt::Orientation>(orientation));
}

void QMainWindow_TabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second) {
	self->tabifyDockWidget(first, second);
}

struct miqt_array* QMainWindow_TabifiedDockWidgets(const QMainWindow* self, QDockWidget* dockwidget) {
	QList<QDockWidget *> _ret = self->tabifiedDockWidgets(dockwidget);
	// Convert QList<> from C++ memory to manually-managed C memory
	QDockWidget** _arr = static_cast<QDockWidget**>(malloc(sizeof(QDockWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QMainWindow_RemoveDockWidget(QMainWindow* self, QDockWidget* dockwidget) {
	self->removeDockWidget(dockwidget);
}

bool QMainWindow_RestoreDockWidget(QMainWindow* self, QDockWidget* dockwidget) {
	return self->restoreDockWidget(dockwidget);
}

int QMainWindow_DockWidgetArea(const QMainWindow* self, QDockWidget* dockwidget) {
	Qt::DockWidgetArea _ret = self->dockWidgetArea(dockwidget);
	return static_cast<int>(_ret);
}

void QMainWindow_ResizeDocks(QMainWindow* self, struct miqt_array* /* of QDockWidget* */ docks, struct miqt_array* /* of int */ sizes, int orientation) {
	QList<QDockWidget*> docks_QList;
	docks_QList.reserve(docks->len);
	QDockWidget** docks_arr = static_cast<QDockWidget**>(docks->data);
	for(size_t i = 0; i < docks->len; ++i) {
		docks_QList.push_back(docks_arr[i]);
	}
	QList<int> sizes_QList;
	sizes_QList.reserve(sizes->len);
	int* sizes_arr = static_cast<int*>(sizes->data);
	for(size_t i = 0; i < sizes->len; ++i) {
		sizes_QList.push_back(static_cast<int>(sizes_arr[i]));
	}
	self->resizeDocks(docks_QList, sizes_QList, static_cast<Qt::Orientation>(orientation));
}

QByteArray* QMainWindow_SaveState(const QMainWindow* self) {
	return new QByteArray(self->saveState());
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
		const QSize& iconSize_ret = iconSize;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&iconSize_ret);
		miqt_exec_callback_QMainWindow_IconSizeChanged(slot, sigval1);
	});
}

void QMainWindow_ToolButtonStyleChanged(QMainWindow* self, int toolButtonStyle) {
	self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QMainWindow_connect_ToolButtonStyleChanged(QMainWindow* self, void* slot) {
	QMainWindow::connect(self, static_cast<void (QMainWindow::*)(Qt::ToolButtonStyle)>(&QMainWindow::toolButtonStyleChanged), self, [=](Qt::ToolButtonStyle toolButtonStyle) {
		Qt::ToolButtonStyle toolButtonStyle_ret = toolButtonStyle;
		int sigval1 = static_cast<int>(toolButtonStyle_ret);
		miqt_exec_callback_QMainWindow_ToolButtonStyleChanged(slot, sigval1);
	});
}

void QMainWindow_TabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget) {
	self->tabifiedDockWidgetActivated(dockWidget);
}

void QMainWindow_connect_TabifiedDockWidgetActivated(QMainWindow* self, void* slot) {
	QMainWindow::connect(self, static_cast<void (QMainWindow::*)(QDockWidget*)>(&QMainWindow::tabifiedDockWidgetActivated), self, [=](QDockWidget* dockWidget) {
		QDockWidget* sigval1 = dockWidget;
		miqt_exec_callback_QMainWindow_TabifiedDockWidgetActivated(slot, sigval1);
	});
}

struct miqt_string* QMainWindow_Tr2(const char* s, const char* c) {
	QString _ret = QMainWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMainWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMainWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMainWindow_TrUtf82(const char* s, const char* c) {
	QString _ret = QMainWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMainWindow_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMainWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QMainWindow_AddToolBarBreak1(QMainWindow* self, int area) {
	self->addToolBarBreak(static_cast<Qt::ToolBarArea>(area));
}

QByteArray* QMainWindow_SaveState1(const QMainWindow* self, int version) {
	return new QByteArray(self->saveState(static_cast<int>(version)));
}

bool QMainWindow_RestoreState2(QMainWindow* self, QByteArray* state, int version) {
	return self->restoreState(*state, static_cast<int>(version));
}

void QMainWindow_Delete(QMainWindow* self) {
	delete self;
}

