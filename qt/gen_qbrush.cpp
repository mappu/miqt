#include <QBrush>
#include <QBrushData>
#include <QColor>
#include <QConicalGradient>
#include <QGradient>
#define WORKAROUND_INNER_CLASS_DEFINITION_QGradient__QGradientData
#include <QImage>
#include <QLinearGradient>
#include <QList>
#include <QMatrix>
#include <QPair>
#include <QPixmap>
#include <QPointF>
#include <QRadialGradient>
#include <QTransform>
#include <QVariant>
#include <qbrush.h>
#include "gen_qbrush.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QBrush* QBrush_new() {
	return new QBrush();
}

QBrush* QBrush_new2(int bs) {
	return new QBrush(static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new3(QColor* color) {
	return new QBrush(*color);
}

QBrush* QBrush_new4(int color) {
	return new QBrush(static_cast<Qt::GlobalColor>(color));
}

QBrush* QBrush_new5(QColor* color, QPixmap* pixmap) {
	return new QBrush(*color, *pixmap);
}

QBrush* QBrush_new6(int color, QPixmap* pixmap) {
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

QBrush* QBrush_new11(QColor* color, int bs) {
	return new QBrush(*color, static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new12(int color, int bs) {
	return new QBrush(static_cast<Qt::GlobalColor>(color), static_cast<Qt::BrushStyle>(bs));
}

void QBrush_OperatorAssign(QBrush* self, QBrush* brush) {
	self->operator=(*brush);
}

void QBrush_Swap(QBrush* self, QBrush* other) {
	self->swap(*other);
}

QVariant* QBrush_ToQVariant(const QBrush* self) {
	return new QVariant(self->operator QVariant());
}

int QBrush_Style(const QBrush* self) {
	Qt::BrushStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QBrush_SetStyle(QBrush* self, int style) {
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
	return new QTransform(self->transform());
}

void QBrush_SetTransform(QBrush* self, QTransform* transform) {
	self->setTransform(*transform);
}

QPixmap* QBrush_Texture(const QBrush* self) {
	return new QPixmap(self->texture());
}

void QBrush_SetTexture(QBrush* self, QPixmap* pixmap) {
	self->setTexture(*pixmap);
}

QImage* QBrush_TextureImage(const QBrush* self) {
	return new QImage(self->textureImage());
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

void QBrush_SetColorWithColor(QBrush* self, int color) {
	self->setColor(static_cast<Qt::GlobalColor>(color));
}

QGradient* QBrush_Gradient(const QBrush* self) {
	return (QGradient*) self->gradient();
}

bool QBrush_IsOpaque(const QBrush* self) {
	return self->isOpaque();
}

bool QBrush_OperatorEqual(const QBrush* self, QBrush* b) {
	return (*self == *b);
}

bool QBrush_OperatorNotEqual(const QBrush* self, QBrush* b) {
	return (*self != *b);
}

bool QBrush_IsDetached(const QBrush* self) {
	return self->isDetached();
}

void QBrush_Delete(QBrush* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QBrush*>( self );
	} else {
		delete self;
	}
}

QBrushData* QBrushData_new(QBrushData* param1) {
	return new QBrushData(*param1);
}

void QBrushData_OperatorAssign(QBrushData* self, QBrushData* param1) {
	self->operator=(*param1);
}

void QBrushData_Delete(QBrushData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QBrushData*>( self );
	} else {
		delete self;
	}
}

QGradient* QGradient_new() {
	return new QGradient();
}

QGradient* QGradient_new2(int param1) {
	return new QGradient(static_cast<QGradient::Preset>(param1));
}

QGradient* QGradient_new3(QGradient* param1) {
	return new QGradient(*param1);
}

int QGradient_Type(const QGradient* self) {
	QGradient::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QGradient_SetSpread(QGradient* self, int spread) {
	self->setSpread(static_cast<QGradient::Spread>(spread));
}

int QGradient_Spread(const QGradient* self) {
	QGradient::Spread _ret = self->spread();
	return static_cast<int>(_ret);
}

void QGradient_SetColorAt(QGradient* self, double pos, QColor* color) {
	self->setColorAt(static_cast<qreal>(pos), *color);
}

void QGradient_SetStops(QGradient* self, struct miqt_array /* of struct miqt_map  tuple of double and QColor*   */  stops) {
	QGradientStops stops_QList;
	stops_QList.reserve(stops.len);
	struct miqt_map /* tuple of double and QColor* */ * stops_arr = static_cast<struct miqt_map /* tuple of double and QColor* */ *>(stops.data);
	for(size_t i = 0; i < stops.len; ++i) {
		QPair<double, QColor> stops_arr_i_QPair;
		double* stops_arr_i_first_arr = static_cast<double*>(stops_arr[i].keys);
		QColor** stops_arr_i_second_arr = static_cast<QColor**>(stops_arr[i].values);
		stops_arr_i_QPair.first = static_cast<double>(stops_arr_i_first_arr[0]);
		stops_arr_i_QPair.second = *(stops_arr_i_second_arr[0]);
		stops_QList.push_back(stops_arr_i_QPair);
	}
	self->setStops(stops_QList);
}

struct miqt_array /* of struct miqt_map  tuple of double and QColor*   */  QGradient_Stops(const QGradient* self) {
	QGradientStops _ret = self->stops();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and QColor* */ * _arr = static_cast<struct miqt_map /* tuple of double and QColor* */ *>(malloc(sizeof(struct miqt_map /* tuple of double and QColor* */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, QColor> _vv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _vv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		QColor** _vv_second_arr = static_cast<QColor**>(malloc(sizeof(QColor*)));
		_vv_first_arr[0] = _vv_ret.first;
		_vv_second_arr[0] = new QColor(_vv_ret.second);
		struct miqt_map _vv_out;
		_vv_out.len = 1;
		_vv_out.keys = static_cast<void*>(_vv_first_arr);
		_vv_out.values = static_cast<void*>(_vv_second_arr);
		_arr[i] = _vv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QGradient_CoordinateMode(const QGradient* self) {
	QGradient::CoordinateMode _ret = self->coordinateMode();
	return static_cast<int>(_ret);
}

void QGradient_SetCoordinateMode(QGradient* self, int mode) {
	self->setCoordinateMode(static_cast<QGradient::CoordinateMode>(mode));
}

int QGradient_InterpolationMode(const QGradient* self) {
	QGradient::InterpolationMode _ret = self->interpolationMode();
	return static_cast<int>(_ret);
}

void QGradient_SetInterpolationMode(QGradient* self, int mode) {
	self->setInterpolationMode(static_cast<QGradient::InterpolationMode>(mode));
}

bool QGradient_OperatorEqual(const QGradient* self, QGradient* gradient) {
	return (*self == *gradient);
}

bool QGradient_OperatorNotEqual(const QGradient* self, QGradient* other) {
	return (*self != *other);
}

void QGradient_Delete(QGradient* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QGradient*>( self );
	} else {
		delete self;
	}
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

void QLinearGradient_virtbase(QLinearGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

QPointF* QLinearGradient_Start(const QLinearGradient* self) {
	return new QPointF(self->start());
}

void QLinearGradient_SetStart(QLinearGradient* self, QPointF* start) {
	self->setStart(*start);
}

void QLinearGradient_SetStart2(QLinearGradient* self, double x, double y) {
	self->setStart(static_cast<qreal>(x), static_cast<qreal>(y));
}

QPointF* QLinearGradient_FinalStop(const QLinearGradient* self) {
	return new QPointF(self->finalStop());
}

void QLinearGradient_SetFinalStop(QLinearGradient* self, QPointF* stop) {
	self->setFinalStop(*stop);
}

void QLinearGradient_SetFinalStop2(QLinearGradient* self, double x, double y) {
	self->setFinalStop(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QLinearGradient_Delete(QLinearGradient* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QLinearGradient*>( self );
	} else {
		delete self;
	}
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

void QRadialGradient_virtbase(QRadialGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

QPointF* QRadialGradient_Center(const QRadialGradient* self) {
	return new QPointF(self->center());
}

void QRadialGradient_SetCenter(QRadialGradient* self, QPointF* center) {
	self->setCenter(*center);
}

void QRadialGradient_SetCenter2(QRadialGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

QPointF* QRadialGradient_FocalPoint(const QRadialGradient* self) {
	return new QPointF(self->focalPoint());
}

void QRadialGradient_SetFocalPoint(QRadialGradient* self, QPointF* focalPoint) {
	self->setFocalPoint(*focalPoint);
}

void QRadialGradient_SetFocalPoint2(QRadialGradient* self, double x, double y) {
	self->setFocalPoint(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QRadialGradient_Radius(const QRadialGradient* self) {
	qreal _ret = self->radius();
	return static_cast<double>(_ret);
}

void QRadialGradient_SetRadius(QRadialGradient* self, double radius) {
	self->setRadius(static_cast<qreal>(radius));
}

double QRadialGradient_CenterRadius(const QRadialGradient* self) {
	qreal _ret = self->centerRadius();
	return static_cast<double>(_ret);
}

void QRadialGradient_SetCenterRadius(QRadialGradient* self, double radius) {
	self->setCenterRadius(static_cast<qreal>(radius));
}

double QRadialGradient_FocalRadius(const QRadialGradient* self) {
	qreal _ret = self->focalRadius();
	return static_cast<double>(_ret);
}

void QRadialGradient_SetFocalRadius(QRadialGradient* self, double radius) {
	self->setFocalRadius(static_cast<qreal>(radius));
}

void QRadialGradient_Delete(QRadialGradient* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QRadialGradient*>( self );
	} else {
		delete self;
	}
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

void QConicalGradient_virtbase(QConicalGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

QPointF* QConicalGradient_Center(const QConicalGradient* self) {
	return new QPointF(self->center());
}

void QConicalGradient_SetCenter(QConicalGradient* self, QPointF* center) {
	self->setCenter(*center);
}

void QConicalGradient_SetCenter2(QConicalGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QConicalGradient_Angle(const QConicalGradient* self) {
	qreal _ret = self->angle();
	return static_cast<double>(_ret);
}

void QConicalGradient_SetAngle(QConicalGradient* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

void QConicalGradient_Delete(QConicalGradient* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QConicalGradient*>( self );
	} else {
		delete self;
	}
}

QGradient__QGradientData* QGradient__QGradientData_new(QGradient__QGradientData* param1) {
	return new QGradient::QGradientData(*param1);
}

void QGradient__QGradientData_OperatorAssign(QGradient__QGradientData* self, QGradient__QGradientData* param1) {
	self->operator=(*param1);
}

void QGradient__QGradientData_Delete(QGradient__QGradientData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QGradient::QGradientData*>( self );
	} else {
		delete self;
	}
}

