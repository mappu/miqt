#include <QByteArray>
#include <QByteArrayMatcher>
#include <QByteArrayView>
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

QByteArrayMatcher* QByteArrayMatcher_new3(QByteArrayView* pattern) {
	return new QByteArrayMatcher(*pattern);
}

QByteArrayMatcher* QByteArrayMatcher_new4(const char* pattern) {
	return new QByteArrayMatcher(pattern);
}

QByteArrayMatcher* QByteArrayMatcher_new5(QByteArrayMatcher* other) {
	return new QByteArrayMatcher(*other);
}

QByteArrayMatcher* QByteArrayMatcher_new6(const char* pattern, long long length) {
	return new QByteArrayMatcher(pattern, (qsizetype)(length));
}

void QByteArrayMatcher_OperatorAssign(QByteArrayMatcher* self, QByteArrayMatcher* other) {
	self->operator=(*other);
}

void QByteArrayMatcher_SetPattern(QByteArrayMatcher* self, struct miqt_string pattern) {
	QByteArray pattern_QByteArray(pattern.data, pattern.len);
	self->setPattern(pattern_QByteArray);
}

long long QByteArrayMatcher_IndexIn(const QByteArrayMatcher* self, const char* str, long long lenVal) {
	qsizetype _ret = self->indexIn(str, (qsizetype)(lenVal));
	return static_cast<long long>(_ret);
}

long long QByteArrayMatcher_IndexInWithData(const QByteArrayMatcher* self, QByteArrayView* data) {
	qsizetype _ret = self->indexIn(*data);
	return static_cast<long long>(_ret);
}

struct miqt_string QByteArrayMatcher_Pattern(const QByteArrayMatcher* self) {
	QByteArray _qb = self->pattern();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long long QByteArrayMatcher_IndexIn3(const QByteArrayMatcher* self, const char* str, long long lenVal, long long from) {
	qsizetype _ret = self->indexIn(str, (qsizetype)(lenVal), (qsizetype)(from));
	return static_cast<long long>(_ret);
}

long long QByteArrayMatcher_IndexIn2(const QByteArrayMatcher* self, QByteArrayView* data, long long from) {
	qsizetype _ret = self->indexIn(*data, (qsizetype)(from));
	return static_cast<long long>(_ret);
}

void QByteArrayMatcher_Delete(QByteArrayMatcher* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QByteArrayMatcher*>( self );
	} else {
		delete self;
	}
}

