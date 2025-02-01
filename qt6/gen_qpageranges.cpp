#include <QList>
#include <QPageRanges>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPageRanges__Range
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpageranges.h>
#include "gen_qpageranges.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPageRanges* QPageRanges_new() {
	return new QPageRanges();
}

QPageRanges* QPageRanges_new2(QPageRanges* other) {
	return new QPageRanges(*other);
}

void QPageRanges_operatorAssign(QPageRanges* self, QPageRanges* other) {
	self->operator=(*other);
}

void QPageRanges_swap(QPageRanges* self, QPageRanges* other) {
	self->swap(*other);
}

void QPageRanges_addPage(QPageRanges* self, int pageNumber) {
	self->addPage(static_cast<int>(pageNumber));
}

void QPageRanges_addRange(QPageRanges* self, int from, int to) {
	self->addRange(static_cast<int>(from), static_cast<int>(to));
}

struct miqt_array /* of QPageRanges__Range* */  QPageRanges_toRangeList(const QPageRanges* self) {
	QList<QPageRanges::Range> _ret = self->toRangeList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPageRanges__Range** _arr = static_cast<QPageRanges__Range**>(malloc(sizeof(QPageRanges__Range*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPageRanges::Range(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QPageRanges_clear(QPageRanges* self) {
	self->clear();
}

struct miqt_string QPageRanges_toString(const QPageRanges* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPageRanges* QPageRanges_fromString(struct miqt_string ranges) {
	QString ranges_QString = QString::fromUtf8(ranges.data, ranges.len);
	return new QPageRanges(QPageRanges::fromString(ranges_QString));
}

bool QPageRanges_contains(const QPageRanges* self, int pageNumber) {
	return self->contains(static_cast<int>(pageNumber));
}

bool QPageRanges_isEmpty(const QPageRanges* self) {
	return self->isEmpty();
}

int QPageRanges_firstPage(const QPageRanges* self) {
	return self->firstPage();
}

int QPageRanges_lastPage(const QPageRanges* self) {
	return self->lastPage();
}

void QPageRanges_detach(QPageRanges* self) {
	self->detach();
}

void QPageRanges_delete(QPageRanges* self) {
	delete self;
}

QPageRanges__Range* QPageRanges__Range_new() {
	return new QPageRanges::Range();
}

QPageRanges__Range* QPageRanges__Range_new2(QPageRanges__Range* param1) {
	return new QPageRanges::Range(*param1);
}

bool QPageRanges__Range_contains(const QPageRanges__Range* self, int pageNumber) {
	return self->contains(static_cast<int>(pageNumber));
}

void QPageRanges__Range_delete(QPageRanges__Range* self) {
	delete self;
}

