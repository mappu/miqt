#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringMatcher>
#include "qstringmatcher.h"

#include "gen_qstringmatcher.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStringMatcher* QStringMatcher_new() {
	return new QStringMatcher();
}

QStringMatcher* QStringMatcher_new2(const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	return new QStringMatcher(pattern_QString);
}

QStringMatcher* QStringMatcher_new3(QChar* uc, int lenVal) {
	return new QStringMatcher(uc, static_cast<int>(lenVal));
}

QStringMatcher* QStringMatcher_new4(QStringMatcher* other) {
	return new QStringMatcher(*other);
}

QStringMatcher* QStringMatcher_new5(const char* pattern, size_t pattern_Strlen, uintptr_t cs) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	return new QStringMatcher(pattern_QString, static_cast<Qt::CaseSensitivity>(cs));
}

QStringMatcher* QStringMatcher_new6(QChar* uc, int lenVal, uintptr_t cs) {
	return new QStringMatcher(uc, static_cast<int>(lenVal), static_cast<Qt::CaseSensitivity>(cs));
}

void QStringMatcher_OperatorAssign(QStringMatcher* self, QStringMatcher* other) {
	self->operator=(*other);
}

void QStringMatcher_SetPattern(QStringMatcher* self, const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	self->setPattern(pattern_QString);
}

void QStringMatcher_SetCaseSensitivity(QStringMatcher* self, uintptr_t cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

int QStringMatcher_IndexIn(QStringMatcher* self, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return const_cast<const QStringMatcher*>(self)->indexIn(str_QString);
}

int QStringMatcher_IndexIn2(QStringMatcher* self, QChar* str, int length) {
	return const_cast<const QStringMatcher*>(self)->indexIn(str, static_cast<int>(length));
}

void QStringMatcher_Pattern(QStringMatcher* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QStringMatcher*>(self)->pattern();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QStringMatcher_CaseSensitivity(QStringMatcher* self) {
	Qt::CaseSensitivity ret = const_cast<const QStringMatcher*>(self)->caseSensitivity();
	return static_cast<uintptr_t>(ret);
}

int QStringMatcher_IndexIn22(QStringMatcher* self, const char* str, size_t str_Strlen, int from) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return const_cast<const QStringMatcher*>(self)->indexIn(str_QString, static_cast<int>(from));
}

int QStringMatcher_IndexIn3(QStringMatcher* self, QChar* str, int length, int from) {
	return const_cast<const QStringMatcher*>(self)->indexIn(str, static_cast<int>(length), static_cast<int>(from));
}

void QStringMatcher_Delete(QStringMatcher* self) {
	delete self;
}

