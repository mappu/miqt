#include "gen_qbrush.h"
#include "qbrush.h"

#include <QBrush>
#include <QBrushData>
#include <QColor>
#include <QConicalGradient>
#include <QGradient>
#include <QImage>
#include <QLinearGradient>
#include <QMatrix>
#include <QPixmap>
#include <QPointF>
#include <QRadialGradient>
#include <QTransform>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QBrush* QBrush_new() {
	return new QBrush();
}

QBrush* QBrush_new2(QColor* color, QPixmap* pixmap) {
	return new QBrush(*color, *pixmap);
}

QBrush* QBrush_new3(QPixmap* pixmap) {
	return new QBrush(*pixmap);
}

QBrush* QBrush_new4(QImage* image) {
	return new QBrush(*image);
}

QBrush* QBrush_new5(QBrush* brush) {
	return new QBrush(*brush);
}

QBrush* QBrush_new6(QGradient* gradient) {
	return new QBrush(*gradient);
}

void QBrush_OperatorAssign(QBrush* self, QBrush* brush) {
	self->operator=(*brush);
}

void QBrush_Swap(QBrush* self, QBrush* other) {
	self->swap(*other);
}

QMatrix* QBrush_Matrix(QBrush* self) {
	const QMatrix& ret = self->matrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&ret);
}

void QBrush_SetMatrix(QBrush* self, QMatrix* mat) {
	self->setMatrix(*mat);
}

