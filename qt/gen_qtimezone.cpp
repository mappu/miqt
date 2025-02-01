#include <QByteArray>
#include <QDateTime>
#include <QList>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeZone>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTimeZone__OffsetData
#include <qtimezone.h>
#include "gen_qtimezone.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTimeZone* QTimeZone_new() {
	return new QTimeZone();
}

QTimeZone* QTimeZone_new2(struct miqt_string ianaId) {
	QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
	return new QTimeZone(ianaId_QByteArray);
}

QTimeZone* QTimeZone_new3(int offsetSeconds) {
	return new QTimeZone(static_cast<int>(offsetSeconds));
}

QTimeZone* QTimeZone_new4(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation) {
	QByteArray zoneId_QByteArray(zoneId.data, zoneId.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
	return new QTimeZone(zoneId_QByteArray, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString);
}

QTimeZone* QTimeZone_new5(QTimeZone* other) {
	return new QTimeZone(*other);
}

QTimeZone* QTimeZone_new6(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation, int country) {
	QByteArray zoneId_QByteArray(zoneId.data, zoneId.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
	return new QTimeZone(zoneId_QByteArray, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString, static_cast<QLocale::Country>(country));
}

QTimeZone* QTimeZone_new7(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation, int country, struct miqt_string comment) {
	QByteArray zoneId_QByteArray(zoneId.data, zoneId.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
	QString comment_QString = QString::fromUtf8(comment.data, comment.len);
	return new QTimeZone(zoneId_QByteArray, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString, static_cast<QLocale::Country>(country), comment_QString);
}

void QTimeZone_operatorAssign(QTimeZone* self, QTimeZone* other) {
	self->operator=(*other);
}

void QTimeZone_swap(QTimeZone* self, QTimeZone* other) {
	self->swap(*other);
}

bool QTimeZone_isValid(const QTimeZone* self) {
	return self->isValid();
}

struct miqt_string QTimeZone_id(const QTimeZone* self) {
	QByteArray _qb = self->id();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QTimeZone_country(const QTimeZone* self) {
	QLocale::Country _ret = self->country();
	return static_cast<int>(_ret);
}

struct miqt_string QTimeZone_comment(const QTimeZone* self) {
	QString _ret = self->comment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName(const QTimeZone* self, QDateTime* atDateTime) {
	QString _ret = self->displayName(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayNameWithTimeType(const QTimeZone* self, int timeType) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_abbreviation(const QTimeZone* self, QDateTime* atDateTime) {
	QString _ret = self->abbreviation(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTimeZone_offsetFromUtc(const QTimeZone* self, QDateTime* atDateTime) {
	return self->offsetFromUtc(*atDateTime);
}

int QTimeZone_standardTimeOffset(const QTimeZone* self, QDateTime* atDateTime) {
	return self->standardTimeOffset(*atDateTime);
}

int QTimeZone_daylightTimeOffset(const QTimeZone* self, QDateTime* atDateTime) {
	return self->daylightTimeOffset(*atDateTime);
}

bool QTimeZone_hasDaylightTime(const QTimeZone* self) {
	return self->hasDaylightTime();
}

bool QTimeZone_isDaylightTime(const QTimeZone* self, QDateTime* atDateTime) {
	return self->isDaylightTime(*atDateTime);
}

QTimeZone__OffsetData* QTimeZone_offsetData(const QTimeZone* self, QDateTime* forDateTime) {
	return new QTimeZone::OffsetData(self->offsetData(*forDateTime));
}

bool QTimeZone_hasTransitions(const QTimeZone* self) {
	return self->hasTransitions();
}

QTimeZone__OffsetData* QTimeZone_nextTransition(const QTimeZone* self, QDateTime* afterDateTime) {
	return new QTimeZone::OffsetData(self->nextTransition(*afterDateTime));
}

QTimeZone__OffsetData* QTimeZone_previousTransition(const QTimeZone* self, QDateTime* beforeDateTime) {
	return new QTimeZone::OffsetData(self->previousTransition(*beforeDateTime));
}

struct miqt_array /* of QTimeZone__OffsetData* */  QTimeZone_transitions(const QTimeZone* self, QDateTime* fromDateTime, QDateTime* toDateTime) {
	QTimeZone::OffsetDataList _ret = self->transitions(*fromDateTime, *toDateTime);
	// Convert QList<> from C++ memory to manually-managed C memory
	QTimeZone__OffsetData** _arr = static_cast<QTimeZone__OffsetData**>(malloc(sizeof(QTimeZone__OffsetData*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTimeZone::OffsetData(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QTimeZone_systemTimeZoneId() {
	QByteArray _qb = QTimeZone::systemTimeZoneId();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QTimeZone* QTimeZone_systemTimeZone() {
	return new QTimeZone(QTimeZone::systemTimeZone());
}

QTimeZone* QTimeZone_utc() {
	return new QTimeZone(QTimeZone::utc());
}

bool QTimeZone_isTimeZoneIdAvailable(struct miqt_string ianaId) {
	QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
	return QTimeZone::isTimeZoneIdAvailable(ianaId_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIds() {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIdsWithCountry(int country) {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds(static_cast<QLocale::Country>(country));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIdsWithOffsetSeconds(int offsetSeconds) {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds(static_cast<int>(offsetSeconds));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QTimeZone_ianaIdToWindowsId(struct miqt_string ianaId) {
	QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
	QByteArray _qb = QTimeZone::ianaIdToWindowsId(ianaId_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_windowsIdToDefaultIanaId(struct miqt_string windowsId) {
	QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
	QByteArray _qb = QTimeZone::windowsIdToDefaultIanaId(windowsId_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_windowsIdToDefaultIanaId2(struct miqt_string windowsId, int country) {
	QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
	QByteArray _qb = QTimeZone::windowsIdToDefaultIanaId(windowsId_QByteArray, static_cast<QLocale::Country>(country));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QTimeZone_windowsIdToIanaIds(struct miqt_string windowsId) {
	QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
	QList<QByteArray> _ret = QTimeZone::windowsIdToIanaIds(windowsId_QByteArray);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QTimeZone_windowsIdToIanaIds2(struct miqt_string windowsId, int country) {
	QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
	QList<QByteArray> _ret = QTimeZone::windowsIdToIanaIds(windowsId_QByteArray, static_cast<QLocale::Country>(country));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QTimeZone_displayName2(const QTimeZone* self, QDateTime* atDateTime, int nameType) {
	QString _ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName3(const QTimeZone* self, QDateTime* atDateTime, int nameType, QLocale* locale) {
	QString _ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType), *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName22(const QTimeZone* self, int timeType, int nameType) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName32(const QTimeZone* self, int timeType, int nameType, QLocale* locale) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType), *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTimeZone_delete(QTimeZone* self) {
	delete self;
}

QTimeZone__OffsetData* QTimeZone__OffsetData_new(QTimeZone__OffsetData* param1) {
	return new QTimeZone::OffsetData(*param1);
}

void QTimeZone__OffsetData_operatorAssign(QTimeZone__OffsetData* self, QTimeZone__OffsetData* param1) {
	self->operator=(*param1);
}

void QTimeZone__OffsetData_delete(QTimeZone__OffsetData* self) {
	delete self;
}

