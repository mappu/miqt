#include "gen_qstringview.h"
#include "qstringview.h"

#include <QByteArray>
#include <QChar>
#include <QList>
#include <QString>
#include <QStringView>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QStringView* QStringView_new() {
	return new QStringView();
}

void QStringView_ToString(QStringView* self, char** _out, int* _out_Strlen) {
	QString ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

size_t QStringView_Size(QStringView* self) {
	return self->size();
}

QChar* QStringView_OperatorSubscript(QStringView* self, size_t n) {
	QChar ret = self->operator[](static_cast<qsizetype>(n));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QByteArray* QStringView_ToLatin1(QStringView* self) {
	QByteArray ret = self->toLatin1();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QStringView_ToUtf8(QStringView* self) {
	QByteArray ret = self->toUtf8();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QStringView_ToLocal8Bit(QStringView* self) {
	QByteArray ret = self->toLocal8Bit();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QStringView_ToUcs4(QStringView* self, unsigned int** _out, size_t* _out_len) {
	QVector<uint> ret = self->toUcs4();
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* __out = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QChar* QStringView_At(QStringView* self, size_t n) {
	QChar ret = self->at(static_cast<qsizetype>(n));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

void QStringView_Truncate(QStringView* self, size_t n) {
	self->truncate(static_cast<qsizetype>(n));
}

void QStringView_Chop(QStringView* self, size_t n) {
	self->chop(static_cast<qsizetype>(n));
}

int QStringView_Compare(QStringView* self, QChar* c) {
	return self->compare(*c);
}

bool QStringView_StartsWith(QStringView* self, QChar* c) {
	return self->startsWith(*c);
}

bool QStringView_EndsWith(QStringView* self, QChar* c) {
	return self->endsWith(*c);
}

bool QStringView_IsRightToLeft(QStringView* self) {
	return self->isRightToLeft();
}

bool QStringView_IsValidUtf16(QStringView* self) {
	return self->isValidUtf16();
}

int16_t QStringView_ToShort(QStringView* self) {
	return self->toShort();
}

uint16_t QStringView_ToUShort(QStringView* self) {
	return self->toUShort();
}

int QStringView_ToInt(QStringView* self) {
	return self->toInt();
}

unsigned int QStringView_ToUInt(QStringView* self) {
	return self->toUInt();
}

long QStringView_ToLong(QStringView* self) {
	return self->toLong();
}

unsigned long QStringView_ToULong(QStringView* self) {
	return self->toULong();
}

int64_t QStringView_ToLongLong(QStringView* self) {
	return self->toLongLong();
}

uint64_t QStringView_ToULongLong(QStringView* self) {
	return self->toULongLong();
}

float QStringView_ToFloat(QStringView* self) {
	return self->toFloat();
}

double QStringView_ToDouble(QStringView* self) {
	return self->toDouble();
}

bool QStringView_Empty(QStringView* self) {
	return self->empty();
}

QChar* QStringView_Front(QStringView* self) {
	QChar ret = self->front();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QStringView_Back(QStringView* self) {
	QChar ret = self->back();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

bool QStringView_IsNull(QStringView* self) {
	return self->isNull();
}

bool QStringView_IsEmpty(QStringView* self) {
	return self->isEmpty();
}

int QStringView_Length(QStringView* self) {
	return self->length();
}

QChar* QStringView_First(QStringView* self) {
	QChar ret = self->first();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QStringView_Last(QStringView* self) {
	QChar ret = self->last();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

int16_t QStringView_ToShort1(QStringView* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QStringView_ToShort2(QStringView* self, bool* ok, int base) {
	return self->toShort(ok, static_cast<int>(base));
}

uint16_t QStringView_ToUShort1(QStringView* self, bool* ok) {
	return self->toUShort(ok);
}

uint16_t QStringView_ToUShort2(QStringView* self, bool* ok, int base) {
	return self->toUShort(ok, static_cast<int>(base));
}

int QStringView_ToInt1(QStringView* self, bool* ok) {
	return self->toInt(ok);
}

int QStringView_ToInt2(QStringView* self, bool* ok, int base) {
	return self->toInt(ok, static_cast<int>(base));
}

unsigned int QStringView_ToUInt1(QStringView* self, bool* ok) {
	return self->toUInt(ok);
}

unsigned int QStringView_ToUInt2(QStringView* self, bool* ok, int base) {
	return self->toUInt(ok, static_cast<int>(base));
}

long QStringView_ToLong1(QStringView* self, bool* ok) {
	return self->toLong(ok);
}

long QStringView_ToLong2(QStringView* self, bool* ok, int base) {
	return self->toLong(ok, static_cast<int>(base));
}

unsigned long QStringView_ToULong1(QStringView* self, bool* ok) {
	return self->toULong(ok);
}

unsigned long QStringView_ToULong2(QStringView* self, bool* ok, int base) {
	return self->toULong(ok, static_cast<int>(base));
}

int64_t QStringView_ToLongLong1(QStringView* self, bool* ok) {
	return self->toLongLong(ok);
}

int64_t QStringView_ToLongLong2(QStringView* self, bool* ok, int base) {
	return self->toLongLong(ok, static_cast<int>(base));
}

uint64_t QStringView_ToULongLong1(QStringView* self, bool* ok) {
	return self->toULongLong(ok);
}

uint64_t QStringView_ToULongLong2(QStringView* self, bool* ok, int base) {
	return self->toULongLong(ok, static_cast<int>(base));
}

float QStringView_ToFloat1(QStringView* self, bool* ok) {
	return self->toFloat(ok);
}

double QStringView_ToDouble1(QStringView* self, bool* ok) {
	return self->toDouble(ok);
}

void QStringView_Delete(QStringView* self) {
	delete self;
}

