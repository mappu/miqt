#include <QAbstractAnimation>
#include <QAnimationDriver>
#include <QAnimationGroup>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qabstractanimation.h"

#include "gen_qabstractanimation.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractAnimation_MetaObject(QAbstractAnimation* self) {
	return (QMetaObject*) const_cast<const QAbstractAnimation*>(self)->metaObject();
}

void QAbstractAnimation_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractAnimation_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QAbstractAnimation_State(QAbstractAnimation* self) {
	QAbstractAnimation::State ret = const_cast<const QAbstractAnimation*>(self)->state();
	return static_cast<uintptr_t>(ret);
}

QAnimationGroup* QAbstractAnimation_Group(QAbstractAnimation* self) {
	return const_cast<const QAbstractAnimation*>(self)->group();
}

uintptr_t QAbstractAnimation_Direction(QAbstractAnimation* self) {
	QAbstractAnimation::Direction ret = const_cast<const QAbstractAnimation*>(self)->direction();
	return static_cast<uintptr_t>(ret);
}

void QAbstractAnimation_SetDirection(QAbstractAnimation* self, uintptr_t direction) {
	self->setDirection(static_cast<QAbstractAnimation::Direction>(direction));
}

int QAbstractAnimation_CurrentTime(QAbstractAnimation* self) {
	return const_cast<const QAbstractAnimation*>(self)->currentTime();
}

int QAbstractAnimation_CurrentLoopTime(QAbstractAnimation* self) {
	return const_cast<const QAbstractAnimation*>(self)->currentLoopTime();
}

int QAbstractAnimation_LoopCount(QAbstractAnimation* self) {
	return const_cast<const QAbstractAnimation*>(self)->loopCount();
}

void QAbstractAnimation_SetLoopCount(QAbstractAnimation* self, int loopCount) {
	self->setLoopCount(static_cast<int>(loopCount));
}

int QAbstractAnimation_CurrentLoop(QAbstractAnimation* self) {
	return const_cast<const QAbstractAnimation*>(self)->currentLoop();
}

int QAbstractAnimation_Duration(QAbstractAnimation* self) {
	return const_cast<const QAbstractAnimation*>(self)->duration();
}

int QAbstractAnimation_TotalDuration(QAbstractAnimation* self) {
	return const_cast<const QAbstractAnimation*>(self)->totalDuration();
}

void QAbstractAnimation_Finished(QAbstractAnimation* self) {
	self->finished();
}

void QAbstractAnimation_connect_Finished(QAbstractAnimation* self, void* slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)()>(&QAbstractAnimation::finished), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractAnimation_StateChanged(QAbstractAnimation* self, uintptr_t newState, uintptr_t oldState) {
	self->stateChanged(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}

void QAbstractAnimation_connect_StateChanged(QAbstractAnimation* self, void* slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(QAbstractAnimation::State, QAbstractAnimation::State)>(&QAbstractAnimation::stateChanged), self, [=](QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractAnimation_CurrentLoopChanged(QAbstractAnimation* self, int currentLoop) {
	self->currentLoopChanged(static_cast<int>(currentLoop));
}

void QAbstractAnimation_connect_CurrentLoopChanged(QAbstractAnimation* self, void* slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(int)>(&QAbstractAnimation::currentLoopChanged), self, [=](int currentLoop) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, uintptr_t param1) {
	self->directionChanged(static_cast<QAbstractAnimation::Direction>(param1));
}

void QAbstractAnimation_connect_DirectionChanged(QAbstractAnimation* self, void* slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(QAbstractAnimation::Direction)>(&QAbstractAnimation::directionChanged), self, [=](QAbstractAnimation::Direction param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractAnimation_Start(QAbstractAnimation* self) {
	self->start();
}

void QAbstractAnimation_Pause(QAbstractAnimation* self) {
	self->pause();
}

void QAbstractAnimation_Resume(QAbstractAnimation* self) {
	self->resume();
}

void QAbstractAnimation_SetPaused(QAbstractAnimation* self, bool paused) {
	self->setPaused(paused);
}

void QAbstractAnimation_Stop(QAbstractAnimation* self) {
	self->stop();
}

void QAbstractAnimation_SetCurrentTime(QAbstractAnimation* self, int msecs) {
	self->setCurrentTime(static_cast<int>(msecs));
}

void QAbstractAnimation_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractAnimation_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractAnimation_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractAnimation_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractAnimation_Start1(QAbstractAnimation* self, uintptr_t policy) {
	self->start(static_cast<QAbstractAnimation::DeletionPolicy>(policy));
}

void QAbstractAnimation_Delete(QAbstractAnimation* self) {
	delete self;
}

QAnimationDriver* QAnimationDriver_new() {
	return new QAnimationDriver();
}

QAnimationDriver* QAnimationDriver_new2(QObject* parent) {
	return new QAnimationDriver(parent);
}

QMetaObject* QAnimationDriver_MetaObject(QAnimationDriver* self) {
	return (QMetaObject*) const_cast<const QAnimationDriver*>(self)->metaObject();
}

void QAnimationDriver_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAnimationDriver::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationDriver_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAnimationDriver::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationDriver_Advance(QAnimationDriver* self) {
	self->advance();
}

void QAnimationDriver_Install(QAnimationDriver* self) {
	self->install();
}

void QAnimationDriver_Uninstall(QAnimationDriver* self) {
	self->uninstall();
}

bool QAnimationDriver_IsRunning(QAnimationDriver* self) {
	return const_cast<const QAnimationDriver*>(self)->isRunning();
}

long long QAnimationDriver_Elapsed(QAnimationDriver* self) {
	return const_cast<const QAnimationDriver*>(self)->elapsed();
}

void QAnimationDriver_SetStartTime(QAnimationDriver* self, long long startTime) {
	self->setStartTime(static_cast<qint64>(startTime));
}

long long QAnimationDriver_StartTime(QAnimationDriver* self) {
	return const_cast<const QAnimationDriver*>(self)->startTime();
}

void QAnimationDriver_Started(QAnimationDriver* self) {
	self->started();
}

void QAnimationDriver_connect_Started(QAnimationDriver* self, void* slot) {
	QAnimationDriver::connect(self, static_cast<void (QAnimationDriver::*)()>(&QAnimationDriver::started), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAnimationDriver_Stopped(QAnimationDriver* self) {
	self->stopped();
}

void QAnimationDriver_connect_Stopped(QAnimationDriver* self, void* slot) {
	QAnimationDriver::connect(self, static_cast<void (QAnimationDriver::*)()>(&QAnimationDriver::stopped), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAnimationDriver_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAnimationDriver::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationDriver_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAnimationDriver::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationDriver_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAnimationDriver::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationDriver_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAnimationDriver::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAnimationDriver_Delete(QAnimationDriver* self) {
	delete self;
}

