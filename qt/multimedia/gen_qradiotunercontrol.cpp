#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QRadioTunerControl>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qradiotunercontrol.h>
#include "gen_qradiotunercontrol.h"
#include "_cgo_export.h"

QMetaObject* QRadioTunerControl_MetaObject(const QRadioTunerControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRadioTunerControl_Metacast(QRadioTunerControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRadioTunerControl_Tr(const char* s) {
	QString _ret = QRadioTunerControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTunerControl_TrUtf8(const char* s) {
	QString _ret = QRadioTunerControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRadioTunerControl_State(const QRadioTunerControl* self) {
	QRadioTuner::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QRadioTunerControl_Band(const QRadioTunerControl* self) {
	QRadioTuner::Band _ret = self->band();
	return static_cast<int>(_ret);
}

void QRadioTunerControl_SetBand(QRadioTunerControl* self, int b) {
	self->setBand(static_cast<QRadioTuner::Band>(b));
}

bool QRadioTunerControl_IsBandSupported(const QRadioTunerControl* self, int b) {
	return self->isBandSupported(static_cast<QRadioTuner::Band>(b));
}

int QRadioTunerControl_Frequency(const QRadioTunerControl* self) {
	return self->frequency();
}

int QRadioTunerControl_FrequencyStep(const QRadioTunerControl* self, int b) {
	return self->frequencyStep(static_cast<QRadioTuner::Band>(b));
}

struct miqt_map /* tuple of int and int */  QRadioTunerControl_FrequencyRange(const QRadioTunerControl* self, int b) {
	QPair<int, int> _ret = self->frequencyRange(static_cast<QRadioTuner::Band>(b));
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

void QRadioTunerControl_SetFrequency(QRadioTunerControl* self, int frequency) {
	self->setFrequency(static_cast<int>(frequency));
}

bool QRadioTunerControl_IsStereo(const QRadioTunerControl* self) {
	return self->isStereo();
}

int QRadioTunerControl_StereoMode(const QRadioTunerControl* self) {
	QRadioTuner::StereoMode _ret = self->stereoMode();
	return static_cast<int>(_ret);
}

void QRadioTunerControl_SetStereoMode(QRadioTunerControl* self, int mode) {
	self->setStereoMode(static_cast<QRadioTuner::StereoMode>(mode));
}

int QRadioTunerControl_SignalStrength(const QRadioTunerControl* self) {
	return self->signalStrength();
}

int QRadioTunerControl_Volume(const QRadioTunerControl* self) {
	return self->volume();
}

void QRadioTunerControl_SetVolume(QRadioTunerControl* self, int volume) {
	self->setVolume(static_cast<int>(volume));
}

bool QRadioTunerControl_IsMuted(const QRadioTunerControl* self) {
	return self->isMuted();
}

void QRadioTunerControl_SetMuted(QRadioTunerControl* self, bool muted) {
	self->setMuted(muted);
}

bool QRadioTunerControl_IsSearching(const QRadioTunerControl* self) {
	return self->isSearching();
}

bool QRadioTunerControl_IsAntennaConnected(const QRadioTunerControl* self) {
	return self->isAntennaConnected();
}

void QRadioTunerControl_SearchForward(QRadioTunerControl* self) {
	self->searchForward();
}

void QRadioTunerControl_SearchBackward(QRadioTunerControl* self) {
	self->searchBackward();
}

void QRadioTunerControl_SearchAllStations(QRadioTunerControl* self, int searchMode) {
	self->searchAllStations(static_cast<QRadioTuner::SearchMode>(searchMode));
}

void QRadioTunerControl_CancelSearch(QRadioTunerControl* self) {
	self->cancelSearch();
}

void QRadioTunerControl_Start(QRadioTunerControl* self) {
	self->start();
}

void QRadioTunerControl_Stop(QRadioTunerControl* self) {
	self->stop();
}

int QRadioTunerControl_Error(const QRadioTunerControl* self) {
	QRadioTuner::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioTunerControl_ErrorString(const QRadioTunerControl* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioTunerControl_StateChanged(QRadioTunerControl* self, int state) {
	self->stateChanged(static_cast<QRadioTuner::State>(state));
}

void QRadioTunerControl_connect_StateChanged(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(QRadioTuner::State)>(&QRadioTunerControl::stateChanged), self, [=](QRadioTuner::State state) {
		QRadioTuner::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QRadioTunerControl_StateChanged(slot, sigval1);
	});
}

void QRadioTunerControl_BandChanged(QRadioTunerControl* self, int band) {
	self->bandChanged(static_cast<QRadioTuner::Band>(band));
}

void QRadioTunerControl_connect_BandChanged(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(QRadioTuner::Band)>(&QRadioTunerControl::bandChanged), self, [=](QRadioTuner::Band band) {
		QRadioTuner::Band band_ret = band;
		int sigval1 = static_cast<int>(band_ret);
		miqt_exec_callback_QRadioTunerControl_BandChanged(slot, sigval1);
	});
}

void QRadioTunerControl_FrequencyChanged(QRadioTunerControl* self, int frequency) {
	self->frequencyChanged(static_cast<int>(frequency));
}

void QRadioTunerControl_connect_FrequencyChanged(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(int)>(&QRadioTunerControl::frequencyChanged), self, [=](int frequency) {
		int sigval1 = frequency;
		miqt_exec_callback_QRadioTunerControl_FrequencyChanged(slot, sigval1);
	});
}

void QRadioTunerControl_StereoStatusChanged(QRadioTunerControl* self, bool stereo) {
	self->stereoStatusChanged(stereo);
}

void QRadioTunerControl_connect_StereoStatusChanged(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(bool)>(&QRadioTunerControl::stereoStatusChanged), self, [=](bool stereo) {
		bool sigval1 = stereo;
		miqt_exec_callback_QRadioTunerControl_StereoStatusChanged(slot, sigval1);
	});
}

void QRadioTunerControl_SearchingChanged(QRadioTunerControl* self, bool searching) {
	self->searchingChanged(searching);
}

void QRadioTunerControl_connect_SearchingChanged(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(bool)>(&QRadioTunerControl::searchingChanged), self, [=](bool searching) {
		bool sigval1 = searching;
		miqt_exec_callback_QRadioTunerControl_SearchingChanged(slot, sigval1);
	});
}

void QRadioTunerControl_SignalStrengthChanged(QRadioTunerControl* self, int signalStrength) {
	self->signalStrengthChanged(static_cast<int>(signalStrength));
}

void QRadioTunerControl_connect_SignalStrengthChanged(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(int)>(&QRadioTunerControl::signalStrengthChanged), self, [=](int signalStrength) {
		int sigval1 = signalStrength;
		miqt_exec_callback_QRadioTunerControl_SignalStrengthChanged(slot, sigval1);
	});
}

void QRadioTunerControl_VolumeChanged(QRadioTunerControl* self, int volume) {
	self->volumeChanged(static_cast<int>(volume));
}

void QRadioTunerControl_connect_VolumeChanged(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(int)>(&QRadioTunerControl::volumeChanged), self, [=](int volume) {
		int sigval1 = volume;
		miqt_exec_callback_QRadioTunerControl_VolumeChanged(slot, sigval1);
	});
}

void QRadioTunerControl_MutedChanged(QRadioTunerControl* self, bool muted) {
	self->mutedChanged(muted);
}

void QRadioTunerControl_connect_MutedChanged(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(bool)>(&QRadioTunerControl::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QRadioTunerControl_MutedChanged(slot, sigval1);
	});
}

