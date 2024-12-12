#include <QByteArray>
#include <QByteArrayMatcher>
#include <QStaticByteArrayMatcherBase>
#include <qbytearraymatcher.h>
#include "gen_qbytearraymatcher.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QByteArrayMatcher* QByteArrayMatcher_new() {
	return new QByteArrayMatcher();
}

QByteArrayMatcher* QByteArrayMatcher_new2(struct miqt_string pattern) {
	QByteArray pattern_QByteArray(pattern.data, pattern.len);
	return new QByteArrayMatcher(pattern_QByteArray);
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

void QByteArrayMatcher_SetPattern(QByteArrayMatcher* self, struct miqt_string pattern) {
	QByteArray pattern_QByteArray(pattern.data, pattern.len);
	self->setPattern(pattern_QByteArray);
}

int QByteArrayMatcher_IndexIn(const QByteArrayMatcher* self, struct miqt_string ba) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return self->indexIn(ba_QByteArray);
}

int QByteArrayMatcher_IndexIn2(const QByteArrayMatcher* self, const char* str, int lenVal) {
	return self->indexIn(str, static_cast<int>(lenVal));
}

struct miqt_string QByteArrayMatcher_Pattern(const QByteArrayMatcher* self) {
	QByteArray _qb = self->pattern();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QByteArrayMatcher_IndexIn22(const QByteArrayMatcher* self, struct miqt_string ba, int from) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return self->indexIn(ba_QByteArray, static_cast<int>(from));
}

int QByteArrayMatcher_IndexIn3(const QByteArrayMatcher* self, const char* str, int lenVal, int from) {
	return self->indexIn(str, static_cast<int>(lenVal), static_cast<int>(from));
}

void QByteArrayMatcher_Delete(QByteArrayMatcher* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QByteArrayMatcher*>( self );
	} else {
		delete self;
	}
}

void QStaticByteArrayMatcherBase_Delete(QStaticByteArrayMatcherBase* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStaticByteArrayMatcherBase*>( self );
	} else {
		delete self;
	}
}

