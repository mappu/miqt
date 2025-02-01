#include <QList>
#include <QMediaTimeInterval>
#include <QMediaTimeRange>
#include <qmediatimerange.h>
#include "gen_qmediatimerange.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMediaTimeInterval* QMediaTimeInterval_new() {
	return new QMediaTimeInterval();
}

QMediaTimeInterval* QMediaTimeInterval_new2(long long start, long long end) {
	return new QMediaTimeInterval(static_cast<qint64>(start), static_cast<qint64>(end));
}

QMediaTimeInterval* QMediaTimeInterval_new3(QMediaTimeInterval* param1) {
	return new QMediaTimeInterval(*param1);
}

void QMediaTimeInterval_operatorAssign(QMediaTimeInterval* self, QMediaTimeInterval* param1) {
	self->operator=(*param1);
}

long long QMediaTimeInterval_start(const QMediaTimeInterval* self) {
	qint64 _ret = self->start();
	return static_cast<long long>(_ret);
}

long long QMediaTimeInterval_end(const QMediaTimeInterval* self) {
	qint64 _ret = self->end();
	return static_cast<long long>(_ret);
}

bool QMediaTimeInterval_contains(const QMediaTimeInterval* self, long long time) {
	return self->contains(static_cast<qint64>(time));
}

bool QMediaTimeInterval_isNormal(const QMediaTimeInterval* self) {
	return self->isNormal();
}

QMediaTimeInterval* QMediaTimeInterval_normalized(const QMediaTimeInterval* self) {
	return new QMediaTimeInterval(self->normalized());
}

QMediaTimeInterval* QMediaTimeInterval_translated(const QMediaTimeInterval* self, long long offset) {
	return new QMediaTimeInterval(self->translated(static_cast<qint64>(offset)));
}

void QMediaTimeInterval_delete(QMediaTimeInterval* self) {
	delete self;
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

QMediaTimeRange* QMediaTimeRange_new4(QMediaTimeRange* range) {
	return new QMediaTimeRange(*range);
}

void QMediaTimeRange_operatorAssign(QMediaTimeRange* self, QMediaTimeRange* param1) {
	self->operator=(*param1);
}

void QMediaTimeRange_operatorAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1) {
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

struct miqt_array /* of QMediaTimeInterval* */  QMediaTimeRange_intervals(const QMediaTimeRange* self) {
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

void QMediaTimeRange_addIntervalWithInterval(QMediaTimeRange* self, QMediaTimeInterval* interval) {
	self->addInterval(*interval);
}

void QMediaTimeRange_addTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1) {
	self->addTimeRange(*param1);
}

void QMediaTimeRange_removeInterval(QMediaTimeRange* self, long long start, long long end) {
	self->removeInterval(static_cast<qint64>(start), static_cast<qint64>(end));
}

void QMediaTimeRange_removeIntervalWithInterval(QMediaTimeRange* self, QMediaTimeInterval* interval) {
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

QMediaTimeRange* QMediaTimeRange_operatorPlusAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1) {
	QMediaTimeRange& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMediaTimeRange* QMediaTimeRange_operatorMinusAssign(QMediaTimeRange* self, QMediaTimeRange* param1) {
	QMediaTimeRange& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QMediaTimeRange* QMediaTimeRange_operatorMinusAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1) {
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

