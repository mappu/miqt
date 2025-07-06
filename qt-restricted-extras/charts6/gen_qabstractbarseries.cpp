#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QBarSet>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractbarseries.h>
#include "gen_qabstractbarseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAbstractBarSeries_clicked(intptr_t, int, QBarSet*);
void miqt_exec_callback_QAbstractBarSeries_hovered(intptr_t, bool, int, QBarSet*);
void miqt_exec_callback_QAbstractBarSeries_pressed(intptr_t, int, QBarSet*);
void miqt_exec_callback_QAbstractBarSeries_released(intptr_t, int, QBarSet*);
void miqt_exec_callback_QAbstractBarSeries_doubleClicked(intptr_t, int, QBarSet*);
void miqt_exec_callback_QAbstractBarSeries_countChanged(intptr_t);
void miqt_exec_callback_QAbstractBarSeries_labelsVisibleChanged(intptr_t);
void miqt_exec_callback_QAbstractBarSeries_labelsFormatChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QAbstractBarSeries_labelsPositionChanged(intptr_t, int);
void miqt_exec_callback_QAbstractBarSeries_labelsAngleChanged(intptr_t, double);
void miqt_exec_callback_QAbstractBarSeries_labelsPrecisionChanged(intptr_t, int);
void miqt_exec_callback_QAbstractBarSeries_barsetsAdded(intptr_t, struct miqt_array /* of QBarSet* */ );
void miqt_exec_callback_QAbstractBarSeries_barsetsRemoved(intptr_t, struct miqt_array /* of QBarSet* */ );
#ifdef __cplusplus
} /* extern C */
#endif

void QAbstractBarSeries_virtbase(QAbstractBarSeries* src, QAbstractSeries** outptr_QAbstractSeries) {
	*outptr_QAbstractSeries = static_cast<QAbstractSeries*>(src);
}

