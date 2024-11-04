#include <QMediaCaptureSession>
#include <QMediaFormat>
#include <QMediaMetaData>
#include <QMediaRecorder>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qmediarecorder.h>
#include "gen_qmediarecorder.h"
#include "_cgo_export.h"

QMediaRecorder* QMediaRecorder_new() {
	return new QMediaRecorder();
}

QMediaRecorder* QMediaRecorder_new2(QObject* parent) {
	return new QMediaRecorder(parent);
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

bool QMediaRecorder_IsAvailable(const QMediaRecorder* self) {
	return self->isAvailable();
}

QUrl* QMediaRecorder_OutputLocation(const QMediaRecorder* self) {
	return new QUrl(self->outputLocation());
}

void QMediaRecorder_SetOutputLocation(QMediaRecorder* self, QUrl* location) {
	self->setOutputLocation(*location);
}

QUrl* QMediaRecorder_ActualLocation(const QMediaRecorder* self) {
	return new QUrl(self->actualLocation());
}

int QMediaRecorder_RecorderState(const QMediaRecorder* self) {
	QMediaRecorder::RecorderState _ret = self->recorderState();
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

QMediaFormat* QMediaRecorder_MediaFormat(const QMediaRecorder* self) {
	return new QMediaFormat(self->mediaFormat());
}

void QMediaRecorder_SetMediaFormat(QMediaRecorder* self, QMediaFormat* format) {
	self->setMediaFormat(*format);
}

int QMediaRecorder_EncodingMode(const QMediaRecorder* self) {
	QMediaRecorder::EncodingMode _ret = self->encodingMode();
	return static_cast<int>(_ret);
}

void QMediaRecorder_SetEncodingMode(QMediaRecorder* self, int encodingMode) {
	self->setEncodingMode(static_cast<QMediaRecorder::EncodingMode>(encodingMode));
}

int QMediaRecorder_Quality(const QMediaRecorder* self) {
	QMediaRecorder::Quality _ret = self->quality();
	return static_cast<int>(_ret);
}

void QMediaRecorder_SetQuality(QMediaRecorder* self, int quality) {
	self->setQuality(static_cast<QMediaRecorder::Quality>(quality));
}

QSize* QMediaRecorder_VideoResolution(const QMediaRecorder* self) {
	return new QSize(self->videoResolution());
}

void QMediaRecorder_SetVideoResolution(QMediaRecorder* self, QSize* videoResolution) {
	self->setVideoResolution(*videoResolution);
}

void QMediaRecorder_SetVideoResolution2(QMediaRecorder* self, int width, int height) {
	self->setVideoResolution(static_cast<int>(width), static_cast<int>(height));
}

double QMediaRecorder_VideoFrameRate(const QMediaRecorder* self) {
	qreal _ret = self->videoFrameRate();
	return static_cast<double>(_ret);
}

void QMediaRecorder_SetVideoFrameRate(QMediaRecorder* self, double frameRate) {
	self->setVideoFrameRate(static_cast<qreal>(frameRate));
}

int QMediaRecorder_VideoBitRate(const QMediaRecorder* self) {
	return self->videoBitRate();
}

void QMediaRecorder_SetVideoBitRate(QMediaRecorder* self, int bitRate) {
	self->setVideoBitRate(static_cast<int>(bitRate));
}

int QMediaRecorder_AudioBitRate(const QMediaRecorder* self) {
	return self->audioBitRate();
}

void QMediaRecorder_SetAudioBitRate(QMediaRecorder* self, int bitRate) {
	self->setAudioBitRate(static_cast<int>(bitRate));
}

int QMediaRecorder_AudioChannelCount(const QMediaRecorder* self) {
	return self->audioChannelCount();
}

void QMediaRecorder_SetAudioChannelCount(QMediaRecorder* self, int channels) {
	self->setAudioChannelCount(static_cast<int>(channels));
}

int QMediaRecorder_AudioSampleRate(const QMediaRecorder* self) {
	return self->audioSampleRate();
}

void QMediaRecorder_SetAudioSampleRate(QMediaRecorder* self, int sampleRate) {
	self->setAudioSampleRate(static_cast<int>(sampleRate));
}

QMediaMetaData* QMediaRecorder_MetaData(const QMediaRecorder* self) {
	return new QMediaMetaData(self->metaData());
}

void QMediaRecorder_SetMetaData(QMediaRecorder* self, QMediaMetaData* metaData) {
	self->setMetaData(*metaData);
}

void QMediaRecorder_AddMetaData(QMediaRecorder* self, QMediaMetaData* metaData) {
	self->addMetaData(*metaData);
}

QMediaCaptureSession* QMediaRecorder_CaptureSession(const QMediaRecorder* self) {
	return self->captureSession();
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

void QMediaRecorder_RecorderStateChanged(QMediaRecorder* self, int state) {
	self->recorderStateChanged(static_cast<QMediaRecorder::RecorderState>(state));
}

void QMediaRecorder_connect_RecorderStateChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(QMediaRecorder::RecorderState)>(&QMediaRecorder::recorderStateChanged), self, [=](QMediaRecorder::RecorderState state) {
		QMediaRecorder::RecorderState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QMediaRecorder_RecorderStateChanged(slot, sigval1);
	});
}

void QMediaRecorder_DurationChanged(QMediaRecorder* self, long long duration) {
	self->durationChanged(static_cast<qint64>(duration));
}

void QMediaRecorder_connect_DurationChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(qint64)>(&QMediaRecorder::durationChanged), self, [=](qint64 duration) {
		qint64 duration_ret = duration;
		long long sigval1 = static_cast<long long>(duration_ret);
		miqt_exec_callback_QMediaRecorder_DurationChanged(slot, sigval1);
	});
}

