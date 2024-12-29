#include <QList>
#include <QMediaTimeInterval>
#include <QMediaTimeRange>
#include <qmediatimerange.h>
#include "gen_qmediatimerange.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QMediaTimeInterval* QMediaTimeInterval_new() {
	return new QMediaTimeInterval();
}

QMediaTimeInterval* QMediaTimeInterval_new2(long long start, long long end) {
	return new QMediaTimeInterval(static_cast<qint64>(start), static_cast<qint64>(end));
}

QMediaTimeInterval* QMediaTimeInterval_new3(QMediaTimeInterval* param1) {
	return new QMediaTimeInterval(*param1);
}

void QMediaTimeInterval_OperatorAssign(QMediaTimeInterval* self, QMediaTimeInterval* param1) {
	self->operator=(*param1);
}

long long QMediaTimeInterval_Start(const QMediaTimeInterval* self) {
	qint64 _ret = self->start();
	return static_cast<long long>(_ret);
}

long long QMediaTimeInterval_End(const QMediaTimeInterval* self) {
	qint64 _ret = self->end();
	return static_cast<long long>(_ret);
}

bool QMediaTimeInterval_Contains(const QMediaTimeInterval* self, long long time) {
	return self->contains(static_cast<qint64>(time));
}

bool QMediaTimeInterval_IsNormal(const QMediaTimeInterval* self) {
	return self->isNormal();
}

QMediaTimeInterval* QMediaTimeInterval_Normalized(const QMediaTimeInterval* self) {
	return new QMediaTimeInterval(self->normalized());
}

QMediaTimeInterval* QMediaTimeInterval_Translated(const QMediaTimeInterval* self, long long offset) {
	return new QMediaTimeInterval(self->translated(static_cast<qint64>(offset)));
}

void QMediaTimeInterval_Delete(QMediaTimeInterval* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaTimeInterval*>( self );
	} else {
		delete self;
	}
}

QMediaTimeRange* QMediaTimeRange_new() {
	return new QMediaTimeRange();
}

QMediaTimeRange* QMediaTimeRange_new2(long long start, long long end) {
	return new QMediaTimeRange(static_cast<qint64>(start), static_cast<qint64>(end));
}

QMediaTimeRange* QMediaTimeRange_new3(QMediaTimeInterval* param1) {
	return new QMediaTimeRange(*param1);
}

QMediaTimeRange* QMediaTimeRange_new4(QMediaTimeRange* rangeVal) {
	return new QMediaTimeRange(*rangeVal);
}

void QMediaTimeRange_OperatorAssign(QMediaTimeRange* self, QMediaTimeRange* param1) {
	self->operator=(*param1);
}

void QMediaTimeRange_OperatorAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1) {
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

struct miqt_array /* of QMediaTimeInterval* */  QMediaTimeRange_Intervals(const QMediaTimeRange* self) {
	QList<QMediaTimeInterval> _ret = self->intervals();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMediaTimeInterval** _arr = static_cast<QMediaTimeInterval**>(malloc(sizeof(QMediaTimeInterval*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QMediaTimeInterval(_ret[i]);
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

void QMediaTimeRange_AddIntervalWithInterval(QMediaTimeRange* self, QMediaTimeInterval* interval) {
	self->addInterval(*interval);
}

void QMediaTimeRange_AddTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1) {
	self->addTimeRange(*param1);
}

void QMediaTimeRange_RemoveInterval(QMediaTimeRange* self, long long start, long long end) {
	self->removeInterval(static_cast<qint64>(start), static_cast<qint64>(end));
}

void QMediaTimeRange_RemoveIntervalWithInterval(QMediaTimeRange* self, QMediaTimeInterval* interval) {
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

QMediaTimeRange* QMediaTimeRange_OperatorPlusAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1) {
	QMediaTimeRange& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMediaTimeRange* QMediaTimeRange_OperatorMinusAssign(QMediaTimeRange* self, QMediaTimeRange* param1) {
	QMediaTimeRange& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMediaTimeRange* QMediaTimeRange_OperatorMinusAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1) {
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

