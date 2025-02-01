#include <QByteArray>
#include <QChar>
#include <QList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include <qstringview.h>
#include "gen_qstringview.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStringView* QStringView_new() {
	return new QStringView();
}

struct miqt_string QStringView_toString(const QStringView* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

ptrdiff_t QStringView_size(const QStringView* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

QChar* QStringView_data(const QStringView* self) {
	QStringView::const_pointer _ret = self->data();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_constData(const QStringView* self) {
	QStringView::const_pointer _ret = self->constData();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_operatorSubscript(const QStringView* self, ptrdiff_t n) {
	return new QChar(self->operator[]((qsizetype)(n)));
}

struct miqt_string QStringView_toLatin1(const QStringView* self) {
	QByteArray _qb = self->toLatin1();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QStringView_toUtf8(const QStringView* self) {
	QByteArray _qb = self->toUtf8();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QStringView_toLocal8Bit(const QStringView* self) {
	QByteArray _qb = self->toLocal8Bit();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of unsigned int */  QStringView_toUcs4(const QStringView* self) {
	QList<uint> _ret = self->toUcs4();
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QChar* QStringView_at(const QStringView* self, ptrdiff_t n) {
	return new QChar(self->at((qsizetype)(n)));
}

void QStringView_truncate(QStringView* self, ptrdiff_t n) {
	self->truncate((qsizetype)(n));
}

void QStringView_chop(QStringView* self, ptrdiff_t n) {
	self->chop((qsizetype)(n));
}

int QStringView_compareWithQChar(const QStringView* self, QChar* c) {
	return self->compare(*c);
}

int QStringView_compare2(const QStringView* self, QChar* c, int cs) {
	return self->compare(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_startsWithWithQChar(const QStringView* self, QChar* c) {
	return self->startsWith(*c);
}

bool QStringView_startsWith2(const QStringView* self, QChar* c, int cs) {
	return self->startsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QStringView_endsWithWithQChar(const QStringView* self, QChar* c) {
	return self->endsWith(*c);
}

bool QStringView_endsWith2(const QStringView* self, QChar* c, int cs) {
	return self->endsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_indexOf(const QStringView* self, QChar* c) {
	qsizetype _ret = self->indexOf(*c);
	return static_cast<ptrdiff_t>(_ret);
}

bool QStringView_contains(const QStringView* self, QChar* c) {
	return self->contains(*c);
}

ptrdiff_t QStringView_count(const QStringView* self, QChar* c) {
	qsizetype _ret = self->count(*c);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringView_lastIndexOf(const QStringView* self, QChar* c) {
	qsizetype _ret = self->lastIndexOf(*c);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringView_lastIndexOf2(const QStringView* self, QChar* c, ptrdiff_t from) {
	qsizetype _ret = self->lastIndexOf(*c, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringView_indexOfWithRe(const QStringView* self, QRegularExpression* re) {
	qsizetype _ret = self->indexOf(*re);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringView_lastIndexOf5(const QStringView* self, QRegularExpression* re, ptrdiff_t from) {
	qsizetype _ret = self->lastIndexOf(*re, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

bool QStringView_containsWithRe(const QStringView* self, QRegularExpression* re) {
	return self->contains(*re);
}

ptrdiff_t QStringView_countWithRe(const QStringView* self, QRegularExpression* re) {
	qsizetype _ret = self->count(*re);
	return static_cast<ptrdiff_t>(_ret);
}

bool QStringView_isRightToLeft(const QStringView* self) {
	return self->isRightToLeft();
}

bool QStringView_isValidUtf16(const QStringView* self) {
	return self->isValidUtf16();
}

int16_t QStringView_toShort(const QStringView* self) {
	return self->toShort();
}

uint16_t QStringView_toUShort(const QStringView* self) {
	ushort _ret = self->toUShort();
	return static_cast<uint16_t>(_ret);
}

int QStringView_toInt(const QStringView* self) {
	return self->toInt();
}

unsigned int QStringView_toUInt(const QStringView* self) {
	uint _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

long QStringView_toLong(const QStringView* self) {
	return self->toLong();
}

unsigned long QStringView_toULong(const QStringView* self) {
	ulong _ret = self->toULong();
	return static_cast<unsigned long>(_ret);
}

long long QStringView_toLongLong(const QStringView* self) {
	qlonglong _ret = self->toLongLong();
	return static_cast<long long>(_ret);
}

unsigned long long QStringView_toULongLong(const QStringView* self) {
	qulonglong _ret = self->toULongLong();
	return static_cast<unsigned long long>(_ret);
}

float QStringView_toFloat(const QStringView* self) {
	return self->toFloat();
}

double QStringView_toDouble(const QStringView* self) {
	return self->toDouble();
}

QChar* QStringView_begin(const QStringView* self) {
	QStringView::const_iterator _ret = self->begin();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_end(const QStringView* self) {
	QStringView::const_iterator _ret = self->end();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_cbegin(const QStringView* self) {
	QStringView::const_iterator _ret = self->cbegin();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_cend(const QStringView* self) {
	QStringView::const_iterator _ret = self->cend();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

bool QStringView_empty(const QStringView* self) {
	return self->empty();
}

QChar* QStringView_front(const QStringView* self) {
	return new QChar(self->front());
}

QChar* QStringView_back(const QStringView* self) {
	return new QChar(self->back());
}

QChar* QStringView_constBegin(const QStringView* self) {
	QStringView::const_iterator _ret = self->constBegin();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

QChar* QStringView_constEnd(const QStringView* self) {
	QStringView::const_iterator _ret = self->constEnd();
	return const_cast<QChar*>(static_cast<const QChar*>(_ret));
}

bool QStringView_isNull(const QStringView* self) {
	return self->isNull();
}

bool QStringView_isEmpty(const QStringView* self) {
	return self->isEmpty();
}

ptrdiff_t QStringView_length(const QStringView* self) {
	qsizetype _ret = self->length();
	return static_cast<ptrdiff_t>(_ret);
}

QChar* QStringView_first2(const QStringView* self) {
	return new QChar(self->first());
}

QChar* QStringView_last2(const QStringView* self) {
	return new QChar(self->last());
}

ptrdiff_t QStringView_indexOf2(const QStringView* self, QChar* c, ptrdiff_t from) {
	qsizetype _ret = self->indexOf(*c, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringView_indexOf3(const QStringView* self, QChar* c, ptrdiff_t from, int cs) {
	qsizetype _ret = self->indexOf(*c, (qsizetype)(from), static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<ptrdiff_t>(_ret);
}

bool QStringView_contains2(const QStringView* self, QChar* c, int cs) {
	return self->contains(*c, static_cast<Qt::CaseSensitivity>(cs));
}

ptrdiff_t QStringView_count2(const QStringView* self, QChar* c, int cs) {
	qsizetype _ret = self->count(*c, static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringView_lastIndexOf22(const QStringView* self, QChar* c, int cs) {
	qsizetype _ret = self->lastIndexOf(*c, static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringView_lastIndexOf32(const QStringView* self, QChar* c, ptrdiff_t from, int cs) {
	qsizetype _ret = self->lastIndexOf(*c, (qsizetype)(from), static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringView_indexOf24(const QStringView* self, QRegularExpression* re, ptrdiff_t from) {
	qsizetype _ret = self->indexOf(*re, (qsizetype)(from));
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringView_indexOf34(const QStringView* self, QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch) {
	qsizetype _ret = self->indexOf(*re, (qsizetype)(from), rmatch);
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QStringView_lastIndexOf35(const QStringView* self, QRegularExpression* re, ptrdiff_t from, QRegularExpressionMatch* rmatch) {
	qsizetype _ret = self->lastIndexOf(*re, (qsizetype)(from), rmatch);
	return static_cast<ptrdiff_t>(_ret);
}

bool QStringView_contains24(const QStringView* self, QRegularExpression* re, QRegularExpressionMatch* rmatch) {
	return self->contains(*re, rmatch);
}

int16_t QStringView_toShort1(const QStringView* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QStringView_toShort2(const QStringView* self, bool* ok, int base) {
	return self->toShort(ok, static_cast<int>(base));
}

uint16_t QStringView_toUShort1(const QStringView* self, bool* ok) {
	ushort _ret = self->toUShort(ok);
	return static_cast<uint16_t>(_ret);
}

uint16_t QStringView_toUShort2(const QStringView* self, bool* ok, int base) {
	ushort _ret = self->toUShort(ok, static_cast<int>(base));
	return static_cast<uint16_t>(_ret);
}

int QStringView_toInt1(const QStringView* self, bool* ok) {
	return self->toInt(ok);
}

int QStringView_toInt2(const QStringView* self, bool* ok, int base) {
	return self->toInt(ok, static_cast<int>(base));
}

unsigned int QStringView_toUInt1(const QStringView* self, bool* ok) {
	uint _ret = self->toUInt(ok);
	return static_cast<unsigned int>(_ret);
}

unsigned int QStringView_toUInt2(const QStringView* self, bool* ok, int base) {
	uint _ret = self->toUInt(ok, static_cast<int>(base));
	return static_cast<unsigned int>(_ret);
}

long QStringView_toLong1(const QStringView* self, bool* ok) {
	return self->toLong(ok);
}

long QStringView_toLong2(const QStringView* self, bool* ok, int base) {
	return self->toLong(ok, static_cast<int>(base));
}

unsigned long QStringView_toULong1(const QStringView* self, bool* ok) {
	ulong _ret = self->toULong(ok);
	return static_cast<unsigned long>(_ret);
}

unsigned long QStringView_toULong2(const QStringView* self, bool* ok, int base) {
	ulong _ret = self->toULong(ok, static_cast<int>(base));
	return static_cast<unsigned long>(_ret);
}

long long QStringView_toLongLong1(const QStringView* self, bool* ok) {
	qlonglong _ret = self->toLongLong(ok);
	return static_cast<long long>(_ret);
}

long long QStringView_toLongLong2(const QStringView* self, bool* ok, int base) {
	qlonglong _ret = self->toLongLong(ok, static_cast<int>(base));
	return static_cast<long long>(_ret);
}

unsigned long long QStringView_toULongLong1(const QStringView* self, bool* ok) {
	qulonglong _ret = self->toULongLong(ok);
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QStringView_toULongLong2(const QStringView* self, bool* ok, int base) {
	qulonglong _ret = self->toULongLong(ok, static_cast<int>(base));
	return static_cast<unsigned long long>(_ret);
}

float QStringView_toFloat1(const QStringView* self, bool* ok) {
	return self->toFloat(ok);
}

double QStringView_toDouble1(const QStringView* self, bool* ok) {
	return self->toDouble(ok);
}

void QStringView_delete(QStringView* self) {
	delete self;
}

