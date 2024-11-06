#include <QMediaContent>
#include <QMediaGaplessPlaybackControl>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediagaplessplaybackcontrol.h>
#include "gen_qmediagaplessplaybackcontrol.h"
#include "_cgo_export.h"

QMetaObject* QMediaGaplessPlaybackControl_MetaObject(const QMediaGaplessPlaybackControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaGaplessPlaybackControl_Metacast(QMediaGaplessPlaybackControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaGaplessPlaybackControl_Tr(const char* s) {
	QString _ret = QMediaGaplessPlaybackControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaGaplessPlaybackControl_TrUtf8(const char* s) {
	QString _ret = QMediaGaplessPlaybackControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaContent* QMediaGaplessPlaybackControl_NextMedia(const QMediaGaplessPlaybackControl* self) {
	return new QMediaContent(self->nextMedia());
}

void QMediaGaplessPlaybackControl_SetNextMedia(QMediaGaplessPlaybackControl* self, QMediaContent* media) {
	self->setNextMedia(*media);
}

bool QMediaGaplessPlaybackControl_IsCrossfadeSupported(const QMediaGaplessPlaybackControl* self) {
	return self->isCrossfadeSupported();
}

double QMediaGaplessPlaybackControl_CrossfadeTime(const QMediaGaplessPlaybackControl* self) {
	qreal _ret = self->crossfadeTime();
	return static_cast<double>(_ret);
}

void QMediaGaplessPlaybackControl_SetCrossfadeTime(QMediaGaplessPlaybackControl* self, double crossfadeTime) {
	self->setCrossfadeTime(static_cast<qreal>(crossfadeTime));
}

void QMediaGaplessPlaybackControl_CrossfadeTimeChanged(QMediaGaplessPlaybackControl* self, double crossfadeTime) {
	self->crossfadeTimeChanged(static_cast<qreal>(crossfadeTime));
}

void QMediaGaplessPlaybackControl_connect_CrossfadeTimeChanged(QMediaGaplessPlaybackControl* self, intptr_t slot) {
	QMediaGaplessPlaybackControl::connect(self, static_cast<void (QMediaGaplessPlaybackControl::*)(qreal)>(&QMediaGaplessPlaybackControl::crossfadeTimeChanged), self, [=](qreal crossfadeTime) {
		qreal crossfadeTime_ret = crossfadeTime;
		double sigval1 = static_cast<double>(crossfadeTime_ret);
		miqt_exec_callback_QMediaGaplessPlaybackControl_CrossfadeTimeChanged(slot, sigval1);
	});
}

void QMediaGaplessPlaybackControl_NextMediaChanged(QMediaGaplessPlaybackControl* self, QMediaContent* media) {
	self->nextMediaChanged(*media);
}

void QMediaGaplessPlaybackControl_connect_NextMediaChanged(QMediaGaplessPlaybackControl* self, intptr_t slot) {
	QMediaGaplessPlaybackControl::connect(self, static_cast<void (QMediaGaplessPlaybackControl::*)(const QMediaContent&)>(&QMediaGaplessPlaybackControl::nextMediaChanged), self, [=](const QMediaContent& media) {
		const QMediaContent& media_ret = media;
		// Cast returned reference into pointer
		QMediaContent* sigval1 = const_cast<QMediaContent*>(&media_ret);
		miqt_exec_callback_QMediaGaplessPlaybackControl_NextMediaChanged(slot, sigval1);
	});
}

void QMediaGaplessPlaybackControl_AdvancedToNextMedia(QMediaGaplessPlaybackControl* self) {
	self->advancedToNextMedia();
}

void QMediaGaplessPlaybackControl_connect_AdvancedToNextMedia(QMediaGaplessPlaybackControl* self, intptr_t slot) {
	QMediaGaplessPlaybackControl::connect(self, static_cast<void (QMediaGaplessPlaybackControl::*)()>(&QMediaGaplessPlaybackControl::advancedToNextMedia), self, [=]() {
		miqt_exec_callback_QMediaGaplessPlaybackControl_AdvancedToNextMedia(slot);
	});
}

struct miqt_string QMediaGaplessPlaybackControl_Tr2(const char* s, const char* c) {
	QString _ret = QMediaGaplessPlaybackControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaGaplessPlaybackControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaGaplessPlaybackControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaGaplessPlaybackControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaGaplessPlaybackControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaGaplessPlaybackControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaGaplessPlaybackControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaGaplessPlaybackControl_Delete(QMediaGaplessPlaybackControl* self) {
	delete self;
}

