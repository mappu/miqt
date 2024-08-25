#include "gen_qregexp.h"
#include "qregexp.h"

#include <QList>
#include <QRegExp>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRegExp* QRegExp_new() {
	return new QRegExp();
}

QRegExp* QRegExp_new2(QRegExp* rx) {
	return new QRegExp(*rx);
}

void QRegExp_OperatorAssign(QRegExp* self, QRegExp* rx) {
	self->operator=(*rx);
}

void QRegExp_Swap(QRegExp* self, QRegExp* other) {
	self->swap(*other);
}

bool QRegExp_OperatorEqual(QRegExp* self, QRegExp* rx) {
	return self->operator==(*rx);
}

bool QRegExp_OperatorNotEqual(QRegExp* self, QRegExp* rx) {
	return self->operator!=(*rx);
}

bool QRegExp_IsEmpty(QRegExp* self) {
	return self->isEmpty();
}

bool QRegExp_IsValid(QRegExp* self) {
	return self->isValid();
}

void QRegExp_Pattern(QRegExp* self, char** _out, int* _out_Strlen) {
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

bool QRegExp_IsMinimal(QRegExp* self) {
	return self->isMinimal();
}

void QRegExp_SetMinimal(QRegExp* self, bool minimal) {
	self->setMinimal(minimal);
}

bool QRegExp_ExactMatch(QRegExp* self, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	return self->exactMatch(str_QString);
}

int QRegExp_MatchedLength(QRegExp* self) {
	return self->matchedLength();
}

int QRegExp_CaptureCount(QRegExp* self) {
	return self->captureCount();
}

void QRegExp_CapturedTexts(QRegExp* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
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

void QRegExp_CapturedTexts2(QRegExp* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
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

void QRegExp_Cap(QRegExp* self, char** _out, int* _out_Strlen) {
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

int QRegExp_Pos(QRegExp* self) {
	return self->pos();
}

int QRegExp_Pos2(QRegExp* self) {
	return self->pos();
}

void QRegExp_ErrorString(QRegExp* self, char** _out, int* _out_Strlen) {
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

void QRegExp_Cap1(QRegExp* self, int nth, char** _out, int* _out_Strlen) {
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

int QRegExp_Pos1(QRegExp* self, int nth) {
	return self->pos(static_cast<int>(nth));
}

int QRegExp_Pos1WithNth(QRegExp* self, int nth) {
	return self->pos(static_cast<int>(nth));
}

void QRegExp_Delete(QRegExp* self) {
	delete self;
}

