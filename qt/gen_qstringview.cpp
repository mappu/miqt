#include <QByteArray>
#include <QChar>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include "qstringview.h"
#include "gen_qstringview.h"
#include "_cgo_export.h"

QStringView* QStringView_new() {
	return new QStringView();
}

struct miqt_string* QStringView_ToString(const QStringView* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

size_t QStringView_Size(const QStringView* self) {
	return self->size();
}

QChar* QStringView_OperatorSubscript(const QStringView* self, size_t n) {
	QChar _ret = self->operator[](static_cast<qsizetype>(n));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(_ret));
}

QByteArray* QStringView_ToLatin1(const QStringView* self) {
	QByteArray _ret = self->toLatin1();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QByteArray* QStringView_ToUtf8(const QStringView* self) {
	QByteArray _ret = self->toUtf8();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QByteArray* QStringView_ToLocal8Bit(const QStringView* self) {
	QByteArray _ret = self->toLocal8Bit();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_array* QStringView_ToUcs4(const QStringView* self) {
	QVector<unsigned int> _ret = self->toUcs4();
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QChar* QStringView_At(const QStringView* self, size_t n) {
	QChar _ret = self->at(static_cast<qsizetype>(n));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(_ret));
}

void QStringView_Truncate(QStringView* self, size_t n) {
	self->truncate(static_cast<qsizetype>(n));
}

void QStringView_Chop(QStringView* self, size_t n) {
	self->chop(static_cast<qsizetype>(n));
}

int QStringView_CompareWithQChar(const QStringView* self, QChar* c) {
	return self->compare(*c);
}

int QStringView_Compare2(const QStringView* self, QChar* c, uintptr_t cs) {
	return self->compare(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_StartsWithWithQChar(const QStringView* self, QChar* c) {
	return self->startsWith(*c);
}

bool QStringView_StartsWith2(const QStringView* self, QChar* c, uintptr_t cs) {
	return self->startsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_EndsWithWithQChar(const QStringView* self, QChar* c) {
	return self->endsWith(*c);
}

bool QStringView_EndsWith2(const QStringView* self, QChar* c, uintptr_t cs) {
	return self->endsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

size_t QStringView_IndexOf(const QStringView* self, QChar* c) {
	return self->indexOf(*c);
}

bool QStringView_Contains(const QStringView* self, QChar* c) {
	return self->contains(*c);
}

size_t QStringView_Count(const QStringView* self, QChar* c) {
	return self->count(*c);
}

size_t QStringView_LastIndexOf(const QStringView* self, QChar* c) {
	return self->lastIndexOf(*c);
}

bool QStringView_IsRightToLeft(const QStringView* self) {
	return self->isRightToLeft();
}

bool QStringView_IsValidUtf16(const QStringView* self) {
	return self->isValidUtf16();
}

int16_t QStringView_ToShort(const QStringView* self) {
	return self->toShort();
}

uint16_t QStringView_ToUShort(const QStringView* self) {
	return self->toUShort();
}

int QStringView_ToInt(const QStringView* self) {
	return self->toInt();
}

unsigned int QStringView_ToUInt(const QStringView* self) {
	return self->toUInt();
}

long QStringView_ToLong(const QStringView* self) {
	return self->toLong();
}

unsigned long QStringView_ToULong(const QStringView* self) {
	return self->toULong();
}

int64_t QStringView_ToLongLong(const QStringView* self) {
	return self->toLongLong();
}

uint64_t QStringView_ToULongLong(const QStringView* self) {
	return self->toULongLong();
}

float QStringView_ToFloat(const QStringView* self) {
	return self->toFloat();
}

double QStringView_ToDouble(const QStringView* self) {
	return self->toDouble();
}

bool QStringView_Empty(const QStringView* self) {
	return self->empty();
}

QChar* QStringView_Front(const QStringView* self) {
	QChar _ret = self->front();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(_ret));
}

QChar* QStringView_Back(const QStringView* self) {
	QChar _ret = self->back();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(_ret));
}

bool QStringView_IsNull(const QStringView* self) {
	return self->isNull();
}

bool QStringView_IsEmpty(const QStringView* self) {
	return self->isEmpty();
}

int QStringView_Length(const QStringView* self) {
	return self->length();
}

QChar* QStringView_First(const QStringView* self) {
	QChar _ret = self->first();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(_ret));
}

QChar* QStringView_Last(const QStringView* self) {
	QChar _ret = self->last();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(_ret));
}

size_t QStringView_IndexOf2(const QStringView* self, QChar* c, size_t from) {
	return self->indexOf(*c, static_cast<qsizetype>(from));
}

size_t QStringView_IndexOf3(const QStringView* self, QChar* c, size_t from, uintptr_t cs) {
	return self->indexOf(*c, static_cast<qsizetype>(from), static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_Contains2(const QStringView* self, QChar* c, uintptr_t cs) {
	return self->contains(*c, static_cast<Qt::CaseSensitivity>(cs));
}

size_t QStringView_Count2(const QStringView* self, QChar* c, uintptr_t cs) {
	return self->count(*c, static_cast<Qt::CaseSensitivity>(cs));
}

size_t QStringView_LastIndexOf2(const QStringView* self, QChar* c, size_t from) {
	return self->lastIndexOf(*c, static_cast<qsizetype>(from));
}

size_t QStringView_LastIndexOf3(const QStringView* self, QChar* c, size_t from, uintptr_t cs) {
	return self->lastIndexOf(*c, static_cast<qsizetype>(from), static_cast<Qt::CaseSensitivity>(cs));
}

int16_t QStringView_ToShort1(const QStringView* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QStringView_ToShort2(const QStringView* self, bool* ok, int base) {
	return self->toShort(ok, static_cast<int>(base));
}

uint16_t QStringView_ToUShort1(const QStringView* self, bool* ok) {
	return self->toUShort(ok);
}

uint16_t QStringView_ToUShort2(const QStringView* self, bool* ok, int base) {
	return self->toUShort(ok, static_cast<int>(base));
}

int QStringView_ToInt1(const QStringView* self, bool* ok) {
	return self->toInt(ok);
}

int QStringView_ToInt2(const QStringView* self, bool* ok, int base) {
	return self->toInt(ok, static_cast<int>(base));
}

unsigned int QStringView_ToUInt1(const QStringView* self, bool* ok) {
	return self->toUInt(ok);
}

unsigned int QStringView_ToUInt2(const QStringView* self, bool* ok, int base) {
	return self->toUInt(ok, static_cast<int>(base));
}

long QStringView_ToLong1(const QStringView* self, bool* ok) {
	return self->toLong(ok);
}

long QStringView_ToLong2(const QStringView* self, bool* ok, int base) {
	return self->toLong(ok, static_cast<int>(base));
}

unsigned long QStringView_ToULong1(const QStringView* self, bool* ok) {
	return self->toULong(ok);
}

unsigned long QStringView_ToULong2(const QStringView* self, bool* ok, int base) {
	return self->toULong(ok, static_cast<int>(base));
}

int64_t QStringView_ToLongLong1(const QStringView* self, bool* ok) {
	return self->toLongLong(ok);
}

int64_t QStringView_ToLongLong2(const QStringView* self, bool* ok, int base) {
	return self->toLongLong(ok, static_cast<int>(base));
}

uint64_t QStringView_ToULongLong1(const QStringView* self, bool* ok) {
	return self->toULongLong(ok);
}

uint64_t QStringView_ToULongLong2(const QStringView* self, bool* ok, int base) {
	return self->toULongLong(ok, static_cast<int>(base));
}

float QStringView_ToFloat1(const QStringView* self, bool* ok) {
	return self->toFloat(ok);
}

double QStringView_ToDouble1(const QStringView* self, bool* ok) {
	return self->toDouble(ok);
}

void QStringView_Delete(QStringView* self) {
	delete self;
}

