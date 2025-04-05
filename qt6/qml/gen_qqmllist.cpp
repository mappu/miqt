#include <QMetaObject>
#include <QObject>
#include <QQmlEngine>
#include <QQmlListReference>
#include <QVariant>
#include <qqmllist.h>
#include "gen_qqmllist.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QQmlListReference* QQmlListReference_new() {
	return new QQmlListReference();
}

QQmlListReference* QQmlListReference_new2(QVariant* variant) {
	return new QQmlListReference(*variant);
}

QQmlListReference* QQmlListReference_new3(QObject* o, const char* property) {
	return new QQmlListReference(o, property);
}

QQmlListReference* QQmlListReference_new4(QVariant* variant) {
	return new QQmlListReference(*variant);
}

QQmlListReference* QQmlListReference_new5(QObject* o, const char* property) {
	return new QQmlListReference(o, property);
}

QQmlListReference* QQmlListReference_new6(QQmlListReference* param1) {
	return new QQmlListReference(*param1);
}

QQmlListReference* QQmlListReference_new7(QVariant* variant, QQmlEngine* engine) {
	return new QQmlListReference(*variant, engine);
}

QQmlListReference* QQmlListReference_new8(QObject* o, const char* property, QQmlEngine* engine) {
	return new QQmlListReference(o, property, engine);
}

void QQmlListReference_operatorAssign(QQmlListReference* self, QQmlListReference* param1) {
	self->operator=(*param1);
}

bool QQmlListReference_isValid(const QQmlListReference* self) {
	return self->isValid();
}

QObject* QQmlListReference_object(const QQmlListReference* self) {
	return self->object();
}

QMetaObject* QQmlListReference_listElementType(const QQmlListReference* self) {
	return (QMetaObject*) self->listElementType();
}

bool QQmlListReference_canAppend(const QQmlListReference* self) {
	return self->canAppend();
}

bool QQmlListReference_canAt(const QQmlListReference* self) {
	return self->canAt();
}

bool QQmlListReference_canClear(const QQmlListReference* self) {
	return self->canClear();
}

bool QQmlListReference_canCount(const QQmlListReference* self) {
	return self->canCount();
}

bool QQmlListReference_canReplace(const QQmlListReference* self) {
	return self->canReplace();
}

bool QQmlListReference_canRemoveLast(const QQmlListReference* self) {
	return self->canRemoveLast();
}

bool QQmlListReference_isManipulable(const QQmlListReference* self) {
	return self->isManipulable();
}

bool QQmlListReference_isReadable(const QQmlListReference* self) {
	return self->isReadable();
}

bool QQmlListReference_append(const QQmlListReference* self, QObject* param1) {
	return self->append(param1);
}

QObject* QQmlListReference_at(const QQmlListReference* self, ptrdiff_t param1) {
	return self->at((qsizetype)(param1));
}

bool QQmlListReference_clear(const QQmlListReference* self) {
	return self->clear();
}

ptrdiff_t QQmlListReference_count(const QQmlListReference* self) {
	qsizetype _ret = self->count();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QQmlListReference_size(const QQmlListReference* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

bool QQmlListReference_replace(const QQmlListReference* self, ptrdiff_t param1, QObject* param2) {
	return self->replace((qsizetype)(param1), param2);
}

bool QQmlListReference_removeLast(const QQmlListReference* self) {
	return self->removeLast();
}

bool QQmlListReference_operatorEqual(const QQmlListReference* self, QQmlListReference* other) {
	return (*self == *other);
}

void QQmlListReference_delete(QQmlListReference* self) {
	delete self;
}

