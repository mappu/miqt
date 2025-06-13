#include <QList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qregularexpression.h>
#include "gen_qregularexpression.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QRegularExpression* QRegularExpression_new() {
	return new (std::nothrow) QRegularExpression();
}

QRegularExpression* QRegularExpression_new2(struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	return new (std::nothrow) QRegularExpression(pattern_QString);
}

QRegularExpression* QRegularExpression_new3(QRegularExpression* re) {
	return new (std::nothrow) QRegularExpression(*re);
}

QRegularExpression* QRegularExpression_new4(struct miqt_string pattern, int options) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	return new (std::nothrow) QRegularExpression(pattern_QString, static_cast<QRegularExpression::PatternOptions>(options));
}

int QRegularExpression_patternOptions(const QRegularExpression* self) {
	QRegularExpression::PatternOptions _ret = self->patternOptions();
	return static_cast<int>(_ret);
}

void QRegularExpression_setPatternOptions(QRegularExpression* self, int options) {
	self->setPatternOptions(static_cast<QRegularExpression::PatternOptions>(options));
}

void QRegularExpression_operatorAssign(QRegularExpression* self, QRegularExpression* re) {
	self->operator=(*re);
}

void QRegularExpression_swap(QRegularExpression* self, QRegularExpression* other) {
	self->swap(*other);
}

