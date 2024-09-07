#include <QByteArray>
#include <QChar>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include "qstringview.h"

#include "gen_qstringview.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStringView* QStringView_new() {
	return new QStringView();
}

void QStringView_ToString(QStringView* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QStringView*>(self)->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

size_t QStringView_Size(QStringView* self) {
	return const_cast<const QStringView*>(self)->size();
}

QChar* QStringView_OperatorSubscript(QStringView* self, size_t n) {
	QChar ret = const_cast<const QStringView*>(self)->operator[](static_cast<qsizetype>(n));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QByteArray* QStringView_ToLatin1(QStringView* self) {
	QByteArray ret = const_cast<const QStringView*>(self)->toLatin1();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QStringView_ToUtf8(QStringView* self) {
	QByteArray ret = const_cast<const QStringView*>(self)->toUtf8();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QStringView_ToLocal8Bit(QStringView* self) {
	QByteArray ret = const_cast<const QStringView*>(self)->toLocal8Bit();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QStringView_ToUcs4(QStringView* self, unsigned int** _out, size_t* _out_len) {
	QVector<unsigned int> ret = const_cast<const QStringView*>(self)->toUcs4();
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* __out = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QChar* QStringView_At(QStringView* self, size_t n) {
	QChar ret = const_cast<const QStringView*>(self)->at(static_cast<qsizetype>(n));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

void QStringView_Truncate(QStringView* self, size_t n) {
	self->truncate(static_cast<qsizetype>(n));
}

void QStringView_Chop(QStringView* self, size_t n) {
	self->chop(static_cast<qsizetype>(n));
}

int QStringView_CompareWithQChar(QStringView* self, QChar* c) {
	return const_cast<const QStringView*>(self)->compare(*c);
}

int QStringView_Compare2(QStringView* self, QChar* c, uintptr_t cs) {
	return const_cast<const QStringView*>(self)->compare(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_StartsWithWithQChar(QStringView* self, QChar* c) {
	return const_cast<const QStringView*>(self)->startsWith(*c);
}

bool QStringView_StartsWith2(QStringView* self, QChar* c, uintptr_t cs) {
	return const_cast<const QStringView*>(self)->startsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_EndsWithWithQChar(QStringView* self, QChar* c) {
	return const_cast<const QStringView*>(self)->endsWith(*c);
}

bool QStringView_EndsWith2(QStringView* self, QChar* c, uintptr_t cs) {
	return const_cast<const QStringView*>(self)->endsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

size_t QStringView_IndexOf(QStringView* self, QChar* c) {
	return const_cast<const QStringView*>(self)->indexOf(*c);
}

bool QStringView_Contains(QStringView* self, QChar* c) {
	return const_cast<const QStringView*>(self)->contains(*c);
}

size_t QStringView_Count(QStringView* self, QChar* c) {
	return const_cast<const QStringView*>(self)->count(*c);
}

size_t QStringView_LastIndexOf(QStringView* self, QChar* c) {
	return const_cast<const QStringView*>(self)->lastIndexOf(*c);
}

bool QStringView_IsRightToLeft(QStringView* self) {
	return const_cast<const QStringView*>(self)->isRightToLeft();
}

bool QStringView_IsValidUtf16(QStringView* self) {
	return const_cast<const QStringView*>(self)->isValidUtf16();
}

int16_t QStringView_ToShort(QStringView* self) {
	return const_cast<const QStringView*>(self)->toShort();
}

uint16_t QStringView_ToUShort(QStringView* self) {
	return const_cast<const QStringView*>(self)->toUShort();
}

int QStringView_ToInt(QStringView* self) {
	return const_cast<const QStringView*>(self)->toInt();
}

unsigned int QStringView_ToUInt(QStringView* self) {
	return const_cast<const QStringView*>(self)->toUInt();
}

long QStringView_ToLong(QStringView* self) {
	return const_cast<const QStringView*>(self)->toLong();
}

unsigned long QStringView_ToULong(QStringView* self) {
	return const_cast<const QStringView*>(self)->toULong();
}

int64_t QStringView_ToLongLong(QStringView* self) {
	return const_cast<const QStringView*>(self)->toLongLong();
}

uint64_t QStringView_ToULongLong(QStringView* self) {
	return const_cast<const QStringView*>(self)->toULongLong();
}

float QStringView_ToFloat(QStringView* self) {
	return const_cast<const QStringView*>(self)->toFloat();
}

double QStringView_ToDouble(QStringView* self) {
	return const_cast<const QStringView*>(self)->toDouble();
}

bool QStringView_Empty(QStringView* self) {
	return const_cast<const QStringView*>(self)->empty();
}

QChar* QStringView_Front(QStringView* self) {
	QChar ret = const_cast<const QStringView*>(self)->front();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QStringView_Back(QStringView* self) {
	QChar ret = const_cast<const QStringView*>(self)->back();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

bool QStringView_IsNull(QStringView* self) {
	return const_cast<const QStringView*>(self)->isNull();
}

bool QStringView_IsEmpty(QStringView* self) {
	return const_cast<const QStringView*>(self)->isEmpty();
}

int QStringView_Length(QStringView* self) {
	return const_cast<const QStringView*>(self)->length();
}

QChar* QStringView_First(QStringView* self) {
	QChar ret = const_cast<const QStringView*>(self)->first();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QStringView_Last(QStringView* self) {
	QChar ret = const_cast<const QStringView*>(self)->last();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

size_t QStringView_IndexOf2(QStringView* self, QChar* c, size_t from) {
	return const_cast<const QStringView*>(self)->indexOf(*c, static_cast<qsizetype>(from));
}

size_t QStringView_IndexOf3(QStringView* self, QChar* c, size_t from, uintptr_t cs) {
	return const_cast<const QStringView*>(self)->indexOf(*c, static_cast<qsizetype>(from), static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_Contains2(QStringView* self, QChar* c, uintptr_t cs) {
	return const_cast<const QStringView*>(self)->contains(*c, static_cast<Qt::CaseSensitivity>(cs));
}

size_t QStringView_Count2(QStringView* self, QChar* c, uintptr_t cs) {
	return const_cast<const QStringView*>(self)->count(*c, static_cast<Qt::CaseSensitivity>(cs));
}

size_t QStringView_LastIndexOf2(QStringView* self, QChar* c, size_t from) {
	return const_cast<const QStringView*>(self)->lastIndexOf(*c, static_cast<qsizetype>(from));
}

size_t QStringView_LastIndexOf3(QStringView* self, QChar* c, size_t from, uintptr_t cs) {
	return const_cast<const QStringView*>(self)->lastIndexOf(*c, static_cast<qsizetype>(from), static_cast<Qt::CaseSensitivity>(cs));
}

int16_t QStringView_ToShort1(QStringView* self, bool* ok) {
	return const_cast<const QStringView*>(self)->toShort(ok);
}

int16_t QStringView_ToShort2(QStringView* self, bool* ok, int base) {
	return const_cast<const QStringView*>(self)->toShort(ok, static_cast<int>(base));
}

uint16_t QStringView_ToUShort1(QStringView* self, bool* ok) {
	return const_cast<const QStringView*>(self)->toUShort(ok);
}

uint16_t QStringView_ToUShort2(QStringView* self, bool* ok, int base) {
	return const_cast<const QStringView*>(self)->toUShort(ok, static_cast<int>(base));
}

int QStringView_ToInt1(QStringView* self, bool* ok) {
	return const_cast<const QStringView*>(self)->toInt(ok);
}

int QStringView_ToInt2(QStringView* self, bool* ok, int base) {
	return const_cast<const QStringView*>(self)->toInt(ok, static_cast<int>(base));
}

unsigned int QStringView_ToUInt1(QStringView* self, bool* ok) {
	return const_cast<const QStringView*>(self)->toUInt(ok);
}

unsigned int QStringView_ToUInt2(QStringView* self, bool* ok, int base) {
	return const_cast<const QStringView*>(self)->toUInt(ok, static_cast<int>(base));
}

long QStringView_ToLong1(QStringView* self, bool* ok) {
	return const_cast<const QStringView*>(self)->toLong(ok);
}

long QStringView_ToLong2(QStringView* self, bool* ok, int base) {
	return const_cast<const QStringView*>(self)->toLong(ok, static_cast<int>(base));
}

unsigned long QStringView_ToULong1(QStringView* self, bool* ok) {
	return const_cast<const QStringView*>(self)->toULong(ok);
}

unsigned long QStringView_ToULong2(QStringView* self, bool* ok, int base) {
	return const_cast<const QStringView*>(self)->toULong(ok, static_cast<int>(base));
}

int64_t QStringView_ToLongLong1(QStringView* self, bool* ok) {
	return const_cast<const QStringView*>(self)->toLongLong(ok);
}

int64_t QStringView_ToLongLong2(QStringView* self, bool* ok, int base) {
	return const_cast<const QStringView*>(self)->toLongLong(ok, static_cast<int>(base));
}

uint64_t QStringView_ToULongLong1(QStringView* self, bool* ok) {
	return const_cast<const QStringView*>(self)->toULongLong(ok);
}

uint64_t QStringView_ToULongLong2(QStringView* self, bool* ok, int base) {
	return const_cast<const QStringView*>(self)->toULongLong(ok, static_cast<int>(base));
}

float QStringView_ToFloat1(QStringView* self, bool* ok) {
	return const_cast<const QStringView*>(self)->toFloat(ok);
}

double QStringView_ToDouble1(QStringView* self, bool* ok) {
	return const_cast<const QStringView*>(self)->toDouble(ok);
}

void QStringView_Delete(QStringView* self) {
	delete self;
}

