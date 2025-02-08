#include <QMediaContent>
#include <QMediaControl>
#include <QMediaGaplessPlaybackControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediagaplessplaybackcontrol.h>
#include "gen_qmediagaplessplaybackcontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QMediaGaplessPlaybackControl_crossfadeTimeChanged(intptr_t, double);
void miqt_exec_callback_QMediaGaplessPlaybackControl_nextMediaChanged(intptr_t, QMediaContent*);
void miqt_exec_callback_QMediaGaplessPlaybackControl_advancedToNextMedia(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QMediaGaplessPlaybackControl_virtbase(QMediaGaplessPlaybackControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMediaGaplessPlaybackControl_metaObject(const QMediaGaplessPlaybackControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaGaplessPlaybackControl_metacast(QMediaGaplessPlaybackControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaGaplessPlaybackControl_tr(const char* s) {
	QString _ret = QMediaGaplessPlaybackControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaGaplessPlaybackControl_trUtf8(const char* s) {
	QString _ret = QMediaGaplessPlaybackControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaContent* QMediaGaplessPlaybackControl_nextMedia(const QMediaGaplessPlaybackControl* self) {
	return new QMediaContent(self->nextMedia());
}

void QMediaGaplessPlaybackControl_setNextMedia(QMediaGaplessPlaybackControl* self, QMediaContent* media) {
	self->setNextMedia(*media);
}

bool QMediaGaplessPlaybackControl_isCrossfadeSupported(const QMediaGaplessPlaybackControl* self) {
	return self->isCrossfadeSupported();
}

double QMediaGaplessPlaybackControl_crossfadeTime(const QMediaGaplessPlaybackControl* self) {
	qreal _ret = self->crossfadeTime();
	return static_cast<double>(_ret);
}

void QMediaGaplessPlaybackControl_setCrossfadeTime(QMediaGaplessPlaybackControl* self, double crossfadeTime) {
	self->setCrossfadeTime(static_cast<qreal>(crossfadeTime));
}

void QMediaGaplessPlaybackControl_crossfadeTimeChanged(QMediaGaplessPlaybackControl* self, double crossfadeTime) {
	self->crossfadeTimeChanged(static_cast<qreal>(crossfadeTime));
}

void QMediaGaplessPlaybackControl_connect_crossfadeTimeChanged(QMediaGaplessPlaybackControl* self, intptr_t slot) {
	QMediaGaplessPlaybackControl::connect(self, static_cast<void (QMediaGaplessPlaybackControl::*)(qreal)>(&QMediaGaplessPlaybackControl::crossfadeTimeChanged), self, [=](qreal crossfadeTime) {
		qreal crossfadeTime_ret = crossfadeTime;
		double sigval1 = static_cast<double>(crossfadeTime_ret);
		miqt_exec_callback_QMediaGaplessPlaybackControl_crossfadeTimeChanged(slot, sigval1);
	});
}

void QMediaGaplessPlaybackControl_nextMediaChanged(QMediaGaplessPlaybackControl* self, QMediaContent* media) {
	self->nextMediaChanged(*media);
}

void QMediaGaplessPlaybackControl_connect_nextMediaChanged(QMediaGaplessPlaybackControl* self, intptr_t slot) {
	QMediaGaplessPlaybackControl::connect(self, static_cast<void (QMediaGaplessPlaybackControl::*)(const QMediaContent&)>(&QMediaGaplessPlaybackControl::nextMediaChanged), self, [=](const QMediaContent& media) {
		const QMediaContent& media_ret = media;
		// Cast returned reference into pointer
		QMediaContent* sigval1 = const_cast<QMediaContent*>(&media_ret);
		miqt_exec_callback_QMediaGaplessPlaybackControl_nextMediaChanged(slot, sigval1);
	});
}

void QMediaGaplessPlaybackControl_advancedToNextMedia(QMediaGaplessPlaybackControl* self) {
	self->advancedToNextMedia();
}

void QMediaGaplessPlaybackControl_connect_advancedToNextMedia(QMediaGaplessPlaybackControl* self, intptr_t slot) {
	QMediaGaplessPlaybackControl::connect(self, static_cast<void (QMediaGaplessPlaybackControl::*)()>(&QMediaGaplessPlaybackControl::advancedToNextMedia), self, [=]() {
		miqt_exec_callback_QMediaGaplessPlaybackControl_advancedToNextMedia(slot);
	});
}

struct miqt_string QMediaGaplessPlaybackControl_tr2(const char* s, const char* c) {
	QString _ret = QMediaGaplessPlaybackControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaGaplessPlaybackControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaGaplessPlaybackControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaGaplessPlaybackControl_trUtf82(const char* s, const char* c) {
	QString _ret = QMediaGaplessPlaybackControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaGaplessPlaybackControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaGaplessPlaybackControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaGaplessPlaybackControl_delete(QMediaGaplessPlaybackControl* self) {
	delete self;
}

