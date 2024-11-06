#include <QMediaObject>
#include <QMetaObject>
#include <QObject>
#include <QRadioData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qradiodata.h>
#include "gen_qradiodata.h"
#include "_cgo_export.h"

QRadioData* QRadioData_new(QMediaObject* mediaObject) {
	return new QRadioData(mediaObject);
}

QRadioData* QRadioData_new2(QMediaObject* mediaObject, QObject* parent) {
	return new QRadioData(mediaObject, parent);
}

QMetaObject* QRadioData_MetaObject(const QRadioData* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRadioData_Metacast(QRadioData* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRadioData_Tr(const char* s) {
	QString _ret = QRadioData::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_TrUtf8(const char* s) {
	QString _ret = QRadioData::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRadioData_Availability(const QRadioData* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

QMediaObject* QRadioData_MediaObject(const QRadioData* self) {
	return self->mediaObject();
}

struct miqt_string QRadioData_StationId(const QRadioData* self) {
	QString _ret = self->stationId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRadioData_ProgramType(const QRadioData* self) {
	QRadioData::ProgramType _ret = self->programType();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioData_ProgramTypeName(const QRadioData* self) {
	QString _ret = self->programTypeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_StationName(const QRadioData* self) {
	QString _ret = self->stationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_RadioText(const QRadioData* self) {
	QString _ret = self->radioText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRadioData_IsAlternativeFrequenciesEnabled(const QRadioData* self) {
	return self->isAlternativeFrequenciesEnabled();
}

int QRadioData_Error(const QRadioData* self) {
	QRadioData::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioData_ErrorString(const QRadioData* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioData_SetAlternativeFrequenciesEnabled(QRadioData* self, bool enabled) {
	self->setAlternativeFrequenciesEnabled(enabled);
}

void QRadioData_StationIdChanged(QRadioData* self, struct miqt_string stationId) {
	QString stationId_QString = QString::fromUtf8(stationId.data, stationId.len);
	self->stationIdChanged(stationId_QString);
}

void QRadioData_connect_StationIdChanged(QRadioData* self, intptr_t slot) {
	QRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::stationIdChanged), self, [=](QString stationId) {
		QString stationId_ret = stationId;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationId_b = stationId_ret.toUtf8();
		struct miqt_string stationId_ms;
		stationId_ms.len = stationId_b.length();
		stationId_ms.data = static_cast<char*>(malloc(stationId_ms.len));
		memcpy(stationId_ms.data, stationId_b.data(), stationId_ms.len);
		struct miqt_string sigval1 = stationId_ms;
		miqt_exec_callback_QRadioData_StationIdChanged(slot, sigval1);
	});
}

void QRadioData_ProgramTypeChanged(QRadioData* self, int programType) {
	self->programTypeChanged(static_cast<QRadioData::ProgramType>(programType));
}

void QRadioData_connect_ProgramTypeChanged(QRadioData* self, intptr_t slot) {
	QRadioData::connect(self, static_cast<void (QRadioData::*)(QRadioData::ProgramType)>(&QRadioData::programTypeChanged), self, [=](QRadioData::ProgramType programType) {
		QRadioData::ProgramType programType_ret = programType;
		int sigval1 = static_cast<int>(programType_ret);
		miqt_exec_callback_QRadioData_ProgramTypeChanged(slot, sigval1);
	});
}

void QRadioData_ProgramTypeNameChanged(QRadioData* self, struct miqt_string programTypeName) {
	QString programTypeName_QString = QString::fromUtf8(programTypeName.data, programTypeName.len);
	self->programTypeNameChanged(programTypeName_QString);
}

void QRadioData_connect_ProgramTypeNameChanged(QRadioData* self, intptr_t slot) {
	QRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::programTypeNameChanged), self, [=](QString programTypeName) {
		QString programTypeName_ret = programTypeName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray programTypeName_b = programTypeName_ret.toUtf8();
		struct miqt_string programTypeName_ms;
		programTypeName_ms.len = programTypeName_b.length();
		programTypeName_ms.data = static_cast<char*>(malloc(programTypeName_ms.len));
		memcpy(programTypeName_ms.data, programTypeName_b.data(), programTypeName_ms.len);
		struct miqt_string sigval1 = programTypeName_ms;
		miqt_exec_callback_QRadioData_ProgramTypeNameChanged(slot, sigval1);
	});
}

void QRadioData_StationNameChanged(QRadioData* self, struct miqt_string stationName) {
	QString stationName_QString = QString::fromUtf8(stationName.data, stationName.len);
	self->stationNameChanged(stationName_QString);
}

void QRadioData_connect_StationNameChanged(QRadioData* self, intptr_t slot) {
	QRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::stationNameChanged), self, [=](QString stationName) {
		QString stationName_ret = stationName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationName_b = stationName_ret.toUtf8();
		struct miqt_string stationName_ms;
		stationName_ms.len = stationName_b.length();
		stationName_ms.data = static_cast<char*>(malloc(stationName_ms.len));
		memcpy(stationName_ms.data, stationName_b.data(), stationName_ms.len);
		struct miqt_string sigval1 = stationName_ms;
		miqt_exec_callback_QRadioData_StationNameChanged(slot, sigval1);
	});
}

void QRadioData_RadioTextChanged(QRadioData* self, struct miqt_string radioText) {
	QString radioText_QString = QString::fromUtf8(radioText.data, radioText.len);
	self->radioTextChanged(radioText_QString);
}

void QRadioData_connect_RadioTextChanged(QRadioData* self, intptr_t slot) {
	QRadioData::connect(self, static_cast<void (QRadioData::*)(QString)>(&QRadioData::radioTextChanged), self, [=](QString radioText) {
		QString radioText_ret = radioText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray radioText_b = radioText_ret.toUtf8();
		struct miqt_string radioText_ms;
		radioText_ms.len = radioText_b.length();
		radioText_ms.data = static_cast<char*>(malloc(radioText_ms.len));
		memcpy(radioText_ms.data, radioText_b.data(), radioText_ms.len);
		struct miqt_string sigval1 = radioText_ms;
		miqt_exec_callback_QRadioData_RadioTextChanged(slot, sigval1);
	});
}

void QRadioData_AlternativeFrequenciesEnabledChanged(QRadioData* self, bool enabled) {
	self->alternativeFrequenciesEnabledChanged(enabled);
}

void QRadioData_connect_AlternativeFrequenciesEnabledChanged(QRadioData* self, intptr_t slot) {
	QRadioData::connect(self, static_cast<void (QRadioData::*)(bool)>(&QRadioData::alternativeFrequenciesEnabledChanged), self, [=](bool enabled) {
		bool sigval1 = enabled;
		miqt_exec_callback_QRadioData_AlternativeFrequenciesEnabledChanged(slot, sigval1);
	});
}

void QRadioData_ErrorWithError(QRadioData* self, int error) {
	self->error(static_cast<QRadioData::Error>(error));
}

void QRadioData_connect_ErrorWithError(QRadioData* self, intptr_t slot) {
	QRadioData::connect(self, static_cast<void (QRadioData::*)(QRadioData::Error)>(&QRadioData::error), self, [=](QRadioData::Error error) {
		QRadioData::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QRadioData_ErrorWithError(slot, sigval1);
	});
}

struct miqt_string QRadioData_Tr2(const char* s, const char* c) {
	QString _ret = QRadioData::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioData::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_TrUtf82(const char* s, const char* c) {
	QString _ret = QRadioData::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioData_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRadioData::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioData_Delete(QRadioData* self) {
	delete self;
}

