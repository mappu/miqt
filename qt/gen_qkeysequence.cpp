#include <QKeySequence>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qkeysequence.h"

#include "gen_qkeysequence.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QKeySequence* QKeySequence_new() {
	return new QKeySequence();
}

QKeySequence* QKeySequence_new2(const char* key, size_t key_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return new QKeySequence(key_QString);
}

QKeySequence* QKeySequence_new3(int k1) {
	return new QKeySequence(static_cast<int>(k1));
}

QKeySequence* QKeySequence_new4(QKeySequence* ks) {
	return new QKeySequence(*ks);
}

QKeySequence* QKeySequence_new5(uintptr_t key) {
	return new QKeySequence(static_cast<QKeySequence::StandardKey>(key));
}

QKeySequence* QKeySequence_new6(const char* key, size_t key_Strlen, uintptr_t format) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	return new QKeySequence(key_QString, static_cast<QKeySequence::SequenceFormat>(format));
}

QKeySequence* QKeySequence_new7(int k1, int k2) {
	return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2));
}

QKeySequence* QKeySequence_new8(int k1, int k2, int k3) {
	return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2), static_cast<int>(k3));
}

QKeySequence* QKeySequence_new9(int k1, int k2, int k3, int k4) {
	return new QKeySequence(static_cast<int>(k1), static_cast<int>(k2), static_cast<int>(k3), static_cast<int>(k4));
}

int QKeySequence_Count(QKeySequence* self) {
	return const_cast<const QKeySequence*>(self)->count();
}

bool QKeySequence_IsEmpty(QKeySequence* self) {
	return const_cast<const QKeySequence*>(self)->isEmpty();
}

void QKeySequence_ToString(QKeySequence* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QKeySequence*>(self)->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QKeySequence* QKeySequence_FromString(const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QKeySequence ret = QKeySequence::fromString(str_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QKeySequence*>(new QKeySequence(ret));
}

void QKeySequence_ListFromString(const char* str, size_t str_Strlen, QKeySequence*** _out, size_t* _out_len) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QList<QKeySequence> ret = QKeySequence::listFromString(str_QString);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QKeySequence** __out = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QKeySequence(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QKeySequence_ListToString(QKeySequence** list, size_t list_len, char** _out, int* _out_Strlen) {
	QList<QKeySequence> list_QList;
	list_QList.reserve(list_len);
	for(size_t i = 0; i < list_len; ++i) {
		list_QList.push_back(*(list[i]));
	}
	QString ret = QKeySequence::listToString(list_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QKeySequence_Matches(QKeySequence* self, QKeySequence* seq) {
	QKeySequence::SequenceMatch ret = const_cast<const QKeySequence*>(self)->matches(*seq);
	return static_cast<uintptr_t>(ret);
}

QKeySequence* QKeySequence_Mnemonic(const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	QKeySequence ret = QKeySequence::mnemonic(text_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QKeySequence*>(new QKeySequence(ret));
}

void QKeySequence_KeyBindings(uintptr_t key, QKeySequence*** _out, size_t* _out_len) {
	QList<QKeySequence> ret = QKeySequence::keyBindings(static_cast<QKeySequence::StandardKey>(key));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QKeySequence** __out = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QKeySequence(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

int QKeySequence_OperatorSubscript(QKeySequence* self, unsigned int i) {
	return const_cast<const QKeySequence*>(self)->operator[](static_cast<uint>(i));
}

void QKeySequence_OperatorAssign(QKeySequence* self, QKeySequence* other) {
	self->operator=(*other);
}

void QKeySequence_Swap(QKeySequence* self, QKeySequence* other) {
	self->swap(*other);
}

bool QKeySequence_OperatorEqual(QKeySequence* self, QKeySequence* other) {
	return const_cast<const QKeySequence*>(self)->operator==(*other);
}

bool QKeySequence_OperatorNotEqual(QKeySequence* self, QKeySequence* other) {
	return const_cast<const QKeySequence*>(self)->operator!=(*other);
}

bool QKeySequence_OperatorLesser(QKeySequence* self, QKeySequence* ks) {
	return const_cast<const QKeySequence*>(self)->operator<(*ks);
}

bool QKeySequence_OperatorGreater(QKeySequence* self, QKeySequence* other) {
	return const_cast<const QKeySequence*>(self)->operator>(*other);
}

bool QKeySequence_OperatorLesserOrEqual(QKeySequence* self, QKeySequence* other) {
	return const_cast<const QKeySequence*>(self)->operator<=(*other);
}

bool QKeySequence_OperatorGreaterOrEqual(QKeySequence* self, QKeySequence* other) {
	return const_cast<const QKeySequence*>(self)->operator>=(*other);
}

bool QKeySequence_IsDetached(QKeySequence* self) {
	return const_cast<const QKeySequence*>(self)->isDetached();
}

void QKeySequence_ToString1(QKeySequence* self, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QKeySequence*>(self)->toString(static_cast<QKeySequence::SequenceFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QKeySequence* QKeySequence_FromString2(const char* str, size_t str_Strlen, uintptr_t format) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QKeySequence ret = QKeySequence::fromString(str_QString, static_cast<QKeySequence::SequenceFormat>(format));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QKeySequence*>(new QKeySequence(ret));
}

void QKeySequence_ListFromString2(const char* str, size_t str_Strlen, uintptr_t format, QKeySequence*** _out, size_t* _out_len) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QList<QKeySequence> ret = QKeySequence::listFromString(str_QString, static_cast<QKeySequence::SequenceFormat>(format));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QKeySequence** __out = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QKeySequence(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QKeySequence_ListToString2(QKeySequence** list, size_t list_len, uintptr_t format, char** _out, int* _out_Strlen) {
	QList<QKeySequence> list_QList;
	list_QList.reserve(list_len);
	for(size_t i = 0; i < list_len; ++i) {
		list_QList.push_back(*(list[i]));
	}
	QString ret = QKeySequence::listToString(list_QList, static_cast<QKeySequence::SequenceFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QKeySequence_Delete(QKeySequence* self) {
	delete self;
}

