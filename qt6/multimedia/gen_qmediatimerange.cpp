#include <QList>
#include <QMediaTimeRange>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMediaTimeRange__Interval
#include <qmediatimerange.h>
#include "gen_qmediatimerange.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QMediaTimeRange* QMediaTimeRange_new() {
	return new QMediaTimeRange();
}

QMediaTimeRange* QMediaTimeRange_new2(long long start, long long end) {
	return new QMediaTimeRange(static_cast<qint64>(start), static_cast<qint64>(end));
}

QMediaTimeRange* QMediaTimeRange_new3(QMediaTimeRange__Interval* param1) {
	return new QMediaTimeRange(*param1);
}

QMediaTimeRange* QMediaTimeRange_new4(QMediaTimeRange* rangeVal) {
	return new QMediaTimeRange(*rangeVal);
}

void QMediaTimeRange_OperatorAssign(QMediaTimeRange* self, QMediaTimeRange* param1) {
	self->operator=(*param1);
}

void QMediaTimeRange_Swap(QMediaTimeRange* self, QMediaTimeRange* other) {
	self->swap(*other);
}

void QMediaTimeRange_Detach(QMediaTimeRange* self) {
	self->detach();
}

void QMediaTimeRange_OperatorAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1) {
	self->operator=(*param1);
}

long long QMediaTimeRange_EarliestTime(const QMediaTimeRange* self) {
	qint64 _ret = self->earliestTime();
	return static_cast<long long>(_ret);
}

long long QMediaTimeRange_LatestTime(const QMediaTimeRange* self) {
	qint64 _ret = self->latestTime();
	return static_cast<long long>(_ret);
}

struct miqt_array /* of QMediaTimeRange__Interval* */  QMediaTimeRange_Intervals(const QMediaTimeRange* self) {
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

bool QMediaTimeRange_IsEmpty(const QMediaTimeRange* self) {
	return self->isEmpty();
}

bool QMediaTimeRange_IsContinuous(const QMediaTimeRange* self) {
	return self->isContinuous();
}

bool QMediaTimeRange_Contains(const QMediaTimeRange* self, long long time) {
	return self->contains(static_cast<qint64>(time));
}

void QMediaTimeRange_AddInterval(QMediaTimeRange* self, long long start, long long end) {
	self->addInterval(static_cast<qint64>(start), static_cast<qint64>(end));
}

void QMediaTimeRange_AddIntervalWithInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* interval) {
	self->addInterval(*interval);
}

void QMediaTimeRange_AddTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1) {
	self->addTimeRange(*param1);
}

void QMediaTimeRange_RemoveInterval(QMediaTimeRange* self, long long start, long long end) {
	self->removeInterval(static_cast<qint64>(start), static_cast<qint64>(end));
}

void QMediaTimeRange_RemoveIntervalWithInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* interval) {
	self->removeInterval(*interval);
}

void QMediaTimeRange_RemoveTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1) {
	self->removeTimeRange(*param1);
}

QMediaTimeRange* QMediaTimeRange_OperatorPlusAssign(QMediaTimeRange* self, QMediaTimeRange* param1) {
	QMediaTimeRange& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMediaTimeRange* QMediaTimeRange_OperatorPlusAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1) {
	QMediaTimeRange& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMediaTimeRange* QMediaTimeRange_OperatorMinusAssign(QMediaTimeRange* self, QMediaTimeRange* param1) {
	QMediaTimeRange& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMediaTimeRange* QMediaTimeRange_OperatorMinusAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1) {
	QMediaTimeRange& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

void QMediaTimeRange_Clear(QMediaTimeRange* self) {
	self->clear();
}

void QMediaTimeRange_Delete(QMediaTimeRange* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaTimeRange*>( self );
	} else {
		delete self;
	}
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

long long QMediaTimeRange__Interval_Start(const QMediaTimeRange__Interval* self) {
	qint64 _ret = self->start();
	return static_cast<long long>(_ret);
}

long long QMediaTimeRange__Interval_End(const QMediaTimeRange__Interval* self) {
	qint64 _ret = self->end();
	return static_cast<long long>(_ret);
}

bool QMediaTimeRange__Interval_Contains(const QMediaTimeRange__Interval* self, long long time) {
	return self->contains(static_cast<qint64>(time));
}

bool QMediaTimeRange__Interval_IsNormal(const QMediaTimeRange__Interval* self) {
	return self->isNormal();
}

QMediaTimeRange__Interval* QMediaTimeRange__Interval_Normalized(const QMediaTimeRange__Interval* self) {
	return new QMediaTimeRange::Interval(self->normalized());
}

QMediaTimeRange__Interval* QMediaTimeRange__Interval_Translated(const QMediaTimeRange__Interval* self, long long offset) {
	return new QMediaTimeRange::Interval(self->translated(static_cast<qint64>(offset)));
}

void QMediaTimeRange__Interval_Delete(QMediaTimeRange__Interval* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaTimeRange::Interval*>( self );
	} else {
		delete self;
	}
}

