#include "gen_qtimeline.h"
#include "qtimeline.h"

#include <QEasingCurve>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimeLine>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTimeLine* QTimeLine_new() {
	return new QTimeLine();
}

QTimeLine* QTimeLine_new2(int duration) {
	return new QTimeLine(static_cast<int>(duration));
}

QTimeLine* QTimeLine_new3(int duration, QObject* parent) {
	return new QTimeLine(static_cast<int>(duration), parent);
}

QMetaObject* QTimeLine_MetaObject(QTimeLine* self) {
	return (QMetaObject*) self->metaObject();
}

void QTimeLine_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTimeLine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeLine_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTimeLine::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int QTimeLine_LoopCount(QTimeLine* self) {
	return self->loopCount();
}

void QTimeLine_SetLoopCount(QTimeLine* self, int count) {
	self->setLoopCount(static_cast<int>(count));
}

int QTimeLine_Duration(QTimeLine* self) {
	return self->duration();
}

void QTimeLine_SetDuration(QTimeLine* self, int duration) {
	self->setDuration(static_cast<int>(duration));
}

int QTimeLine_StartFrame(QTimeLine* self) {
	return self->startFrame();
}

void QTimeLine_SetStartFrame(QTimeLine* self, int frame) {
	self->setStartFrame(static_cast<int>(frame));
}

int QTimeLine_EndFrame(QTimeLine* self) {
	return self->endFrame();
}

void QTimeLine_SetEndFrame(QTimeLine* self, int frame) {
	self->setEndFrame(static_cast<int>(frame));
}

void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame) {
	self->setFrameRange(static_cast<int>(startFrame), static_cast<int>(endFrame));
}

int QTimeLine_UpdateInterval(QTimeLine* self) {
	return self->updateInterval();
}

void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval) {
	self->setUpdateInterval(static_cast<int>(interval));
}

QEasingCurve* QTimeLine_EasingCurve(QTimeLine* self) {
	QEasingCurve ret = self->easingCurve();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QEasingCurve*>(new QEasingCurve(ret));
}

void QTimeLine_SetEasingCurve(QTimeLine* self, QEasingCurve* curve) {
	self->setEasingCurve(*curve);
}

int QTimeLine_CurrentTime(QTimeLine* self) {
	return self->currentTime();
}

int QTimeLine_CurrentFrame(QTimeLine* self) {
	return self->currentFrame();
}

double QTimeLine_CurrentValue(QTimeLine* self) {
	return self->currentValue();
}

int QTimeLine_FrameForTime(QTimeLine* self, int msec) {
	return self->frameForTime(static_cast<int>(msec));
}

double QTimeLine_ValueForTime(QTimeLine* self, int msec) {
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

void QTimeLine_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTimeLine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeLine_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTimeLine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeLine_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTimeLine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeLine_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTimeLine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTimeLine_Delete(QTimeLine* self) {
	delete self;
}

