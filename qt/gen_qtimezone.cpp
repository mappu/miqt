#include "gen_qtimezone.h"
#include "qtimezone.h"

#include <QByteArray>
#include <QDateTime>
#include <QList>
#include <QString>
#include <QTimeZone>


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

QTimeZone* QTimeZone_new4(QTimeZone* other) {
	return new QTimeZone(*other);
}

void QTimeZone_OperatorAssign(QTimeZone* self, QTimeZone* other) {
	self->operator=(*other);
}

void QTimeZone_Swap(QTimeZone* self, QTimeZone* other) {
	self->swap(*other);
}

bool QTimeZone_OperatorEqual(QTimeZone* self, QTimeZone* other) {
	return self->operator==(*other);
}

bool QTimeZone_OperatorNotEqual(QTimeZone* self, QTimeZone* other) {
	return self->operator!=(*other);
}

bool QTimeZone_IsValid(QTimeZone* self) {
	return self->isValid();
}

QByteArray* QTimeZone_Id(QTimeZone* self) {
	QByteArray ret = self->id();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QTimeZone_Comment(QTimeZone* self, char** _out, int* _out_Strlen) {
	QString ret = self->comment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeZone_Abbreviation(QTimeZone* self, QDateTime* atDateTime, char** _out, int* _out_Strlen) {
	QString ret = self->abbreviation(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QTimeZone_OffsetFromUtc(QTimeZone* self, QDateTime* atDateTime) {
	return self->offsetFromUtc(*atDateTime);
}

int QTimeZone_StandardTimeOffset(QTimeZone* self, QDateTime* atDateTime) {
	return self->standardTimeOffset(*atDateTime);
}

int QTimeZone_DaylightTimeOffset(QTimeZone* self, QDateTime* atDateTime) {
	return self->daylightTimeOffset(*atDateTime);
}

bool QTimeZone_HasDaylightTime(QTimeZone* self) {
	return self->hasDaylightTime();
}

bool QTimeZone_IsDaylightTime(QTimeZone* self, QDateTime* atDateTime) {
	return self->isDaylightTime(*atDateTime);
}

bool QTimeZone_HasTransitions(QTimeZone* self) {
	return self->hasTransitions();
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

void QTimeZone_Delete(QTimeZone* self) {
	delete self;
}

