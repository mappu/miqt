#include <QMetaObject>
#include <QObject>
#include <QRadioData>
#include <QRadioTuner>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qradiotuner.h>
#include "gen_qradiotuner.h"
#include "_cgo_export.h"

QRadioTuner* QRadioTuner_new() {
	return new QRadioTuner();
}

QRadioTuner* QRadioTuner_new2(QObject* parent) {
	return new QRadioTuner(parent);
}

QMetaObject* QRadioTuner_MetaObject(const QRadioTuner* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRadioTuner_Metacast(QRadioTuner* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRadioTuner_Tr(const char* s) {
	QString _ret = QRadioTuner::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTuner_TrUtf8(const char* s) {
	QString _ret = QRadioTuner::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRadioTuner_Availability(const QRadioTuner* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

int QRadioTuner_State(const QRadioTuner* self) {
	QRadioTuner::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QRadioTuner_Band(const QRadioTuner* self) {
	QRadioTuner::Band _ret = self->band();
	return static_cast<int>(_ret);
}

bool QRadioTuner_IsBandSupported(const QRadioTuner* self, int b) {
	return self->isBandSupported(static_cast<QRadioTuner::Band>(b));
}

int QRadioTuner_Frequency(const QRadioTuner* self) {
	return self->frequency();
}

int QRadioTuner_FrequencyStep(const QRadioTuner* self, int band) {
	return self->frequencyStep(static_cast<QRadioTuner::Band>(band));
}

struct miqt_map /* tuple of int and int */  QRadioTuner_FrequencyRange(const QRadioTuner* self, int band) {
	QPair<int, int> _ret = self->frequencyRange(static_cast<QRadioTuner::Band>(band));
	// Convert QPair<> from C++ memory to manually-managed C memory
	int* _first_arr = static_cast<int*>(malloc(sizeof(int)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

bool QRadioTuner_IsStereo(const QRadioTuner* self) {
	return self->isStereo();
}

void QRadioTuner_SetStereoMode(QRadioTuner* self, int mode) {
	self->setStereoMode(static_cast<QRadioTuner::StereoMode>(mode));
}

int QRadioTuner_StereoMode(const QRadioTuner* self) {
	QRadioTuner::StereoMode _ret = self->stereoMode();
	return static_cast<int>(_ret);
}

int QRadioTuner_SignalStrength(const QRadioTuner* self) {
	return self->signalStrength();
}

int QRadioTuner_Volume(const QRadioTuner* self) {
	return self->volume();
}

bool QRadioTuner_IsMuted(const QRadioTuner* self) {
	return self->isMuted();
}

bool QRadioTuner_IsSearching(const QRadioTuner* self) {
	return self->isSearching();
}

bool QRadioTuner_IsAntennaConnected(const QRadioTuner* self) {
	return self->isAntennaConnected();
}

int QRadioTuner_Error(const QRadioTuner* self) {
	QRadioTuner::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioTuner_ErrorString(const QRadioTuner* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRadioData* QRadioTuner_RadioData(const QRadioTuner* self) {
	return self->radioData();
}

void QRadioTuner_SearchForward(QRadioTuner* self) {
	self->searchForward();
}

void QRadioTuner_SearchBackward(QRadioTuner* self) {
	self->searchBackward();
}

void QRadioTuner_SearchAllStations(QRadioTuner* self) {
	self->searchAllStations();
}

void QRadioTuner_CancelSearch(QRadioTuner* self) {
	self->cancelSearch();
}

void QRadioTuner_SetBand(QRadioTuner* self, int band) {
	self->setBand(static_cast<QRadioTuner::Band>(band));
}

void QRadioTuner_SetFrequency(QRadioTuner* self, int frequency) {
	self->setFrequency(static_cast<int>(frequency));
}

void QRadioTuner_SetVolume(QRadioTuner* self, int volume) {
	self->setVolume(static_cast<int>(volume));
}

void QRadioTuner_SetMuted(QRadioTuner* self, bool muted) {
	self->setMuted(muted);
}

void QRadioTuner_Start(QRadioTuner* self) {
	self->start();
}

void QRadioTuner_Stop(QRadioTuner* self) {
	self->stop();
}

void QRadioTuner_StateChanged(QRadioTuner* self, int state) {
	self->stateChanged(static_cast<QRadioTuner::State>(state));
}

void QRadioTuner_connect_StateChanged(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(QRadioTuner::State)>(&QRadioTuner::stateChanged), self, [=](QRadioTuner::State state) {
		QRadioTuner::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QRadioTuner_StateChanged(slot, sigval1);
	});
}

void QRadioTuner_BandChanged(QRadioTuner* self, int band) {
	self->bandChanged(static_cast<QRadioTuner::Band>(band));
}

void QRadioTuner_connect_BandChanged(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(QRadioTuner::Band)>(&QRadioTuner::bandChanged), self, [=](QRadioTuner::Band band) {
		QRadioTuner::Band band_ret = band;
		int sigval1 = static_cast<int>(band_ret);
		miqt_exec_callback_QRadioTuner_BandChanged(slot, sigval1);
	});
}

void QRadioTuner_FrequencyChanged(QRadioTuner* self, int frequency) {
	self->frequencyChanged(static_cast<int>(frequency));
}

void QRadioTuner_connect_FrequencyChanged(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(int)>(&QRadioTuner::frequencyChanged), self, [=](int frequency) {
		int sigval1 = frequency;
		miqt_exec_callback_QRadioTuner_FrequencyChanged(slot, sigval1);
	});
}

void QRadioTuner_StereoStatusChanged(QRadioTuner* self, bool stereo) {
	self->stereoStatusChanged(stereo);
}

void QRadioTuner_connect_StereoStatusChanged(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(bool)>(&QRadioTuner::stereoStatusChanged), self, [=](bool stereo) {
		bool sigval1 = stereo;
		miqt_exec_callback_QRadioTuner_StereoStatusChanged(slot, sigval1);
	});
}

void QRadioTuner_SearchingChanged(QRadioTuner* self, bool searching) {
	self->searchingChanged(searching);
}

void QRadioTuner_connect_SearchingChanged(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(bool)>(&QRadioTuner::searchingChanged), self, [=](bool searching) {
		bool sigval1 = searching;
		miqt_exec_callback_QRadioTuner_SearchingChanged(slot, sigval1);
	});
}

void QRadioTuner_SignalStrengthChanged(QRadioTuner* self, int signalStrength) {
	self->signalStrengthChanged(static_cast<int>(signalStrength));
}

void QRadioTuner_connect_SignalStrengthChanged(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(int)>(&QRadioTuner::signalStrengthChanged), self, [=](int signalStrength) {
		int sigval1 = signalStrength;
		miqt_exec_callback_QRadioTuner_SignalStrengthChanged(slot, sigval1);
	});
}

void QRadioTuner_VolumeChanged(QRadioTuner* self, int volume) {
	self->volumeChanged(static_cast<int>(volume));
}

void QRadioTuner_connect_VolumeChanged(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(int)>(&QRadioTuner::volumeChanged), self, [=](int volume) {
		int sigval1 = volume;
		miqt_exec_callback_QRadioTuner_VolumeChanged(slot, sigval1);
	});
}

void QRadioTuner_MutedChanged(QRadioTuner* self, bool muted) {
	self->mutedChanged(muted);
}

void QRadioTuner_connect_MutedChanged(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(bool)>(&QRadioTuner::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QRadioTuner_MutedChanged(slot, sigval1);
	});
}

void QRadioTuner_StationFound(QRadioTuner* self, int frequency, struct miqt_string stationId) {
	QString stationId_QString = QString::fromUtf8(stationId.data, stationId.len);
	self->stationFound(static_cast<int>(frequency), stationId_QString);
}

void QRadioTuner_connect_StationFound(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(int, QString)>(&QRadioTuner::stationFound), self, [=](int frequency, QString stationId) {
		int sigval1 = frequency;
		QString stationId_ret = stationId;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationId_b = stationId_ret.toUtf8();
		struct miqt_string stationId_ms;
		stationId_ms.len = stationId_b.length();
		stationId_ms.data = static_cast<char*>(malloc(stationId_ms.len));
		memcpy(stationId_ms.data, stationId_b.data(), stationId_ms.len);
		struct miqt_string sigval2 = stationId_ms;
		miqt_exec_callback_QRadioTuner_StationFound(slot, sigval1, sigval2);
	});
}

void QRadioTuner_AntennaConnectedChanged(QRadioTuner* self, bool connectionStatus) {
	self->antennaConnectedChanged(connectionStatus);
}

void QRadioTuner_connect_AntennaConnectedChanged(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(bool)>(&QRadioTuner::antennaConnectedChanged), self, [=](bool connectionStatus) {
		bool sigval1 = connectionStatus;
		miqt_exec_callback_QRadioTuner_AntennaConnectedChanged(slot, sigval1);
	});
}

void QRadioTuner_ErrorWithError(QRadioTuner* self, int error) {
	self->error(static_cast<QRadioTuner::Error>(error));
}

void QRadioTuner_connect_ErrorWithError(QRadioTuner* self, intptr_t slot) {
	QRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(QRadioTuner::Error)>(&QRadioTuner::error), self, [=](QRadioTuner::Error error) {
		QRadioTuner::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QRadioTuner_ErrorWithError(slot, sigval1);
	});
}

struct miqt_string QRadioTuner_Tr2(const char* s, const char* c) {
	QString _ret = QRadioTuner::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTuner_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioTuner::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTuner_TrUtf82(const char* s, const char* c) {
	QString _ret = QRadioTuner::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTuner_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRadioTuner::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioTuner_SearchAllStations1(QRadioTuner* self, int searchMode) {
	self->searchAllStations(static_cast<QRadioTuner::SearchMode>(searchMode));
}

void QRadioTuner_Delete(QRadioTuner* self) {
	delete self;
}

