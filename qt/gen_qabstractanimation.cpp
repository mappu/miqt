#include <QAbstractAnimation>
#include <QAnimationDriver>
#include <QAnimationGroup>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractanimation.h>
#include "gen_qabstractanimation.h"
#include "_cgo_export.h"

QMetaObject* QAbstractAnimation_MetaObject(const QAbstractAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractAnimation_Metacast(QAbstractAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QAbstractAnimation_Tr(const char* s) {
	QString _ret = QAbstractAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractAnimation_TrUtf8(const char* s) {
	QString _ret = QAbstractAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QAbstractAnimation_State(const QAbstractAnimation* self) {
	QAbstractAnimation::State _ret = self->state();
	return static_cast<int>(_ret);
}

QAnimationGroup* QAbstractAnimation_Group(const QAbstractAnimation* self) {
	return self->group();
}

int QAbstractAnimation_Direction(const QAbstractAnimation* self) {
	QAbstractAnimation::Direction _ret = self->direction();
	return static_cast<int>(_ret);
}

void QAbstractAnimation_SetDirection(QAbstractAnimation* self, int direction) {
	self->setDirection(static_cast<QAbstractAnimation::Direction>(direction));
}

int QAbstractAnimation_CurrentTime(const QAbstractAnimation* self) {
	return self->currentTime();
}

int QAbstractAnimation_CurrentLoopTime(const QAbstractAnimation* self) {
	return self->currentLoopTime();
}

int QAbstractAnimation_LoopCount(const QAbstractAnimation* self) {
	return self->loopCount();
}

void QAbstractAnimation_SetLoopCount(QAbstractAnimation* self, int loopCount) {
	self->setLoopCount(static_cast<int>(loopCount));
}

int QAbstractAnimation_CurrentLoop(const QAbstractAnimation* self) {
	return self->currentLoop();
}

int QAbstractAnimation_Duration(const QAbstractAnimation* self) {
	return self->duration();
}

int QAbstractAnimation_TotalDuration(const QAbstractAnimation* self) {
	return self->totalDuration();
}

void QAbstractAnimation_Finished(QAbstractAnimation* self) {
	self->finished();
}

void QAbstractAnimation_connect_Finished(QAbstractAnimation* self, intptr_t slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)()>(&QAbstractAnimation::finished), self, [=]() {
		miqt_exec_callback_QAbstractAnimation_Finished(slot);
	});
}

void QAbstractAnimation_StateChanged(QAbstractAnimation* self, int newState, int oldState) {
	self->stateChanged(static_cast<QAbstractAnimation::State>(newState), static_cast<QAbstractAnimation::State>(oldState));
}

void QAbstractAnimation_connect_StateChanged(QAbstractAnimation* self, intptr_t slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(QAbstractAnimation::State, QAbstractAnimation::State)>(&QAbstractAnimation::stateChanged), self, [=](QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);
		miqt_exec_callback_QAbstractAnimation_StateChanged(slot, sigval1, sigval2);
	});
}

void QAbstractAnimation_CurrentLoopChanged(QAbstractAnimation* self, int currentLoop) {
	self->currentLoopChanged(static_cast<int>(currentLoop));
}

void QAbstractAnimation_connect_CurrentLoopChanged(QAbstractAnimation* self, intptr_t slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(int)>(&QAbstractAnimation::currentLoopChanged), self, [=](int currentLoop) {
		int sigval1 = currentLoop;
		miqt_exec_callback_QAbstractAnimation_CurrentLoopChanged(slot, sigval1);
	});
}

void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, int param1) {
	self->directionChanged(static_cast<QAbstractAnimation::Direction>(param1));
}

void QAbstractAnimation_connect_DirectionChanged(QAbstractAnimation* self, intptr_t slot) {
	QAbstractAnimation::connect(self, static_cast<void (QAbstractAnimation::*)(QAbstractAnimation::Direction)>(&QAbstractAnimation::directionChanged), self, [=](QAbstractAnimation::Direction param1) {
		QAbstractAnimation::Direction param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractAnimation_DirectionChanged(slot, sigval1);
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

struct miqt_string* QAbstractAnimation_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractAnimation_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractAnimation_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAbstractAnimation_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QAbstractAnimation_Start1(QAbstractAnimation* self, int policy) {
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

QMetaObject* QAnimationDriver_MetaObject(const QAnimationDriver* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAnimationDriver_Metacast(QAnimationDriver* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QAnimationDriver_Tr(const char* s) {
	QString _ret = QAnimationDriver::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAnimationDriver_TrUtf8(const char* s) {
	QString _ret = QAnimationDriver::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

bool QAnimationDriver_IsRunning(const QAnimationDriver* self) {
	return self->isRunning();
}

long long QAnimationDriver_Elapsed(const QAnimationDriver* self) {
	qint64 _ret = self->elapsed();
	return static_cast<long long>(_ret);
}

void QAnimationDriver_SetStartTime(QAnimationDriver* self, long long startTime) {
	self->setStartTime(static_cast<qint64>(startTime));
}

long long QAnimationDriver_StartTime(const QAnimationDriver* self) {
	qint64 _ret = self->startTime();
	return static_cast<long long>(_ret);
}

void QAnimationDriver_Started(QAnimationDriver* self) {
	self->started();
}

void QAnimationDriver_connect_Started(QAnimationDriver* self, intptr_t slot) {
	QAnimationDriver::connect(self, static_cast<void (QAnimationDriver::*)()>(&QAnimationDriver::started), self, [=]() {
		miqt_exec_callback_QAnimationDriver_Started(slot);
	});
}

void QAnimationDriver_Stopped(QAnimationDriver* self) {
	self->stopped();
}

void QAnimationDriver_connect_Stopped(QAnimationDriver* self, intptr_t slot) {
	QAnimationDriver::connect(self, static_cast<void (QAnimationDriver::*)()>(&QAnimationDriver::stopped), self, [=]() {
		miqt_exec_callback_QAnimationDriver_Stopped(slot);
	});
}

struct miqt_string* QAnimationDriver_Tr2(const char* s, const char* c) {
	QString _ret = QAnimationDriver::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAnimationDriver_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAnimationDriver::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAnimationDriver_TrUtf82(const char* s, const char* c) {
	QString _ret = QAnimationDriver::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QAnimationDriver_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAnimationDriver::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QAnimationDriver_Delete(QAnimationDriver* self) {
	delete self;
}

