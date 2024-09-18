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

QChar* QStringView_Data(const QStringView* self) {
	QStringView::const_pointer _ret = self->data();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_OperatorSubscript(const QStringView* self, size_t n) {
	return new QChar(self->operator[](static_cast<qsizetype>(n)));
}

QByteArray* QStringView_ToLatin1(const QStringView* self) {
	return new QByteArray(self->toLatin1());
}

QByteArray* QStringView_ToUtf8(const QStringView* self) {
	return new QByteArray(self->toUtf8());
}

QByteArray* QStringView_ToLocal8Bit(const QStringView* self) {
	return new QByteArray(self->toLocal8Bit());
}

struct miqt_array* QStringView_ToUcs4(const QStringView* self) {
	QVector<uint> _ret = self->toUcs4();
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
	return new QChar(self->at(static_cast<qsizetype>(n)));
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

int QStringView_Compare2(const QStringView* self, QChar* c, int cs) {
	return self->compare(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_StartsWithWithQChar(const QStringView* self, QChar* c) {
	return self->startsWith(*c);
}

bool QStringView_StartsWith2(const QStringView* self, QChar* c, int cs) {
	return self->startsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_EndsWithWithQChar(const QStringView* self, QChar* c) {
	return self->endsWith(*c);
}

bool QStringView_EndsWith2(const QStringView* self, QChar* c, int cs) {
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
	ushort _ret = self->toUShort();
	return static_cast<uint16_t>(_ret);
}

int QStringView_ToInt(const QStringView* self) {
	return self->toInt();
}

unsigned int QStringView_ToUInt(const QStringView* self) {
	uint _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

long QStringView_ToLong(const QStringView* self) {
	return self->toLong();
}

unsigned long QStringView_ToULong(const QStringView* self) {
	ulong _ret = self->toULong();
	return static_cast<unsigned long>(_ret);
}

long long QStringView_ToLongLong(const QStringView* self) {
	qlonglong _ret = self->toLongLong();
	return static_cast<long long>(_ret);
}

unsigned long long QStringView_ToULongLong(const QStringView* self) {
	qulonglong _ret = self->toULongLong();
	return static_cast<unsigned long long>(_ret);
}

float QStringView_ToFloat(const QStringView* self) {
	return self->toFloat();
}

double QStringView_ToDouble(const QStringView* self) {
	return self->toDouble();
}

QChar* QStringView_Begin(const QStringView* self) {
	QStringView::const_iterator _ret = self->begin();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_End(const QStringView* self) {
	QStringView::const_iterator _ret = self->end();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_Cbegin(const QStringView* self) {
	QStringView::const_iterator _ret = self->cbegin();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_Cend(const QStringView* self) {
	QStringView::const_iterator _ret = self->cend();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

bool QStringView_Empty(const QStringView* self) {
	return self->empty();
}

QChar* QStringView_Front(const QStringView* self) {
	return new QChar(self->front());
}

QChar* QStringView_Back(const QStringView* self) {
	return new QChar(self->back());
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
	return new QChar(self->first());
}

QChar* QStringView_Last(const QStringView* self) {
	return new QChar(self->last());
}

size_t QStringView_IndexOf2(const QStringView* self, QChar* c, size_t from) {
	return self->indexOf(*c, static_cast<qsizetype>(from));
}

size_t QStringView_IndexOf3(const QStringView* self, QChar* c, size_t from, int cs) {
	return self->indexOf(*c, static_cast<qsizetype>(from), static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_Contains2(const QStringView* self, QChar* c, int cs) {
	return self->contains(*c, static_cast<Qt::CaseSensitivity>(cs));
}

size_t QStringView_Count2(const QStringView* self, QChar* c, int cs) {
	return self->count(*c, static_cast<Qt::CaseSensitivity>(cs));
}

size_t QStringView_LastIndexOf2(const QStringView* self, QChar* c, size_t from) {
	return self->lastIndexOf(*c, static_cast<qsizetype>(from));
}

size_t QStringView_LastIndexOf3(const QStringView* self, QChar* c, size_t from, int cs) {
	return self->lastIndexOf(*c, static_cast<qsizetype>(from), static_cast<Qt::CaseSensitivity>(cs));
}

int16_t QStringView_ToShort1(const QStringView* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QStringView_ToShort2(const QStringView* self, bool* ok, int base) {
	return self->toShort(ok, static_cast<int>(base));
}

uint16_t QStringView_ToUShort1(const QStringView* self, bool* ok) {
	ushort _ret = self->toUShort(ok);
	return static_cast<uint16_t>(_ret);
}

uint16_t QStringView_ToUShort2(const QStringView* self, bool* ok, int base) {
	ushort _ret = self->toUShort(ok, static_cast<int>(base));
	return static_cast<uint16_t>(_ret);
}

int QStringView_ToInt1(const QStringView* self, bool* ok) {
	return self->toInt(ok);
}

int QStringView_ToInt2(const QStringView* self, bool* ok, int base) {
	return self->toInt(ok, static_cast<int>(base));
}

unsigned int QStringView_ToUInt1(const QStringView* self, bool* ok) {
	uint _ret = self->toUInt(ok);
	return static_cast<unsigned int>(_ret);
}

unsigned int QStringView_ToUInt2(const QStringView* self, bool* ok, int base) {
	uint _ret = self->toUInt(ok, static_cast<int>(base));
	return static_cast<unsigned int>(_ret);
}

long QStringView_ToLong1(const QStringView* self, bool* ok) {
	return self->toLong(ok);
}

long QStringView_ToLong2(const QStringView* self, bool* ok, int base) {
	return self->toLong(ok, static_cast<int>(base));
}

unsigned long QStringView_ToULong1(const QStringView* self, bool* ok) {
	ulong _ret = self->toULong(ok);
	return static_cast<unsigned long>(_ret);
}

unsigned long QStringView_ToULong2(const QStringView* self, bool* ok, int base) {
	ulong _ret = self->toULong(ok, static_cast<int>(base));
	return static_cast<unsigned long>(_ret);
}

long long QStringView_ToLongLong1(const QStringView* self, bool* ok) {
	qlonglong _ret = self->toLongLong(ok);
	return static_cast<long long>(_ret);
}

long long QStringView_ToLongLong2(const QStringView* self, bool* ok, int base) {
	qlonglong _ret = self->toLongLong(ok, static_cast<int>(base));
	return static_cast<long long>(_ret);
}

unsigned long long QStringView_ToULongLong1(const QStringView* self, bool* ok) {
	qulonglong _ret = self->toULongLong(ok);
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QStringView_ToULongLong2(const QStringView* self, bool* ok, int base) {
	qulonglong _ret = self->toULongLong(ok, static_cast<int>(base));
	return static_cast<unsigned long long>(_ret);
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

