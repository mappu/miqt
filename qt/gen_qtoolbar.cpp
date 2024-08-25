#include "gen_qtoolbar.h"
#include "qtoolbar.h"

#include <QAction>
#include <QIcon>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QToolBar>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QToolBar* QToolBar_new(const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QToolBar(title_QString);
}

QToolBar* QToolBar_new2() {
	return new QToolBar();
}

QToolBar* QToolBar_new3(const char* title, size_t title_Strlen, QWidget* parent) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return new QToolBar(title_QString, parent);
}

QToolBar* QToolBar_new4(QWidget* parent) {
	return new QToolBar(parent);
}

QMetaObject* QToolBar_MetaObject(QToolBar* self) {
	return (QMetaObject*) self->metaObject();
}

void QToolBar_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_SetMovable(QToolBar* self, bool movable) {
	self->setMovable(movable);
}

bool QToolBar_IsMovable(QToolBar* self) {
	return self->isMovable();
}

void QToolBar_Clear(QToolBar* self) {
	self->clear();
}

QAction* QToolBar_AddAction(QToolBar* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addAction(text_QString);
}

QAction* QToolBar_AddAction2(QToolBar* self, QIcon* icon, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addAction(*icon, text_QString);
}

QAction* QToolBar_AddSeparator(QToolBar* self) {
	return self->addSeparator();
}

QAction* QToolBar_InsertSeparator(QToolBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QToolBar_AddWidget(QToolBar* self, QWidget* widget) {
	return self->addWidget(widget);
}

QAction* QToolBar_InsertWidget(QToolBar* self, QAction* before, QWidget* widget) {
	return self->insertWidget(before, widget);
}

QRect* QToolBar_ActionGeometry(QToolBar* self, QAction* action) {
	QRect ret = self->actionGeometry(action);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QAction* QToolBar_ActionAt(QToolBar* self, QPoint* p) {
	return self->actionAt(*p);
}

QAction* QToolBar_ActionAt2(QToolBar* self, int x, int y) {
	return self->actionAt(static_cast<int>(x), static_cast<int>(y));
}

QAction* QToolBar_ToggleViewAction(QToolBar* self) {
	return self->toggleViewAction();
}

QSize* QToolBar_IconSize(QToolBar* self) {
	QSize ret = self->iconSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QWidget* QToolBar_WidgetForAction(QToolBar* self, QAction* action) {
	return self->widgetForAction(action);
}

bool QToolBar_IsFloatable(QToolBar* self) {
	return self->isFloatable();
}

void QToolBar_SetFloatable(QToolBar* self, bool floatable) {
	self->setFloatable(floatable);
}

bool QToolBar_IsFloating(QToolBar* self) {
	return self->isFloating();
}

void QToolBar_SetIconSize(QToolBar* self, QSize* iconSize) {
	self->setIconSize(*iconSize);
}

void QToolBar_ActionTriggered(QToolBar* self, QAction* action) {
	self->actionTriggered(action);
}

void QToolBar_connect_ActionTriggered(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(QAction*)>(&QToolBar::actionTriggered), self, [=](QAction* action) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_MovableChanged(QToolBar* self, bool movable) {
	self->movableChanged(movable);
}

void QToolBar_connect_MovableChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::movableChanged), self, [=](bool movable) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_IconSizeChanged(QToolBar* self, QSize* iconSize) {
	self->iconSizeChanged(*iconSize);
}

void QToolBar_connect_IconSizeChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(const QSize&)>(&QToolBar::iconSizeChanged), self, [=](const QSize& iconSize) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_TopLevelChanged(QToolBar* self, bool topLevel) {
	self->topLevelChanged(topLevel);
}

void QToolBar_connect_TopLevelChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::topLevelChanged), self, [=](bool topLevel) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_VisibilityChanged(QToolBar* self, bool visible) {
	self->visibilityChanged(visible);
}

void QToolBar_connect_VisibilityChanged(QToolBar* self, void* slot) {
	QToolBar::connect(self, static_cast<void (QToolBar::*)(bool)>(&QToolBar::visibilityChanged), self, [=](bool visible) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolBar_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QToolBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolBar_Delete(QToolBar* self) {
	delete self;
}

