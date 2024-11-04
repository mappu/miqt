#include <QGesture>
#include <QGestureEvent>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QPanGesture>
#include <QPinchGesture>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSwipeGesture>
#include <QTapAndHoldGesture>
#include <QTapGesture>
#include <QWidget>
#include <qgesture.h>
#include "gen_qgesture.h"
#include "_cgo_export.h"

QGesture* QGesture_new() {
	return new QGesture();
}

QGesture* QGesture_new2(QObject* parent) {
	return new QGesture(parent);
}

QMetaObject* QGesture_MetaObject(const QGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGesture_Metacast(QGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGesture_Tr(const char* s) {
	QString _ret = QGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QGesture_GestureType(const QGesture* self) {
	Qt::GestureType _ret = self->gestureType();
	return static_cast<int>(_ret);
}

int QGesture_State(const QGesture* self) {
	Qt::GestureState _ret = self->state();
	return static_cast<int>(_ret);
}

QPointF* QGesture_HotSpot(const QGesture* self) {
	return new QPointF(self->hotSpot());
}

void QGesture_SetHotSpot(QGesture* self, QPointF* value) {
	self->setHotSpot(*value);
}

bool QGesture_HasHotSpot(const QGesture* self) {
	return self->hasHotSpot();
}

void QGesture_UnsetHotSpot(QGesture* self) {
	self->unsetHotSpot();
}

void QGesture_SetGestureCancelPolicy(QGesture* self, int policy) {
	self->setGestureCancelPolicy(static_cast<QGesture::GestureCancelPolicy>(policy));
}

int QGesture_GestureCancelPolicy(const QGesture* self) {
	QGesture::GestureCancelPolicy _ret = self->gestureCancelPolicy();
	return static_cast<int>(_ret);
}

struct miqt_string QGesture_Tr2(const char* s, const char* c) {
	QString _ret = QGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGesture_Delete(QGesture* self) {
	delete self;
}

QPanGesture* QPanGesture_new() {
	return new QPanGesture();
}

QPanGesture* QPanGesture_new2(QObject* parent) {
	return new QPanGesture(parent);
}

QMetaObject* QPanGesture_MetaObject(const QPanGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPanGesture_Metacast(QPanGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPanGesture_Tr(const char* s) {
	QString _ret = QPanGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointF* QPanGesture_LastOffset(const QPanGesture* self) {
	return new QPointF(self->lastOffset());
}

QPointF* QPanGesture_Offset(const QPanGesture* self) {
	return new QPointF(self->offset());
}

QPointF* QPanGesture_Delta(const QPanGesture* self) {
	return new QPointF(self->delta());
}

double QPanGesture_Acceleration(const QPanGesture* self) {
	qreal _ret = self->acceleration();
	return static_cast<double>(_ret);
}

void QPanGesture_SetLastOffset(QPanGesture* self, QPointF* value) {
	self->setLastOffset(*value);
}

void QPanGesture_SetOffset(QPanGesture* self, QPointF* value) {
	self->setOffset(*value);
}

void QPanGesture_SetAcceleration(QPanGesture* self, double value) {
	self->setAcceleration(static_cast<qreal>(value));
}

struct miqt_string QPanGesture_Tr2(const char* s, const char* c) {
	QString _ret = QPanGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPanGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPanGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPanGesture_Delete(QPanGesture* self) {
	delete self;
}

QPinchGesture* QPinchGesture_new() {
	return new QPinchGesture();
}

QPinchGesture* QPinchGesture_new2(QObject* parent) {
	return new QPinchGesture(parent);
}

QMetaObject* QPinchGesture_MetaObject(const QPinchGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPinchGesture_Metacast(QPinchGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPinchGesture_Tr(const char* s) {
	QString _ret = QPinchGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPinchGesture_TotalChangeFlags(const QPinchGesture* self) {
	QPinchGesture::ChangeFlags _ret = self->totalChangeFlags();
	return static_cast<int>(_ret);
}

void QPinchGesture_SetTotalChangeFlags(QPinchGesture* self, int value) {
	self->setTotalChangeFlags(static_cast<QPinchGesture::ChangeFlags>(value));
}

int QPinchGesture_ChangeFlags(const QPinchGesture* self) {
	QPinchGesture::ChangeFlags _ret = self->changeFlags();
	return static_cast<int>(_ret);
}

void QPinchGesture_SetChangeFlags(QPinchGesture* self, int value) {
	self->setChangeFlags(static_cast<QPinchGesture::ChangeFlags>(value));
}

QPointF* QPinchGesture_StartCenterPoint(const QPinchGesture* self) {
	return new QPointF(self->startCenterPoint());
}

QPointF* QPinchGesture_LastCenterPoint(const QPinchGesture* self) {
	return new QPointF(self->lastCenterPoint());
}

QPointF* QPinchGesture_CenterPoint(const QPinchGesture* self) {
	return new QPointF(self->centerPoint());
}

void QPinchGesture_SetStartCenterPoint(QPinchGesture* self, QPointF* value) {
	self->setStartCenterPoint(*value);
}

void QPinchGesture_SetLastCenterPoint(QPinchGesture* self, QPointF* value) {
	self->setLastCenterPoint(*value);
}

void QPinchGesture_SetCenterPoint(QPinchGesture* self, QPointF* value) {
	self->setCenterPoint(*value);
}

double QPinchGesture_TotalScaleFactor(const QPinchGesture* self) {
	qreal _ret = self->totalScaleFactor();
	return static_cast<double>(_ret);
}

double QPinchGesture_LastScaleFactor(const QPinchGesture* self) {
	qreal _ret = self->lastScaleFactor();
	return static_cast<double>(_ret);
}

double QPinchGesture_ScaleFactor(const QPinchGesture* self) {
	qreal _ret = self->scaleFactor();
	return static_cast<double>(_ret);
}

void QPinchGesture_SetTotalScaleFactor(QPinchGesture* self, double value) {
	self->setTotalScaleFactor(static_cast<qreal>(value));
}

void QPinchGesture_SetLastScaleFactor(QPinchGesture* self, double value) {
	self->setLastScaleFactor(static_cast<qreal>(value));
}

void QPinchGesture_SetScaleFactor(QPinchGesture* self, double value) {
	self->setScaleFactor(static_cast<qreal>(value));
}

double QPinchGesture_TotalRotationAngle(const QPinchGesture* self) {
	qreal _ret = self->totalRotationAngle();
	return static_cast<double>(_ret);
}

double QPinchGesture_LastRotationAngle(const QPinchGesture* self) {
	qreal _ret = self->lastRotationAngle();
	return static_cast<double>(_ret);
}

double QPinchGesture_RotationAngle(const QPinchGesture* self) {
	qreal _ret = self->rotationAngle();
	return static_cast<double>(_ret);
}

void QPinchGesture_SetTotalRotationAngle(QPinchGesture* self, double value) {
	self->setTotalRotationAngle(static_cast<qreal>(value));
}

void QPinchGesture_SetLastRotationAngle(QPinchGesture* self, double value) {
	self->setLastRotationAngle(static_cast<qreal>(value));
}

void QPinchGesture_SetRotationAngle(QPinchGesture* self, double value) {
	self->setRotationAngle(static_cast<qreal>(value));
}

struct miqt_string QPinchGesture_Tr2(const char* s, const char* c) {
	QString _ret = QPinchGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPinchGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPinchGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPinchGesture_Delete(QPinchGesture* self) {
	delete self;
}

QSwipeGesture* QSwipeGesture_new() {
	return new QSwipeGesture();
}

QSwipeGesture* QSwipeGesture_new2(QObject* parent) {
	return new QSwipeGesture(parent);
}

QMetaObject* QSwipeGesture_MetaObject(const QSwipeGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSwipeGesture_Metacast(QSwipeGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSwipeGesture_Tr(const char* s) {
	QString _ret = QSwipeGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSwipeGesture_HorizontalDirection(const QSwipeGesture* self) {
	QSwipeGesture::SwipeDirection _ret = self->horizontalDirection();
	return static_cast<int>(_ret);
}

int QSwipeGesture_VerticalDirection(const QSwipeGesture* self) {
	QSwipeGesture::SwipeDirection _ret = self->verticalDirection();
	return static_cast<int>(_ret);
}

double QSwipeGesture_SwipeAngle(const QSwipeGesture* self) {
	qreal _ret = self->swipeAngle();
	return static_cast<double>(_ret);
}

void QSwipeGesture_SetSwipeAngle(QSwipeGesture* self, double value) {
	self->setSwipeAngle(static_cast<qreal>(value));
}

struct miqt_string QSwipeGesture_Tr2(const char* s, const char* c) {
	QString _ret = QSwipeGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSwipeGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSwipeGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSwipeGesture_Delete(QSwipeGesture* self) {
	delete self;
}

QTapGesture* QTapGesture_new() {
	return new QTapGesture();
}

QTapGesture* QTapGesture_new2(QObject* parent) {
	return new QTapGesture(parent);
}

QMetaObject* QTapGesture_MetaObject(const QTapGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTapGesture_Metacast(QTapGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTapGesture_Tr(const char* s) {
	QString _ret = QTapGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointF* QTapGesture_Position(const QTapGesture* self) {
	return new QPointF(self->position());
}

void QTapGesture_SetPosition(QTapGesture* self, QPointF* pos) {
	self->setPosition(*pos);
}

struct miqt_string QTapGesture_Tr2(const char* s, const char* c) {
	QString _ret = QTapGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTapGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTapGesture_Delete(QTapGesture* self) {
	delete self;
}

QTapAndHoldGesture* QTapAndHoldGesture_new() {
	return new QTapAndHoldGesture();
}

QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent) {
	return new QTapAndHoldGesture(parent);
}

QMetaObject* QTapAndHoldGesture_MetaObject(const QTapAndHoldGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTapAndHoldGesture_Metacast(QTapAndHoldGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTapAndHoldGesture_Tr(const char* s) {
	QString _ret = QTapAndHoldGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointF* QTapAndHoldGesture_Position(const QTapAndHoldGesture* self) {
	return new QPointF(self->position());
}

void QTapAndHoldGesture_SetPosition(QTapAndHoldGesture* self, QPointF* pos) {
	self->setPosition(*pos);
}

void QTapAndHoldGesture_SetTimeout(int msecs) {
	QTapAndHoldGesture::setTimeout(static_cast<int>(msecs));
}

int QTapAndHoldGesture_Timeout() {
	return QTapAndHoldGesture::timeout();
}

struct miqt_string QTapAndHoldGesture_Tr2(const char* s, const char* c) {
	QString _ret = QTapAndHoldGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapAndHoldGesture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTapAndHoldGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTapAndHoldGesture_Delete(QTapAndHoldGesture* self) {
	delete self;
}

QGestureEvent* QGestureEvent_new(struct miqt_array /* of QGesture* */ gestures) {
	QList<QGesture *> gestures_QList;
	gestures_QList.reserve(gestures.len);
	QGesture** gestures_arr = static_cast<QGesture**>(gestures.data);
	for(size_t i = 0; i < gestures.len; ++i) {
		gestures_QList.push_back(gestures_arr[i]);
	}
	return new QGestureEvent(gestures_QList);
}

QGestureEvent* QGestureEvent_new2(QGestureEvent* param1) {
	return new QGestureEvent(*param1);
}

struct miqt_array QGestureEvent_Gestures(const QGestureEvent* self) {
	QList<QGesture *> _ret = self->gestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QGesture* QGestureEvent_Gesture(const QGestureEvent* self, int typeVal) {
	return self->gesture(static_cast<Qt::GestureType>(typeVal));
}

struct miqt_array QGestureEvent_ActiveGestures(const QGestureEvent* self) {
	QList<QGesture *> _ret = self->activeGestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QGestureEvent_CanceledGestures(const QGestureEvent* self) {
	QList<QGesture *> _ret = self->canceledGestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGestureEvent_SetAccepted(QGestureEvent* self, QGesture* param1, bool param2) {
	self->setAccepted(param1, param2);
}

void QGestureEvent_Accept(QGestureEvent* self, QGesture* param1) {
	self->accept(param1);
}

void QGestureEvent_Ignore(QGestureEvent* self, QGesture* param1) {
	self->ignore(param1);
}

bool QGestureEvent_IsAccepted(const QGestureEvent* self, QGesture* param1) {
	return self->isAccepted(param1);
}

void QGestureEvent_SetAccepted2(QGestureEvent* self, int param1, bool param2) {
	self->setAccepted(static_cast<Qt::GestureType>(param1), param2);
}

void QGestureEvent_AcceptWithQtGestureType(QGestureEvent* self, int param1) {
	self->accept(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_IgnoreWithQtGestureType(QGestureEvent* self, int param1) {
	self->ignore(static_cast<Qt::GestureType>(param1));
}

bool QGestureEvent_IsAcceptedWithQtGestureType(const QGestureEvent* self, int param1) {
	return self->isAccepted(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_SetWidget(QGestureEvent* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QGestureEvent_Widget(const QGestureEvent* self) {
	return self->widget();
}

QPointF* QGestureEvent_MapToGraphicsScene(const QGestureEvent* self, QPointF* gesturePoint) {
	return new QPointF(self->mapToGraphicsScene(*gesturePoint));
}

void QGestureEvent_Delete(QGestureEvent* self) {
	delete self;
}

