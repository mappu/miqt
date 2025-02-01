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
#include <qaccessibleobject.h>
#include "gen_qaccessibleobject.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QAccessibleObject_virtbase(QAccessibleObject* src, QAccessibleInterface** outptr_QAccessibleInterface) {
	*outptr_QAccessibleInterface = static_cast<QAccessibleInterface*>(src);
}

bool QAccessibleObject_isValid(const QAccessibleObject* self) {
	return self->isValid();
}

QObject* QAccessibleObject_object(const QAccessibleObject* self) {
	return self->object();
}

QRect* QAccessibleObject_rect(const QAccessibleObject* self) {
	return new QRect(self->rect());
}

void QAccessibleObject_setText(QAccessibleObject* self, int t, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(static_cast<QAccessible::Text>(t), text_QString);
}

QAccessibleInterface* QAccessibleObject_childAt(const QAccessibleObject* self, int x, int y) {
	return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QAccessibleApplication* QAccessibleApplication_new() {
	return new QAccessibleApplication();
}

void QAccessibleApplication_virtbase(QAccessibleApplication* src, QAccessibleObject** outptr_QAccessibleObject) {
	*outptr_QAccessibleObject = static_cast<QAccessibleObject*>(src);
}

QWindow* QAccessibleApplication_window(const QAccessibleApplication* self) {
	return self->window();
}

int QAccessibleApplication_childCount(const QAccessibleApplication* self) {
	return self->childCount();
}

int QAccessibleApplication_indexOfChild(const QAccessibleApplication* self, QAccessibleInterface* param1) {
	return self->indexOfChild(param1);
}

QAccessibleInterface* QAccessibleApplication_focusChild(const QAccessibleApplication* self) {
	return self->focusChild();
}

QAccessibleInterface* QAccessibleApplication_parent(const QAccessibleApplication* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleApplication_child(const QAccessibleApplication* self, int index) {
	return self->child(static_cast<int>(index));
}

struct miqt_string QAccessibleApplication_text(const QAccessibleApplication* self, int t) {
	QString _ret = self->text(static_cast<QAccessible::Text>(t));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleApplication_role(const QAccessibleApplication* self) {
	QAccessible::Role _ret = self->role();
	return static_cast<int>(_ret);
}

QAccessible__State* QAccessibleApplication_state(const QAccessibleApplication* self) {
	return new QAccessible::State(self->state());
}

void QAccessibleApplication_delete(QAccessibleApplication* self) {
	delete self;
}

