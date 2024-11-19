#include <QByteArray>
#include <QByteArrayMatcher>
#include <QByteArrayView>
#include <QStaticByteArrayMatcherBase>
#include <qbytearraymatcher.h>
#include "gen_qbytearraymatcher.h"
#include "_cgo_export.h"

void QByteArrayMatcher_new(QByteArrayMatcher** outptr_QByteArrayMatcher) {
	QByteArrayMatcher* ret = new QByteArrayMatcher();
	*outptr_QByteArrayMatcher = ret;
}

void QByteArrayMatcher_new2(struct miqt_string pattern, QByteArrayMatcher** outptr_QByteArrayMatcher) {
	QByteArray pattern_QByteArray(pattern.data, pattern.len);
	QByteArrayMatcher* ret = new QByteArrayMatcher(pattern_QByteArray);
	*outptr_QByteArrayMatcher = ret;
}

void QByteArrayMatcher_new3(QByteArrayView* pattern, QByteArrayMatcher** outptr_QByteArrayMatcher) {
	QByteArrayMatcher* ret = new QByteArrayMatcher(*pattern);
	*outptr_QByteArrayMatcher = ret;
}

void QByteArrayMatcher_new4(const char* pattern, QByteArrayMatcher** outptr_QByteArrayMatcher) {
	QByteArrayMatcher* ret = new QByteArrayMatcher(pattern);
	*outptr_QByteArrayMatcher = ret;
}

void QByteArrayMatcher_new5(QByteArrayMatcher* other, QByteArrayMatcher** outptr_QByteArrayMatcher) {
	QByteArrayMatcher* ret = new QByteArrayMatcher(*other);
	*outptr_QByteArrayMatcher = ret;
}

void QByteArrayMatcher_new6(const char* pattern, ptrdiff_t length, QByteArrayMatcher** outptr_QByteArrayMatcher) {
	QByteArrayMatcher* ret = new QByteArrayMatcher(pattern, (qsizetype)(length));
	*outptr_QByteArrayMatcher = ret;
}

void QByteArrayMatcher_OperatorAssign(QByteArrayMatcher* self, QByteArrayMatcher* other) {
	self->operator=(*other);
}

void QByteArrayMatcher_SetPattern(QByteArrayMatcher* self, struct miqt_string pattern) {
	QByteArray pattern_QByteArray(pattern.data, pattern.len);
	self->setPattern(pattern_QByteArray);
}

ptrdiff_t QByteArrayMatcher_IndexIn(const QByteArrayMatcher* self, const char* str, ptrdiff_t lenVal) {
	qsizetype _ret = self->indexIn(str, (qsizetype)(lenVal));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayMatcher_IndexInWithData(const QByteArrayMatcher* self, QByteArrayView* data) {
	qsizetype _ret = self->indexIn(*data);
	return static_cast<ptrdiff_t>(_ret);
}

struct miqt_string QByteArrayMatcher_Pattern(const QByteArrayMatcher* self) {
	QByteArray _qb = self->pattern();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

ptrdiff_t QByteArrayMatcher_IndexIn3(const QByteArrayMatcher* self, const char* str, ptrdiff_t lenVal, ptrdiff_t from) {
	qsizetype _ret = self->indexIn(str, (qsizetype)(lenVal), (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayMatcher_IndexIn2(const QByteArrayMatcher* self, QByteArrayView* data, ptrdiff_t from) {
	qsizetype _ret = self->indexIn(*data, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

void QByteArrayMatcher_Delete(QByteArrayMatcher* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QByteArrayMatcher*>( self );
	} else {
		delete self;
	}
}

