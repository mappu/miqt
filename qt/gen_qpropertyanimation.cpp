#include <QByteArray>
#include <QMetaObject>
#include <QObject>
#include <QPropertyAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qpropertyanimation.h"
#include "gen_qpropertyanimation.h"
#include "_cgo_export.h"

QPropertyAnimation* QPropertyAnimation_new() {
	return new QPropertyAnimation();
}

QPropertyAnimation* QPropertyAnimation_new2(QObject* target, QByteArray* propertyName) {
	return new QPropertyAnimation(target, *propertyName);
}

QPropertyAnimation* QPropertyAnimation_new3(QObject* parent) {
	return new QPropertyAnimation(parent);
}

QPropertyAnimation* QPropertyAnimation_new4(QObject* target, QByteArray* propertyName, QObject* parent) {
	return new QPropertyAnimation(target, *propertyName, parent);
}

QMetaObject* QPropertyAnimation_MetaObject(const QPropertyAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPropertyAnimation_Metacast(QPropertyAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QPropertyAnimation_Tr(const char* s) {
	QString _ret = QPropertyAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPropertyAnimation_TrUtf8(const char* s) {
	QString _ret = QPropertyAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QObject* QPropertyAnimation_TargetObject(const QPropertyAnimation* self) {
	return self->targetObject();
}

void QPropertyAnimation_SetTargetObject(QPropertyAnimation* self, QObject* target) {
	self->setTargetObject(target);
}

QByteArray* QPropertyAnimation_PropertyName(const QPropertyAnimation* self) {
	return new QByteArray(self->propertyName());
}

void QPropertyAnimation_SetPropertyName(QPropertyAnimation* self, QByteArray* propertyName) {
	self->setPropertyName(*propertyName);
}

struct miqt_string* QPropertyAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QPropertyAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPropertyAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPropertyAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPropertyAnimation_TrUtf82(const char* s, const char* c) {
	QString _ret = QPropertyAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QPropertyAnimation_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QPropertyAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QPropertyAnimation_Delete(QPropertyAnimation* self) {
	delete self;
}

