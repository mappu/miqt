#include <QGraphicsItem>
#include <QGraphicsItemAnimation>
#include <QMatrix>
#include <QMetaObject>
#include <QObject>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimeLine>
#include <QTransform>
#include "qgraphicsitemanimation.h"

#include "gen_qgraphicsitemanimation.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGraphicsItemAnimation* QGraphicsItemAnimation_new() {
	return new QGraphicsItemAnimation();
}

QGraphicsItemAnimation* QGraphicsItemAnimation_new2(QObject* parent) {
	return new QGraphicsItemAnimation(parent);
}

QMetaObject* QGraphicsItemAnimation_MetaObject(QGraphicsItemAnimation* self) {
	return (QMetaObject*) const_cast<const QGraphicsItemAnimation*>(self)->metaObject();
}

void QGraphicsItemAnimation_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsItemAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsItemAnimation_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsItemAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QGraphicsItem* QGraphicsItemAnimation_Item(QGraphicsItemAnimation* self) {
	return const_cast<const QGraphicsItemAnimation*>(self)->item();
}

void QGraphicsItemAnimation_SetItem(QGraphicsItemAnimation* self, QGraphicsItem* item) {
	self->setItem(item);
}

QTimeLine* QGraphicsItemAnimation_TimeLine(QGraphicsItemAnimation* self) {
	return const_cast<const QGraphicsItemAnimation*>(self)->timeLine();
}

void QGraphicsItemAnimation_SetTimeLine(QGraphicsItemAnimation* self, QTimeLine* timeLine) {
	self->setTimeLine(timeLine);
}

QPointF* QGraphicsItemAnimation_PosAt(QGraphicsItemAnimation* self, double step) {
	QPointF ret = const_cast<const QGraphicsItemAnimation*>(self)->posAt(static_cast<qreal>(step));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QGraphicsItemAnimation_SetPosAt(QGraphicsItemAnimation* self, double step, QPointF* pos) {
	self->setPosAt(static_cast<qreal>(step), *pos);
}

QMatrix* QGraphicsItemAnimation_MatrixAt(QGraphicsItemAnimation* self, double step) {
	QMatrix ret = const_cast<const QGraphicsItemAnimation*>(self)->matrixAt(static_cast<qreal>(step));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

QTransform* QGraphicsItemAnimation_TransformAt(QGraphicsItemAnimation* self, double step) {
	QTransform ret = const_cast<const QGraphicsItemAnimation*>(self)->transformAt(static_cast<qreal>(step));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

double QGraphicsItemAnimation_RotationAt(QGraphicsItemAnimation* self, double step) {
	return const_cast<const QGraphicsItemAnimation*>(self)->rotationAt(static_cast<qreal>(step));
}

void QGraphicsItemAnimation_SetRotationAt(QGraphicsItemAnimation* self, double step, double angle) {
	self->setRotationAt(static_cast<qreal>(step), static_cast<qreal>(angle));
}

double QGraphicsItemAnimation_XTranslationAt(QGraphicsItemAnimation* self, double step) {
	return const_cast<const QGraphicsItemAnimation*>(self)->xTranslationAt(static_cast<qreal>(step));
}

double QGraphicsItemAnimation_YTranslationAt(QGraphicsItemAnimation* self, double step) {
	return const_cast<const QGraphicsItemAnimation*>(self)->yTranslationAt(static_cast<qreal>(step));
}

void QGraphicsItemAnimation_SetTranslationAt(QGraphicsItemAnimation* self, double step, double dx, double dy) {
	self->setTranslationAt(static_cast<qreal>(step), static_cast<qreal>(dx), static_cast<qreal>(dy));
}

double QGraphicsItemAnimation_VerticalScaleAt(QGraphicsItemAnimation* self, double step) {
	return const_cast<const QGraphicsItemAnimation*>(self)->verticalScaleAt(static_cast<qreal>(step));
}

double QGraphicsItemAnimation_HorizontalScaleAt(QGraphicsItemAnimation* self, double step) {
	return const_cast<const QGraphicsItemAnimation*>(self)->horizontalScaleAt(static_cast<qreal>(step));
}

void QGraphicsItemAnimation_SetScaleAt(QGraphicsItemAnimation* self, double step, double sx, double sy) {
	self->setScaleAt(static_cast<qreal>(step), static_cast<qreal>(sx), static_cast<qreal>(sy));
}

double QGraphicsItemAnimation_VerticalShearAt(QGraphicsItemAnimation* self, double step) {
	return const_cast<const QGraphicsItemAnimation*>(self)->verticalShearAt(static_cast<qreal>(step));
}

double QGraphicsItemAnimation_HorizontalShearAt(QGraphicsItemAnimation* self, double step) {
	return const_cast<const QGraphicsItemAnimation*>(self)->horizontalShearAt(static_cast<qreal>(step));
}

void QGraphicsItemAnimation_SetShearAt(QGraphicsItemAnimation* self, double step, double sh, double sv) {
	self->setShearAt(static_cast<qreal>(step), static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QGraphicsItemAnimation_Clear(QGraphicsItemAnimation* self) {
	self->clear();
}

void QGraphicsItemAnimation_SetStep(QGraphicsItemAnimation* self, double x) {
	self->setStep(static_cast<qreal>(x));
}

void QGraphicsItemAnimation_Reset(QGraphicsItemAnimation* self) {
	self->reset();
}

void QGraphicsItemAnimation_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsItemAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsItemAnimation_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsItemAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsItemAnimation_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsItemAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsItemAnimation_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGraphicsItemAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGraphicsItemAnimation_Delete(QGraphicsItemAnimation* self) {
	delete self;
}

