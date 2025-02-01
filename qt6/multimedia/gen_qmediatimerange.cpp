#include <QList>
#include <QMediaTimeRange>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMediaTimeRange__Interval
#include <qmediatimerange.h>
#include "gen_qmediatimerange.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMediaTimeRange* QMediaTimeRange_new() {
	return new QMediaTimeRange();
}

QMediaTimeRange* QMediaTimeRange_new2(long long start, long long end) {
	return new QMediaTimeRange(static_cast<qint64>(start), static_cast<qint64>(end));
}

QMediaTimeRange* QMediaTimeRange_new3(QMediaTimeRange__Interval* param1) {
	return new QMediaTimeRange(*param1);
}

QMediaTimeRange* QMediaTimeRange_new4(QMediaTimeRange* range) {
	return new QMediaTimeRange(*range);
}

void QMediaTimeRange_operatorAssign(QMediaTimeRange* self, QMediaTimeRange* param1) {
	self->operator=(*param1);
}

void QMediaTimeRange_swap(QMediaTimeRange* self, QMediaTimeRange* other) {
	self->swap(*other);
}

void QMediaTimeRange_detach(QMediaTimeRange* self) {
	self->detach();
}

void QMediaTimeRange_operatorAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1) {
	self->operator=(*param1);
}

long long QMediaTimeRange_earliestTime(const QMediaTimeRange* self) {
	qint64 _ret = self->earliestTime();
	return static_cast<long long>(_ret);
}

long long QMediaTimeRange_latestTime(const QMediaTimeRange* self) {
	qint64 _ret = self->latestTime();
	return static_cast<long long>(_ret);
}

struct miqt_array /* of QMediaTimeRange__Interval* */  QMediaTimeRange_intervals(const QMediaTimeRange* self) {
	QList<QMediaTimeRange::Interval> _ret = self->intervals();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMediaTimeRange__Interval** _arr = static_cast<QMediaTimeRange__Interval**>(malloc(sizeof(QMediaTimeRange__Interval*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QMediaTimeRange::Interval(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QMediaTimeRange_isEmpty(const QMediaTimeRange* self) {
	return self->isEmpty();
}

bool QMediaTimeRange_isContinuous(const QMediaTimeRange* self) {
	return self->isContinuous();
}

bool QMediaTimeRange_contains(const QMediaTimeRange* self, long long time) {
	return self->contains(static_cast<qint64>(time));
}

void QMediaTimeRange_addInterval(QMediaTimeRange* self, long long start, long long end) {
	self->addInterval(static_cast<qint64>(start), static_cast<qint64>(end));
}

void QMediaTimeRange_addIntervalWithInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* interval) {
	self->addInterval(*interval);
}

void QMediaTimeRange_addTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1) {
	self->addTimeRange(*param1);
}

void QMediaTimeRange_removeInterval(QMediaTimeRange* self, long long start, long long end) {
	self->removeInterval(static_cast<qint64>(start), static_cast<qint64>(end));
}

void QMediaTimeRange_removeIntervalWithInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* interval) {
	self->removeInterval(*interval);
}

void QMediaTimeRange_removeTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1) {
	self->removeTimeRange(*param1);
}

QMediaTimeRange* QMediaTimeRange_operatorPlusAssign(QMediaTimeRange* self, QMediaTimeRange* param1) {
	QMediaTimeRange& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMediaTimeRange* QMediaTimeRange_operatorPlusAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1) {
	QMediaTimeRange& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMediaTimeRange* QMediaTimeRange_operatorMinusAssign(QMediaTimeRange* self, QMediaTimeRange* param1) {
	QMediaTimeRange& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMediaTimeRange* QMediaTimeRange_operatorMinusAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1) {
	QMediaTimeRange& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

void QMediaTimeRange_clear(QMediaTimeRange* self) {
	self->clear();
}

void QMediaTimeRange_delete(QMediaTimeRange* self) {
	delete self;
}

QMediaTimeRange__Interval* QMediaTimeRange__Interval_new() {
	return new QMediaTimeRange::Interval();
}

QMediaTimeRange__Interval* QMediaTimeRange__Interval_new2(long long start, long long end) {
	return new QMediaTimeRange::Interval(static_cast<qint64>(start), static_cast<qint64>(end));
}

QMediaTimeRange__Interval* QMediaTimeRange__Interval_new3(QMediaTimeRange__Interval* param1) {
	return new QMediaTimeRange::Interval(*param1);
}

long long QMediaTimeRange__Interval_start(const QMediaTimeRange__Interval* self) {
	qint64 _ret = self->start();
	return static_cast<long long>(_ret);
}

long long QMediaTimeRange__Interval_end(const QMediaTimeRange__Interval* self) {
	qint64 _ret = self->end();
	return static_cast<long long>(_ret);
}

bool QMediaTimeRange__Interval_contains(const QMediaTimeRange__Interval* self, long long time) {
	return self->contains(static_cast<qint64>(time));
}

bool QMediaTimeRange__Interval_isNormal(const QMediaTimeRange__Interval* self) {
	return self->isNormal();
}

QMediaTimeRange__Interval* QMediaTimeRange__Interval_normalized(const QMediaTimeRange__Interval* self) {
	return new QMediaTimeRange::Interval(self->normalized());
}

QMediaTimeRange__Interval* QMediaTimeRange__Interval_translated(const QMediaTimeRange__Interval* self, long long offset) {
	return new QMediaTimeRange::Interval(self->translated(static_cast<qint64>(offset)));
}

void QMediaTimeRange__Interval_delete(QMediaTimeRange__Interval* self) {
	delete self;
}

