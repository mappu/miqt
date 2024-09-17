#include <QMetaObject>
#include <QMouseEventTransition>
#include <QObject>
#include <QPainterPath>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qmouseeventtransition.h"
#include "gen_qmouseeventtransition.h"
#include "_cgo_export.h"

QMouseEventTransition* QMouseEventTransition_new() {
	return new QMouseEventTransition();
}

QMouseEventTransition* QMouseEventTransition_new2(QObject* object, uintptr_t typeVal, uintptr_t button) {
	return new QMouseEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<Qt::MouseButton>(button));
}

QMouseEventTransition* QMouseEventTransition_new3(QState* sourceState) {
	return new QMouseEventTransition(sourceState);
}

QMouseEventTransition* QMouseEventTransition_new4(QObject* object, uintptr_t typeVal, uintptr_t button, QState* sourceState) {
	return new QMouseEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<Qt::MouseButton>(button), sourceState);
}

QMetaObject* QMouseEventTransition_MetaObject(const QMouseEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QMouseEventTransition_Tr(const char* s) {
	QString _ret = QMouseEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMouseEventTransition_TrUtf8(const char* s) {
	QString _ret = QMouseEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

uintptr_t QMouseEventTransition_Button(const QMouseEventTransition* self) {
	Qt::MouseButton _ret = self->button();
	return static_cast<uintptr_t>(_ret);
}

void QMouseEventTransition_SetButton(QMouseEventTransition* self, uintptr_t button) {
	self->setButton(static_cast<Qt::MouseButton>(button));
}

int QMouseEventTransition_ModifierMask(const QMouseEventTransition* self) {
	Qt::KeyboardModifiers _ret = self->modifierMask();
	return static_cast<int>(_ret);
}

void QMouseEventTransition_SetModifierMask(QMouseEventTransition* self, int modifiers) {
	self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

QPainterPath* QMouseEventTransition_HitTestPath(const QMouseEventTransition* self) {
	return new QPainterPath(self->hitTestPath());
}

void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, QPainterPath* path) {
	self->setHitTestPath(*path);
}

struct miqt_string* QMouseEventTransition_Tr2(const char* s, const char* c) {
	QString _ret = QMouseEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMouseEventTransition_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMouseEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMouseEventTransition_TrUtf82(const char* s, const char* c) {
	QString _ret = QMouseEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QMouseEventTransition_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMouseEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QMouseEventTransition_Delete(QMouseEventTransition* self) {
	delete self;
}

