#include <QByteArray>
#include <QByteArrayMatcher>
#include <QStaticByteArrayMatcherBase>
#include "qbytearraymatcher.h"

#include "gen_qbytearraymatcher.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

int QByteArrayMatcher_IndexIn(QByteArrayMatcher* self, QByteArray* ba) {
	return const_cast<const QByteArrayMatcher*>(self)->indexIn(*ba);
}

int QByteArrayMatcher_IndexIn2(QByteArrayMatcher* self, const char* str, int lenVal) {
	return const_cast<const QByteArrayMatcher*>(self)->indexIn(str, static_cast<int>(lenVal));
}

QByteArray* QByteArrayMatcher_Pattern(QByteArrayMatcher* self) {
	QByteArray ret = const_cast<const QByteArrayMatcher*>(self)->pattern();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

int QByteArrayMatcher_IndexIn22(QByteArrayMatcher* self, QByteArray* ba, int from) {
	return self->indexIn(*ba, static_cast<int>(from));
}

int QByteArrayMatcher_IndexIn3(QByteArrayMatcher* self, const char* str, int lenVal, int from) {
	return self->indexIn(str, static_cast<int>(lenVal), static_cast<int>(from));
}

void QByteArrayMatcher_Delete(QByteArrayMatcher* self) {
	delete self;
}

void QStaticByteArrayMatcherBase_Delete(QStaticByteArrayMatcherBase* self) {
	delete self;
}

