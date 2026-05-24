#include <QDate>
#include <QDateTime>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qwt_date.h>
#include "gen_qwt_date.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QDate* QwtDate_minDate() {
	return new QDate(QwtDate::minDate());
}

QDate* QwtDate_maxDate() {
	return new QDate(QwtDate::maxDate());
}

QDateTime* QwtDate_toDateTime(double value) {
	return new QDateTime(QwtDate::toDateTime(static_cast<double>(value)));
}

double QwtDate_toDouble(QDateTime* param1) {
	return QwtDate::toDouble(*param1);
}

QDateTime* QwtDate_ceil(QDateTime* param1, int param2) {
	return new QDateTime(QwtDate::ceil(*param1, static_cast<QwtDate::IntervalType>(param2)));
}

QDateTime* QwtDate_floor(QDateTime* param1, int param2) {
	return new QDateTime(QwtDate::floor(*param1, static_cast<QwtDate::IntervalType>(param2)));
}

QDate* QwtDate_dateOfWeek0(int year, int param2) {
	return new QDate(QwtDate::dateOfWeek0(static_cast<int>(year), static_cast<QwtDate::Week0Type>(param2)));
}

int QwtDate_weekNumber(QDate* param1, int param2) {
	return QwtDate::weekNumber(*param1, static_cast<QwtDate::Week0Type>(param2));
}

int QwtDate_utcOffset(QDateTime* param1) {
	return QwtDate::utcOffset(*param1);
}

struct miqt_string QwtDate_toString(QDateTime* param1, struct miqt_string format, int param3) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = QwtDate::toString(*param1, format_QString, static_cast<QwtDate::Week0Type>(param3));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QwtDate_toDateTime2(double value, int param2) {
	return new QDateTime(QwtDate::toDateTime(static_cast<double>(value), static_cast<Qt::TimeSpec>(param2)));
}

void QwtDate_delete(QwtDate* self) {
	delete self;
}

