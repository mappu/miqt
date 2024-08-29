#include <QAction>
#include <QMenu>
#include <QMetaObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QToolButton>
#include <QWidget>
#include "qtoolbutton.h"

#include "gen_qtoolbutton.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QToolButton* QToolButton_new() {
	return new QToolButton();
}

QToolButton* QToolButton_new2(QWidget* parent) {
	return new QToolButton(parent);
}

QMetaObject* QToolButton_MetaObject(QToolButton* self) {
	return (QMetaObject*) const_cast<const QToolButton*>(self)->metaObject();
}

void QToolButton_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QToolButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolButton_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QToolButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QSize* QToolButton_SizeHint(QToolButton* self) {
	QSize ret = const_cast<const QToolButton*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QToolButton_MinimumSizeHint(QToolButton* self) {
	QSize ret = const_cast<const QToolButton*>(self)->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

uintptr_t QToolButton_ToolButtonStyle(QToolButton* self) {
	Qt::ToolButtonStyle ret = const_cast<const QToolButton*>(self)->toolButtonStyle();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QToolButton_ArrowType(QToolButton* self) {
	Qt::ArrowType ret = const_cast<const QToolButton*>(self)->arrowType();
	return static_cast<uintptr_t>(ret);
}

void QToolButton_SetArrowType(QToolButton* self, uintptr_t typeVal) {
	self->setArrowType(static_cast<Qt::ArrowType>(typeVal));
}

void QToolButton_SetMenu(QToolButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QToolButton_Menu(QToolButton* self) {
	return const_cast<const QToolButton*>(self)->menu();
}

void QToolButton_SetPopupMode(QToolButton* self, uintptr_t mode) {
	self->setPopupMode(static_cast<QToolButton::ToolButtonPopupMode>(mode));
}

uintptr_t QToolButton_PopupMode(QToolButton* self) {
	QToolButton::ToolButtonPopupMode ret = const_cast<const QToolButton*>(self)->popupMode();
	return static_cast<uintptr_t>(ret);
}

QAction* QToolButton_DefaultAction(QToolButton* self) {
	return const_cast<const QToolButton*>(self)->defaultAction();
}

void QToolButton_SetAutoRaise(QToolButton* self, bool enable) {
	self->setAutoRaise(enable);
}

bool QToolButton_AutoRaise(QToolButton* self) {
	return const_cast<const QToolButton*>(self)->autoRaise();
}

void QToolButton_ShowMenu(QToolButton* self) {
	self->showMenu();
}

void QToolButton_SetToolButtonStyle(QToolButton* self, uintptr_t style) {
	self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(style));
}

void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction) {
	self->setDefaultAction(defaultAction);
}

void QToolButton_Triggered(QToolButton* self, QAction* param1) {
	self->triggered(param1);
}

void QToolButton_connect_Triggered(QToolButton* self, void* slot) {
	QToolButton::connect(self, static_cast<void (QToolButton::*)(QAction*)>(&QToolButton::triggered), self, [=](QAction* param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QToolButton_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QToolButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolButton_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QToolButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolButton_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QToolButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolButton_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QToolButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QToolButton_Delete(QToolButton* self) {
	delete self;
}

