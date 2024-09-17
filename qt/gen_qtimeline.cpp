#include <QEasingCurve>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeLine>
#include "qtimeline.h"
#include "gen_qtimeline.h"
#include "_cgo_export.h"

QTimeLine* QTimeLine_new() {
	return new QTimeLine();
}

QTimeLine* QTimeLine_new2(int duration) {
	return new QTimeLine(static_cast<int>(duration));
}

QTimeLine* QTimeLine_new3(int duration, QObject* parent) {
	return new QTimeLine(static_cast<int>(duration), parent);
}

QMetaObject* QTimeLine_MetaObject(const QTimeLine* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QTimeLine_Tr(const char* s) {
	QString _ret = QTimeLine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeLine_TrUtf8(const char* s) {
	QString _ret = QTimeLine::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

uintptr_t QTimeLine_State(const QTimeLine* self) {
	QTimeLine::State _ret = self->state();
	return static_cast<uintptr_t>(_ret);
}

int QTimeLine_LoopCount(const QTimeLine* self) {
	return self->loopCount();
}

void QTimeLine_SetLoopCount(QTimeLine* self, int count) {
	self->setLoopCount(static_cast<int>(count));
}

uintptr_t QTimeLine_Direction(const QTimeLine* self) {
	QTimeLine::Direction _ret = self->direction();
	return static_cast<uintptr_t>(_ret);
}

void QTimeLine_SetDirection(QTimeLine* self, uintptr_t direction) {
	self->setDirection(static_cast<QTimeLine::Direction>(direction));
}

int QTimeLine_Duration(const QTimeLine* self) {
	return self->duration();
}

void QTimeLine_SetDuration(QTimeLine* self, int duration) {
	self->setDuration(static_cast<int>(duration));
}

int QTimeLine_StartFrame(const QTimeLine* self) {
	return self->startFrame();
}

void QTimeLine_SetStartFrame(QTimeLine* self, int frame) {
	self->setStartFrame(static_cast<int>(frame));
}

int QTimeLine_EndFrame(const QTimeLine* self) {
	return self->endFrame();
}

void QTimeLine_SetEndFrame(QTimeLine* self, int frame) {
	self->setEndFrame(static_cast<int>(frame));
}

void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame) {
	self->setFrameRange(static_cast<int>(startFrame), static_cast<int>(endFrame));
}

int QTimeLine_UpdateInterval(const QTimeLine* self) {
	return self->updateInterval();
}

void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval) {
	self->setUpdateInterval(static_cast<int>(interval));
}

uintptr_t QTimeLine_CurveShape(const QTimeLine* self) {
	QTimeLine::CurveShape _ret = self->curveShape();
	return static_cast<uintptr_t>(_ret);
}

void QTimeLine_SetCurveShape(QTimeLine* self, uintptr_t shape) {
	self->setCurveShape(static_cast<QTimeLine::CurveShape>(shape));
}

QEasingCurve* QTimeLine_EasingCurve(const QTimeLine* self) {
	return new QEasingCurve(self->easingCurve());
}

void QTimeLine_SetEasingCurve(QTimeLine* self, QEasingCurve* curve) {
	self->setEasingCurve(*curve);
}

int QTimeLine_CurrentTime(const QTimeLine* self) {
	return self->currentTime();
}

int QTimeLine_CurrentFrame(const QTimeLine* self) {
	return self->currentFrame();
}

double QTimeLine_CurrentValue(const QTimeLine* self) {
	return self->currentValue();
}

int QTimeLine_FrameForTime(const QTimeLine* self, int msec) {
	return self->frameForTime(static_cast<int>(msec));
}

double QTimeLine_ValueForTime(const QTimeLine* self, int msec) {
	return self->valueForTime(static_cast<int>(msec));
}

void QTimeLine_Start(QTimeLine* self) {
	self->start();
}

void QTimeLine_Resume(QTimeLine* self) {
	self->resume();
}

void QTimeLine_Stop(QTimeLine* self) {
	self->stop();
}

void QTimeLine_SetPaused(QTimeLine* self, bool paused) {
	self->setPaused(paused);
}

void QTimeLine_SetCurrentTime(QTimeLine* self, int msec) {
	self->setCurrentTime(static_cast<int>(msec));
}

void QTimeLine_ToggleDirection(QTimeLine* self) {
	self->toggleDirection();
}

struct miqt_string* QTimeLine_Tr2(const char* s, const char* c) {
	QString _ret = QTimeLine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeLine_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTimeLine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeLine_TrUtf82(const char* s, const char* c) {
	QString _ret = QTimeLine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTimeLine_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTimeLine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTimeLine_Delete(QTimeLine* self) {
	delete self;
}

