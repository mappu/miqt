#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QRectF>
#include <QScroller>
#include <QScrollerProperties>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qscroller.h"

#include "gen_qscroller.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QScroller_MetaObject(const QScroller* self) {
	return (QMetaObject*) self->metaObject();
}

void QScroller_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QScroller::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScroller_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QScroller::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QScroller_HasScroller(QObject* target) {
	return QScroller::hasScroller(target);
}

QScroller* QScroller_Scroller(QObject* target) {
	return QScroller::scroller(target);
}

QScroller* QScroller_ScrollerWithTarget(QObject* target) {
	return (QScroller*) QScroller::scroller(target);
}

uintptr_t QScroller_GrabGesture(QObject* target) {
	Qt::GestureType ret = QScroller::grabGesture(target);
	return static_cast<uintptr_t>(ret);
}

uintptr_t QScroller_GrabbedGesture(QObject* target) {
	Qt::GestureType ret = QScroller::grabbedGesture(target);
	return static_cast<uintptr_t>(ret);
}

void QScroller_UngrabGesture(QObject* target) {
	QScroller::ungrabGesture(target);
}

void QScroller_ActiveScrollers(QScroller*** _out, size_t* _out_len) {
	QList<QScroller*> ret = QScroller::activeScrollers();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScroller** __out = static_cast<QScroller**>(malloc(sizeof(QScroller*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QObject* QScroller_Target(const QScroller* self) {
	return self->target();
}

uintptr_t QScroller_State(const QScroller* self) {
	QScroller::State ret = self->state();
	return static_cast<uintptr_t>(ret);
}

bool QScroller_HandleInput(QScroller* self, uintptr_t input, QPointF* position) {
	return self->handleInput(static_cast<QScroller::Input>(input), *position);
}

void QScroller_Stop(QScroller* self) {
	self->stop();
}

QPointF* QScroller_Velocity(const QScroller* self) {
	QPointF ret = self->velocity();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QScroller_FinalPosition(const QScroller* self) {
	QPointF ret = self->finalPosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QScroller_PixelPerMeter(const QScroller* self) {
	QPointF ret = self->pixelPerMeter();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QScrollerProperties* QScroller_ScrollerProperties(const QScroller* self) {
	QScrollerProperties ret = self->scrollerProperties();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QScrollerProperties*>(new QScrollerProperties(ret));
}

void QScroller_SetSnapPositionsX(QScroller* self, double* positions, size_t positions_len) {
	QList<double> positions_QList;
	positions_QList.reserve(positions_len);
	for(size_t i = 0; i < positions_len; ++i) {
		positions_QList.push_back(positions[i]);
	}
	self->setSnapPositionsX(positions_QList);
}

void QScroller_SetSnapPositionsX2(QScroller* self, double first, double interval) {
	self->setSnapPositionsX(static_cast<qreal>(first), static_cast<qreal>(interval));
}

void QScroller_SetSnapPositionsY(QScroller* self, double* positions, size_t positions_len) {
	QList<double> positions_QList;
	positions_QList.reserve(positions_len);
	for(size_t i = 0; i < positions_len; ++i) {
		positions_QList.push_back(positions[i]);
	}
	self->setSnapPositionsY(positions_QList);
}

void QScroller_SetSnapPositionsY2(QScroller* self, double first, double interval) {
	self->setSnapPositionsY(static_cast<qreal>(first), static_cast<qreal>(interval));
}

void QScroller_SetScrollerProperties(QScroller* self, QScrollerProperties* prop) {
	self->setScrollerProperties(*prop);
}

void QScroller_ScrollTo(QScroller* self, QPointF* pos) {
	self->scrollTo(*pos);
}

void QScroller_ScrollTo2(QScroller* self, QPointF* pos, int scrollTime) {
	self->scrollTo(*pos, static_cast<int>(scrollTime));
}

void QScroller_EnsureVisible(QScroller* self, QRectF* rect, double xmargin, double ymargin) {
	self->ensureVisible(*rect, static_cast<qreal>(xmargin), static_cast<qreal>(ymargin));
}

void QScroller_EnsureVisible2(QScroller* self, QRectF* rect, double xmargin, double ymargin, int scrollTime) {
	self->ensureVisible(*rect, static_cast<qreal>(xmargin), static_cast<qreal>(ymargin), static_cast<int>(scrollTime));
}

void QScroller_ResendPrepareEvent(QScroller* self) {
	self->resendPrepareEvent();
}

void QScroller_StateChanged(QScroller* self, uintptr_t newstate) {
	self->stateChanged(static_cast<QScroller::State>(newstate));
}

void QScroller_connect_StateChanged(QScroller* self, void* slot) {
	QScroller::connect(self, static_cast<void (QScroller::*)(QScroller::State)>(&QScroller::stateChanged), self, [=](QScroller::State newstate) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QScroller_ScrollerPropertiesChanged(QScroller* self, QScrollerProperties* param1) {
	self->scrollerPropertiesChanged(*param1);
}

void QScroller_connect_ScrollerPropertiesChanged(QScroller* self, void* slot) {
	QScroller::connect(self, static_cast<void (QScroller::*)(const QScrollerProperties&)>(&QScroller::scrollerPropertiesChanged), self, [=](const QScrollerProperties& param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QScroller_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QScroller::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScroller_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QScroller::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScroller_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QScroller::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QScroller_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QScroller::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QScroller_GrabGesture2(QObject* target, uintptr_t gestureType) {
	Qt::GestureType ret = QScroller::grabGesture(target, static_cast<QScroller::ScrollerGestureType>(gestureType));
	return static_cast<uintptr_t>(ret);
}

bool QScroller_HandleInput3(QScroller* self, uintptr_t input, QPointF* position, long long timestamp) {
	return self->handleInput(static_cast<QScroller::Input>(input), *position, static_cast<qint64>(timestamp));
}

