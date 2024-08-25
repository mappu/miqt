#include "gen_qaccessibleobject.h"
#include "qaccessibleobject.h"

#include <QAccessibleApplication>
#include <QAccessibleInterface>
#include <QAccessibleObject>
#include <QObject>
#include <QRect>
#include <QWindow>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

bool QAccessibleObject_IsValid(QAccessibleObject* self) {
	return self->isValid();
}

QObject* QAccessibleObject_Object(QAccessibleObject* self) {
	return self->object();
}

QRect* QAccessibleObject_Rect(QAccessibleObject* self) {
	QRect ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QAccessibleInterface* QAccessibleObject_ChildAt(QAccessibleObject* self, int x, int y) {
	return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QAccessibleApplication* QAccessibleApplication_new() {
	return new QAccessibleApplication();
}

QWindow* QAccessibleApplication_Window(QAccessibleApplication* self) {
	return self->window();
}

int QAccessibleApplication_ChildCount(QAccessibleApplication* self) {
	return self->childCount();
}

int QAccessibleApplication_IndexOfChild(QAccessibleApplication* self, QAccessibleInterface* param1) {
	return self->indexOfChild(param1);
}

QAccessibleInterface* QAccessibleApplication_FocusChild(QAccessibleApplication* self) {
	return self->focusChild();
}

QAccessibleInterface* QAccessibleApplication_Parent(QAccessibleApplication* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleApplication_Child(QAccessibleApplication* self, int index) {
	return self->child(static_cast<int>(index));
}

void QAccessibleApplication_Delete(QAccessibleApplication* self) {
	delete self;
}

