#include <QAction>
#include <QIcon>
#include <QMenu>
#include <QMenuBar>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qmenubar.h>
#include "gen_qmenubar.h"
#include "_cgo_export.h"

QMenuBar* QMenuBar_new(QWidget* parent) {
	return new QMenuBar(parent);
}

QMenuBar* QMenuBar_new2() {
	return new QMenuBar();
}

QMetaObject* QMenuBar_MetaObject(const QMenuBar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMenuBar_Metacast(QMenuBar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMenuBar_Tr(const char* s) {
	QString _ret = QMenuBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenuBar_AddMenuWithTitle(QMenuBar* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(title_QString);
}

QMenu* QMenuBar_AddMenu2(QMenuBar* self, QIcon* icon, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return self->addMenu(*icon, title_QString);
}

QAction* QMenuBar_AddSeparator(QMenuBar* self) {
	return self->addSeparator();
}

QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

void QMenuBar_Clear(QMenuBar* self) {
	self->clear();
}

QAction* QMenuBar_ActiveAction(const QMenuBar* self) {
	return self->activeAction();
}

void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action) {
	self->setActiveAction(action);
}

void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp) {
	self->setDefaultUp(defaultUp);
}

bool QMenuBar_IsDefaultUp(const QMenuBar* self) {
	return self->isDefaultUp();
}

QSize* QMenuBar_SizeHint(const QMenuBar* self) {
	return new QSize(self->sizeHint());
}

QSize* QMenuBar_MinimumSizeHint(const QMenuBar* self) {
	return new QSize(self->minimumSizeHint());
}

int QMenuBar_HeightForWidth(const QMenuBar* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

QRect* QMenuBar_ActionGeometry(const QMenuBar* self, QAction* param1) {
	return new QRect(self->actionGeometry(param1));
}

QAction* QMenuBar_ActionAt(const QMenuBar* self, QPoint* param1) {
	return self->actionAt(*param1);
}

void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w) {
	self->setCornerWidget(w);
}

QWidget* QMenuBar_CornerWidget(const QMenuBar* self) {
	return self->cornerWidget();
}

bool QMenuBar_IsNativeMenuBar(const QMenuBar* self) {
	return self->isNativeMenuBar();
}

void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar) {
	self->setNativeMenuBar(nativeMenuBar);
}

void QMenuBar_SetVisible(QMenuBar* self, bool visible) {
	self->setVisible(visible);
}

void QMenuBar_Triggered(QMenuBar* self, QAction* action) {
	self->triggered(action);
}

void QMenuBar_connect_Triggered(QMenuBar* self, intptr_t slot) {
	QMenuBar::connect(self, static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::triggered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenuBar_Triggered(slot, sigval1);
	});
}

void QMenuBar_Hovered(QMenuBar* self, QAction* action) {
	self->hovered(action);
}

void QMenuBar_connect_Hovered(QMenuBar* self, intptr_t slot) {
	QMenuBar::connect(self, static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::hovered), self, [=](QAction* action) {
		QAction* sigval1 = action;
		miqt_exec_callback_QMenuBar_Hovered(slot, sigval1);
	});
}

struct miqt_string QMenuBar_Tr2(const char* s, const char* c) {
	QString _ret = QMenuBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMenuBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMenuBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, int corner) {
	self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QMenuBar_CornerWidget1(const QMenuBar* self, int corner) {
	return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

void QMenuBar_Delete(QMenuBar* self) {
	delete self;
}