struct miqt_string QRegularExpression_pattern(const QRegularExpression* self) {
	QString _ret = self->pattern();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRegularExpression_setPattern(QRegularExpression* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setPattern(pattern_QString);
}

bool QRegularExpression_isValid(const QRegularExpression* self) {
	return self->isValid();
}

int QRegularExpression_patternErrorOffset(const QRegularExpression* self) {
	return self->patternErrorOffset();
}

struct miqt_string QRegularExpression_errorString(const QRegularExpression* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRegularExpression_captureCount(const QRegularExpression* self) {
	return self->captureCount();
}

struct miqt_array /* of struct miqt_string */  QRegularExpression_namedCaptureGroups(const QRegularExpression* self) {
	QStringList _ret = self->namedCaptureGroups();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QRegularExpressionMatch* QRegularExpression_match(const QRegularExpression* self, struct miqt_string subject) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatch(self->match(subject_QString));
}

QRegularExpressionMatchIterator* QRegularExpression_globalMatch(const QRegularExpression* self, struct miqt_string subject) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatchIterator(self->globalMatch(subject_QString));
}

void QRegularExpression_optimize(const QRegularExpression* self) {
	self->optimize();
}

struct miqt_string QRegularExpression_escape(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = QRegularExpression::escape(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpression_wildcardToRegularExpression(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = QRegularExpression::wildcardToRegularExpression(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpression_anchoredPattern(struct miqt_string expression) {
	QString expression_QString = QString::fromUtf8(expression.data, expression.len);
	QString _ret = QRegularExpression::anchoredPattern(expression_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRegularExpression_operatorEqual(const QRegularExpression* self, QRegularExpression* re) {
	return (*self == *re);
}

bool QRegularExpression_operatorNotEqual(const QRegularExpression* self, QRegularExpression* re) {
	return (*self != *re);
}

QRegularExpressionMatch* QRegularExpression_match2(const QRegularExpression* self, struct miqt_string subject, int offset) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatch(self->match(subject_QString, static_cast<int>(offset)));
}

QRegularExpressionMatch* QRegularExpression_match3(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatch(self->match(subject_QString, static_cast<int>(offset), static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatch* QRegularExpression_match4(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType, int matchOptions) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatch(self->match(subject_QString, static_cast<int>(offset), static_cast<QRegularExpression::MatchType>(matchType), static_cast<QRegularExpression::MatchOptions>(matchOptions)));
}

QRegularExpressionMatchIterator* QRegularExpression_globalMatch2(const QRegularExpression* self, struct miqt_string subject, int offset) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatchIterator(self->globalMatch(subject_QString, static_cast<int>(offset)));
}

QRegularExpressionMatchIterator* QRegularExpression_globalMatch3(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatchIterator(self->globalMatch(subject_QString, static_cast<int>(offset), static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatchIterator* QRegularExpression_globalMatch4(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType, int matchOptions) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatchIterator(self->globalMatch(subject_QString, static_cast<int>(offset), static_cast<QRegularExpression::MatchType>(matchType), static_cast<QRegularExpression::MatchOptions>(matchOptions)));
}

void QRegularExpression_delete(QRegularExpression* self) {
	delete self;
}

QRegularExpressionMatch* QRegularExpressionMatch_new() {
	return new (std::nothrow) QRegularExpressionMatch();
}

QRegularExpressionMatch* QRegularExpressionMatch_new2(QRegularExpressionMatch* match) {
	return new (std::nothrow) QRegularExpressionMatch(*match);
}

void QRegularExpressionMatch_operatorAssign(QRegularExpressionMatch* self, QRegularExpressionMatch* match) {
	self->operator=(*match);
}

void QRegularExpressionMatch_swap(QRegularExpressionMatch* self, QRegularExpressionMatch* other) {
	self->swap(*other);
}

QRegularExpression* QRegularExpressionMatch_regularExpression(const QRegularExpressionMatch* self) {
	return new QRegularExpression(self->regularExpression());
}

int QRegularExpressionMatch_matchType(const QRegularExpressionMatch* self) {
	QRegularExpression::MatchType _ret = self->matchType();
	return static_cast<int>(_ret);
}

int QRegularExpressionMatch_matchOptions(const QRegularExpressionMatch* self) {
	QRegularExpression::MatchOptions _ret = self->matchOptions();
	return static_cast<int>(_ret);
}

bool QRegularExpressionMatch_hasMatch(const QRegularExpressionMatch* self) {
	return self->hasMatch();
}

bool QRegularExpressionMatch_hasPartialMatch(const QRegularExpressionMatch* self) {
	return self->hasPartialMatch();
}

bool QRegularExpressionMatch_isValid(const QRegularExpressionMatch* self) {
	return self->isValid();
}

int QRegularExpressionMatch_lastCapturedIndex(const QRegularExpressionMatch* self) {
	return self->lastCapturedIndex();
}

struct miqt_string QRegularExpressionMatch_captured(const QRegularExpressionMatch* self) {
	QString _ret = self->captured();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpressionMatch_capturedWithName(const QRegularExpressionMatch* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->captured(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QRegularExpressionMatch_capturedTexts(const QRegularExpressionMatch* self) {
	QStringList _ret = self->capturedTexts();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QRegularExpressionMatch_capturedStart(const QRegularExpressionMatch* self) {
	return self->capturedStart();
}

int QRegularExpressionMatch_capturedLength(const QRegularExpressionMatch* self) {
	return self->capturedLength();
}

int QRegularExpressionMatch_capturedEnd(const QRegularExpressionMatch* self) {
	return self->capturedEnd();
}

int QRegularExpressionMatch_capturedStartWithName(const QRegularExpressionMatch* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->capturedStart(name_QString);
}

int QRegularExpressionMatch_capturedLengthWithName(const QRegularExpressionMatch* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->capturedLength(name_QString);
}

int QRegularExpressionMatch_capturedEndWithName(const QRegularExpressionMatch* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->capturedEnd(name_QString);
}

struct miqt_string QRegularExpressionMatch_capturedWithNth(const QRegularExpressionMatch* self, int nth) {
	QString _ret = self->captured(static_cast<int>(nth));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRegularExpressionMatch_capturedStartWithNth(const QRegularExpressionMatch* self, int nth) {
	return self->capturedStart(static_cast<int>(nth));
}

int QRegularExpressionMatch_capturedLengthWithNth(const QRegularExpressionMatch* self, int nth) {
	return self->capturedLength(static_cast<int>(nth));
}

int QRegularExpressionMatch_capturedEndWithNth(const QRegularExpressionMatch* self, int nth) {
	return self->capturedEnd(static_cast<int>(nth));
}

void QRegularExpressionMatch_delete(QRegularExpressionMatch* self) {
	delete self;
}

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new() {
	return new (std::nothrow) QRegularExpressionMatchIterator();
}

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new2(QRegularExpressionMatchIterator* iterator) {
	return new (std::nothrow) QRegularExpressionMatchIterator(*iterator);
}

void QRegularExpressionMatchIterator_operatorAssign(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* iterator) {
	self->operator=(*iterator);
}

void QRegularExpressionMatchIterator_swap(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* other) {
	self->swap(*other);
}

bool QRegularExpressionMatchIterator_isValid(const QRegularExpressionMatchIterator* self) {
	return self->isValid();
}

bool QRegularExpressionMatchIterator_hasNext(const QRegularExpressionMatchIterator* self) {
	return self->hasNext();
}

QRegularExpressionMatch* QRegularExpressionMatchIterator_next(QRegularExpressionMatchIterator* self) {
	return new QRegularExpressionMatch(self->next());
}

QRegularExpressionMatch* QRegularExpressionMatchIterator_peekNext(const QRegularExpressionMatchIterator* self) {
	return new QRegularExpressionMatch(self->peekNext());
}

QRegularExpression* QRegularExpressionMatchIterator_regularExpression(const QRegularExpressionMatchIterator* self) {
	return new QRegularExpression(self->regularExpression());
}

int QRegularExpressionMatchIterator_matchType(const QRegularExpressionMatchIterator* self) {
	QRegularExpression::MatchType _ret = self->matchType();
	return static_cast<int>(_ret);
}

int QRegularExpressionMatchIterator_matchOptions(const QRegularExpressionMatchIterator* self) {
	QRegularExpression::MatchOptions _ret = self->matchOptions();
	return static_cast<int>(_ret);
}

void QRegularExpressionMatchIterator_delete(QRegularExpressionMatchIterator* self) {
	delete self;
}