QTransform* QBrush_Transform(QBrush* self) {
	QTransform ret = self->transform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

void QBrush_SetTransform(QBrush* self, QTransform* transform) {
	self->setTransform(*transform);
}

QPixmap* QBrush_Texture(QBrush* self) {
	QPixmap ret = self->texture();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QBrush_SetTexture(QBrush* self, QPixmap* pixmap) {
	self->setTexture(*pixmap);
}

QImage* QBrush_TextureImage(QBrush* self) {
	QImage ret = self->textureImage();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

void QBrush_SetTextureImage(QBrush* self, QImage* image) {
	self->setTextureImage(*image);
}

QColor* QBrush_Color(QBrush* self) {
	const QColor& ret = self->color();
	// Cast returned reference into pointer
	return const_cast<QColor*>(&ret);
}

void QBrush_SetColor(QBrush* self, QColor* color) {
	self->setColor(*color);
}

QGradient* QBrush_Gradient(QBrush* self) {
	return (QGradient*) self->gradient();
}

bool QBrush_IsOpaque(QBrush* self) {
	return self->isOpaque();
}

bool QBrush_OperatorEqual(QBrush* self, QBrush* b) {
	return self->operator==(*b);
}

bool QBrush_OperatorNotEqual(QBrush* self, QBrush* b) {
	return self->operator!=(*b);
}

bool QBrush_IsDetached(QBrush* self) {
	return self->isDetached();
}

void QBrush_Delete(QBrush* self) {
	delete self;
}

QBrushData* QBrushData_new(QBrushData* param1) {
	return new QBrushData(*param1);
}

void QBrushData_OperatorAssign(QBrushData* self, QBrushData* param1) {
	self->operator=(*param1);
}

void QBrushData_Delete(QBrushData* self) {
	delete self;
}

QGradient* QGradient_new() {
	return new QGradient();
}

QGradient* QGradient_new2(QGradient* param1) {
	return new QGradient(*param1);
}

void QGradient_SetColorAt(QGradient* self, double pos, QColor* color) {
	self->setColorAt(static_cast<qreal>(pos), *color);
}

bool QGradient_OperatorEqual(QGradient* self, QGradient* gradient) {
	return self->operator==(*gradient);
}

bool QGradient_OperatorNotEqual(QGradient* self, QGradient* other) {
	return self->operator!=(*other);
}

void QGradient_Delete(QGradient* self) {
	delete self;
}

QLinearGradient* QLinearGradient_new() {
	return new QLinearGradient();
}

QLinearGradient* QLinearGradient_new2(QPointF* start, QPointF* finalStop) {
	return new QLinearGradient(*start, *finalStop);
}

QLinearGradient* QLinearGradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop) {
	return new QLinearGradient(static_cast<qreal>(xStart), static_cast<qreal>(yStart), static_cast<qreal>(xFinalStop), static_cast<qreal>(yFinalStop));
}

QLinearGradient* QLinearGradient_new4(QLinearGradient* param1) {
	return new QLinearGradient(*param1);
}

QPointF* QLinearGradient_Start(QLinearGradient* self) {
	QPointF ret = self->start();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QLinearGradient_SetStart(QLinearGradient* self, QPointF* start) {
	self->setStart(*start);
}

void QLinearGradient_SetStart2(QLinearGradient* self, double x, double y) {
	self->setStart(static_cast<qreal>(x), static_cast<qreal>(y));
}

QPointF* QLinearGradient_FinalStop(QLinearGradient* self) {
	QPointF ret = self->finalStop();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QLinearGradient_SetFinalStop(QLinearGradient* self, QPointF* stop) {
	self->setFinalStop(*stop);
}

void QLinearGradient_SetFinalStop2(QLinearGradient* self, double x, double y) {
	self->setFinalStop(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QLinearGradient_Delete(QLinearGradient* self) {
	delete self;
}

QRadialGradient* QRadialGradient_new() {
	return new QRadialGradient();
}

QRadialGradient* QRadialGradient_new2(QPointF* center, double radius, QPointF* focalPoint) {
	return new QRadialGradient(*center, static_cast<qreal>(radius), *focalPoint);
}

QRadialGradient* QRadialGradient_new3(double cx, double cy, double radius, double fx, double fy) {
	return new QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(radius), static_cast<qreal>(fx), static_cast<qreal>(fy));
}

QRadialGradient* QRadialGradient_new4(QPointF* center, double radius) {
	return new QRadialGradient(*center, static_cast<qreal>(radius));
}

QRadialGradient* QRadialGradient_new5(double cx, double cy, double radius) {
	return new QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(radius));
}

QRadialGradient* QRadialGradient_new6(QPointF* center, double centerRadius, QPointF* focalPoint, double focalRadius) {
	return new QRadialGradient(*center, static_cast<qreal>(centerRadius), *focalPoint, static_cast<qreal>(focalRadius));
}

QRadialGradient* QRadialGradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius) {
	return new QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(centerRadius), static_cast<qreal>(fx), static_cast<qreal>(fy), static_cast<qreal>(focalRadius));
}

QRadialGradient* QRadialGradient_new8(QRadialGradient* param1) {
	return new QRadialGradient(*param1);
}

QPointF* QRadialGradient_Center(QRadialGradient* self) {
	QPointF ret = self->center();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QRadialGradient_SetCenter(QRadialGradient* self, QPointF* center) {
	self->setCenter(*center);
}

void QRadialGradient_SetCenter2(QRadialGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

QPointF* QRadialGradient_FocalPoint(QRadialGradient* self) {
	QPointF ret = self->focalPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QRadialGradient_SetFocalPoint(QRadialGradient* self, QPointF* focalPoint) {
	self->setFocalPoint(*focalPoint);
}

void QRadialGradient_SetFocalPoint2(QRadialGradient* self, double x, double y) {
	self->setFocalPoint(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QRadialGradient_Radius(QRadialGradient* self) {
	return self->radius();
}

void QRadialGradient_SetRadius(QRadialGradient* self, double radius) {
	self->setRadius(static_cast<qreal>(radius));
}

double QRadialGradient_CenterRadius(QRadialGradient* self) {
	return self->centerRadius();
}

void QRadialGradient_SetCenterRadius(QRadialGradient* self, double radius) {
	self->setCenterRadius(static_cast<qreal>(radius));
}

double QRadialGradient_FocalRadius(QRadialGradient* self) {
	return self->focalRadius();
}

void QRadialGradient_SetFocalRadius(QRadialGradient* self, double radius) {
	self->setFocalRadius(static_cast<qreal>(radius));
}

void QRadialGradient_Delete(QRadialGradient* self) {
	delete self;
}

QConicalGradient* QConicalGradient_new() {
	return new QConicalGradient();
}

QConicalGradient* QConicalGradient_new2(QPointF* center, double startAngle) {
	return new QConicalGradient(*center, static_cast<qreal>(startAngle));
}

QConicalGradient* QConicalGradient_new3(double cx, double cy, double startAngle) {
	return new QConicalGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(startAngle));
}

QConicalGradient* QConicalGradient_new4(QConicalGradient* param1) {
	return new QConicalGradient(*param1);
}

QPointF* QConicalGradient_Center(QConicalGradient* self) {
	QPointF ret = self->center();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QConicalGradient_SetCenter(QConicalGradient* self, QPointF* center) {
	self->setCenter(*center);
}

void QConicalGradient_SetCenter2(QConicalGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QConicalGradient_Angle(QConicalGradient* self) {
	return self->angle();
}

void QConicalGradient_SetAngle(QConicalGradient* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

void QConicalGradient_Delete(QConicalGradient* self) {
	delete self;
}

