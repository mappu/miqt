#include <QMediaControl>
#include <QMediaRecorderControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qmediarecordercontrol.h>
#include "gen_qmediarecordercontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaRecorderControl_stateChanged(intptr_t, int);
void miqt_exec_callback_QMediaRecorderControl_statusChanged(intptr_t, int);
void miqt_exec_callback_QMediaRecorderControl_durationChanged(intptr_t, long long);
void miqt_exec_callback_QMediaRecorderControl_mutedChanged(intptr_t, bool);
void miqt_exec_callback_QMediaRecorderControl_volumeChanged(intptr_t, double);
void miqt_exec_callback_QMediaRecorderControl_actualLocationChanged(intptr_t, QUrl*);
void miqt_exec_callback_QMediaRecorderControl_error(intptr_t, int, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

void QMediaRecorderControl_virtbase(QMediaRecorderControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMediaRecorderControl_metaObject(const QMediaRecorderControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaRecorderControl_metacast(QMediaRecorderControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaRecorderControl_tr(const char* s) {
	QString _ret = QMediaRecorderControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaRecorderControl_trUtf8(const char* s) {
	QString _ret = QMediaRecorderControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QMediaRecorderControl_outputLocation(const QMediaRecorderControl* self) {
	return new QUrl(self->outputLocation());
}

bool QMediaRecorderControl_setOutputLocation(QMediaRecorderControl* self, QUrl* location) {
	return self->setOutputLocation(*location);
}

int QMediaRecorderControl_state(const QMediaRecorderControl* self) {
	QMediaRecorder::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QMediaRecorderControl_status(const QMediaRecorderControl* self) {
	QMediaRecorder::Status _ret = self->status();
	return static_cast<int>(_ret);
}

long long QMediaRecorderControl_duration(const QMediaRecorderControl* self) {
	qint64 _ret = self->duration();
	return static_cast<long long>(_ret);
}

bool QMediaRecorderControl_isMuted(const QMediaRecorderControl* self) {
	return self->isMuted();
}

double QMediaRecorderControl_volume(const QMediaRecorderControl* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

void QMediaRecorderControl_applySettings(QMediaRecorderControl* self) {
	self->applySettings();
}

void QMediaRecorderControl_stateChanged(QMediaRecorderControl* self, int state) {
	self->stateChanged(static_cast<QMediaRecorder::State>(state));
}

void QMediaRecorderControl_connect_stateChanged(QMediaRecorderControl* self, intptr_t slot) {
	QMediaRecorderControl::connect(self, static_cast<void (QMediaRecorderControl::*)(QMediaRecorder::State)>(&QMediaRecorderControl::stateChanged), self, [=](QMediaRecorder::State state) {
		QMediaRecorder::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QMediaRecorderControl_stateChanged(slot, sigval1);
	});
}

void QMediaRecorderControl_statusChanged(QMediaRecorderControl* self, int status) {
	self->statusChanged(static_cast<QMediaRecorder::Status>(status));
}

void QMediaRecorderControl_connect_statusChanged(QMediaRecorderControl* self, intptr_t slot) {
	QMediaRecorderControl::connect(self, static_cast<void (QMediaRecorderControl::*)(QMediaRecorder::Status)>(&QMediaRecorderControl::statusChanged), self, [=](QMediaRecorder::Status status) {
		QMediaRecorder::Status status_ret = status;
		int sigval1 = static_cast<int>(status_ret);
		miqt_exec_callback_QMediaRecorderControl_statusChanged(slot, sigval1);
	});
}

void QMediaRecorderControl_durationChanged(QMediaRecorderControl* self, long long position) {
	self->durationChanged(static_cast<qint64>(position));
}

void QMediaRecorderControl_connect_durationChanged(QMediaRecorderControl* self, intptr_t slot) {
	QMediaRecorderControl::connect(self, static_cast<void (QMediaRecorderControl::*)(qint64)>(&QMediaRecorderControl::durationChanged), self, [=](qint64 position) {
		qint64 position_ret = position;
		long long sigval1 = static_cast<long long>(position_ret);
		miqt_exec_callback_QMediaRecorderControl_durationChanged(slot, sigval1);
	});
}

void QMediaRecorderControl_mutedChanged(QMediaRecorderControl* self, bool muted) {
	self->mutedChanged(muted);
}

void QMediaRecorderControl_connect_mutedChanged(QMediaRecorderControl* self, intptr_t slot) {
	QMediaRecorderControl::connect(self, static_cast<void (QMediaRecorderControl::*)(bool)>(&QMediaRecorderControl::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QMediaRecorderControl_mutedChanged(slot, sigval1);
	});
}

void QMediaRecorderControl_volumeChanged(QMediaRecorderControl* self, double volume) {
	self->volumeChanged(static_cast<qreal>(volume));
}

void QMediaRecorderControl_connect_volumeChanged(QMediaRecorderControl* self, intptr_t slot) {
	QMediaRecorderControl::connect(self, static_cast<void (QMediaRecorderControl::*)(qreal)>(&QMediaRecorderControl::volumeChanged), self, [=](qreal volume) {
		qreal volume_ret = volume;
		double sigval1 = static_cast<double>(volume_ret);
		miqt_exec_callback_QMediaRecorderControl_volumeChanged(slot, sigval1);
	});
}

void QMediaRecorderControl_actualLocationChanged(QMediaRecorderControl* self, QUrl* location) {
	self->actualLocationChanged(*location);
}

void QMediaRecorderControl_connect_actualLocationChanged(QMediaRecorderControl* self, intptr_t slot) {
	QMediaRecorderControl::connect(self, static_cast<void (QMediaRecorderControl::*)(const QUrl&)>(&QMediaRecorderControl::actualLocationChanged), self, [=](const QUrl& location) {
		const QUrl& location_ret = location;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&location_ret);
		miqt_exec_callback_QMediaRecorderControl_actualLocationChanged(slot, sigval1);
	});
}

void QMediaRecorderControl_error(QMediaRecorderControl* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->error(static_cast<int>(error), errorString_QString);
}

void QMediaRecorderControl_connect_error(QMediaRecorderControl* self, intptr_t slot) {
	QMediaRecorderControl::connect(self, static_cast<void (QMediaRecorderControl::*)(int, const QString&)>(&QMediaRecorderControl::error), self, [=](int error, const QString& errorString) {
		int sigval1 = error;
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval2 = errorString_ms;
		miqt_exec_callback_QMediaRecorderControl_error(slot, sigval1, sigval2);
	});
}

void QMediaRecorderControl_setState(QMediaRecorderControl* self, int state) {
	self->setState(static_cast<QMediaRecorder::State>(state));
}

void QMediaRecorderControl_setMuted(QMediaRecorderControl* self, bool muted) {
	self->setMuted(muted);
}

void QMediaRecorderControl_setVolume(QMediaRecorderControl* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

struct miqt_string QMediaRecorderControl_tr2(const char* s, const char* c) {
	QString _ret = QMediaRecorderControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaRecorderControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaRecorderControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaRecorderControl_trUtf82(const char* s, const char* c) {
	QString _ret = QMediaRecorderControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaRecorderControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaRecorderControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaRecorderControl_delete(QMediaRecorderControl* self) {
	delete self;
}

