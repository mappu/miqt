#include <QList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qregularexpression.h"

#include "gen_qregularexpression.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRegularExpression* QRegularExpression_new() {
	return new QRegularExpression();
}

QRegularExpression* QRegularExpression_new2(const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	return new QRegularExpression(pattern_QString);
}

QRegularExpression* QRegularExpression_new3(QRegularExpression* re) {
	return new QRegularExpression(*re);
}

QRegularExpression* QRegularExpression_new4(const char* pattern, size_t pattern_Strlen, int options) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	return new QRegularExpression(pattern_QString, static_cast<QRegularExpression::PatternOptions>(options));
}

int QRegularExpression_PatternOptions(QRegularExpression* self) {
	QRegularExpression::PatternOptions ret = const_cast<const QRegularExpression*>(self)->patternOptions();
	return static_cast<int>(ret);
}

void QRegularExpression_SetPatternOptions(QRegularExpression* self, int options) {
	self->setPatternOptions(static_cast<QRegularExpression::PatternOptions>(options));
}

void QRegularExpression_OperatorAssign(QRegularExpression* self, QRegularExpression* re) {
	self->operator=(*re);
}

void QRegularExpression_Swap(QRegularExpression* self, QRegularExpression* other) {
	self->swap(*other);
}

void QRegularExpression_Pattern(QRegularExpression* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QRegularExpression*>(self)->pattern();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpression_SetPattern(QRegularExpression* self, const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	self->setPattern(pattern_QString);
}

bool QRegularExpression_IsValid(QRegularExpression* self) {
	return const_cast<const QRegularExpression*>(self)->isValid();
}

int QRegularExpression_PatternErrorOffset(QRegularExpression* self) {
	return const_cast<const QRegularExpression*>(self)->patternErrorOffset();
}

void QRegularExpression_ErrorString(QRegularExpression* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QRegularExpression*>(self)->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QRegularExpression_CaptureCount(QRegularExpression* self) {
	return const_cast<const QRegularExpression*>(self)->captureCount();
}

void QRegularExpression_NamedCaptureGroups(QRegularExpression* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QRegularExpression*>(self)->namedCaptureGroups();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

QRegularExpressionMatch* QRegularExpression_Match(QRegularExpression* self, const char* subject, size_t subject_Strlen) {
	QString subject_QString = QString::fromUtf8(subject, subject_Strlen);
	QRegularExpressionMatch ret = const_cast<const QRegularExpression*>(self)->match(subject_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatch*>(new QRegularExpressionMatch(ret));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch(QRegularExpression* self, const char* subject, size_t subject_Strlen) {
	QString subject_QString = QString::fromUtf8(subject, subject_Strlen);
	QRegularExpressionMatchIterator ret = const_cast<const QRegularExpression*>(self)->globalMatch(subject_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatchIterator*>(new QRegularExpressionMatchIterator(ret));
}

void QRegularExpression_Optimize(QRegularExpression* self) {
	const_cast<const QRegularExpression*>(self)->optimize();
}

void QRegularExpression_Escape(const char* str, size_t str_Strlen, char** _out, int* _out_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QString ret = QRegularExpression::escape(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpression_WildcardToRegularExpression(const char* str, size_t str_Strlen, char** _out, int* _out_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QString ret = QRegularExpression::wildcardToRegularExpression(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpression_AnchoredPattern(const char* expression, size_t expression_Strlen, char** _out, int* _out_Strlen) {
	QString expression_QString = QString::fromUtf8(expression, expression_Strlen);
	QString ret = QRegularExpression::anchoredPattern(expression_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QRegularExpression_OperatorEqual(QRegularExpression* self, QRegularExpression* re) {
	return const_cast<const QRegularExpression*>(self)->operator==(*re);
}

bool QRegularExpression_OperatorNotEqual(QRegularExpression* self, QRegularExpression* re) {
	return const_cast<const QRegularExpression*>(self)->operator!=(*re);
}

QRegularExpressionMatch* QRegularExpression_Match2(QRegularExpression* self, const char* subject, size_t subject_Strlen, int offset) {
	QString subject_QString = QString::fromUtf8(subject, subject_Strlen);
	QRegularExpressionMatch ret = self->match(subject_QString, static_cast<int>(offset));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatch*>(new QRegularExpressionMatch(ret));
}

QRegularExpressionMatch* QRegularExpression_Match3(QRegularExpression* self, const char* subject, size_t subject_Strlen, int offset, uintptr_t matchType) {
	QString subject_QString = QString::fromUtf8(subject, subject_Strlen);
	QRegularExpressionMatch ret = self->match(subject_QString, static_cast<int>(offset), static_cast<QRegularExpression::MatchType>(matchType));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatch*>(new QRegularExpressionMatch(ret));
}

QRegularExpressionMatch* QRegularExpression_Match4(QRegularExpression* self, const char* subject, size_t subject_Strlen, int offset, uintptr_t matchType, int matchOptions) {
	QString subject_QString = QString::fromUtf8(subject, subject_Strlen);
	QRegularExpressionMatch ret = self->match(subject_QString, static_cast<int>(offset), static_cast<QRegularExpression::MatchType>(matchType), static_cast<QRegularExpression::MatchOptions>(matchOptions));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatch*>(new QRegularExpressionMatch(ret));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch2(QRegularExpression* self, const char* subject, size_t subject_Strlen, int offset) {
	QString subject_QString = QString::fromUtf8(subject, subject_Strlen);
	QRegularExpressionMatchIterator ret = self->globalMatch(subject_QString, static_cast<int>(offset));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatchIterator*>(new QRegularExpressionMatchIterator(ret));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch3(QRegularExpression* self, const char* subject, size_t subject_Strlen, int offset, uintptr_t matchType) {
	QString subject_QString = QString::fromUtf8(subject, subject_Strlen);
	QRegularExpressionMatchIterator ret = self->globalMatch(subject_QString, static_cast<int>(offset), static_cast<QRegularExpression::MatchType>(matchType));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatchIterator*>(new QRegularExpressionMatchIterator(ret));
}

QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch4(QRegularExpression* self, const char* subject, size_t subject_Strlen, int offset, uintptr_t matchType, int matchOptions) {
	QString subject_QString = QString::fromUtf8(subject, subject_Strlen);
	QRegularExpressionMatchIterator ret = self->globalMatch(subject_QString, static_cast<int>(offset), static_cast<QRegularExpression::MatchType>(matchType), static_cast<QRegularExpression::MatchOptions>(matchOptions));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatchIterator*>(new QRegularExpressionMatchIterator(ret));
}

void QRegularExpression_Delete(QRegularExpression* self) {
	delete self;
}

QRegularExpressionMatch* QRegularExpressionMatch_new() {
	return new QRegularExpressionMatch();
}

QRegularExpressionMatch* QRegularExpressionMatch_new2(QRegularExpressionMatch* match) {
	return new QRegularExpressionMatch(*match);
}

void QRegularExpressionMatch_OperatorAssign(QRegularExpressionMatch* self, QRegularExpressionMatch* match) {
	self->operator=(*match);
}

void QRegularExpressionMatch_Swap(QRegularExpressionMatch* self, QRegularExpressionMatch* other) {
	self->swap(*other);
}

QRegularExpression* QRegularExpressionMatch_RegularExpression(QRegularExpressionMatch* self) {
	QRegularExpression ret = const_cast<const QRegularExpressionMatch*>(self)->regularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

uintptr_t QRegularExpressionMatch_MatchType(QRegularExpressionMatch* self) {
	QRegularExpression::MatchType ret = const_cast<const QRegularExpressionMatch*>(self)->matchType();
	return static_cast<uintptr_t>(ret);
}

int QRegularExpressionMatch_MatchOptions(QRegularExpressionMatch* self) {
	QRegularExpression::MatchOptions ret = const_cast<const QRegularExpressionMatch*>(self)->matchOptions();
	return static_cast<int>(ret);
}

bool QRegularExpressionMatch_HasMatch(QRegularExpressionMatch* self) {
	return const_cast<const QRegularExpressionMatch*>(self)->hasMatch();
}

bool QRegularExpressionMatch_HasPartialMatch(QRegularExpressionMatch* self) {
	return const_cast<const QRegularExpressionMatch*>(self)->hasPartialMatch();
}

bool QRegularExpressionMatch_IsValid(QRegularExpressionMatch* self) {
	return const_cast<const QRegularExpressionMatch*>(self)->isValid();
}

int QRegularExpressionMatch_LastCapturedIndex(QRegularExpressionMatch* self) {
	return const_cast<const QRegularExpressionMatch*>(self)->lastCapturedIndex();
}

void QRegularExpressionMatch_Captured(QRegularExpressionMatch* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QRegularExpressionMatch*>(self)->captured();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpressionMatch_CapturedWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString ret = const_cast<const QRegularExpressionMatch*>(self)->captured(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpressionMatch_CapturedTexts(QRegularExpressionMatch* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QRegularExpressionMatch*>(self)->capturedTexts();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

int QRegularExpressionMatch_CapturedStart(QRegularExpressionMatch* self) {
	return const_cast<const QRegularExpressionMatch*>(self)->capturedStart();
}

int QRegularExpressionMatch_CapturedLength(QRegularExpressionMatch* self) {
	return const_cast<const QRegularExpressionMatch*>(self)->capturedLength();
}

int QRegularExpressionMatch_CapturedEnd(QRegularExpressionMatch* self) {
	return const_cast<const QRegularExpressionMatch*>(self)->capturedEnd();
}

int QRegularExpressionMatch_CapturedStartWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return const_cast<const QRegularExpressionMatch*>(self)->capturedStart(name_QString);
}

int QRegularExpressionMatch_CapturedLengthWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return const_cast<const QRegularExpressionMatch*>(self)->capturedLength(name_QString);
}

int QRegularExpressionMatch_CapturedEndWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return const_cast<const QRegularExpressionMatch*>(self)->capturedEnd(name_QString);
}

void QRegularExpressionMatch_Captured1(QRegularExpressionMatch* self, int nth, char** _out, int* _out_Strlen) {
	QString ret = self->captured(static_cast<int>(nth));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QRegularExpressionMatch_CapturedStart1(QRegularExpressionMatch* self, int nth) {
	return self->capturedStart(static_cast<int>(nth));
}

int QRegularExpressionMatch_CapturedLength1(QRegularExpressionMatch* self, int nth) {
	return self->capturedLength(static_cast<int>(nth));
}

int QRegularExpressionMatch_CapturedEnd1(QRegularExpressionMatch* self, int nth) {
	return self->capturedEnd(static_cast<int>(nth));
}

void QRegularExpressionMatch_Delete(QRegularExpressionMatch* self) {
	delete self;
}

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new() {
	return new QRegularExpressionMatchIterator();
}

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new2(QRegularExpressionMatchIterator* iterator) {
	return new QRegularExpressionMatchIterator(*iterator);
}

void QRegularExpressionMatchIterator_OperatorAssign(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* iterator) {
	self->operator=(*iterator);
}

void QRegularExpressionMatchIterator_Swap(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* other) {
	self->swap(*other);
}

bool QRegularExpressionMatchIterator_IsValid(QRegularExpressionMatchIterator* self) {
	return const_cast<const QRegularExpressionMatchIterator*>(self)->isValid();
}

bool QRegularExpressionMatchIterator_HasNext(QRegularExpressionMatchIterator* self) {
	return const_cast<const QRegularExpressionMatchIterator*>(self)->hasNext();
}

QRegularExpressionMatch* QRegularExpressionMatchIterator_Next(QRegularExpressionMatchIterator* self) {
	QRegularExpressionMatch ret = self->next();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatch*>(new QRegularExpressionMatch(ret));
}

QRegularExpressionMatch* QRegularExpressionMatchIterator_PeekNext(QRegularExpressionMatchIterator* self) {
	QRegularExpressionMatch ret = const_cast<const QRegularExpressionMatchIterator*>(self)->peekNext();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatch*>(new QRegularExpressionMatch(ret));
}

QRegularExpression* QRegularExpressionMatchIterator_RegularExpression(QRegularExpressionMatchIterator* self) {
	QRegularExpression ret = const_cast<const QRegularExpressionMatchIterator*>(self)->regularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

uintptr_t QRegularExpressionMatchIterator_MatchType(QRegularExpressionMatchIterator* self) {
	QRegularExpression::MatchType ret = const_cast<const QRegularExpressionMatchIterator*>(self)->matchType();
	return static_cast<uintptr_t>(ret);
}

int QRegularExpressionMatchIterator_MatchOptions(QRegularExpressionMatchIterator* self) {
	QRegularExpression::MatchOptions ret = const_cast<const QRegularExpressionMatchIterator*>(self)->matchOptions();
	return static_cast<int>(ret);
}

void QRegularExpressionMatchIterator_Delete(QRegularExpressionMatchIterator* self) {
	delete self;
}

