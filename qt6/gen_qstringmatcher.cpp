#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringMatcher>
#include <qstringmatcher.h>
#include "gen_qstringmatcher.h"
#include "_cgo_export.h"

void QStringMatcher_new(QStringMatcher** outptr_QStringMatcher) {
	QStringMatcher* ret = new QStringMatcher();
	*outptr_QStringMatcher = ret;
}

void QStringMatcher_new2(struct miqt_string pattern, QStringMatcher** outptr_QStringMatcher) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	QStringMatcher* ret = new QStringMatcher(pattern_QString);
	*outptr_QStringMatcher = ret;
}

void QStringMatcher_new3(QChar* uc, ptrdiff_t lenVal, QStringMatcher** outptr_QStringMatcher) {
	QStringMatcher* ret = new QStringMatcher(uc, (qsizetype)(lenVal));
	*outptr_QStringMatcher = ret;
}

void QStringMatcher_new4(QStringMatcher* other, QStringMatcher** outptr_QStringMatcher) {
	QStringMatcher* ret = new QStringMatcher(*other);
	*outptr_QStringMatcher = ret;
}

void QStringMatcher_new5(struct miqt_string pattern, int cs, QStringMatcher** outptr_QStringMatcher) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	QStringMatcher* ret = new QStringMatcher(pattern_QString, static_cast<Qt::CaseSensitivity>(cs));
	*outptr_QStringMatcher = ret;
}

void QStringMatcher_new6(QChar* uc, ptrdiff_t lenVal, int cs, QStringMatcher** outptr_QStringMatcher) {
	QStringMatcher* ret = new QStringMatcher(uc, (qsizetype)(lenVal), static_cast<Qt::CaseSensitivity>(cs));
	*outptr_QStringMatcher = ret;
}

void QStringMatcher_OperatorAssign(QStringMatcher* self, QStringMatcher* other) {
	self->operator=(*other);
}

void QStringMatcher_SetPattern(QStringMatcher* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setPattern(pattern_QString);
}

void QStringMatcher_SetCaseSensitivity(QStringMatcher* self, int cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringMatcher_IndexIn(const QStringMatcher* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	qsizetype _ret = self->indexIn(str_QString);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringMatcher_IndexIn2(const QStringMatcher* self, QChar* str, ptrdiff_t length) {
	qsizetype _ret = self->indexIn(str, (qsizetype)(length));
	return static_cast<ptrdiff_t>(_ret);
}

struct miqt_string QStringMatcher_Pattern(const QStringMatcher* self) {
	QString _ret = self->pattern();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStringMatcher_CaseSensitivity(const QStringMatcher* self) {
	Qt::CaseSensitivity _ret = self->caseSensitivity();
	return static_cast<int>(_ret);
}

ptrdiff_t QStringMatcher_IndexIn22(const QStringMatcher* self, struct miqt_string str, ptrdiff_t from) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	qsizetype _ret = self->indexIn(str_QString, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringMatcher_IndexIn3(const QStringMatcher* self, QChar* str, ptrdiff_t length, ptrdiff_t from) {
	qsizetype _ret = self->indexIn(str, (qsizetype)(length), (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

void QStringMatcher_Delete(QStringMatcher* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStringMatcher*>( self );
	} else {
		delete self;
	}
}

