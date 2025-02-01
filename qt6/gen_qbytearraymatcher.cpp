#include <QByteArray>
#include <QByteArrayMatcher>
#include <QByteArrayView>
#include <QStaticByteArrayMatcherBase>
#include <qbytearraymatcher.h>
#include "gen_qbytearraymatcher.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

QByteArrayMatcher* QByteArrayMatcher_new6(const char* pattern, ptrdiff_t length) {
	return new QByteArrayMatcher(pattern, (qsizetype)(length));
}

void QByteArrayMatcher_operatorAssign(QByteArrayMatcher* self, QByteArrayMatcher* other) {
	self->operator=(*other);
}

void QByteArrayMatcher_setPattern(QByteArrayMatcher* self, struct miqt_string pattern) {
	QByteArray pattern_QByteArray(pattern.data, pattern.len);
	self->setPattern(pattern_QByteArray);
}

ptrdiff_t QByteArrayMatcher_indexIn(const QByteArrayMatcher* self, const char* str, ptrdiff_t len) {
	qsizetype _ret = self->indexIn(str, (qsizetype)(len));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayMatcher_indexInWithData(const QByteArrayMatcher* self, QByteArrayView* data) {
	qsizetype _ret = self->indexIn(*data);
	return static_cast<ptrdiff_t>(_ret);
}

struct miqt_string QByteArrayMatcher_pattern(const QByteArrayMatcher* self) {
	QByteArray _qb = self->pattern();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

ptrdiff_t QByteArrayMatcher_indexIn3(const QByteArrayMatcher* self, const char* str, ptrdiff_t len, ptrdiff_t from) {
	qsizetype _ret = self->indexIn(str, (qsizetype)(len), (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayMatcher_indexIn2(const QByteArrayMatcher* self, QByteArrayView* data, ptrdiff_t from) {
	qsizetype _ret = self->indexIn(*data, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

void QByteArrayMatcher_delete(QByteArrayMatcher* self) {
	delete self;
}