void QMediaRecorder_ActualLocationChanged(QMediaRecorder* self, QUrl* location) {
	self->actualLocationChanged(*location);
}

void QMediaRecorder_connect_ActualLocationChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(const QUrl&)>(&QMediaRecorder::actualLocationChanged), self, [=](const QUrl& location) {
		const QUrl& location_ret = location;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&location_ret);
		miqt_exec_callback_QMediaRecorder_ActualLocationChanged(slot, sigval1);
	});
}

void QMediaRecorder_EncoderSettingsChanged(QMediaRecorder* self) {
	self->encoderSettingsChanged();
}

void QMediaRecorder_connect_EncoderSettingsChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::encoderSettingsChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_EncoderSettingsChanged(slot);
	});
}

void QMediaRecorder_ErrorOccurred(QMediaRecorder* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<QMediaRecorder::Error>(error), errorString_QString);
}

void QMediaRecorder_connect_ErrorOccurred(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)(QMediaRecorder::Error, const QString&)>(&QMediaRecorder::errorOccurred), self, [=](QMediaRecorder::Error error, const QString& errorString) {
		QMediaRecorder::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval2 = errorString_ms;
		miqt_exec_callback_QMediaRecorder_ErrorOccurred(slot, sigval1, sigval2);
	});
}

void QMediaRecorder_ErrorChanged(QMediaRecorder* self) {
	self->errorChanged();
}

void QMediaRecorder_connect_ErrorChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::errorChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_ErrorChanged(slot);
	});
}

void QMediaRecorder_MetaDataChanged(QMediaRecorder* self) {
	self->metaDataChanged();
}

void QMediaRecorder_connect_MetaDataChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::metaDataChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_MetaDataChanged(slot);
	});
}

void QMediaRecorder_MediaFormatChanged(QMediaRecorder* self) {
	self->mediaFormatChanged();
}

void QMediaRecorder_connect_MediaFormatChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::mediaFormatChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_MediaFormatChanged(slot);
	});
}

void QMediaRecorder_EncodingModeChanged(QMediaRecorder* self) {
	self->encodingModeChanged();
}

void QMediaRecorder_connect_EncodingModeChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::encodingModeChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_EncodingModeChanged(slot);
	});
}

void QMediaRecorder_QualityChanged(QMediaRecorder* self) {
	self->qualityChanged();
}

void QMediaRecorder_connect_QualityChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::qualityChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_QualityChanged(slot);
	});
}

void QMediaRecorder_VideoResolutionChanged(QMediaRecorder* self) {
	self->videoResolutionChanged();
}

void QMediaRecorder_connect_VideoResolutionChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoResolutionChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_VideoResolutionChanged(slot);
	});
}

void QMediaRecorder_VideoFrameRateChanged(QMediaRecorder* self) {
	self->videoFrameRateChanged();
}

void QMediaRecorder_connect_VideoFrameRateChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoFrameRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_VideoFrameRateChanged(slot);
	});
}

void QMediaRecorder_VideoBitRateChanged(QMediaRecorder* self) {
	self->videoBitRateChanged();
}

void QMediaRecorder_connect_VideoBitRateChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoBitRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_VideoBitRateChanged(slot);
	});
}

void QMediaRecorder_AudioBitRateChanged(QMediaRecorder* self) {
	self->audioBitRateChanged();
}

void QMediaRecorder_connect_AudioBitRateChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioBitRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_AudioBitRateChanged(slot);
	});
}

void QMediaRecorder_AudioChannelCountChanged(QMediaRecorder* self) {
	self->audioChannelCountChanged();
}

void QMediaRecorder_connect_AudioChannelCountChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioChannelCountChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_AudioChannelCountChanged(slot);
	});
}

void QMediaRecorder_AudioSampleRateChanged(QMediaRecorder* self) {
	self->audioSampleRateChanged();
}

void QMediaRecorder_connect_AudioSampleRateChanged(QMediaRecorder* self, intptr_t slot) {
	QMediaRecorder::connect(self, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioSampleRateChanged), self, [=]() {
		miqt_exec_callback_QMediaRecorder_AudioSampleRateChanged(slot);
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

void QMediaRecorder_Delete(QMediaRecorder* self) {
	delete self;
}

