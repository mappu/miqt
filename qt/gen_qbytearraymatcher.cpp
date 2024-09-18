#include <QByteArray>
#include <QByteArrayMatcher>
#include <QStaticByteArrayMatcherBase>
#include "qbytearraymatcher.h"
#include "gen_qbytearraymatcher.h"
#include "_cgo_export.h"

QByteArrayMatcher* QByteArrayMatcher_new() {
	return new QByteArrayMatcher();
}

QByteArrayMatcher* QByteArrayMatcher_new2(QByteArray* pattern) {
	return new QByteArrayMatcher(*pattern);
}

QByteArrayMatcher* QByteArrayMatcher_new3(const char* pattern, int length) {
	return new QByteArrayMatcher(pattern, static_cast<int>(length));
}

QByteArrayMatcher* QByteArrayMatcher_new4(QByteArrayMatcher* other) {
	return new QByteArrayMatcher(*other);
}

void QByteArrayMatcher_OperatorAssign(QByteArrayMatcher* self, QByteArrayMatcher* other) {
	self->operator=(*other);
}

void QByteArrayMatcher_SetPattern(QByteArrayMatcher* self, QByteArray* pattern) {
	self->setPattern(*pattern);
}

int QByteArrayMatcher_IndexIn(const QByteArrayMatcher* self, QByteArray* ba) {
	return self->indexIn(*ba);
}

int QByteArrayMatcher_IndexIn2(const QByteArrayMatcher* self, const char* str, int lenVal) {
	return self->indexIn(str, static_cast<int>(lenVal));
}

QByteArray* QByteArrayMatcher_Pattern(const QByteArrayMatcher* self) {
	return new QByteArray(self->pattern());
}

int QByteArrayMatcher_IndexIn22(const QByteArrayMatcher* self, QByteArray* ba, int from) {
	return self->indexIn(*ba, static_cast<int>(from));
}

int QByteArrayMatcher_IndexIn3(const QByteArrayMatcher* self, const char* str, int lenVal, int from) {
	return self->indexIn(str, static_cast<int>(lenVal), static_cast<int>(from));
}

void QByteArrayMatcher_Delete(QByteArrayMatcher* self) {
	delete self;
}

void QStaticByteArrayMatcherBase_Delete(QStaticByteArrayMatcherBase* self) {
	delete self;
}

