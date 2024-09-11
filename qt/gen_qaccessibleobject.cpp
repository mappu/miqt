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

bool QAccessibleObject_IsValid(const QAccessibleObject* self) {
	return self->isValid();
}

QObject* QAccessibleObject_Object(const QAccessibleObject* self) {
	return self->object();
}

QRect* QAccessibleObject_Rect(const QAccessibleObject* self) {
	QRect ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QAccessibleObject_SetText(QAccessibleObject* self, uintptr_t t, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->setText(static_cast<QAccessible::Text>(t), text_QString);
}

QAccessibleInterface* QAccessibleObject_ChildAt(const QAccessibleObject* self, int x, int y) {
	return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QAccessibleApplication* QAccessibleApplication_new() {
	return new QAccessibleApplication();
}

QWindow* QAccessibleApplication_Window(const QAccessibleApplication* self) {
	return self->window();
}

int QAccessibleApplication_ChildCount(const QAccessibleApplication* self) {
	return self->childCount();
}

int QAccessibleApplication_IndexOfChild(const QAccessibleApplication* self, QAccessibleInterface* param1) {
	return self->indexOfChild(param1);
}

QAccessibleInterface* QAccessibleApplication_FocusChild(const QAccessibleApplication* self) {
	return self->focusChild();
}

QAccessibleInterface* QAccessibleApplication_Parent(const QAccessibleApplication* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleApplication_Child(const QAccessibleApplication* self, int index) {
	return self->child(static_cast<int>(index));
}

void QAccessibleApplication_Text(const QAccessibleApplication* self, uintptr_t t, char** _out, int* _out_Strlen) {
	QString ret = self->text(static_cast<QAccessible::Text>(t));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QAccessibleApplication_Role(const QAccessibleApplication* self) {
	QAccessible::Role ret = self->role();
	return static_cast<uintptr_t>(ret);
}

QAccessible__State* QAccessibleApplication_State(const QAccessibleApplication* self) {
	QAccessible::State ret = self->state();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QAccessible::State*>(new QAccessible::State(ret));
}

void QAccessibleApplication_Delete(QAccessibleApplication* self) {
	delete self;
}