QMetaObject* QAbstractBarSeries_metaObject(const QAbstractBarSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractBarSeries_metacast(QAbstractBarSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractBarSeries_tr(const char* s) {
	QString _ret = QAbstractBarSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractBarSeries_setBarWidth(QAbstractBarSeries* self, double width) {
	self->setBarWidth(static_cast<qreal>(width));
}

double QAbstractBarSeries_barWidth(const QAbstractBarSeries* self) {
	qreal _ret = self->barWidth();
	return static_cast<double>(_ret);
}

bool QAbstractBarSeries_append(QAbstractBarSeries* self, QBarSet* set) {
	return self->append(set);
}

bool QAbstractBarSeries_remove(QAbstractBarSeries* self, QBarSet* set) {
	return self->remove(set);
}

bool QAbstractBarSeries_take(QAbstractBarSeries* self, QBarSet* set) {
	return self->take(set);
}

bool QAbstractBarSeries_appendWithSets(QAbstractBarSeries* self, struct miqt_array /* of QBarSet* */  sets) {
	QList<QBarSet*> sets_QList;
	sets_QList.reserve(sets.len);
	QBarSet** sets_arr = static_cast<QBarSet**>(sets.data);
	for(size_t i = 0; i < sets.len; ++i) {
		sets_QList.push_back(sets_arr[i]);
	}
	return self->append(sets_QList);
}

bool QAbstractBarSeries_insert(QAbstractBarSeries* self, int index, QBarSet* set) {
	return self->insert(static_cast<int>(index), set);
}

int QAbstractBarSeries_count(const QAbstractBarSeries* self) {
	return self->count();
}

struct miqt_array /* of QBarSet* */  QAbstractBarSeries_barSets(const QAbstractBarSeries* self) {
	QList<QBarSet*> _ret = self->barSets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QBarSet** _arr = static_cast<QBarSet**>(malloc(sizeof(QBarSet*) * _ret.size()));
	for (size_t i = 0, e = _ret.size(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.size();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAbstractBarSeries_clear(QAbstractBarSeries* self) {
	self->clear();
}

void QAbstractBarSeries_setLabelsVisible(QAbstractBarSeries* self) {
	self->setLabelsVisible();
}

bool QAbstractBarSeries_isLabelsVisible(const QAbstractBarSeries* self) {
	return self->isLabelsVisible();
}

void QAbstractBarSeries_setLabelsFormat(QAbstractBarSeries* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->setLabelsFormat(format_QString);
}

struct miqt_string QAbstractBarSeries_labelsFormat(const QAbstractBarSeries* self) {
	QString _ret = self->labelsFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractBarSeries_setLabelsAngle(QAbstractBarSeries* self, double angle) {
	self->setLabelsAngle(static_cast<qreal>(angle));
}

double QAbstractBarSeries_labelsAngle(const QAbstractBarSeries* self) {
	qreal _ret = self->labelsAngle();
	return static_cast<double>(_ret);
}

void QAbstractBarSeries_setLabelsPosition(QAbstractBarSeries* self, int position) {
	self->setLabelsPosition(static_cast<QAbstractBarSeries::LabelsPosition>(position));
}

int QAbstractBarSeries_labelsPosition(const QAbstractBarSeries* self) {
	QAbstractBarSeries::LabelsPosition _ret = self->labelsPosition();
	return static_cast<int>(_ret);
}

void QAbstractBarSeries_setLabelsPrecision(QAbstractBarSeries* self, int precision) {
	self->setLabelsPrecision(static_cast<int>(precision));
}

int QAbstractBarSeries_labelsPrecision(const QAbstractBarSeries* self) {
	return self->labelsPrecision();
}

void QAbstractBarSeries_clicked(QAbstractBarSeries* self, int index, QBarSet* barset) {
	self->clicked(static_cast<int>(index), barset);
}

void QAbstractBarSeries_connect_clicked(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(int, QBarSet*)>(&QAbstractBarSeries::clicked), self, [=](int index, QBarSet* barset) {
		int sigval1 = index;
		QBarSet* sigval2 = barset;
		miqt_exec_callback_QAbstractBarSeries_clicked(slot, sigval1, sigval2);
	});
}

void QAbstractBarSeries_hovered(QAbstractBarSeries* self, bool status, int index, QBarSet* barset) {
	self->hovered(status, static_cast<int>(index), barset);
}

void QAbstractBarSeries_connect_hovered(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(bool, int, QBarSet*)>(&QAbstractBarSeries::hovered), self, [=](bool status, int index, QBarSet* barset) {
		bool sigval1 = status;
		int sigval2 = index;
		QBarSet* sigval3 = barset;
		miqt_exec_callback_QAbstractBarSeries_hovered(slot, sigval1, sigval2, sigval3);
	});
}

void QAbstractBarSeries_pressed(QAbstractBarSeries* self, int index, QBarSet* barset) {
	self->pressed(static_cast<int>(index), barset);
}

void QAbstractBarSeries_connect_pressed(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(int, QBarSet*)>(&QAbstractBarSeries::pressed), self, [=](int index, QBarSet* barset) {
		int sigval1 = index;
		QBarSet* sigval2 = barset;
		miqt_exec_callback_QAbstractBarSeries_pressed(slot, sigval1, sigval2);
	});
}

void QAbstractBarSeries_released(QAbstractBarSeries* self, int index, QBarSet* barset) {
	self->released(static_cast<int>(index), barset);
}

void QAbstractBarSeries_connect_released(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(int, QBarSet*)>(&QAbstractBarSeries::released), self, [=](int index, QBarSet* barset) {
		int sigval1 = index;
		QBarSet* sigval2 = barset;
		miqt_exec_callback_QAbstractBarSeries_released(slot, sigval1, sigval2);
	});
}

void QAbstractBarSeries_doubleClicked(QAbstractBarSeries* self, int index, QBarSet* barset) {
	self->doubleClicked(static_cast<int>(index), barset);
}

void QAbstractBarSeries_connect_doubleClicked(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(int, QBarSet*)>(&QAbstractBarSeries::doubleClicked), self, [=](int index, QBarSet* barset) {
		int sigval1 = index;
		QBarSet* sigval2 = barset;
		miqt_exec_callback_QAbstractBarSeries_doubleClicked(slot, sigval1, sigval2);
	});
}

void QAbstractBarSeries_countChanged(QAbstractBarSeries* self) {
	self->countChanged();
}

void QAbstractBarSeries_connect_countChanged(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)()>(&QAbstractBarSeries::countChanged), self, [=]() {
		miqt_exec_callback_QAbstractBarSeries_countChanged(slot);
	});
}

void QAbstractBarSeries_labelsVisibleChanged(QAbstractBarSeries* self) {
	self->labelsVisibleChanged();
}

void QAbstractBarSeries_connect_labelsVisibleChanged(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)()>(&QAbstractBarSeries::labelsVisibleChanged), self, [=]() {
		miqt_exec_callback_QAbstractBarSeries_labelsVisibleChanged(slot);
	});
}

void QAbstractBarSeries_labelsFormatChanged(QAbstractBarSeries* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->labelsFormatChanged(format_QString);
}

void QAbstractBarSeries_connect_labelsFormatChanged(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(const QString&)>(&QAbstractBarSeries::labelsFormatChanged), self, [=](const QString& format) {
		const QString format_ret = format;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray format_b = format_ret.toUtf8();
		struct miqt_string format_ms;
		format_ms.len = format_b.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_b.data(), format_ms.len);
		struct miqt_string sigval1 = format_ms;
		miqt_exec_callback_QAbstractBarSeries_labelsFormatChanged(slot, sigval1);
	});
}

void QAbstractBarSeries_labelsPositionChanged(QAbstractBarSeries* self, int position) {
	self->labelsPositionChanged(static_cast<QAbstractBarSeries::LabelsPosition>(position));
}

