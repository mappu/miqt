#include <QKeyEventTransition>
#include <QMetaObject>
#include <QObject>
#include <QState>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qkeyeventtransition.h"
#include "gen_qkeyeventtransition.h"
#include "_cgo_export.h"

QKeyEventTransition* QKeyEventTransition_new() {
	return new QKeyEventTransition();
}

QKeyEventTransition* QKeyEventTransition_new2(QObject* object, uintptr_t typeVal, int key) {
	return new QKeyEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<int>(key));
}

QKeyEventTransition* QKeyEventTransition_new3(QState* sourceState) {
	return new QKeyEventTransition(sourceState);
}

QKeyEventTransition* QKeyEventTransition_new4(QObject* object, uintptr_t typeVal, int key, QState* sourceState) {
	return new QKeyEventTransition(object, static_cast<QEvent::Type>(typeVal), static_cast<int>(key), sourceState);
}

QMetaObject* QKeyEventTransition_MetaObject(const QKeyEventTransition* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QKeyEventTransition_Tr(const char* s) {
	QString _ret = QKeyEventTransition::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QKeyEventTransition_TrUtf8(const char* s) {
	QString _ret = QKeyEventTransition::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QKeyEventTransition_Key(const QKeyEventTransition* self) {
	return self->key();
}

void QKeyEventTransition_SetKey(QKeyEventTransition* self, int key) {
	self->setKey(static_cast<int>(key));
}

int QKeyEventTransition_ModifierMask(const QKeyEventTransition* self) {
	Qt::KeyboardModifiers _ret = self->modifierMask();
	return static_cast<int>(_ret);
}

void QKeyEventTransition_SetModifierMask(QKeyEventTransition* self, int modifiers) {
	self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

struct miqt_string* QKeyEventTransition_Tr2(const char* s, const char* c) {
	QString _ret = QKeyEventTransition::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QKeyEventTransition_Tr3(const char* s, const char* c, int n) {
	QString _ret = QKeyEventTransition::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QKeyEventTransition_TrUtf82(const char* s, const char* c) {
	QString _ret = QKeyEventTransition::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QKeyEventTransition_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QKeyEventTransition::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QKeyEventTransition_Delete(QKeyEventTransition* self) {
	delete self;
}

