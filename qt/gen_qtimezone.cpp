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
#include "_cgo_export.h"

QTimeZone* QTimeZone_new() {
	return new QTimeZone();
}

QTimeZone* QTimeZone_new2(QByteArray* ianaId) {
	return new QTimeZone(*ianaId);
}

QTimeZone* QTimeZone_new3(int offsetSeconds) {
	return new QTimeZone(static_cast<int>(offsetSeconds));
}

QTimeZone* QTimeZone_new4(QByteArray* zoneId, int offsetSeconds, struct miqt_string* name, struct miqt_string* abbreviation) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	QString abbreviation_QString = QString::fromUtf8(&abbreviation->data, abbreviation->len);
	return new QTimeZone(*zoneId, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString);
}

QTimeZone* QTimeZone_new5(QTimeZone* other) {
	return new QTimeZone(*other);
}

QTimeZone* QTimeZone_new6(QByteArray* zoneId, int offsetSeconds, struct miqt_string* name, struct miqt_string* abbreviation, int country) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	QString abbreviation_QString = QString::fromUtf8(&abbreviation->data, abbreviation->len);
	return new QTimeZone(*zoneId, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString, static_cast<QLocale::Country>(country));
}

QTimeZone* QTimeZone_new7(QByteArray* zoneId, int offsetSeconds, struct miqt_string* name, struct miqt_string* abbreviation, int country, struct miqt_string* comment) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	QString abbreviation_QString = QString::fromUtf8(&abbreviation->data, abbreviation->len);
	QString comment_QString = QString::fromUtf8(&comment->data, comment->len);
	return new QTimeZone(*zoneId, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString, static_cast<QLocale::Country>(country), comment_QString);
}

void QTimeZone_OperatorAssign(QTimeZone* self, QTimeZone* other) {
	self->operator=(*other);
}

void QTimeZone_Swap(QTimeZone* self, QTimeZone* other) {
	self->swap(*other);
}

bool QTimeZone_OperatorEqual(const QTimeZone* self, QTimeZone* other) {
	return self->operator==(*other);
}

bool QTimeZone_OperatorNotEqual(const QTimeZone* self, QTimeZone* other) {
	return self->operator!=(*other);
}

bool QTimeZone_IsValid(const QTimeZone* self) {
	return self->isValid();
}

QByteArray* QTimeZone_Id(const QTimeZone* self) {
	return new QByteArray(self->id());
}

int QTimeZone_Country(const QTimeZone* self) {
	QLocale::Country _ret = self->country();
	return static_cast<int>(_ret);
}

