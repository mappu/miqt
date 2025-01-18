#include <QAudioEncoderSettings>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMediaBindableInterface>
#include <QMediaObject>
#include <QMediaRecorder>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QVideoEncoderSettings>
#include <qmediarecorder.h>
#include "gen_qmediarecorder.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaRecorder_StateChanged(intptr_t, int);
void miqt_exec_callback_QMediaRecorder_StatusChanged(intptr_t, int);
void miqt_exec_callback_QMediaRecorder_DurationChanged(intptr_t, long long);
void miqt_exec_callback_QMediaRecorder_MutedChanged(intptr_t, bool);
void miqt_exec_callback_QMediaRecorder_VolumeChanged(intptr_t, double);
void miqt_exec_callback_QMediaRecorder_ActualLocationChanged(intptr_t, QUrl*);
void miqt_exec_callback_QMediaRecorder_ErrorWithError(intptr_t, int);
void miqt_exec_callback_QMediaRecorder_MetaDataAvailableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaRecorder_MetaDataWritableChanged(intptr_t, bool);
void miqt_exec_callback_QMediaRecorder_MetaDataChanged(intptr_t);
void miqt_exec_callback_QMediaRecorder_MetaDataChanged2(intptr_t, struct miqt_string, QVariant*);
void miqt_exec_callback_QMediaRecorder_AvailabilityChanged(intptr_t, bool);
void miqt_exec_callback_QMediaRecorder_AvailabilityChangedWithAvailability(intptr_t, int);
QMediaObject* miqt_exec_callback_QMediaRecorder_MediaObject(void*, intptr_t);
bool miqt_exec_callback_QMediaRecorder_SetMediaObject(void*, intptr_t, QMediaObject*);
bool miqt_exec_callback_QMediaRecorder_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QMediaRecorder_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMediaRecorder_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMediaRecorder_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMediaRecorder_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QMediaRecorder_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMediaRecorder_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMediaRecorder final : public QMediaRecorder {
public:

	MiqtVirtualQMediaRecorder(QMediaObject* mediaObject): QMediaRecorder(mediaObject) {};
	MiqtVirtualQMediaRecorder(QMediaObject* mediaObject, QObject* parent): QMediaRecorder(mediaObject, parent) {};

	virtual ~MiqtVirtualQMediaRecorder() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (handle__MediaObject == 0) {
			return QMediaRecorder::mediaObject();
		}
		

		QMediaObject* callback_return_value = miqt_exec_callback_QMediaRecorder_MediaObject(const_cast<MiqtVirtualQMediaRecorder*>(this), handle__MediaObject);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaObject* virtualbase_MediaObject() const {

		return QMediaRecorder::mediaObject();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMediaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (handle__SetMediaObject == 0) {
			return QMediaRecorder::setMediaObject(object);
		}
		
		QMediaObject* sigval1 = object;

		bool callback_return_value = miqt_exec_callback_QMediaRecorder_SetMediaObject(this, handle__SetMediaObject, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_SetMediaObject(QMediaObject* object) {

		return QMediaRecorder::setMediaObject(object);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QMediaRecorder::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QMediaRecorder_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QMediaRecorder::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QMediaRecorder::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QMediaRecorder_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QMediaRecorder::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QMediaRecorder::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QMediaRecorder_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QMediaRecorder::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QMediaRecorder::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QMediaRecorder_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QMediaRecorder::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QMediaRecorder::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QMediaRecorder_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QMediaRecorder::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QMediaRecorder::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaRecorder_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QMediaRecorder::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QMediaRecorder::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QMediaRecorder_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QMediaRecorder::disconnectNotify(*signal);

	}

};

QMediaRecorder* QMediaRecorder_new(QMediaObject* mediaObject) {
	return new MiqtVirtualQMediaRecorder(mediaObject);
}

QMediaRecorder* QMediaRecorder_new2(QMediaObject* mediaObject, QObject* parent) {
	return new MiqtVirtualQMediaRecorder(mediaObject, parent);
}

void QMediaRecorder_virtbase(QMediaRecorder* src, QObject** outptr_QObject, QMediaBindableInterface** outptr_QMediaBindableInterface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QMediaBindableInterface = static_cast<QMediaBindableInterface*>(src);
}

QMetaObject* QMediaRecorder_MetaObject(const QMediaRecorder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaRecorder_Metacast(QMediaRecorder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaRecorder_Tr(const char* s) {
	QString _ret = QMediaRecorder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaRecorder_TrUtf8(const char* s) {
	QString _ret = QMediaRecorder::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QMediaRecorder_MediaObject(const QMediaRecorder* self) {
	return self->mediaObject();
}

bool QMediaRecorder_IsAvailable(const QMediaRecorder* self) {
	return self->isAvailable();
}

int QMediaRecorder_Availability(const QMediaRecorder* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

QUrl* QMediaRecorder_OutputLocation(const QMediaRecorder* self) {
	return new QUrl(self->outputLocation());
}

bool QMediaRecorder_SetOutputLocation(QMediaRecorder* self, QUrl* location) {
	return self->setOutputLocation(*location);
}

QUrl* QMediaRecorder_ActualLocation(const QMediaRecorder* self) {
	return new QUrl(self->actualLocation());
}

int QMediaRecorder_State(const QMediaRecorder* self) {
	QMediaRecorder::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QMediaRecorder_Status(const QMediaRecorder* self) {
	QMediaRecorder::Status _ret = self->status();
	return static_cast<int>(_ret);
}

int QMediaRecorder_Error(const QMediaRecorder* self) {
	QMediaRecorder::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QMediaRecorder_ErrorString(const QMediaRecorder* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QMediaRecorder_Duration(const QMediaRecorder* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

bool QMediaRecorder_IsMuted(const QMediaRecorder* self) {
	return self->isMuted();
}

double QMediaRecorder_Volume(const QMediaRecorder* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

struct miqt_array /* of struct miqt_string */  QMediaRecorder_SupportedContainers(const QMediaRecorder* self) {
	QStringList _ret = self->supportedContainers();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QMediaRecorder_ContainerDescription(const QMediaRecorder* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->containerDescription(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QMediaRecorder_SupportedAudioCodecs(const QMediaRecorder* self) {
	QStringList _ret = self->supportedAudioCodecs();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QMediaRecorder_AudioCodecDescription(const QMediaRecorder* self, struct miqt_string codecName) {
	QString codecName_QString = QString::fromUtf8(codecName.data, codecName.len);
	QString _ret = self->audioCodecDescription(codecName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of int */  QMediaRecorder_SupportedAudioSampleRates(const QMediaRecorder* self) {
	QList<int> _ret = self->supportedAudioSampleRates();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QMediaRecorder_SupportedVideoCodecs(const QMediaRecorder* self) {
	QStringList _ret = self->supportedVideoCodecs();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QMediaRecorder_VideoCodecDescription(const QMediaRecorder* self, struct miqt_string codecName) {
	QString codecName_QString = QString::fromUtf8(codecName.data, codecName.len);
	QString _ret = self->videoCodecDescription(codecName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QSize* */  QMediaRecorder_SupportedResolutions(const QMediaRecorder* self) {
	QList<QSize> _ret = self->supportedResolutions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of double */  QMediaRecorder_SupportedFrameRates(const QMediaRecorder* self) {
	QList<qreal> _ret = self->supportedFrameRates();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAudioEncoderSettings* QMediaRecorder_AudioSettings(const QMediaRecorder* self) {
	return new QAudioEncoderSettings(self->audioSettings());
}

QVideoEncoderSettings* QMediaRecorder_VideoSettings(const QMediaRecorder* self) {
	return new QVideoEncoderSettings(self->videoSettings());
}

struct miqt_string QMediaRecorder_ContainerFormat(const QMediaRecorder* self) {
	QString _ret = self->containerFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaRecorder_SetAudioSettings(QMediaRecorder* self, QAudioEncoderSettings* audioSettings) {
	self->setAudioSettings(*audioSettings);
}

void QMediaRecorder_SetVideoSettings(QMediaRecorder* self, QVideoEncoderSettings* videoSettings) {
	self->setVideoSettings(*videoSettings);
}

void QMediaRecorder_SetContainerFormat(QMediaRecorder* self, struct miqt_string container) {
	QString container_QString = QString::fromUtf8(container.data, container.len);
	self->setContainerFormat(container_QString);
}

void QMediaRecorder_SetEncodingSettings(QMediaRecorder* self, QAudioEncoderSettings* audioSettings) {
	self->setEncodingSettings(*audioSettings);
}

bool QMediaRecorder_IsMetaDataAvailable(const QMediaRecorder* self) {
	return self->isMetaDataAvailable();
}

bool QMediaRecorder_IsMetaDataWritable(const QMediaRecorder* self) {
	return self->isMetaDataWritable();
}

QVariant* QMediaRecorder_MetaData(const QMediaRecorder* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QVariant(self->metaData(key_QString));
}

void QMediaRecorder_SetMetaData(QMediaRecorder* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setMetaData(key_QString, *value);
}

struct miqt_array /* of struct miqt_string */  QMediaRecorder_AvailableMetaData(const QMediaRecorder* self) {
	QStringList _ret = self->availableMetaData();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QMediaRecorder_Record(QMediaRecorder* self) {
	self->record();
}

void QMediaRecorder_Pause(QMediaRecorder* self) {
	self->pause();
}

void QMediaRecorder_Stop(QMediaRecorder* self) {
	self->stop();
}

void QMediaRecorder_SetMuted(QMediaRecorder* self, bool muted) {
	self->setMuted(muted);
}

void QMediaRecorder_SetVolume(QMediaRecorder* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

void QMediaRecorder_StateChanged(QMediaRecorder* self, int state) {
	self->stateChanged(static_cast<QMediaRecorder::State>(state));
}

void QMediaRecorder_connect_StateChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(QMediaRecorder::State)>(&QMediaRecorder::stateChanged), self, [=](QMediaRecorder::State state) {
		QMediaRecorder::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QMediaRecorder_StateChanged(slot, sigval1);
	});
}

void QMediaRecorder_StatusChanged(QMediaRecorder* self, int status) {
	self->statusChanged(static_cast<QMediaRecorder::Status>(status));
}

void QMediaRecorder_connect_StatusChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(QMediaRecorder::Status)>(&QMediaRecorder::statusChanged), self, [=](QMediaRecorder::Status status) {
		QMediaRecorder::Status status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		miqt_exec_callback_QMediaRecorder_StatusChanged(slot, sigval1);
	});
}

void QMediaRecorder_DurationChanged(QMediaRecorder* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QMediaRecorder_connect_DurationChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(qint64)>(&QMediaRecorder::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QMediaRecorder_DurationChanged(slot, sigval1);
	});
}

void QMediaRecorder_MutedChanged(QMediaRecorder* self, bool muted) {
	self->mutedChanged(muted);
}

void QMediaRecorder_connect_MutedChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(bool)>(&QMediaRecorder::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QMediaRecorder_MutedChanged(slot, sigval1);
	});
}

void QMediaRecorder_VolumeChanged(QMediaRecorder* self, double volume) {
	self->volumeChanged(static_cast<qreal>(volume));
}

void QMediaRecorder_connect_VolumeChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(qreal)>(&QMediaRecorder::volumeChanged), self, [=](qreal volume) {
		qreal volume_ret = volume;
		double sigval1 = static_cast<double>(volume_ret);
		miqt_exec_callback_QMediaRecorder_VolumeChanged(slot, sigval1);
	});
}

void QMediaRecorder_ActualLocationChanged(QMediaRecorder* self, QUrl* location) {
	self->actualLocationChanged(*location);
}

void QMediaRecorder_connect_ActualLocationChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(const QUrl&)>(&QMediaRecorder::actualLocationChanged), self, [=](const QUrl& location) {
		const QUrl& location_ret = location;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&location_ret);
		miqt_exec_callback_QMediaRecorder_ActualLocationChanged(slot, sigval1);
	});
}

void QMediaRecorder_ErrorWithError(QMediaRecorder* self, int error) {
	self->error(static_cast<QMediaRecorder::Error>(error));
}

void QMediaRecorder_connect_ErrorWithError(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(QMediaRecorder::Error)>(&QMediaRecorder::error), self, [=](QMediaRecorder::Error error) {
		QMediaRecorder::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QMediaRecorder_ErrorWithError(slot, sigval1);
	});
}

void QMediaRecorder_MetaDataAvailableChanged(QMediaRecorder* self, bool available) {
	self->metaDataAvailableChanged(available);
}

void QMediaRecorder_connect_MetaDataAvailableChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(bool)>(&QMediaRecorder::metaDataAvailableChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMediaRecorder_MetaDataAvailableChanged(slot, sigval1);
	});
}

void QMediaRecorder_MetaDataWritableChanged(QMediaRecorder* self, bool writable) {
	self->metaDataWritableChanged(writable);
}

void QMediaRecorder_connect_MetaDataWritableChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(bool)>(&QMediaRecorder::metaDataWritableChanged), self, [=](bool writable) {
		bool sigval1 = writable;
		miqt_exec_callback_QMediaRecorder_MetaDataWritableChanged(slot, sigval1);
	});
}

void QMediaRecorder_MetaDataChanged(QMediaRecorder* self) {
	self->metaDataChanged();
}

void QMediaRecorder_connect_MetaDataChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::metaDataChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_MetaDataChanged(slot);
	});
}

void QMediaRecorder_MetaDataChanged2(QMediaRecorder* self, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->metaDataChanged(key_QString, *value);
}

void QMediaRecorder_connect_MetaDataChanged2(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(const QString&, const QVariant&)>(&QMediaRecorder::metaDataChanged), self, [=](const QString& key, const QVariant& value) {
		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QMediaRecorder_MetaDataChanged2(slot, sigval1, sigval2);
	});
}

void QMediaRecorder_AvailabilityChanged(QMediaRecorder* self, bool available) {
	self->availabilityChanged(available);
}

void QMediaRecorder_connect_AvailabilityChanged(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(bool)>(&QMediaRecorder::availabilityChanged), self, [=](bool available) {
		bool sigval1 = available;
		miqt_exec_callback_QMediaRecorder_AvailabilityChanged(slot, sigval1);
	});
}

void QMediaRecorder_AvailabilityChangedWithAvailability(QMediaRecorder* self, int availability) {
	self->availabilityChanged(static_cast<QMultimedia::AvailabilityStatus>(availability));
}

void QMediaRecorder_connect_AvailabilityChangedWithAvailability(QMediaRecorder* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(QMultimedia::AvailabilityStatus)>(&QMediaRecorder::availabilityChanged), self, [=](QMultimedia::AvailabilityStatus availability) {
		QMultimedia::AvailabilityStatus availability_ret = availability;
		int sigval1 = static_cast<int>(availability_ret);
		miqt_exec_callback_QMediaRecorder_AvailabilityChangedWithAvailability(slot, sigval1);
	});
}

struct miqt_string QMediaRecorder_Tr2(const char* s, const char* c) {
	QString _ret = QMediaRecorder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaRecorder_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaRecorder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaRecorder_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaRecorder::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaRecorder_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaRecorder::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of int */  QMediaRecorder_SupportedAudioSampleRates1(const QMediaRecorder* self, QAudioEncoderSettings* settings) {
	QList<int> _ret = self->supportedAudioSampleRates(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QMediaRecorder_SupportedAudioSampleRates2(const QMediaRecorder* self, QAudioEncoderSettings* settings, bool* continuous) {
	QList<int> _ret = self->supportedAudioSampleRates(*settings, continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QSize* */  QMediaRecorder_SupportedResolutions1(const QMediaRecorder* self, QVideoEncoderSettings* settings) {
	QList<QSize> _ret = self->supportedResolutions(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QSize* */  QMediaRecorder_SupportedResolutions2(const QMediaRecorder* self, QVideoEncoderSettings* settings, bool* continuous) {
	QList<QSize> _ret = self->supportedResolutions(*settings, continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of double */  QMediaRecorder_SupportedFrameRates1(const QMediaRecorder* self, QVideoEncoderSettings* settings) {
	QList<qreal> _ret = self->supportedFrameRates(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of double */  QMediaRecorder_SupportedFrameRates2(const QMediaRecorder* self, QVideoEncoderSettings* settings, bool* continuous) {
	QList<qreal> _ret = self->supportedFrameRates(*settings, continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QMediaRecorder_SetEncodingSettings2(QMediaRecorder* self, QAudioEncoderSettings* audioSettings, QVideoEncoderSettings* videoSettings) {
	self->setEncodingSettings(*audioSettings, *videoSettings);
}

void QMediaRecorder_SetEncodingSettings3(QMediaRecorder* self, QAudioEncoderSettings* audioSettings, QVideoEncoderSettings* videoSettings, struct miqt_string containerMimeType) {
	QString containerMimeType_QString = QString::fromUtf8(containerMimeType.data, containerMimeType.len);
	self->setEncodingSettings(*audioSettings, *videoSettings, containerMimeType_QString);
}

bool QMediaRecorder_override_virtual_MediaObject(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MediaObject = slot;
	return true;
}

QMediaObject* QMediaRecorder_virtualbase_MediaObject(const void* self) {
	return ( (const MiqtVirtualQMediaRecorder*)(self) )->virtualbase_MediaObject();
}

bool QMediaRecorder_override_virtual_SetMediaObject(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMediaObject = slot;
	return true;
}

bool QMediaRecorder_virtualbase_SetMediaObject(void* self, QMediaObject* object) {
	return ( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_SetMediaObject(object);
}

bool QMediaRecorder_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QMediaRecorder_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_Event(event);
}

bool QMediaRecorder_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QMediaRecorder_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QMediaRecorder_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QMediaRecorder_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_TimerEvent(event);
}

bool QMediaRecorder_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QMediaRecorder_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_ChildEvent(event);
}

bool QMediaRecorder_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QMediaRecorder_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_CustomEvent(event);
}

bool QMediaRecorder_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QMediaRecorder_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QMediaRecorder_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQMediaRecorder* self_cast = dynamic_cast<MiqtVirtualQMediaRecorder*>( (QMediaRecorder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QMediaRecorder_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQMediaRecorder*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QMediaRecorder_Delete(QMediaRecorder* self) {
	delete self;
}

