#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleApplication>
#include <QAccessibleInterface>
#include <QAccessibleObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include "qaccessibleobject.h"

#include "gen_qaccessibleobject.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

bool QAccessibleObject_IsValid(QAccessibleObject* self) {
	return const_cast<const QAccessibleObject*>(self)->isValid();
}

QObject* QAccessibleObject_Object(QAccessibleObject* self) {
	return const_cast<const QAccessibleObject*>(self)->object();
}

QRect* QAccessibleObject_Rect(QAccessibleObject* self) {
	QRect ret = const_cast<const QAccessibleObject*>(self)->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QAccessibleObject_SetText(QAccessibleObject* self, uintptr_t t, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(static_cast<QAccessible::Text>(t), text_QString);
}

QAccessibleInterface* QAccessibleObject_ChildAt(QAccessibleObject* self, int x, int y) {
	return const_cast<const QAccessibleObject*>(self)->childAt(static_cast<int>(x), static_cast<int>(y));
}

QAccessibleApplication* QAccessibleApplication_new() {
	return new QAccessibleApplication();
}

QWindow* QAccessibleApplication_Window(QAccessibleApplication* self) {
	return const_cast<const QAccessibleApplication*>(self)->window();
}

int QAccessibleApplication_ChildCount(QAccessibleApplication* self) {
	return const_cast<const QAccessibleApplication*>(self)->childCount();
}

int QAccessibleApplication_IndexOfChild(QAccessibleApplication* self, QAccessibleInterface* param1) {
	return const_cast<const QAccessibleApplication*>(self)->indexOfChild(param1);
}

QAccessibleInterface* QAccessibleApplication_FocusChild(QAccessibleApplication* self) {
	return const_cast<const QAccessibleApplication*>(self)->focusChild();
}

QAccessibleInterface* QAccessibleApplication_Parent(QAccessibleApplication* self) {
	return const_cast<const QAccessibleApplication*>(self)->parent();
}

QAccessibleInterface* QAccessibleApplication_Child(QAccessibleApplication* self, int index) {
	return const_cast<const QAccessibleApplication*>(self)->child(static_cast<int>(index));
}

void QAccessibleApplication_Text(QAccessibleApplication* self, uintptr_t t, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QAccessibleApplication*>(self)->text(static_cast<QAccessible::Text>(t));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QAccessibleApplication_Role(QAccessibleApplication* self) {
	QAccessible::Role ret = const_cast<const QAccessibleApplication*>(self)->role();
	return static_cast<uintptr_t>(ret);
}

QAccessible__State* QAccessibleApplication_State(QAccessibleApplication* self) {
	QAccessible::State ret = const_cast<const QAccessibleApplication*>(self)->state();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAccessible::State*>(new QAccessible::State(ret));
}

void QAccessibleApplication_Delete(QAccessibleApplication* self) {
	delete self;
}