void QAbstractBarSeries_connect_labelsPositionChanged(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(QAbstractBarSeries::LabelsPosition)>(&QAbstractBarSeries::labelsPositionChanged), self, [=](QAbstractBarSeries::LabelsPosition position) {
		QAbstractBarSeries::LabelsPosition position_ret = position;
		int sigval1 = static_cast<int>(position_ret);
		miqt_exec_callback_QAbstractBarSeries_labelsPositionChanged(slot, sigval1);
	});
}

void QAbstractBarSeries_labelsAngleChanged(QAbstractBarSeries* self, double angle) {
	self->labelsAngleChanged(static_cast<qreal>(angle));
}

void QAbstractBarSeries_connect_labelsAngleChanged(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(qreal)>(&QAbstractBarSeries::labelsAngleChanged), self, [=](qreal angle) {
		qreal angle_ret = angle;
		double sigval1 = static_cast<double>(angle_ret);
		miqt_exec_callback_QAbstractBarSeries_labelsAngleChanged(slot, sigval1);
	});
}

void QAbstractBarSeries_labelsPrecisionChanged(QAbstractBarSeries* self, int precision) {
	self->labelsPrecisionChanged(static_cast<int>(precision));
}

void QAbstractBarSeries_connect_labelsPrecisionChanged(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(int)>(&QAbstractBarSeries::labelsPrecisionChanged), self, [=](int precision) {
		int sigval1 = precision;
		miqt_exec_callback_QAbstractBarSeries_labelsPrecisionChanged(slot, sigval1);
	});
}

void QAbstractBarSeries_barsetsAdded(QAbstractBarSeries* self, struct miqt_array /* of QBarSet* */  sets) {
	QList<QBarSet*> sets_QList;
	sets_QList.reserve(sets.len);
	QBarSet** sets_arr = static_cast<QBarSet**>(sets.data);
	for(size_t i = 0; i < sets.len; ++i) {
		sets_QList.push_back(sets_arr[i]);
	}
	self->barsetsAdded(sets_QList);
}

void QAbstractBarSeries_connect_barsetsAdded(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(const QList<QBarSet*>&)>(&QAbstractBarSeries::barsetsAdded), self, [=](const QList<QBarSet*>& sets) {
		const QList<QBarSet*>& sets_ret = sets;
		// Convert QList<> from C++ memory to manually-managed C memory
		QBarSet** sets_arr = static_cast<QBarSet**>(malloc(sizeof(QBarSet*) * sets_ret.size()));
		for (size_t i = 0, e = sets_ret.size(); i < e; ++i) {
			sets_arr[i] = sets_ret[i];
		}
		struct miqt_array sets_out;
		sets_out.len = sets_ret.size();
		sets_out.data = static_cast<void*>(sets_arr);
		struct miqt_array /* of QBarSet* */  sigval1 = sets_out;
		miqt_exec_callback_QAbstractBarSeries_barsetsAdded(slot, sigval1);
	});
}

void QAbstractBarSeries_barsetsRemoved(QAbstractBarSeries* self, struct miqt_array /* of QBarSet* */  sets) {
	QList<QBarSet*> sets_QList;
	sets_QList.reserve(sets.len);
	QBarSet** sets_arr = static_cast<QBarSet**>(sets.data);
	for(size_t i = 0; i < sets.len; ++i) {
		sets_QList.push_back(sets_arr[i]);
	}
	self->barsetsRemoved(sets_QList);
}

void QAbstractBarSeries_connect_barsetsRemoved(QAbstractBarSeries* self, intptr_t slot) {
	QAbstractBarSeries::connect(self, static_cast<void (QAbstractBarSeries::*)(const QList<QBarSet*>&)>(&QAbstractBarSeries::barsetsRemoved), self, [=](const QList<QBarSet*>& sets) {
		const QList<QBarSet*>& sets_ret = sets;
		// Convert QList<> from C++ memory to manually-managed C memory
		QBarSet** sets_arr = static_cast<QBarSet**>(malloc(sizeof(QBarSet*) * sets_ret.size()));
		for (size_t i = 0, e = sets_ret.size(); i < e; ++i) {
			sets_arr[i] = sets_ret[i];
		}
		struct miqt_array sets_out;
		sets_out.len = sets_ret.size();
		sets_out.data = static_cast<void*>(sets_arr);
		struct miqt_array /* of QBarSet* */  sigval1 = sets_out;
		miqt_exec_callback_QAbstractBarSeries_barsetsRemoved(slot, sigval1);
	});
}

struct miqt_string QAbstractBarSeries_tr2(const char* s, const char* c) {
	QString _ret = QAbstractBarSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractBarSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractBarSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractBarSeries_setLabelsVisibleWithVisible(QAbstractBarSeries* self, bool visible) {
	self->setLabelsVisible(visible);
}

void QAbstractBarSeries_delete(QAbstractBarSeries* self) {
	delete self;
}

