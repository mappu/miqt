#include "gen_qregularexpression.h"
#include "qregularexpression.h"

#include <QList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionMatchIterator>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRegularExpression* QRegularExpression_new() {
	return new QRegularExpression();
}

QRegularExpression* QRegularExpression_new2(QRegularExpression* re) {
	return new QRegularExpression(*re);
}

void QRegularExpression_OperatorAssign(QRegularExpression* self, QRegularExpression* re) {
	self->operator=(*re);
}

void QRegularExpression_Swap(QRegularExpression* self, QRegularExpression* other) {
	self->swap(*other);
}

void QRegularExpression_Pattern(QRegularExpression* self, char** _out, int* _out_Strlen) {
	QString ret = self->pattern();
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
	return self->isValid();
}

int QRegularExpression_PatternErrorOffset(QRegularExpression* self) {
	return self->patternErrorOffset();
}

void QRegularExpression_ErrorString(QRegularExpression* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QRegularExpression_CaptureCount(QRegularExpression* self) {
	return self->captureCount();
}

void QRegularExpression_NamedCaptureGroups(QRegularExpression* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->namedCaptureGroups();
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

void QRegularExpression_Optimize(QRegularExpression* self) {
	self->optimize();
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
	return self->operator==(*re);
}

bool QRegularExpression_OperatorNotEqual(QRegularExpression* self, QRegularExpression* re) {
	return self->operator!=(*re);
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
	QRegularExpression ret = self->regularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

bool QRegularExpressionMatch_HasMatch(QRegularExpressionMatch* self) {
	return self->hasMatch();
}

bool QRegularExpressionMatch_HasPartialMatch(QRegularExpressionMatch* self) {
	return self->hasPartialMatch();
}

bool QRegularExpressionMatch_IsValid(QRegularExpressionMatch* self) {
	return self->isValid();
}

int QRegularExpressionMatch_LastCapturedIndex(QRegularExpressionMatch* self) {
	return self->lastCapturedIndex();
}

void QRegularExpressionMatch_Captured(QRegularExpressionMatch* self, char** _out, int* _out_Strlen) {
	QString ret = self->captured();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpressionMatch_CapturedWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString ret = self->captured(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegularExpressionMatch_CapturedTexts(QRegularExpressionMatch* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->capturedTexts();
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
	return self->capturedStart();
}

int QRegularExpressionMatch_CapturedLength(QRegularExpressionMatch* self) {
	return self->capturedLength();
}

int QRegularExpressionMatch_CapturedEnd(QRegularExpressionMatch* self) {
	return self->capturedEnd();
}

int QRegularExpressionMatch_CapturedStartWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return self->capturedStart(name_QString);
}

int QRegularExpressionMatch_CapturedLengthWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return self->capturedLength(name_QString);
}

int QRegularExpressionMatch_CapturedEndWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return self->capturedEnd(name_QString);
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
	return self->isValid();
}

bool QRegularExpressionMatchIterator_HasNext(QRegularExpressionMatchIterator* self) {
	return self->hasNext();
}

QRegularExpressionMatch* QRegularExpressionMatchIterator_Next(QRegularExpressionMatchIterator* self) {
	QRegularExpressionMatch ret = self->next();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatch*>(new QRegularExpressionMatch(ret));
}

QRegularExpressionMatch* QRegularExpressionMatchIterator_PeekNext(QRegularExpressionMatchIterator* self) {
	QRegularExpressionMatch ret = self->peekNext();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpressionMatch*>(new QRegularExpressionMatch(ret));
}

QRegularExpression* QRegularExpressionMatchIterator_RegularExpression(QRegularExpressionMatchIterator* self) {
	QRegularExpression ret = self->regularExpression();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegularExpression*>(new QRegularExpression(ret));
}

void QRegularExpressionMatchIterator_Delete(QRegularExpressionMatchIterator* self) {
	delete self;
}

