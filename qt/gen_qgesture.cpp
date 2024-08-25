#include "gen_qgesture.h"
#include "qgesture.h"

#include <QGesture>
#include <QGestureEvent>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QPanGesture>
#include <QPinchGesture>
#include <QPointF>
#include <QString>
#include <QSwipeGesture>
#include <QTapAndHoldGesture>
#include <QTapGesture>
#include <QWidget>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGesture* QGesture_new() {
	return new QGesture();
}

QGesture* QGesture_new2(QObject* parent) {
	return new QGesture(parent);
}

QMetaObject* QGesture_MetaObject(QGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void QGesture_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGesture_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPointF* QGesture_HotSpot(QGesture* self) {
	QPointF ret = self->hotSpot();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGesture_SetHotSpot(QGesture* self, QPointF* value) {
	self->setHotSpot(*value);
}

bool QGesture_HasHotSpot(QGesture* self) {
	return self->hasHotSpot();
}

void QGesture_UnsetHotSpot(QGesture* self) {
	self->unsetHotSpot();
}

void QGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QPanGesture_MetaObject(QPanGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void QPanGesture_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPanGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPanGesture_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPanGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPointF* QPanGesture_LastOffset(QPanGesture* self) {
	QPointF ret = self->lastOffset();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QPanGesture_Offset(QPanGesture* self) {
	QPointF ret = self->offset();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QPanGesture_Delta(QPanGesture* self) {
	QPointF ret = self->delta();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

double QPanGesture_Acceleration(QPanGesture* self) {
	return self->acceleration();
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

void QPanGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPanGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPanGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPanGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPanGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPanGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPanGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPanGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QPinchGesture_MetaObject(QPinchGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void QPinchGesture_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPinchGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPinchGesture_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QPinchGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPointF* QPinchGesture_StartCenterPoint(QPinchGesture* self) {
	QPointF ret = self->startCenterPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QPinchGesture_LastCenterPoint(QPinchGesture* self) {
	QPointF ret = self->lastCenterPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QPinchGesture_CenterPoint(QPinchGesture* self) {
	QPointF ret = self->centerPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
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

double QPinchGesture_TotalScaleFactor(QPinchGesture* self) {
	return self->totalScaleFactor();
}

double QPinchGesture_LastScaleFactor(QPinchGesture* self) {
	return self->lastScaleFactor();
}

double QPinchGesture_ScaleFactor(QPinchGesture* self) {
	return self->scaleFactor();
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

double QPinchGesture_TotalRotationAngle(QPinchGesture* self) {
	return self->totalRotationAngle();
}

double QPinchGesture_LastRotationAngle(QPinchGesture* self) {
	return self->lastRotationAngle();
}

double QPinchGesture_RotationAngle(QPinchGesture* self) {
	return self->rotationAngle();
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

void QPinchGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPinchGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPinchGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPinchGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPinchGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QPinchGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QPinchGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QPinchGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QSwipeGesture_MetaObject(QSwipeGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void QSwipeGesture_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSwipeGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSwipeGesture_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QSwipeGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

double QSwipeGesture_SwipeAngle(QSwipeGesture* self) {
	return self->swipeAngle();
}

void QSwipeGesture_SetSwipeAngle(QSwipeGesture* self, double value) {
	self->setSwipeAngle(static_cast<qreal>(value));
}

void QSwipeGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSwipeGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSwipeGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSwipeGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSwipeGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QSwipeGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QSwipeGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QSwipeGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QTapGesture_MetaObject(QTapGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void QTapGesture_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTapGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTapGesture_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTapGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPointF* QTapGesture_Position(QTapGesture* self) {
	QPointF ret = self->position();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QTapGesture_SetPosition(QTapGesture* self, QPointF* pos) {
	self->setPosition(*pos);
}

void QTapGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTapGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTapGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTapGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTapGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTapGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTapGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTapGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

QMetaObject* QTapAndHoldGesture_MetaObject(QTapAndHoldGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void QTapAndHoldGesture_Tr(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTapAndHoldGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTapAndHoldGesture_TrUtf8(char* s, char** _out, int* _out_Strlen) {
	QString ret = QTapAndHoldGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QPointF* QTapAndHoldGesture_Position(QTapAndHoldGesture* self) {
	QPointF ret = self->position();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
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

void QTapAndHoldGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTapAndHoldGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTapAndHoldGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTapAndHoldGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTapAndHoldGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen) {
	QString ret = QTapAndHoldGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTapAndHoldGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QTapAndHoldGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTapAndHoldGesture_Delete(QTapAndHoldGesture* self) {
	delete self;
}

QGestureEvent* QGestureEvent_new(QGesture** gestures, size_t gestures_len) {
	QList<QGesture *> gestures_QList;
	gestures_QList.reserve(gestures_len);
	for(size_t i = 0; i < gestures_len; ++i) {
		gestures_QList.push_back(gestures[i]);
	}
	return new QGestureEvent(gestures_QList);
}

QGestureEvent* QGestureEvent_new2(QGestureEvent* param1) {
	return new QGestureEvent(*param1);
}

void QGestureEvent_Gestures(QGestureEvent* self, QGesture*** _out, size_t* _out_len) {
	QList<QGesture *> ret = self->gestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** __out = static_cast<QGesture**>(malloc(sizeof(QGesture*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGestureEvent_ActiveGestures(QGestureEvent* self, QGesture*** _out, size_t* _out_len) {
	QList<QGesture *> ret = self->activeGestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** __out = static_cast<QGesture**>(malloc(sizeof(QGesture*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGestureEvent_CanceledGestures(QGestureEvent* self, QGesture*** _out, size_t* _out_len) {
	QList<QGesture *> ret = self->canceledGestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** __out = static_cast<QGesture**>(malloc(sizeof(QGesture*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
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

bool QGestureEvent_IsAccepted(QGestureEvent* self, QGesture* param1) {
	return self->isAccepted(param1);
}

void QGestureEvent_SetWidget(QGestureEvent* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QGestureEvent_Widget(QGestureEvent* self) {
	return self->widget();
}

QPointF* QGestureEvent_MapToGraphicsScene(QGestureEvent* self, QPointF* gesturePoint) {
	QPointF ret = self->mapToGraphicsScene(*gesturePoint);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGestureEvent_Delete(QGestureEvent* self) {
	delete self;
}

