#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringMatcher>
#include <qstringmatcher.h>
#include "gen_qstringmatcher.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStringMatcher* QStringMatcher_new() {
	return new QStringMatcher();
}

QStringMatcher* QStringMatcher_new2(struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	return new QStringMatcher(pattern_QString);
}

QStringMatcher* QStringMatcher_new3(QChar* uc, int len) {
	return new QStringMatcher(uc, static_cast<int>(len));
}

QStringMatcher* QStringMatcher_new4(QStringMatcher* other) {
	return new QStringMatcher(*other);
}

QStringMatcher* QStringMatcher_new5(struct miqt_string pattern, int cs) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	return new QStringMatcher(pattern_QString, static_cast<Qt::CaseSensitivity>(cs));
}

QStringMatcher* QStringMatcher_new6(QChar* uc, int len, int cs) {
	return new QStringMatcher(uc, static_cast<int>(len), static_cast<Qt::CaseSensitivity>(cs));
}

void QStringMatcher_operatorAssign(QStringMatcher* self, QStringMatcher* other) {
	self->operator=(*other);
}

void QStringMatcher_setPattern(QStringMatcher* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setPattern(pattern_QString);
}

void QStringMatcher_setCaseSensitivity(QStringMatcher* self, int cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QStringMatcher_indexIn(const QStringMatcher* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->indexIn(str_QString);
}

int QStringMatcher_indexIn2(const QStringMatcher* self, QChar* str, int length) {
	return self->indexIn(str, static_cast<int>(length));
}

struct miqt_string QStringMatcher_pattern(const QStringMatcher* self) {
	QString _ret = self->pattern();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStringMatcher_caseSensitivity(const QStringMatcher* self) {
	Qt::CaseSensitivity _ret = self->caseSensitivity();
	return static_cast<int>(_ret);
}

int QStringMatcher_indexIn22(const QStringMatcher* self, struct miqt_string str, int from) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return self->indexIn(str_QString, static_cast<int>(from));
}

int QStringMatcher_indexIn3(const QStringMatcher* self, QChar* str, int length, int from) {
	return self->indexIn(str, static_cast<int>(length), static_cast<int>(from));
}

void QStringMatcher_delete(QStringMatcher* self) {
	delete self;
}

