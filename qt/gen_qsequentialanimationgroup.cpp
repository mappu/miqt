#include <QAbstractAnimation>
#include <QMetaObject>
#include <QObject>
#include <QPauseAnimation>
#include <QSequentialAnimationGroup>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qsequentialanimationgroup.h"
#include "gen_qsequentialanimationgroup.h"
#include "_cgo_export.h"

QSequentialAnimationGroup* QSequentialAnimationGroup_new() {
	return new QSequentialAnimationGroup();
}

QSequentialAnimationGroup* QSequentialAnimationGroup_new2(QObject* parent) {
	return new QSequentialAnimationGroup(parent);
}

QMetaObject* QSequentialAnimationGroup_MetaObject(const QSequentialAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSequentialAnimationGroup_Metacast(QSequentialAnimationGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QSequentialAnimationGroup_Tr(const char* s) {
	QString _ret = QSequentialAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSequentialAnimationGroup_TrUtf8(const char* s) {
	QString _ret = QSequentialAnimationGroup::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QPauseAnimation* QSequentialAnimationGroup_AddPause(QSequentialAnimationGroup* self, int msecs) {
	return self->addPause(static_cast<int>(msecs));
}

QPauseAnimation* QSequentialAnimationGroup_InsertPause(QSequentialAnimationGroup* self, int index, int msecs) {
	return self->insertPause(static_cast<int>(index), static_cast<int>(msecs));
}

QAbstractAnimation* QSequentialAnimationGroup_CurrentAnimation(const QSequentialAnimationGroup* self) {
	return self->currentAnimation();
}

int QSequentialAnimationGroup_Duration(const QSequentialAnimationGroup* self) {
	return self->duration();
}

void QSequentialAnimationGroup_CurrentAnimationChanged(QSequentialAnimationGroup* self, QAbstractAnimation* current) {
	self->currentAnimationChanged(current);
}

void QSequentialAnimationGroup_connect_CurrentAnimationChanged(QSequentialAnimationGroup* self, void* slot) {
	QSequentialAnimationGroup::connect(self, static_cast<void (QSequentialAnimationGroup::*)(QAbstractAnimation*)>(&QSequentialAnimationGroup::currentAnimationChanged), self, [=](QAbstractAnimation* current) {
		QAbstractAnimation* sigval1 = current;
		miqt_exec_callback_QSequentialAnimationGroup_CurrentAnimationChanged(slot, sigval1);
	});
}

struct miqt_string* QSequentialAnimationGroup_Tr2(const char* s, const char* c) {
	QString _ret = QSequentialAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSequentialAnimationGroup_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSequentialAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSequentialAnimationGroup_TrUtf82(const char* s, const char* c) {
	QString _ret = QSequentialAnimationGroup::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QSequentialAnimationGroup_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSequentialAnimationGroup::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QSequentialAnimationGroup_Delete(QSequentialAnimationGroup* self) {
	delete self;
}

