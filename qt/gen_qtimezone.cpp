#include <QByteArray>
#include <QDateTime>
#include <QList>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeZone>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTimeZone__OffsetData
#include "qtimezone.h"

#include "gen_qtimezone.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTimeZone* QTimeZone_new() {
	return new QTimeZone();
}

QTimeZone* QTimeZone_new2(QByteArray* ianaId) {
	return new QTimeZone(*ianaId);
}

QTimeZone* QTimeZone_new3(int offsetSeconds) {
	return new QTimeZone(static_cast<int>(offsetSeconds));
}

QTimeZone* QTimeZone_new4(QByteArray* zoneId, int offsetSeconds, const char* name, size_t name_Strlen, const char* abbreviation, size_t abbreviation_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString abbreviation_QString = QString::fromUtf8(abbreviation, abbreviation_Strlen);
	return new QTimeZone(*zoneId, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString);
}

QTimeZone* QTimeZone_new5(QTimeZone* other) {
	return new QTimeZone(*other);
}

QTimeZone* QTimeZone_new6(QByteArray* zoneId, int offsetSeconds, const char* name, size_t name_Strlen, const char* abbreviation, size_t abbreviation_Strlen, uintptr_t country) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString abbreviation_QString = QString::fromUtf8(abbreviation, abbreviation_Strlen);
	return new QTimeZone(*zoneId, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString, static_cast<QLocale::Country>(country));
}

QTimeZone* QTimeZone_new7(QByteArray* zoneId, int offsetSeconds, const char* name, size_t name_Strlen, const char* abbreviation, size_t abbreviation_Strlen, uintptr_t country, const char* comment, size_t comment_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QString abbreviation_QString = QString::fromUtf8(abbreviation, abbreviation_Strlen);
	QString comment_QString = QString::fromUtf8(comment, comment_Strlen);
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
	QByteArray ret = self->id();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

uintptr_t QTimeZone_Country(const QTimeZone* self) {
	QLocale::Country ret = self->country();
	return static_cast<uintptr_t>(ret);
}

void QTimeZone_Comment(const QTimeZone* self, char** _out, int* _out_Strlen) {
	QString ret = self->comment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeZone_DisplayName(const QTimeZone* self, QDateTime* atDateTime, char** _out, int* _out_Strlen) {
	QString ret = self->displayName(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeZone_DisplayNameWithTimeType(const QTimeZone* self, uintptr_t timeType, char** _out, int* _out_Strlen) {
	QString ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeZone_Abbreviation(const QTimeZone* self, QDateTime* atDateTime, char** _out, int* _out_Strlen) {
	QString ret = self->abbreviation(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
	QTimeZone::OffsetData ret = self->offsetData(*forDateTime);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTimeZone::OffsetData*>(new QTimeZone::OffsetData(ret));
}

bool QTimeZone_HasTransitions(const QTimeZone* self) {
	return self->hasTransitions();
}

QTimeZone__OffsetData* QTimeZone_NextTransition(const QTimeZone* self, QDateTime* afterDateTime) {
	QTimeZone::OffsetData ret = self->nextTransition(*afterDateTime);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTimeZone::OffsetData*>(new QTimeZone::OffsetData(ret));
}

QTimeZone__OffsetData* QTimeZone_PreviousTransition(const QTimeZone* self, QDateTime* beforeDateTime) {
	QTimeZone::OffsetData ret = self->previousTransition(*beforeDateTime);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTimeZone::OffsetData*>(new QTimeZone::OffsetData(ret));
}

void QTimeZone_Transitions(const QTimeZone* self, QDateTime* fromDateTime, QDateTime* toDateTime, QTimeZone__OffsetData*** _out, size_t* _out_len) {
	QTimeZone::OffsetDataList ret = self->transitions(*fromDateTime, *toDateTime);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QTimeZone__OffsetData** __out = static_cast<QTimeZone__OffsetData**>(malloc(sizeof(QTimeZone__OffsetData**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QTimeZone::OffsetData(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QByteArray* QTimeZone_SystemTimeZoneId() {
	QByteArray ret = QTimeZone::systemTimeZoneId();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QTimeZone* QTimeZone_SystemTimeZone() {
	QTimeZone ret = QTimeZone::systemTimeZone();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTimeZone*>(new QTimeZone(ret));
}

QTimeZone* QTimeZone_Utc() {
	QTimeZone ret = QTimeZone::utc();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTimeZone*>(new QTimeZone(ret));
}

bool QTimeZone_IsTimeZoneIdAvailable(QByteArray* ianaId) {
	return QTimeZone::isTimeZoneIdAvailable(*ianaId);
}

void QTimeZone_AvailableTimeZoneIds(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QTimeZone::availableTimeZoneIds();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTimeZone_AvailableTimeZoneIdsWithCountry(uintptr_t country, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QTimeZone::availableTimeZoneIds(static_cast<QLocale::Country>(country));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(int offsetSeconds, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QTimeZone::availableTimeZoneIds(static_cast<int>(offsetSeconds));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QByteArray* QTimeZone_IanaIdToWindowsId(QByteArray* ianaId) {
	QByteArray ret = QTimeZone::ianaIdToWindowsId(*ianaId);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QTimeZone_WindowsIdToDefaultIanaId(QByteArray* windowsId) {
	QByteArray ret = QTimeZone::windowsIdToDefaultIanaId(*windowsId);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QTimeZone_WindowsIdToDefaultIanaId2(QByteArray* windowsId, uintptr_t country) {
	QByteArray ret = QTimeZone::windowsIdToDefaultIanaId(*windowsId, static_cast<QLocale::Country>(country));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QTimeZone_WindowsIdToIanaIds(QByteArray* windowsId, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QTimeZone::windowsIdToIanaIds(*windowsId);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTimeZone_WindowsIdToIanaIds2(QByteArray* windowsId, uintptr_t country, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QTimeZone::windowsIdToIanaIds(*windowsId, static_cast<QLocale::Country>(country));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTimeZone_DisplayName2(const QTimeZone* self, QDateTime* atDateTime, uintptr_t nameType, char** _out, int* _out_Strlen) {
	QString ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeZone_DisplayName3(const QTimeZone* self, QDateTime* atDateTime, uintptr_t nameType, QLocale* locale, char** _out, int* _out_Strlen) {
	QString ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType), *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeZone_DisplayName22(const QTimeZone* self, uintptr_t timeType, uintptr_t nameType, char** _out, int* _out_Strlen) {
	QString ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeZone_DisplayName32(const QTimeZone* self, uintptr_t timeType, uintptr_t nameType, QLocale* locale, char** _out, int* _out_Strlen) {
	QString ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType), *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeZone_Delete(QTimeZone* self) {
	delete self;
}

QTimeZone__OffsetData* QTimeZone__OffsetData_new(QTimeZone__OffsetData* param1) {
	return new QTimeZone::OffsetData(*param1);
}

void QTimeZone__OffsetData_Delete(QTimeZone__OffsetData* self) {
	delete self;
}

