#include <QColor>
#include <QIcon>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabBar>
#include <QVariant>
#include <QWidget>
#include "qtabbar.h"

#include "gen_qtabbar.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTabBar* QTabBar_new() {
	return new QTabBar();
}

QTabBar* QTabBar_new2(QWidget* parent) {
	return new QTabBar(parent);
}

QMetaObject* QTabBar_MetaObject(QTabBar* self) {
	return (QMetaObject*) const_cast<const QTabBar*>(self)->metaObject();
}

void QTabBar_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTabBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTabBar_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QTabBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QTabBar_Shape(QTabBar* self) {
	QTabBar::Shape ret = const_cast<const QTabBar*>(self)->shape();
	return static_cast<uintptr_t>(ret);
}

void QTabBar_SetShape(QTabBar* self, uintptr_t shape) {
	self->setShape(static_cast<QTabBar::Shape>(shape));
}

int QTabBar_AddTab(QTabBar* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addTab(text_QString);
}

int QTabBar_AddTab2(QTabBar* self, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addTab(*icon, text_QString);
}

int QTabBar_InsertTab(QTabBar* self, int index, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->insertTab(static_cast<int>(index), text_QString);
}

int QTabBar_InsertTab2(QTabBar* self, int index, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->insertTab(static_cast<int>(index), *icon, text_QString);
}

void QTabBar_RemoveTab(QTabBar* self, int index) {
	self->removeTab(static_cast<int>(index));
}

void QTabBar_MoveTab(QTabBar* self, int from, int to) {
	self->moveTab(static_cast<int>(from), static_cast<int>(to));
}

bool QTabBar_IsTabEnabled(QTabBar* self, int index) {
	return const_cast<const QTabBar*>(self)->isTabEnabled(static_cast<int>(index));
}

void QTabBar_SetTabEnabled(QTabBar* self, int index, bool enabled) {
	self->setTabEnabled(static_cast<int>(index), enabled);
}

bool QTabBar_IsTabVisible(QTabBar* self, int index) {
	return const_cast<const QTabBar*>(self)->isTabVisible(static_cast<int>(index));
}

void QTabBar_SetTabVisible(QTabBar* self, int index, bool visible) {
	self->setTabVisible(static_cast<int>(index), visible);
}

