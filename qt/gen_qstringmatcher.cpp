#include "gen_qstringmatcher.h"
#include "qstringmatcher.h"

#include <QChar>
#include <QString>
#include <QStringMatcher>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStringMatcher* QStringMatcher_new() {
	return new QStringMatcher();
}

QStringMatcher* QStringMatcher_new2(QStringMatcher* other) {
	return new QStringMatcher(*other);
}

void QStringMatcher_OperatorAssign(QStringMatcher* self, QStringMatcher* other) {
	self->operator=(*other);
}

void QStringMatcher_SetPattern(QStringMatcher* self, const char* pattern, size_t pattern_Strlen) {
	QString pattern_QString = QString::fromUtf8(pattern, pattern_Strlen);
	self->setPattern(pattern_QString);
}

int QStringMatcher_IndexIn(QStringMatcher* self, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->indexIn(str_QString);
}

int QStringMatcher_IndexIn2(QStringMatcher* self, QChar* str, int length) {
	return self->indexIn(str, static_cast<int>(length));
}

void QStringMatcher_Pattern(QStringMatcher* self, char** _out, int* _out_Strlen) {
	QString ret = self->pattern();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QStringMatcher_IndexIn22(QStringMatcher* self, const char* str, size_t str_Strlen, int from) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->indexIn(str_QString, static_cast<int>(from));
}

int QStringMatcher_IndexIn3(QStringMatcher* self, QChar* str, int length, int from) {
	return self->indexIn(str, static_cast<int>(length), static_cast<int>(from));
}

void QStringMatcher_Delete(QStringMatcher* self) {
	delete self;
}

