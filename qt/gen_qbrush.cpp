#include <QBrush>
#include <QColor>
#include <QConicalGradient>
#include <QGradient>
#define WORKAROUND_INNER_CLASS_DEFINITION_QGradient__QGradientData
#include <QImage>
#include <QLinearGradient>
#include <QMatrix>
#include <QPair>
#include <QPixmap>
#include <QPointF>
#include <QRadialGradient>
#include <QTransform>
#include <QVariant>
#include <QVector>
#include <qbrush.h>
#include "gen_qbrush.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QBrush* QBrush_new() {
	return new (std::nothrow) QBrush();
}

QBrush* QBrush_new2(int bs) {
	return new (std::nothrow) QBrush(static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new3(struct miqt_qcolor color) {
	return new (std::nothrow) QBrush(miqt_from_cabi<QColor>(color));
}

QBrush* QBrush_new4(int color) {
	return new (std::nothrow) QBrush(static_cast<Qt::GlobalColor>(color));
}

QBrush* QBrush_new5(struct miqt_qcolor color, QPixmap* pixmap) {
	return new (std::nothrow) QBrush(miqt_from_cabi<QColor>(color), *pixmap);
}

QBrush* QBrush_new6(int color, QPixmap* pixmap) {
	return new (std::nothrow) QBrush(static_cast<Qt::GlobalColor>(color), *pixmap);
}

QBrush* QBrush_new7(QPixmap* pixmap) {
	return new (std::nothrow) QBrush(*pixmap);
}

QBrush* QBrush_new8(QImage* image) {
	return new (std::nothrow) QBrush(*image);
}

QBrush* QBrush_new9(QBrush* brush) {
	return new (std::nothrow) QBrush(*brush);
}

QBrush* QBrush_new10(QGradient* gradient) {
	return new (std::nothrow) QBrush(*gradient);
}

QBrush* QBrush_new11(struct miqt_qcolor color, int bs) {
	return new (std::nothrow) QBrush(miqt_from_cabi<QColor>(color), static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new12(int color, int bs) {
	return new (std::nothrow) QBrush(static_cast<Qt::GlobalColor>(color), static_cast<Qt::BrushStyle>(bs));
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

QMatrix* QBrush_matrix(const QBrush* self) {
	const QMatrix& _ret = self->matrix();
	// Cast returned reference into pointer
	return const_cast<QMatrix*>(&_ret);
}

void QBrush_setMatrix(QBrush* self, QMatrix* mat) {
	self->setMatrix(*mat);
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

struct miqt_qcolor QBrush_color(const QBrush* self) {
	return miqt_to_cabi<struct miqt_qcolor>(self->color());
}

void QBrush_setColor(QBrush* self, struct miqt_qcolor color) {
	self->setColor(miqt_from_cabi<QColor>(color));
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

QGradient* QGradient_new() {
	return new (std::nothrow) QGradient();
}

QGradient* QGradient_new2(int param1) {
	return new (std::nothrow) QGradient(static_cast<QGradient::Preset>(param1));
}

QGradient* QGradient_new3(QGradient* param1) {
	return new (std::nothrow) QGradient(*param1);
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

void QGradient_setColorAt(QGradient* self, double pos, struct miqt_qcolor color) {
	self->setColorAt(static_cast<qreal>(pos), miqt_from_cabi<QColor>(color));
}

void QGradient_setStops(QGradient* self, struct miqt_array /* of struct miqt_map  tuple of double and struct miqt_qcolor   */  stops) {
	QGradientStops stops_QList;
	stops_QList.reserve(stops.len);
	struct miqt_map /* tuple of double and struct miqt_qcolor */ * stops_arr = static_cast<struct miqt_map /* tuple of double and struct miqt_qcolor */ *>(stops.data);
	for(size_t i = 0; i < stops.len; ++i) {
		QPair<double, QColor> stops_arr_i_QPair;
		double* stops_arr_i_first_arr = static_cast<double*>(stops_arr[i].keys);
		struct miqt_qcolor* stops_arr_i_second_arr = static_cast<struct miqt_qcolor*>(stops_arr[i].values);
		stops_arr_i_QPair.first = static_cast<double>(stops_arr_i_first_arr[0]);
		stops_arr_i_QPair.second = miqt_from_cabi<QColor>(stops_arr_i_second_arr[0]);
		stops_QList.push_back(stops_arr_i_QPair);
	}
	self->setStops(stops_QList);
}

struct miqt_array /* of struct miqt_map  tuple of double and struct miqt_qcolor   */  QGradient_stops(const QGradient* self) {
	QGradientStops _ret = self->stops();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and struct miqt_qcolor */ * _arr = static_cast<struct miqt_map /* tuple of double and struct miqt_qcolor */ *>(malloc(sizeof(struct miqt_map /* tuple of double and struct miqt_qcolor */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, QColor> _vv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _vv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		struct miqt_qcolor* _vv_second_arr = static_cast<struct miqt_qcolor*>(malloc(sizeof(struct miqt_qcolor)));
		_vv_first_arr[0] = _vv_ret.first;
		_vv_second_arr[0] = miqt_to_cabi<struct miqt_qcolor>(_vv_ret.second);
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

void QGradient_operatorAssign(QGradient* self, QGradient* param1) {
	self->operator=(*param1);
}

void QGradient_delete(QGradient* self) {
	delete self;
}

QLinearGradient* QLinearGradient_new() {
	return new (std::nothrow) QLinearGradient();
}

QLinearGradient* QLinearGradient_new2(struct miqt_qpointf start, struct miqt_qpointf finalStop) {
	return new (std::nothrow) QLinearGradient(miqt_from_cabi<QPointF>(start), miqt_from_cabi<QPointF>(finalStop));
}

QLinearGradient* QLinearGradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop) {
	return new (std::nothrow) QLinearGradient(static_cast<qreal>(xStart), static_cast<qreal>(yStart), static_cast<qreal>(xFinalStop), static_cast<qreal>(yFinalStop));
}

QLinearGradient* QLinearGradient_new4(QLinearGradient* param1) {
	return new (std::nothrow) QLinearGradient(*param1);
}

void QLinearGradient_virtbase(QLinearGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

struct miqt_qpointf QLinearGradient_start(const QLinearGradient* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->start());
}

void QLinearGradient_setStart(QLinearGradient* self, struct miqt_qpointf start) {
	self->setStart(miqt_from_cabi<QPointF>(start));
}

void QLinearGradient_setStart2(QLinearGradient* self, double x, double y) {
	self->setStart(static_cast<qreal>(x), static_cast<qreal>(y));
}

struct miqt_qpointf QLinearGradient_finalStop(const QLinearGradient* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->finalStop());
}

void QLinearGradient_setFinalStop(QLinearGradient* self, struct miqt_qpointf stop) {
	self->setFinalStop(miqt_from_cabi<QPointF>(stop));
}

void QLinearGradient_setFinalStop2(QLinearGradient* self, double x, double y) {
	self->setFinalStop(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QLinearGradient_delete(QLinearGradient* self) {
	delete self;
}

QRadialGradient* QRadialGradient_new() {
	return new (std::nothrow) QRadialGradient();
}

QRadialGradient* QRadialGradient_new2(struct miqt_qpointf center, double radius, struct miqt_qpointf focalPoint) {
	return new (std::nothrow) QRadialGradient(miqt_from_cabi<QPointF>(center), static_cast<qreal>(radius), miqt_from_cabi<QPointF>(focalPoint));
}

QRadialGradient* QRadialGradient_new3(double cx, double cy, double radius, double fx, double fy) {
	return new (std::nothrow) QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(radius), static_cast<qreal>(fx), static_cast<qreal>(fy));
}

QRadialGradient* QRadialGradient_new4(struct miqt_qpointf center, double radius) {
	return new (std::nothrow) QRadialGradient(miqt_from_cabi<QPointF>(center), static_cast<qreal>(radius));
}

QRadialGradient* QRadialGradient_new5(double cx, double cy, double radius) {
	return new (std::nothrow) QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(radius));
}

QRadialGradient* QRadialGradient_new6(struct miqt_qpointf center, double centerRadius, struct miqt_qpointf focalPoint, double focalRadius) {
	return new (std::nothrow) QRadialGradient(miqt_from_cabi<QPointF>(center), static_cast<qreal>(centerRadius), miqt_from_cabi<QPointF>(focalPoint), static_cast<qreal>(focalRadius));
}

QRadialGradient* QRadialGradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius) {
	return new (std::nothrow) QRadialGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(centerRadius), static_cast<qreal>(fx), static_cast<qreal>(fy), static_cast<qreal>(focalRadius));
}

QRadialGradient* QRadialGradient_new8(QRadialGradient* param1) {
	return new (std::nothrow) QRadialGradient(*param1);
}

void QRadialGradient_virtbase(QRadialGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

struct miqt_qpointf QRadialGradient_center(const QRadialGradient* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->center());
}

void QRadialGradient_setCenter(QRadialGradient* self, struct miqt_qpointf center) {
	self->setCenter(miqt_from_cabi<QPointF>(center));
}

void QRadialGradient_setCenter2(QRadialGradient* self, double x, double y) {
	self->setCenter(static_cast<qreal>(x), static_cast<qreal>(y));
}

struct miqt_qpointf QRadialGradient_focalPoint(const QRadialGradient* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->focalPoint());
}

void QRadialGradient_setFocalPoint(QRadialGradient* self, struct miqt_qpointf focalPoint) {
	self->setFocalPoint(miqt_from_cabi<QPointF>(focalPoint));
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
	return new (std::nothrow) QConicalGradient();
}

QConicalGradient* QConicalGradient_new2(struct miqt_qpointf center, double startAngle) {
	return new (std::nothrow) QConicalGradient(miqt_from_cabi<QPointF>(center), static_cast<qreal>(startAngle));
}

QConicalGradient* QConicalGradient_new3(double cx, double cy, double startAngle) {
	return new (std::nothrow) QConicalGradient(static_cast<qreal>(cx), static_cast<qreal>(cy), static_cast<qreal>(startAngle));
}

QConicalGradient* QConicalGradient_new4(QConicalGradient* param1) {
	return new (std::nothrow) QConicalGradient(*param1);
}

void QConicalGradient_virtbase(QConicalGradient* src, QGradient** outptr_QGradient) {
	*outptr_QGradient = static_cast<QGradient*>(src);
}

struct miqt_qpointf QConicalGradient_center(const QConicalGradient* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->center());
}

void QConicalGradient_setCenter(QConicalGradient* self, struct miqt_qpointf center) {
	self->setCenter(miqt_from_cabi<QPointF>(center));
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
	return new (std::nothrow) QGradient::QGradientData(*param1);
}

void QGradient__QGradientData_operatorAssign(QGradient__QGradientData* self, QGradient__QGradientData* param1) {
	self->operator=(*param1);
}

void QGradient__QGradientData_delete(QGradient__QGradientData* self) {
	delete self;
}