void QRadioTunerControl_ErrorWithErr(QRadioTunerControl* self, int err) {
	self->error(static_cast<QRadioTuner::Error>(err));
}

void QRadioTunerControl_connect_ErrorWithErr(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(QRadioTuner::Error)>(&QRadioTunerControl::error), self, [=](QRadioTuner::Error err) {
		QRadioTuner::Error err_ret = err;
		int sigval1 = static_cast<int>(err_ret);
		miqt_exec_callback_QRadioTunerControl_ErrorWithErr(slot, sigval1);
	});
}

void QRadioTunerControl_StationFound(QRadioTunerControl* self, int frequency, struct miqt_string stationId) {
	QString stationId_QString = QString::fromUtf8(stationId.data, stationId.len);
	self->stationFound(static_cast<int>(frequency), stationId_QString);
}

void QRadioTunerControl_connect_StationFound(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(int, QString)>(&QRadioTunerControl::stationFound), self, [=](int frequency, QString stationId) {
		int sigval1 = frequency;
		QString stationId_ret = stationId;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationId_b = stationId_ret.toUtf8();
		struct miqt_string stationId_ms;
		stationId_ms.len = stationId_b.length();
		stationId_ms.data = static_cast<char*>(malloc(stationId_ms.len));
		memcpy(stationId_ms.data, stationId_b.data(), stationId_ms.len);
		struct miqt_string sigval2 = stationId_ms;
		miqt_exec_callback_QRadioTunerControl_StationFound(slot, sigval1, sigval2);
	});
}

void QRadioTunerControl_AntennaConnectedChanged(QRadioTunerControl* self, bool connectionStatus) {
	self->antennaConnectedChanged(connectionStatus);
}

void QRadioTunerControl_connect_AntennaConnectedChanged(QRadioTunerControl* self, intptr_t slot) {
	QRadioTunerControl::connect(self, static_cast<void (QRadioTunerControl::*)(bool)>(&QRadioTunerControl::antennaConnectedChanged), self, [=](bool connectionStatus) {
		bool sigval1 = connectionStatus;
		miqt_exec_callback_QRadioTunerControl_AntennaConnectedChanged(slot, sigval1);
	});
}

struct miqt_string QRadioTunerControl_Tr2(const char* s, const char* c) {
	QString _ret = QRadioTunerControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTunerControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioTunerControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTunerControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QRadioTunerControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTunerControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRadioTunerControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioTunerControl_Delete(QRadioTunerControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QRadioTunerControl*>( self );
	} else {
		delete self;
	}
}

