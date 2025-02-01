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

struct miqt_string QByteArrayView_toByteArray(const QByteArrayView* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

ptrdiff_t QByteArrayView_size(const QByteArrayView* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

const char* QByteArrayView_data(const QByteArrayView* self) {
	QByteArrayView::const_pointer _ret = self->data();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_constData(const QByteArrayView* self) {
	QByteArrayView::const_pointer _ret = self->constData();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

char QByteArrayView_operatorSubscript(const QByteArrayView* self, ptrdiff_t n) {
	return self->operator[]((qsizetype)(n));
}

char QByteArrayView_at(const QByteArrayView* self, ptrdiff_t n) {
	return self->at((qsizetype)(n));
}

QByteArrayView* QByteArrayView_first(const QByteArrayView* self, ptrdiff_t n) {
	return new QByteArrayView(self->first((qsizetype)(n)));
}

QByteArrayView* QByteArrayView_last(const QByteArrayView* self, ptrdiff_t n) {
	return new QByteArrayView(self->last((qsizetype)(n)));
}

QByteArrayView* QByteArrayView_sliced(const QByteArrayView* self, ptrdiff_t pos) {
	return new QByteArrayView(self->sliced((qsizetype)(pos)));
}

QByteArrayView* QByteArrayView_sliced2(const QByteArrayView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QByteArrayView(self->sliced((qsizetype)(pos), (qsizetype)(n)));
}

QByteArrayView* QByteArrayView_chopped(const QByteArrayView* self, ptrdiff_t len) {
	return new QByteArrayView(self->chopped((qsizetype)(len)));
}

void QByteArrayView_truncate(QByteArrayView* self, ptrdiff_t n) {
	self->truncate((qsizetype)(n));
}

void QByteArrayView_chop(QByteArrayView* self, ptrdiff_t n) {
	self->chop((qsizetype)(n));
}

QByteArrayView* QByteArrayView_trimmed(const QByteArrayView* self) {
	return new QByteArrayView(self->trimmed());
}

int16_t QByteArrayView_toShort(const QByteArrayView* self) {
	return self->toShort();
}

uint16_t QByteArrayView_toUShort(const QByteArrayView* self) {
	ushort _ret = self->toUShort();
	return static_cast<uint16_t>(_ret);
}

int QByteArrayView_toInt(const QByteArrayView* self) {
	return self->toInt();
}

unsigned int QByteArrayView_toUInt(const QByteArrayView* self) {
	uint _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

long QByteArrayView_toLong(const QByteArrayView* self) {
	return self->toLong();
}

unsigned long QByteArrayView_toULong(const QByteArrayView* self) {
	ulong _ret = self->toULong();
	return static_cast<unsigned long>(_ret);
}

long long QByteArrayView_toLongLong(const QByteArrayView* self) {
	qlonglong _ret = self->toLongLong();
	return static_cast<long long>(_ret);
}

unsigned long long QByteArrayView_toULongLong(const QByteArrayView* self) {
	qulonglong _ret = self->toULongLong();
	return static_cast<unsigned long long>(_ret);
}

float QByteArrayView_toFloat(const QByteArrayView* self) {
	return self->toFloat();
}

double QByteArrayView_toDouble(const QByteArrayView* self) {
	return self->toDouble();
}

bool QByteArrayView_startsWith(const QByteArrayView* self, QByteArrayView* other) {
	return self->startsWith(*other);
}

bool QByteArrayView_startsWithWithChar(const QByteArrayView* self, char c) {
	return self->startsWith(static_cast<char>(c));
}

bool QByteArrayView_endsWith(const QByteArrayView* self, QByteArrayView* other) {
	return self->endsWith(*other);
}

bool QByteArrayView_endsWithWithChar(const QByteArrayView* self, char c) {
	return self->endsWith(static_cast<char>(c));
}

ptrdiff_t QByteArrayView_indexOf(const QByteArrayView* self, QByteArrayView* a) {
	qsizetype _ret = self->indexOf(*a);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_indexOfWithCh(const QByteArrayView* self, char ch) {
	qsizetype _ret = self->indexOf(static_cast<char>(ch));
	return static_cast<ptrdiff_t>(_ret);
}

bool QByteArrayView_contains(const QByteArrayView* self, QByteArrayView* a) {
	return self->contains(*a);
}

bool QByteArrayView_containsWithChar(const QByteArrayView* self, char c) {
	return self->contains(static_cast<char>(c));
}

ptrdiff_t QByteArrayView_lastIndexOf(const QByteArrayView* self, QByteArrayView* a) {
	qsizetype _ret = self->lastIndexOf(*a);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_lastIndexOf2(const QByteArrayView* self, QByteArrayView* a, ptrdiff_t from) {
	qsizetype _ret = self->lastIndexOf(*a, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_lastIndexOfWithCh(const QByteArrayView* self, char ch) {
	qsizetype _ret = self->lastIndexOf(static_cast<char>(ch));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_count(const QByteArrayView* self, QByteArrayView* a) {
	qsizetype _ret = self->count(*a);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_countWithCh(const QByteArrayView* self, char ch) {
	qsizetype _ret = self->count(static_cast<char>(ch));
	return static_cast<ptrdiff_t>(_ret);
}

int QByteArrayView_compare(const QByteArrayView* self, QByteArrayView* a) {
	return self->compare(*a);
}

bool QByteArrayView_isValidUtf8(const QByteArrayView* self) {
	return self->isValidUtf8();
}

const char* QByteArrayView_begin(const QByteArrayView* self) {
	QByteArrayView::const_iterator _ret = self->begin();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_end(const QByteArrayView* self) {
	QByteArrayView::const_iterator _ret = self->end();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_cbegin(const QByteArrayView* self) {
	QByteArrayView::const_iterator _ret = self->cbegin();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

const char* QByteArrayView_cend(const QByteArrayView* self) {
	QByteArrayView::const_iterator _ret = self->cend();
	return const_cast<const char*>(static_cast<const char*>(_ret));
}

bool QByteArrayView_empty(const QByteArrayView* self) {
	return self->empty();
}

char QByteArrayView_front(const QByteArrayView* self) {
	return self->front();
}

char QByteArrayView_back(const QByteArrayView* self) {
	return self->back();
}

bool QByteArrayView_isNull(const QByteArrayView* self) {
	return self->isNull();
}

bool QByteArrayView_isEmpty(const QByteArrayView* self) {
	return self->isEmpty();
}

ptrdiff_t QByteArrayView_length(const QByteArrayView* self) {
	qsizetype _ret = self->length();
	return static_cast<ptrdiff_t>(_ret);
}

char QByteArrayView_first2(const QByteArrayView* self) {
	return self->first();
}

char QByteArrayView_last2(const QByteArrayView* self) {
	return self->last();
}

int16_t QByteArrayView_toShort1(const QByteArrayView* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QByteArrayView_toShort2(const QByteArrayView* self, bool* ok, int base) {
	return self->toShort(ok, static_cast<int>(base));
}

uint16_t QByteArrayView_toUShort1(const QByteArrayView* self, bool* ok) {
	ushort _ret = self->toUShort(ok);
	return static_cast<uint16_t>(_ret);
}

uint16_t QByteArrayView_toUShort2(const QByteArrayView* self, bool* ok, int base) {
	ushort _ret = self->toUShort(ok, static_cast<int>(base));
	return static_cast<uint16_t>(_ret);
}

int QByteArrayView_toInt1(const QByteArrayView* self, bool* ok) {
	return self->toInt(ok);
}

int QByteArrayView_toInt2(const QByteArrayView* self, bool* ok, int base) {
	return self->toInt(ok, static_cast<int>(base));
}

unsigned int QByteArrayView_toUInt1(const QByteArrayView* self, bool* ok) {
	uint _ret = self->toUInt(ok);
	return static_cast<unsigned int>(_ret);
}

unsigned int QByteArrayView_toUInt2(const QByteArrayView* self, bool* ok, int base) {
	uint _ret = self->toUInt(ok, static_cast<int>(base));
	return static_cast<unsigned int>(_ret);
}

long QByteArrayView_toLong1(const QByteArrayView* self, bool* ok) {
	return self->toLong(ok);
}

long QByteArrayView_toLong2(const QByteArrayView* self, bool* ok, int base) {
	return self->toLong(ok, static_cast<int>(base));
}

unsigned long QByteArrayView_toULong1(const QByteArrayView* self, bool* ok) {
	ulong _ret = self->toULong(ok);
	return static_cast<unsigned long>(_ret);
}

unsigned long QByteArrayView_toULong2(const QByteArrayView* self, bool* ok, int base) {
	ulong _ret = self->toULong(ok, static_cast<int>(base));
	return static_cast<unsigned long>(_ret);
}

long long QByteArrayView_toLongLong1(const QByteArrayView* self, bool* ok) {
	qlonglong _ret = self->toLongLong(ok);
	return static_cast<long long>(_ret);
}

long long QByteArrayView_toLongLong2(const QByteArrayView* self, bool* ok, int base) {
	qlonglong _ret = self->toLongLong(ok, static_cast<int>(base));
	return static_cast<long long>(_ret);
}

unsigned long long QByteArrayView_toULongLong1(const QByteArrayView* self, bool* ok) {
	qulonglong _ret = self->toULongLong(ok);
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QByteArrayView_toULongLong2(const QByteArrayView* self, bool* ok, int base) {
	qulonglong _ret = self->toULongLong(ok, static_cast<int>(base));
	return static_cast<unsigned long long>(_ret);
}

float QByteArrayView_toFloat1(const QByteArrayView* self, bool* ok) {
	return self->toFloat(ok);
}

double QByteArrayView_toDouble1(const QByteArrayView* self, bool* ok) {
	return self->toDouble(ok);
}

ptrdiff_t QByteArrayView_indexOf2(const QByteArrayView* self, QByteArrayView* a, ptrdiff_t from) {
	qsizetype _ret = self->indexOf(*a, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_indexOf22(const QByteArrayView* self, char ch, ptrdiff_t from) {
	qsizetype _ret = self->indexOf(static_cast<char>(ch), (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QByteArrayView_lastIndexOf22(const QByteArrayView* self, char ch, ptrdiff_t from) {
	qsizetype _ret = self->lastIndexOf(static_cast<char>(ch), (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

int QByteArrayView_compare2(const QByteArrayView* self, QByteArrayView* a, int cs) {
	return self->compare(*a, static_cast<Qt::CaseSensitivity>(cs));
}

void QByteArrayView_delete(QByteArrayView* self) {
	delete self;
}

