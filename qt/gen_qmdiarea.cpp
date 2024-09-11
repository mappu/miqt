#include <QBrush>
#include <QList>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qmdiarea.h"

#include "gen_qmdiarea.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMdiArea* QMdiArea_new() {
	return new QMdiArea();
}

QMdiArea* QMdiArea_new2(QWidget* parent) {
	return new QMdiArea(parent);
}

QMetaObject* QMdiArea_MetaObject(const QMdiArea* self) {
	return (QMetaObject*) self->metaObject();
}

void QMdiArea_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiArea_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QMdiArea_SizeHint(const QMdiArea* self) {
	QSize ret = self->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self) {
	QSize ret = self->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QMdiSubWindow* QMdiArea_CurrentSubWindow(const QMdiArea* self) {
	return self->currentSubWindow();
}

QMdiSubWindow* QMdiArea_ActiveSubWindow(const QMdiArea* self) {
	return self->activeSubWindow();
}

void QMdiArea_SubWindowList(const QMdiArea* self, QMdiSubWindow*** _out, size_t* _out_len) {
	QList<QMdiSubWindow*> ret = self->subWindowList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMdiSubWindow** __out = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget) {
	return self->addSubWindow(widget);
}

void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget) {
	self->removeSubWindow(widget);
}

QBrush* QMdiArea_Background(const QMdiArea* self) {
	QBrush ret = self->background();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBrush*>(new QBrush(ret));
}

void QMdiArea_SetBackground(QMdiArea* self, QBrush* background) {
	self->setBackground(*background);
}

uintptr_t QMdiArea_ActivationOrder(const QMdiArea* self) {
	QMdiArea::WindowOrder ret = self->activationOrder();
	return static_cast<uintptr_t>(ret);
}

void QMdiArea_SetActivationOrder(QMdiArea* self, uintptr_t order) {
	self->setActivationOrder(static_cast<QMdiArea::WindowOrder>(order));
}

void QMdiArea_SetOption(QMdiArea* self, uintptr_t option) {
	self->setOption(static_cast<QMdiArea::AreaOption>(option));
}

bool QMdiArea_TestOption(const QMdiArea* self, uintptr_t opton) {
	return self->testOption(static_cast<QMdiArea::AreaOption>(opton));
}

void QMdiArea_SetViewMode(QMdiArea* self, uintptr_t mode) {
	self->setViewMode(static_cast<QMdiArea::ViewMode>(mode));
}

uintptr_t QMdiArea_ViewMode(const QMdiArea* self) {
	QMdiArea::ViewMode ret = self->viewMode();
	return static_cast<uintptr_t>(ret);
}

bool QMdiArea_DocumentMode(const QMdiArea* self) {
	return self->documentMode();
}

void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled) {
	self->setDocumentMode(enabled);
}

void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable) {
	self->setTabsClosable(closable);
}

bool QMdiArea_TabsClosable(const QMdiArea* self) {
	return self->tabsClosable();
}

void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable) {
	self->setTabsMovable(movable);
}

bool QMdiArea_TabsMovable(const QMdiArea* self) {
	return self->tabsMovable();
}

void QMdiArea_SetTabShape(QMdiArea* self, uintptr_t shape) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(shape));
}

uintptr_t QMdiArea_TabShape(const QMdiArea* self) {
	QTabWidget::TabShape ret = self->tabShape();
	return static_cast<uintptr_t>(ret);
}

void QMdiArea_SetTabPosition(QMdiArea* self, uintptr_t position) {
	self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

uintptr_t QMdiArea_TabPosition(const QMdiArea* self) {
	QTabWidget::TabPosition ret = self->tabPosition();
	return static_cast<uintptr_t>(ret);
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

void QMdiArea_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiArea_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiArea_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiArea_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMdiArea::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMdiArea_SubWindowList1(const QMdiArea* self, uintptr_t order, QMdiSubWindow*** _out, size_t* _out_len) {
	QList<QMdiSubWindow*> ret = self->subWindowList(static_cast<QMdiArea::WindowOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QMdiSubWindow** __out = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags) {
	return self->addSubWindow(widget, static_cast<Qt::WindowFlags>(flags));
}

void QMdiArea_SetOption2(QMdiArea* self, uintptr_t option, bool on) {
	self->setOption(static_cast<QMdiArea::AreaOption>(option), on);
}

void QMdiArea_Delete(QMdiArea* self) {
	delete self;
}