void QTabBar_TabText(QTabBar* self, int index, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTabBar*>(self)->tabText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTabBar_SetTabText(QTabBar* self, int index, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setTabText(static_cast<int>(index), text_QString);
}

QColor* QTabBar_TabTextColor(QTabBar* self, int index) {
	QColor ret = const_cast<const QTabBar*>(self)->tabTextColor(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QTabBar_SetTabTextColor(QTabBar* self, int index, QColor* color) {
	self->setTabTextColor(static_cast<int>(index), *color);
}

QIcon* QTabBar_TabIcon(QTabBar* self, int index) {
	QIcon ret = const_cast<const QTabBar*>(self)->tabIcon(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QTabBar_SetTabIcon(QTabBar* self, int index, QIcon* icon) {
	self->setTabIcon(static_cast<int>(index), *icon);
}

uintptr_t QTabBar_ElideMode(QTabBar* self) {
	Qt::TextElideMode ret = const_cast<const QTabBar*>(self)->elideMode();
	return static_cast<uintptr_t>(ret);
}

void QTabBar_SetElideMode(QTabBar* self, uintptr_t mode) {
	self->setElideMode(static_cast<Qt::TextElideMode>(mode));
}

void QTabBar_SetTabToolTip(QTabBar* self, int index, const char* tip, size_t tip_Strlen) {
	QString tip_QString = QString::fromUtf8(tip, tip_Strlen);
	self->setTabToolTip(static_cast<int>(index), tip_QString);
}

void QTabBar_TabToolTip(QTabBar* self, int index, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTabBar*>(self)->tabToolTip(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTabBar_SetTabWhatsThis(QTabBar* self, int index, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setTabWhatsThis(static_cast<int>(index), text_QString);
}

void QTabBar_TabWhatsThis(QTabBar* self, int index, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTabBar*>(self)->tabWhatsThis(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTabBar_SetTabData(QTabBar* self, int index, QVariant* data) {
	self->setTabData(static_cast<int>(index), *data);
}

QVariant* QTabBar_TabData(QTabBar* self, int index) {
	QVariant ret = const_cast<const QTabBar*>(self)->tabData(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QVariant*>(new QVariant(ret));
}

QRect* QTabBar_TabRect(QTabBar* self, int index) {
	QRect ret = const_cast<const QTabBar*>(self)->tabRect(static_cast<int>(index));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QTabBar_TabAt(QTabBar* self, QPoint* pos) {
	return const_cast<const QTabBar*>(self)->tabAt(*pos);
}

int QTabBar_CurrentIndex(QTabBar* self) {
	return const_cast<const QTabBar*>(self)->currentIndex();
}

int QTabBar_Count(QTabBar* self) {
	return const_cast<const QTabBar*>(self)->count();
}

QSize* QTabBar_SizeHint(QTabBar* self) {
	QSize ret = const_cast<const QTabBar*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QTabBar_MinimumSizeHint(QTabBar* self) {
	QSize ret = const_cast<const QTabBar*>(self)->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QTabBar_SetDrawBase(QTabBar* self, bool drawTheBase) {
	self->setDrawBase(drawTheBase);
}

bool QTabBar_DrawBase(QTabBar* self) {
	return const_cast<const QTabBar*>(self)->drawBase();
}

QSize* QTabBar_IconSize(QTabBar* self) {
	QSize ret = const_cast<const QTabBar*>(self)->iconSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

void QTabBar_SetIconSize(QTabBar* self, QSize* size) {
	self->setIconSize(*size);
}

bool QTabBar_UsesScrollButtons(QTabBar* self) {
	return const_cast<const QTabBar*>(self)->usesScrollButtons();
}

void QTabBar_SetUsesScrollButtons(QTabBar* self, bool useButtons) {
	self->setUsesScrollButtons(useButtons);
}

bool QTabBar_TabsClosable(QTabBar* self) {
	return const_cast<const QTabBar*>(self)->tabsClosable();
}

void QTabBar_SetTabsClosable(QTabBar* self, bool closable) {
	self->setTabsClosable(closable);
}

void QTabBar_SetTabButton(QTabBar* self, int index, uintptr_t position, QWidget* widget) {
	self->setTabButton(static_cast<int>(index), static_cast<QTabBar::ButtonPosition>(position), widget);
}

QWidget* QTabBar_TabButton(QTabBar* self, int index, uintptr_t position) {
	return const_cast<const QTabBar*>(self)->tabButton(static_cast<int>(index), static_cast<QTabBar::ButtonPosition>(position));
}

uintptr_t QTabBar_SelectionBehaviorOnRemove(QTabBar* self) {
	QTabBar::SelectionBehavior ret = const_cast<const QTabBar*>(self)->selectionBehaviorOnRemove();
	return static_cast<uintptr_t>(ret);
}

void QTabBar_SetSelectionBehaviorOnRemove(QTabBar* self, uintptr_t behavior) {
	self->setSelectionBehaviorOnRemove(static_cast<QTabBar::SelectionBehavior>(behavior));
}

bool QTabBar_Expanding(QTabBar* self) {
	return const_cast<const QTabBar*>(self)->expanding();
}

void QTabBar_SetExpanding(QTabBar* self, bool enabled) {
	self->setExpanding(enabled);
}

bool QTabBar_IsMovable(QTabBar* self) {
	return const_cast<const QTabBar*>(self)->isMovable();
}

void QTabBar_SetMovable(QTabBar* self, bool movable) {
	self->setMovable(movable);
}

bool QTabBar_DocumentMode(QTabBar* self) {
	return const_cast<const QTabBar*>(self)->documentMode();
}

void QTabBar_SetDocumentMode(QTabBar* self, bool set) {
	self->setDocumentMode(set);
}

bool QTabBar_AutoHide(QTabBar* self) {
	return const_cast<const QTabBar*>(self)->autoHide();
}

void QTabBar_SetAutoHide(QTabBar* self, bool hide) {
	self->setAutoHide(hide);
}

bool QTabBar_ChangeCurrentOnDrag(QTabBar* self) {
	return const_cast<const QTabBar*>(self)->changeCurrentOnDrag();
}

void QTabBar_SetChangeCurrentOnDrag(QTabBar* self, bool change) {
	self->setChangeCurrentOnDrag(change);
}

void QTabBar_AccessibleTabName(QTabBar* self, int index, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTabBar*>(self)->accessibleTabName(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTabBar_SetAccessibleTabName(QTabBar* self, int index, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->setAccessibleTabName(static_cast<int>(index), name_QString);
}

void QTabBar_SetCurrentIndex(QTabBar* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QTabBar_CurrentChanged(QTabBar* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void QTabBar_connect_CurrentChanged(QTabBar* self, void* slot) {
	QTabBar::connect(self, static_cast<void (QTabBar::*)(int)>(&QTabBar::currentChanged), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTabBar_TabCloseRequested(QTabBar* self, int index) {
	self->tabCloseRequested(static_cast<int>(index));
}

void QTabBar_connect_TabCloseRequested(QTabBar* self, void* slot) {
	QTabBar::connect(self, static_cast<void (QTabBar::*)(int)>(&QTabBar::tabCloseRequested), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTabBar_TabMoved(QTabBar* self, int from, int to) {
	self->tabMoved(static_cast<int>(from), static_cast<int>(to));
}

void QTabBar_connect_TabMoved(QTabBar* self, void* slot) {
	QTabBar::connect(self, static_cast<void (QTabBar::*)(int, int)>(&QTabBar::tabMoved), self, [=](int from, int to) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTabBar_TabBarClicked(QTabBar* self, int index) {
	self->tabBarClicked(static_cast<int>(index));
}

void QTabBar_connect_TabBarClicked(QTabBar* self, void* slot) {
	QTabBar::connect(self, static_cast<void (QTabBar::*)(int)>(&QTabBar::tabBarClicked), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTabBar_TabBarDoubleClicked(QTabBar* self, int index) {
	self->tabBarDoubleClicked(static_cast<int>(index));
}

void QTabBar_connect_TabBarDoubleClicked(QTabBar* self, void* slot) {
	QTabBar::connect(self, static_cast<void (QTabBar::*)(int)>(&QTabBar::tabBarDoubleClicked), self, [=](int index) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QTabBar_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTabBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTabBar_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTabBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTabBar_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QTabBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTabBar_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTabBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTabBar_Delete(QTabBar* self) {
	delete self;
}

