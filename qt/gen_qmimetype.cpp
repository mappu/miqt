#include <QList>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qmimetype.h"

#include "gen_qmimetype.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMimeType* QMimeType_new() {
	return new QMimeType();
}

QMimeType* QMimeType_new2(QMimeType* other) {
	return new QMimeType(*other);
}

void QMimeType_OperatorAssign(QMimeType* self, QMimeType* other) {
	self->operator=(*other);
}

void QMimeType_Swap(QMimeType* self, QMimeType* other) {
	self->swap(*other);
}

bool QMimeType_OperatorEqual(QMimeType* self, QMimeType* other) {
	return const_cast<const QMimeType*>(self)->operator==(*other);
}

bool QMimeType_OperatorNotEqual(QMimeType* self, QMimeType* other) {
	return const_cast<const QMimeType*>(self)->operator!=(*other);
}

bool QMimeType_IsValid(QMimeType* self) {
	return const_cast<const QMimeType*>(self)->isValid();
}

bool QMimeType_IsDefault(QMimeType* self) {
	return const_cast<const QMimeType*>(self)->isDefault();
}

void QMimeType_Name(QMimeType* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMimeType*>(self)->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeType_Comment(QMimeType* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMimeType*>(self)->comment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeType_GenericIconName(QMimeType* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMimeType*>(self)->genericIconName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeType_IconName(QMimeType* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMimeType*>(self)->iconName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeType_GlobPatterns(QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QMimeType*>(self)->globPatterns();
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

void QMimeType_ParentMimeTypes(QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QMimeType*>(self)->parentMimeTypes();
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

void QMimeType_AllAncestors(QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QMimeType*>(self)->allAncestors();
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

void QMimeType_Aliases(QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QMimeType*>(self)->aliases();
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

void QMimeType_Suffixes(QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QMimeType*>(self)->suffixes();
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

void QMimeType_PreferredSuffix(QMimeType* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMimeType*>(self)->preferredSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QMimeType_Inherits(QMimeType* self, const char* mimeTypeName, size_t mimeTypeName_Strlen) {
	QString mimeTypeName_QString = QString::fromUtf8(mimeTypeName, mimeTypeName_Strlen);
	return const_cast<const QMimeType*>(self)->inherits(mimeTypeName_QString);
}

void QMimeType_FilterString(QMimeType* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QMimeType*>(self)->filterString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeType_Delete(QMimeType* self) {
	delete self;
}