struct miqt_string* QTimeZone_Comment(const QTimeZone* self) {
	QString _ret = self->comment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeZone_DisplayName(const QTimeZone* self, QDateTime* atDateTime) {
	QString _ret = self->displayName(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeZone_DisplayNameWithTimeType(const QTimeZone* self, int timeType) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeZone_Abbreviation(const QTimeZone* self, QDateTime* atDateTime) {
	QString _ret = self->abbreviation(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QTimeZone_OffsetFromUtc(const QTimeZone* self, QDateTime* atDateTime) {
	return self->offsetFromUtc(*atDateTime);
}

int QTimeZone_StandardTimeOffset(const QTimeZone* self, QDateTime* atDateTime) {
	return self->standardTimeOffset(*atDateTime);
}

int QTimeZone_DaylightTimeOffset(const QTimeZone* self, QDateTime* atDateTime) {
	return self->daylightTimeOffset(*atDateTime);
}

bool QTimeZone_HasDaylightTime(const QTimeZone* self) {
	return self->hasDaylightTime();
}

bool QTimeZone_IsDaylightTime(const QTimeZone* self, QDateTime* atDateTime) {
	return self->isDaylightTime(*atDateTime);
}

QTimeZone__OffsetData* QTimeZone_OffsetData(const QTimeZone* self, QDateTime* forDateTime) {
	return new QTimeZone::OffsetData(self->offsetData(*forDateTime));
}

bool QTimeZone_HasTransitions(const QTimeZone* self) {
	return self->hasTransitions();
}

QTimeZone__OffsetData* QTimeZone_NextTransition(const QTimeZone* self, QDateTime* afterDateTime) {
	return new QTimeZone::OffsetData(self->nextTransition(*afterDateTime));
}

QTimeZone__OffsetData* QTimeZone_PreviousTransition(const QTimeZone* self, QDateTime* beforeDateTime) {
	return new QTimeZone::OffsetData(self->previousTransition(*beforeDateTime));
}

struct miqt_array* QTimeZone_Transitions(const QTimeZone* self, QDateTime* fromDateTime, QDateTime* toDateTime) {
	QTimeZone::OffsetDataList _ret = self->transitions(*fromDateTime, *toDateTime);
	// Convert QList<> from C++ memory to manually-managed C memory
	QTimeZone__OffsetData** _arr = static_cast<QTimeZone__OffsetData**>(malloc(sizeof(QTimeZone__OffsetData*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTimeZone::OffsetData(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QByteArray* QTimeZone_SystemTimeZoneId() {
	return new QByteArray(QTimeZone::systemTimeZoneId());
}

QTimeZone* QTimeZone_SystemTimeZone() {
	return new QTimeZone(QTimeZone::systemTimeZone());
}

QTimeZone* QTimeZone_Utc() {
	return new QTimeZone(QTimeZone::utc());
}

bool QTimeZone_IsTimeZoneIdAvailable(QByteArray* ianaId) {
	return QTimeZone::isTimeZoneIdAvailable(*ianaId);
}

struct miqt_array* QTimeZone_AvailableTimeZoneIds() {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds();
	// Convert QList<> from C++ memory to manually-managed C memory
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QTimeZone_AvailableTimeZoneIdsWithCountry(int country) {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds(static_cast<QLocale::Country>(country));
	// Convert QList<> from C++ memory to manually-managed C memory
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(int offsetSeconds) {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds(static_cast<int>(offsetSeconds));
	// Convert QList<> from C++ memory to manually-managed C memory
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QByteArray* QTimeZone_IanaIdToWindowsId(QByteArray* ianaId) {
	return new QByteArray(QTimeZone::ianaIdToWindowsId(*ianaId));
}

QByteArray* QTimeZone_WindowsIdToDefaultIanaId(QByteArray* windowsId) {
	return new QByteArray(QTimeZone::windowsIdToDefaultIanaId(*windowsId));
}

QByteArray* QTimeZone_WindowsIdToDefaultIanaId2(QByteArray* windowsId, int country) {
	return new QByteArray(QTimeZone::windowsIdToDefaultIanaId(*windowsId, static_cast<QLocale::Country>(country)));
}

struct miqt_array* QTimeZone_WindowsIdToIanaIds(QByteArray* windowsId) {
	QList<QByteArray> _ret = QTimeZone::windowsIdToIanaIds(*windowsId);
	// Convert QList<> from C++ memory to manually-managed C memory
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QTimeZone_WindowsIdToIanaIds2(QByteArray* windowsId, int country) {
	QList<QByteArray> _ret = QTimeZone::windowsIdToIanaIds(*windowsId, static_cast<QLocale::Country>(country));
	// Convert QList<> from C++ memory to manually-managed C memory
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QTimeZone_DisplayName2(const QTimeZone* self, QDateTime* atDateTime, int nameType) {
	QString _ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeZone_DisplayName3(const QTimeZone* self, QDateTime* atDateTime, int nameType, QLocale* locale) {
	QString _ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType), *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeZone_DisplayName22(const QTimeZone* self, int timeType, int nameType) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeZone_DisplayName32(const QTimeZone* self, int timeType, int nameType, QLocale* locale) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType), *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTimeZone_Delete(QTimeZone* self) {
	delete self;
}

QTimeZone__OffsetData* QTimeZone__OffsetData_new(QTimeZone__OffsetData* param1) {
	return new QTimeZone::OffsetData(*param1);
}

void QTimeZone__OffsetData_OperatorAssign(QTimeZone__OffsetData* self, QTimeZone__OffsetData* param1) {
	self->operator=(*param1);
}

void QTimeZone__OffsetData_Delete(QTimeZone__OffsetData* self) {
	delete self;
}

