#include <QList>
#include <QRegExp>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qregexp.h"

#include "gen_qregexp.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRegExp* QRegExp_new() {
	return new QRegExp();
}

QRegExp* QRegExp_new2(const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	return new QRegExp(pattern_QString);
}

QRegExp* QRegExp_new3(QRegExp* rx) {
	return new QRegExp(*rx);
}

QRegExp* QRegExp_new4(const char* pattern, size_t pattern_Strlen, uintptr_t cs) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	return new QRegExp(pattern_QString, static_cast<Qt::CaseSensitivity>(cs));
}

QRegExp* QRegExp_new5(const char* pattern, size_t pattern_Strlen, uintptr_t cs, uintptr_t syntax) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	return new QRegExp(pattern_QString, static_cast<Qt::CaseSensitivity>(cs), static_cast<QRegExp::PatternSyntax>(syntax));
}

void QRegExp_OperatorAssign(QRegExp* self, QRegExp* rx) {
	self->operator=(*rx);
}

void QRegExp_Swap(QRegExp* self, QRegExp* other) {
	self->swap(*other);
}

bool QRegExp_OperatorEqual(const QRegExp* self, QRegExp* rx) {
	return self->operator==(*rx);
}

bool QRegExp_OperatorNotEqual(const QRegExp* self, QRegExp* rx) {
	return self->operator!=(*rx);
}

bool QRegExp_IsEmpty(const QRegExp* self) {
	return self->isEmpty();
}

bool QRegExp_IsValid(const QRegExp* self) {
	return self->isValid();
}

void QRegExp_Pattern(const QRegExp* self, char** _out, int* _out_Strlen) {
	QString ret = self->pattern();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegExp_SetPattern(QRegExp* self, const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	self->setPattern(pattern_QString);
}

uintptr_t QRegExp_CaseSensitivity(const QRegExp* self) {
	Qt::CaseSensitivity ret = self->caseSensitivity();
	return static_cast<uintptr_t>(ret);
}

void QRegExp_SetCaseSensitivity(QRegExp* self, uintptr_t cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

uintptr_t QRegExp_PatternSyntax(const QRegExp* self) {
	QRegExp::PatternSyntax ret = self->patternSyntax();
	return static_cast<uintptr_t>(ret);
}

void QRegExp_SetPatternSyntax(QRegExp* self, uintptr_t syntax) {
	self->setPatternSyntax(static_cast<QRegExp::PatternSyntax>(syntax));
}

bool QRegExp_IsMinimal(const QRegExp* self) {
	return self->isMinimal();
}

void QRegExp_SetMinimal(QRegExp* self, bool minimal) {
	self->setMinimal(minimal);
}

bool QRegExp_ExactMatch(const QRegExp* self, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->exactMatch(str_QString);
}

int QRegExp_IndexIn(const QRegExp* self, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->indexIn(str_QString);
}

int QRegExp_LastIndexIn(const QRegExp* self, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->lastIndexIn(str_QString);
}

int QRegExp_MatchedLength(const QRegExp* self) {
	return self->matchedLength();
}

int QRegExp_CaptureCount(const QRegExp* self) {
	return self->captureCount();
}

void QRegExp_CapturedTexts(const QRegExp* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = self->capturedTexts();
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

void QRegExp_CapturedTexts2(QRegExp* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = self->capturedTexts();
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

void QRegExp_Cap(const QRegExp* self, char** _out, int* _out_Strlen) {
	QString ret = self->cap();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegExp_Cap2(QRegExp* self, char** _out, int* _out_Strlen) {
	QString ret = self->cap();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QRegExp_Pos(const QRegExp* self) {
	return self->pos();
}

int QRegExp_Pos2(QRegExp* self) {
	return self->pos();
}

void QRegExp_ErrorString(const QRegExp* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegExp_ErrorString2(QRegExp* self, char** _out, int* _out_Strlen) {
	QString ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegExp_Escape(const char* str, size_t str_Strlen, char** _out, int* _out_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QString ret = QRegExp::escape(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QRegExp_IndexIn2(const QRegExp* self, const char* str, size_t str_Strlen, int offset) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->indexIn(str_QString, static_cast<int>(offset));
}

int QRegExp_IndexIn3(const QRegExp* self, const char* str, size_t str_Strlen, int offset, uintptr_t caretMode) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->indexIn(str_QString, static_cast<int>(offset), static_cast<QRegExp::CaretMode>(caretMode));
}

int QRegExp_LastIndexIn2(const QRegExp* self, const char* str, size_t str_Strlen, int offset) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->lastIndexIn(str_QString, static_cast<int>(offset));
}

int QRegExp_LastIndexIn3(const QRegExp* self, const char* str, size_t str_Strlen, int offset, uintptr_t caretMode) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->lastIndexIn(str_QString, static_cast<int>(offset), static_cast<QRegExp::CaretMode>(caretMode));
}

void QRegExp_Cap1(const QRegExp* self, int nth, char** _out, int* _out_Strlen) {
	QString ret = self->cap(static_cast<int>(nth));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QRegExp_Cap1WithNth(QRegExp* self, int nth, char** _out, int* _out_Strlen) {
	QString ret = self->cap(static_cast<int>(nth));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QRegExp_Pos1(const QRegExp* self, int nth) {
	return self->pos(static_cast<int>(nth));
}

int QRegExp_Pos1WithNth(QRegExp* self, int nth) {
	return self->pos(static_cast<int>(nth));
}

void QRegExp_Delete(QRegExp* self) {
	delete self;
}

