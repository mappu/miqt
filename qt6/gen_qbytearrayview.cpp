#include <QByteArray>
#include <QByteArrayView>
#include <qbytearrayview.h>
#include "gen_qbytearrayview.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QByteArrayView* QByteArrayView_new() {
	return new QByteArrayView();
}

QByteArrayView* QByteArrayView_new2(QByteArrayView* param1) {
	return new QByteArrayView(*param1);
}

struct miqt_string QByteArrayView_ToByteArray(const QByteArrayView* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

ptrdiff_t QByteArrayView_Size(const QByteArrayView* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

const char* QByteArrayView_Data(const QByteArrayView* self) {
	QByteArrayView::const_pointer _ret = self->data();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_ConstData(const QByteArrayView* self) {
	QByteArrayView::const_pointer _ret = self->constData();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

char QByteArrayView_OperatorSubscript(const QByteArrayView* self, ptrdiff_t n) {
	return self->operator[]((qsizetype)(n));
}

char QByteArrayView_At(const QByteArrayView* self, ptrdiff_t n) {
	return self->at((qsizetype)(n));
}

QByteArrayView* QByteArrayView_First(const QByteArrayView* self, ptrdiff_t n) {
	return new QByteArrayView(self->first((qsizetype)(n)));
}

QByteArrayView* QByteArrayView_Last(const QByteArrayView* self, ptrdiff_t n) {
	return new QByteArrayView(self->last((qsizetype)(n)));
}

QByteArrayView* QByteArrayView_Sliced(const QByteArrayView* self, ptrdiff_t pos) {
	return new QByteArrayView(self->sliced((qsizetype)(pos)));
}

QByteArrayView* QByteArrayView_Sliced2(const QByteArrayView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QByteArrayView(self->sliced((qsizetype)(pos), (qsizetype)(n)));
}

QByteArrayView* QByteArrayView_Chopped(const QByteArrayView* self, ptrdiff_t lenVal) {
	return new QByteArrayView(self->chopped((qsizetype)(lenVal)));
}

void QByteArrayView_Truncate(QByteArrayView* self, ptrdiff_t n) {
	self->truncate((qsizetype)(n));
}

void QByteArrayView_Chop(QByteArrayView* self, ptrdiff_t n) {
	self->chop((qsizetype)(n));
}

QByteArrayView* QByteArrayView_Trimmed(const QByteArrayView* self) {
	return new QByteArrayView(self->trimmed());
}

int16_t QByteArrayView_ToShort(const QByteArrayView* self) {
	return self->toShort();
}

uint16_t QByteArrayView_ToUShort(const QByteArrayView* self) {
	ushort _ret = self->toUShort();
	return static_cast<uint16_t>(_ret);
}

int QByteArrayView_ToInt(const QByteArrayView* self) {
	return self->toInt();
}

unsigned int QByteArrayView_ToUInt(const QByteArrayView* self) {
	uint _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

long QByteArrayView_ToLong(const QByteArrayView* self) {
	return self->toLong();
}

unsigned long QByteArrayView_ToULong(const QByteArrayView* self) {
	ulong _ret = self->toULong();
	return static_cast<unsigned long>(_ret);
}

long long QByteArrayView_ToLongLong(const QByteArrayView* self) {
	qlonglong _ret = self->toLongLong();
	return static_cast<long long>(_ret);
}

unsigned long long QByteArrayView_ToULongLong(const QByteArrayView* self) {
	qulonglong _ret = self->toULongLong();
	return static_cast<unsigned long long>(_ret);
}

float QByteArrayView_ToFloat(const QByteArrayView* self) {
	return self->toFloat();
}

double QByteArrayView_ToDouble(const QByteArrayView* self) {
	return self->toDouble();
}

bool QByteArrayView_StartsWith(const QByteArrayView* self, QByteArrayView* other) {
	return self->startsWith(*other);
}

bool QByteArrayView_StartsWithWithChar(const QByteArrayView* self, char c) {
	return self->startsWith(static_cast<char>(c));
}

bool QByteArrayView_EndsWith(const QByteArrayView* self, QByteArrayView* other) {
	return self->endsWith(*other);
}

bool QByteArrayView_EndsWithWithChar(const QByteArrayView* self, char c) {
	return self->endsWith(static_cast<char>(c));
}

ptrdiff_t QByteArrayView_IndexOf(const QByteArrayView* self, QByteArrayView* a) {
	qsizetype _ret = self->indexOf(*a);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_IndexOfWithCh(const QByteArrayView* self, char ch) {
	qsizetype _ret = self->indexOf(static_cast<char>(ch));
	return static_cast<ptrdiff_t>(_ret);
}

bool QByteArrayView_Contains(const QByteArrayView* self, QByteArrayView* a) {
	return self->contains(*a);
}

bool QByteArrayView_ContainsWithChar(const QByteArrayView* self, char c) {
	return self->contains(static_cast<char>(c));
}

ptrdiff_t QByteArrayView_LastIndexOf(const QByteArrayView* self, QByteArrayView* a) {
	qsizetype _ret = self->lastIndexOf(*a);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_LastIndexOf2(const QByteArrayView* self, QByteArrayView* a, ptrdiff_t from) {
	qsizetype _ret = self->lastIndexOf(*a, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_LastIndexOfWithCh(const QByteArrayView* self, char ch) {
	qsizetype _ret = self->lastIndexOf(static_cast<char>(ch));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_Count(const QByteArrayView* self, QByteArrayView* a) {
	qsizetype _ret = self->count(*a);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_CountWithCh(const QByteArrayView* self, char ch) {
	qsizetype _ret = self->count(static_cast<char>(ch));
	return static_cast<ptrdiff_t>(_ret);
}

int QByteArrayView_Compare(const QByteArrayView* self, QByteArrayView* a) {
	return self->compare(*a);
}

bool QByteArrayView_IsValidUtf8(const QByteArrayView* self) {
	return self->isValidUtf8();
}

const char* QByteArrayView_Begin(const QByteArrayView* self) {
	QByteArrayView::const_iterator _ret = self->begin();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_End(const QByteArrayView* self) {
	QByteArrayView::const_iterator _ret = self->end();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_Cbegin(const QByteArrayView* self) {
	QByteArrayView::const_iterator _ret = self->cbegin();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_Cend(const QByteArrayView* self) {
	QByteArrayView::const_iterator _ret = self->cend();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

bool QByteArrayView_Empty(const QByteArrayView* self) {
	return self->empty();
}

char QByteArrayView_Front(const QByteArrayView* self) {
	return self->front();
}

char QByteArrayView_Back(const QByteArrayView* self) {
	return self->back();
}

bool QByteArrayView_IsNull(const QByteArrayView* self) {
	return self->isNull();
}

bool QByteArrayView_IsEmpty(const QByteArrayView* self) {
	return self->isEmpty();
}

ptrdiff_t QByteArrayView_Length(const QByteArrayView* self) {
	qsizetype _ret = self->length();
	return static_cast<ptrdiff_t>(_ret);
}

char QByteArrayView_First2(const QByteArrayView* self) {
	return self->first();
}

char QByteArrayView_Last2(const QByteArrayView* self) {
	return self->last();
}

int16_t QByteArrayView_ToShort1(const QByteArrayView* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QByteArrayView_ToShort2(const QByteArrayView* self, bool* ok, int base) {
	return self->toShort(ok, static_cast<int>(base));
}

uint16_t QByteArrayView_ToUShort1(const QByteArrayView* self, bool* ok) {
	ushort _ret = self->toUShort(ok);
	return static_cast<uint16_t>(_ret);
}

uint16_t QByteArrayView_ToUShort2(const QByteArrayView* self, bool* ok, int base) {
	ushort _ret = self->toUShort(ok, static_cast<int>(base));
	return static_cast<uint16_t>(_ret);
}

int QByteArrayView_ToInt1(const QByteArrayView* self, bool* ok) {
	return self->toInt(ok);
}

int QByteArrayView_ToInt2(const QByteArrayView* self, bool* ok, int base) {
	return self->toInt(ok, static_cast<int>(base));
}

unsigned int QByteArrayView_ToUInt1(const QByteArrayView* self, bool* ok) {
	uint _ret = self->toUInt(ok);
	return static_cast<unsigned int>(_ret);
}

unsigned int QByteArrayView_ToUInt2(const QByteArrayView* self, bool* ok, int base) {
	uint _ret = self->toUInt(ok, static_cast<int>(base));
	return static_cast<unsigned int>(_ret);
}

long QByteArrayView_ToLong1(const QByteArrayView* self, bool* ok) {
	return self->toLong(ok);
}

long QByteArrayView_ToLong2(const QByteArrayView* self, bool* ok, int base) {
	return self->toLong(ok, static_cast<int>(base));
}

unsigned long QByteArrayView_ToULong1(const QByteArrayView* self, bool* ok) {
	ulong _ret = self->toULong(ok);
	return static_cast<unsigned long>(_ret);
}

unsigned long QByteArrayView_ToULong2(const QByteArrayView* self, bool* ok, int base) {
	ulong _ret = self->toULong(ok, static_cast<int>(base));
	return static_cast<unsigned long>(_ret);
}

long long QByteArrayView_ToLongLong1(const QByteArrayView* self, bool* ok) {
	qlonglong _ret = self->toLongLong(ok);
	return static_cast<long long>(_ret);
}

long long QByteArrayView_ToLongLong2(const QByteArrayView* self, bool* ok, int base) {
	qlonglong _ret = self->toLongLong(ok, static_cast<int>(base));
	return static_cast<long long>(_ret);
}

unsigned long long QByteArrayView_ToULongLong1(const QByteArrayView* self, bool* ok) {
	qulonglong _ret = self->toULongLong(ok);
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QByteArrayView_ToULongLong2(const QByteArrayView* self, bool* ok, int base) {
	qulonglong _ret = self->toULongLong(ok, static_cast<int>(base));
	return static_cast<unsigned long long>(_ret);
}

float QByteArrayView_ToFloat1(const QByteArrayView* self, bool* ok) {
	return self->toFloat(ok);
}

double QByteArrayView_ToDouble1(const QByteArrayView* self, bool* ok) {
	return self->toDouble(ok);
}

ptrdiff_t QByteArrayView_IndexOf2(const QByteArrayView* self, QByteArrayView* a, ptrdiff_t from) {
	qsizetype _ret = self->indexOf(*a, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_IndexOf22(const QByteArrayView* self, char ch, ptrdiff_t from) {
	qsizetype _ret = self->indexOf(static_cast<char>(ch), (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_LastIndexOf22(const QByteArrayView* self, char ch, ptrdiff_t from) {
	qsizetype _ret = self->lastIndexOf(static_cast<char>(ch), (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

int QByteArrayView_Compare2(const QByteArrayView* self, QByteArrayView* a, int cs) {
	return self->compare(*a, static_cast<Qt::CaseSensitivity>(cs));
}

void QByteArrayView_Delete(QByteArrayView* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QByteArrayView*>( self );
	} else {
		delete self;
	}
}

