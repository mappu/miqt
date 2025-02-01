#include <QBrush>
#include <QBrushData>
#include <QColor>
#include <QConicalGradient>
#include <QGradient>
#define WORKAROUND_INNER_CLASS_DEFINITION_QGradient__QGradientData
#include <QImage>
#include <QLinearGradient>
#include <QList>
#include <QPair>
#include <QPixmap>
#include <QPointF>
#include <QRadialGradient>
#include <QTransform>
#include <QVariant>
#include <qbrush.h>
#include "gen_qbrush.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

void QBrush_operatorAssign(QBrush* self, QBrush* brush) {
	self->operator=(*brush);
}

void QBrush_swap(QBrush* self, QBrush* other) {
	self->swap(*other);
}

QVariant* QBrush_ToQVariant(const QBrush* self) {
	return new QVariant(self->operator QVariant());
}

int QBrush_style(const QBrush* self) {
	Qt::BrushStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QBrush_setStyle(QBrush* self, int style) {
	self->setStyle(static_cast<Qt::BrushStyle>(style));
}

QTransform* QBrush_transform(const QBrush* self) {
	return new QTransform(self->transform());
}

void QBrush_setTransform(QBrush* self, QTransform* transform) {
	self->setTransform(*transform);
}

QPixmap* QBrush_texture(const QBrush* self) {
	return new QPixmap(self->texture());
}

void QBrush_setTexture(QBrush* self, QPixmap* pixmap) {
	self->setTexture(*pixmap);
}

QImage* QBrush_textureImage(const QBrush* self) {
	return new QImage(self->textureImage());
}

void QBrush_setTextureImage(QBrush* self, QImage* image) {
	self->setTextureImage(*image);
}

QColor* QBrush_color(const QBrush* self) {
	const QColor& _ret = self->color();
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

void QBrush_setColor(QBrush* self, QColor* color) {
	self->setColor(*color);
}

void QBrush_setColorWithColor(QBrush* self, int color) {
	self->setColor(static_cast<Qt::GlobalColor>(color));
}

QGradient* QBrush_gradient(const QBrush* self) {
	return (QGradient*) self->gradient();
}

bool QBrush_isOpaque(const QBrush* self) {
	return self->isOpaque();
}

bool QBrush_operatorEqual(const QBrush* self, QBrush* b) {
	return (*self == *b);
}

bool QBrush_operatorNotEqual(const QBrush* self, QBrush* b) {
	return (*self != *b);
}

bool QBrush_isDetached(const QBrush* self) {
	return self->isDetached();
}

void QBrush_delete(QBrush* self) {
	delete self;
}

QBrushData* QBrushData_new(QBrushData* param1) {
	return new QBrushData(*param1);
}

void QBrushData_operatorAssign(QBrushData* self, QBrushData* param1) {
	self->operator=(*param1);
}

void QBrushData_delete(QBrushData* self) {
	delete self;
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

int QGradient_type(const QGradient* self) {
	QGradient::Type _ret = self->type();
	return static_cast<int>(_ret);
}

void QGradient_setSpread(QGradient* self, int spread) {
	self->setSpread(static_cast<QGradient::Spread>(spread));
}

int QGradient_spread(const QGradient* self) {
	QGradient::Spread _ret = self->spread();
	return static_cast<int>(_ret);
}

void QGradient_setColorAt(QGradient* self, double pos, QColor* color) {
	self->setColorAt(static_cast<qreal>(pos), *color);
}

void QGradient_setStops(QGradient* self, struct miqt_array /* of struct miqt_map  tuple of double and QColor*   */  stops) {
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

struct miqt_array /* of struct miqt_map  tuple of double and QColor*   */  QGradient_stops(const QGradient* self) {
	QGradientStops _ret = self->stops();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and QColor* */ * _arr = static_cast<struct miqt_map /* tuple of double and QColor* */ *>(malloc(sizeof(struct miqt_map /* tuple of double and QColor* */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, QColor> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _lv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		QColor** _lv_second_arr = static_cast<QColor**>(malloc(sizeof(QColor*)));
		_lv_first_arr[0] = _lv_ret.first;
		_lv_second_arr[0] = new QColor(_lv_ret.second);
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QGradient_coordinateMode(const QGradient* self) {
	QGradient::CoordinateMode _ret = self->coordinateMode();
	return static_cast<int>(_ret);
}

void QGradient_setCoordinateMode(QGradient* self, int mode) {
	self->setCoordinateMode(static_cast<QGradient::CoordinateMode>(mode));
}

int QGradient_interpolationMode(const QGradient* self) {
	QGradient::InterpolationMode _ret = self->interpolationMode();
	return static_cast<int>(_ret);
}

void QGradient_setInterpolationMode(QGradient* self, int mode) {
	self->setInterpolationMode(static_cast<QGradient::InterpolationMode>(mode));
}

bool QGradient_operatorEqual(const QGradient* self, QGradient* gradient) {
	return (*self == *gradient);
}

bool QGradient_operatorNotEqual(const QGradient* self, QGradient* other) {
	return (*self != *other);
}

void QGradient_delete(QGradient* self) {
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

void QLinearGradient_virtbase(QLinearGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

QPointF* QLinearGradient_start(const QLinearGradient* self) {
	return new QPointF(self->start());
}

void QLinearGradient_setStart(QLinearGradient* self, QPointF* start) {
	self->setStart(*start);
}

void QLinearGradient_setStart2(QLinearGradient* self, double x, double y) {
	self->setStart(static_cast<qreal>(x), static_cast<qreal>(y));
}

QPointF* QLinearGradient_finalStop(const QLinearGradient* self) {
	return new QPointF(self->finalStop());
}

void QLinearGradient_setFinalStop(QLinearGradient* self, QPointF* stop) {
	self->setFinalStop(*stop);
}

void QLinearGradient_setFinalStop2(QLinearGradient* self, double x, double y) {
	self->setFinalStop(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QLinearGradient_delete(QLinearGradient* self) {
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

void QRadialGradient_virtbase(QRadialGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

QPointF* QRadialGradient_center(const QRadialGradient* self) {
	return new QPointF(self->center());
}

void QRadialGradient_setCenter(QRadialGradient* self, QPointF* center) {
	self->setCenter(*center);
}

void QRadialGradient_setCenter2(QRadialGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

QPointF* QRadialGradient_focalPoint(const QRadialGradient* self) {
	return new QPointF(self->focalPoint());
}

void QRadialGradient_setFocalPoint(QRadialGradient* self, QPointF* focalPoint) {
	self->setFocalPoint(*focalPoint);
}

void QRadialGradient_setFocalPoint2(QRadialGradient* self, double x, double y) {
	self->setFocalPoint(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QRadialGradient_radius(const QRadialGradient* self) {
	qreal _ret = self->radius();
	return static_cast<double>(_ret);
}

void QRadialGradient_setRadius(QRadialGradient* self, double radius) {
	self->setRadius(static_cast<qreal>(radius));
}

double QRadialGradient_centerRadius(const QRadialGradient* self) {
	qreal _ret = self->centerRadius();
	return static_cast<double>(_ret);
}

void QRadialGradient_setCenterRadius(QRadialGradient* self, double radius) {
	self->setCenterRadius(static_cast<qreal>(radius));
}

double QRadialGradient_focalRadius(const QRadialGradient* self) {
	qreal _ret = self->focalRadius();
	return static_cast<double>(_ret);
}

void QRadialGradient_setFocalRadius(QRadialGradient* self, double radius) {
	self->setFocalRadius(static_cast<qreal>(radius));
}

void QRadialGradient_delete(QRadialGradient* self) {
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

void QConicalGradient_virtbase(QConicalGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

QPointF* QConicalGradient_center(const QConicalGradient* self) {
	return new QPointF(self->center());
}

void QConicalGradient_setCenter(QConicalGradient* self, QPointF* center) {
	self->setCenter(*center);
}

void QConicalGradient_setCenter2(QConicalGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

double QConicalGradient_angle(const QConicalGradient* self) {
	qreal _ret = self->angle();
	return static_cast<double>(_ret);
}

void QConicalGradient_setAngle(QConicalGradient* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

void QConicalGradient_delete(QConicalGradient* self) {
	delete self;
}

QGradient__QGradientData* QGradient__QGradientData_new(QGradient__QGradientData* param1) {
	return new QGradient::QGradientData(*param1);
}

void QGradient__QGradientData_delete(QGradient__QGradientData* self) {
	delete self;
}

