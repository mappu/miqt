#include <QBrush>
#include <QBrushData>
#include <QColor>
#include <QConicalGradient>
#include <QGradient>
#define WORKAROUND_INNER_CLASS_DEFINITION_QGradient__QGradientData
#include <QImage>
#include <QLinearGradient>
#include <QMatrix>
#include <QPixmap>
#include <QPointF>
#include <QRadialGradient>
#include <QTransform>
#include "qbrush.h"
#include "gen_qbrush.h"
#include "_cgo_export.h"

QBrush* QBrush_new() {
	return new QBrush();
}

QBrush* QBrush_new2(uintptr_t bs) {
	return new QBrush(static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new3(QColor* color) {
	return new QBrush(*color);
}

QBrush* QBrush_new4(uintptr_t color) {
	return new QBrush(static_cast<Qt::GlobalColor>(color));
}

QBrush* QBrush_new5(QColor* color, QPixmap* pixmap) {
	return new QBrush(*color, *pixmap);
}

QBrush* QBrush_new6(uintptr_t color, QPixmap* pixmap) {
	return new QBrush(static_cast<Qt::GlobalColor>(color), *pixmap);
}

QBrush* QBrush_new7(QPixmap* pixmap) {
	return new QBrush(*pixmap);
}

QBrush* QBrush_new8(QImage* image) {
	return new QBrush(*image);
}

QBrush* QBrush_new9(QBrush* brush) {
	return new QBrush(*brush);
}

QBrush* QBrush_new10(QGradient* gradient) {
	return new QBrush(*gradient);
}

QBrush* QBrush_new11(QColor* color, uintptr_t bs) {
	return new QBrush(*color, static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new12(uintptr_t color, uintptr_t bs) {
	return new QBrush(static_cast<Qt::GlobalColor>(color), static_cast<Qt::BrushStyle>(bs));
}

void QBrush_OperatorAssign(QBrush* self, QBrush* brush) {
	self->operator=(*brush);
}

void QBrush_Swap(QBrush* self, QBrush* other) {
	self->swap(*other);
}

uintptr_t QBrush_Style(const QBrush* self) {
	Qt::BrushStyle _ret = self->style();
	return static_cast<uintptr_t>(_ret);
}

void QBrush_SetStyle(QBrush* self, uintptr_t style) {
	self->setStyle(static_cast<Qt::BrushStyle>(style));
}

QMatrix* QBrush_Matrix(const QBrush* self) {
	const QMatrix& _ret = self->matrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&_ret);
}

void QBrush_SetMatrix(QBrush* self, QMatrix* mat) {
	self->setMatrix(*mat);
}

QTransform* QBrush_Transform(const QBrush* self) {
	QTransform _ret = self->transform();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

void QBrush_SetTransform(QBrush* self, QTransform* transform) {
	self->setTransform(*transform);
}

QPixmap* QBrush_Texture(const QBrush* self) {
	QPixmap _ret = self->texture();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

void QBrush_SetTexture(QBrush* self, QPixmap* pixmap) {
	self->setTexture(*pixmap);
}

QImage* QBrush_TextureImage(const QBrush* self) {
	QImage _ret = self->textureImage();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(_ret));
}

void QBrush_SetTextureImage(QBrush* self, QImage* image) {
	self->setTextureImage(*image);
}

QColor* QBrush_Color(const QBrush* self) {
	const QColor& _ret = self->color();
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

void QBrush_SetColor(QBrush* self, QColor* color) {
	self->setColor(*color);
}

void QBrush_SetColorWithColor(QBrush* self, uintptr_t color) {
	self->setColor(static_cast<Qt::GlobalColor>(color));
}

QGradient* QBrush_Gradient(const QBrush* self) {
	return (QGradient*) self->gradient();
}

bool QBrush_IsOpaque(const QBrush* self) {
	return self->isOpaque();
}

bool QBrush_OperatorEqual(const QBrush* self, QBrush* b) {
	return self->operator==(*b);
}

bool QBrush_OperatorNotEqual(const QBrush* self, QBrush* b) {
	return self->operator!=(*b);
}

bool QBrush_IsDetached(const QBrush* self) {
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

QGradient* QGradient_new2(uintptr_t param1) {
	return new QGradient(static_cast<QGradient::Preset>(param1));
}

QGradient* QGradient_new3(QGradient* param1) {
	return new QGradient(*param1);
}

uintptr_t QGradient_Type(const QGradient* self) {
	QGradient::Type _ret = self->type();
	return static_cast<uintptr_t>(_ret);
}

void QGradient_SetSpread(QGradient* self, uintptr_t spread) {
	self->setSpread(static_cast<QGradient::Spread>(spread));
}

uintptr_t QGradient_Spread(const QGradient* self) {
	QGradient::Spread _ret = self->spread();
	return static_cast<uintptr_t>(_ret);
}

void QGradient_SetColorAt(QGradient* self, double pos, QColor* color) {
	self->setColorAt(static_cast<qreal>(pos), *color);
}

uintptr_t QGradient_CoordinateMode(const QGradient* self) {
	QGradient::CoordinateMode _ret = self->coordinateMode();
	return static_cast<uintptr_t>(_ret);
}

void QGradient_SetCoordinateMode(QGradient* self, uintptr_t mode) {
	self->setCoordinateMode(static_cast<QGradient::CoordinateMode>(mode));
}

uintptr_t QGradient_InterpolationMode(const QGradient* self) {
	QGradient::InterpolationMode _ret = self->interpolationMode();
	return static_cast<uintptr_t>(_ret);
}

void QGradient_SetInterpolationMode(QGradient* self, uintptr_t mode) {
	self->setInterpolationMode(static_cast<QGradient::InterpolationMode>(mode));
}

bool QGradient_OperatorEqual(const QGradient* self, QGradient* gradient) {
	return self->operator==(*gradient);
}

bool QGradient_OperatorNotEqual(const QGradient* self, QGradient* other) {
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

QPointF* QLinearGradient_Start(const QLinearGradient* self) {
	QPointF _ret = self->start();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

void QLinearGradient_SetStart(QLinearGradient* self, QPointF* start) {
	self->setStart(*start);
}

void QLinearGradient_SetStart2(QLinearGradient* self, double x, double y) {
	self->setStart(static_cast<qreal>(x), static_cast<qreal>(y));
}

QPointF* QLinearGradient_FinalStop(const QLinearGradient* self) {
	QPointF _ret = self->finalStop();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
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

QPointF* QRadialGradient_Center(const QRadialGradient* self) {
	QPointF _ret = self->center();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

void QRadialGradient_SetCenter(QRadialGradient* self, QPointF* center) {
	self->setCenter(*center);
}

void QRadialGradient_SetCenter2(QRadialGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

QPointF* QRadialGradient_FocalPoint(const QRadialGradient* self) {
	QPointF _ret = self->focalPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

void QRadialGradient_SetFocalPoint(QRadialGradient* self, QPointF* focalPoint) {
	self->setFocalPoint(*focalPoint);
}

void QRadialGradient_SetFocalPoint2(QRadialGradient* self, double x, double y) {
	self->setFocalPoint(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QRadialGradient_Radius(const QRadialGradient* self) {
	return self->radius();
}

void QRadialGradient_SetRadius(QRadialGradient* self, double radius) {
	self->setRadius(static_cast<qreal>(radius));
}

double QRadialGradient_CenterRadius(const QRadialGradient* self) {
	return self->centerRadius();
}

void QRadialGradient_SetCenterRadius(QRadialGradient* self, double radius) {
	self->setCenterRadius(static_cast<qreal>(radius));
}

double QRadialGradient_FocalRadius(const QRadialGradient* self) {
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

QPointF* QConicalGradient_Center(const QConicalGradient* self) {
	QPointF _ret = self->center();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(_ret));
}

void QConicalGradient_SetCenter(QConicalGradient* self, QPointF* center) {
	self->setCenter(*center);
}

void QConicalGradient_SetCenter2(QConicalGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QConicalGradient_Angle(const QConicalGradient* self) {
	return self->angle();
}

void QConicalGradient_SetAngle(QConicalGradient* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

void QConicalGradient_Delete(QConicalGradient* self) {
	delete self;
}

QGradient__QGradientData* QGradient__QGradientData_new(QGradient__QGradientData* param1) {
	return new QGradient::QGradientData(*param1);
}

void QGradient__QGradientData_Delete(QGradient__QGradientData* self) {
	delete self;
}

