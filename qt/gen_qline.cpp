#include <QLine>
#include <QLineF>
#include <QPoint>
#include <QPointF>
#include <qline.h>
#include "gen_qline.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QLine* QLine_new() {
	return new (std::nothrow) QLine();
}

QLine* QLine_new2(struct miqt_qpoint pt1, struct miqt_qpoint pt2) {
	return new (std::nothrow) QLine(miqt_from_cabi<QPoint>(pt1), miqt_from_cabi<QPoint>(pt2));
}

QLine* QLine_new3(int x1, int y1, int x2, int y2) {
	return new (std::nothrow) QLine(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

QLine* QLine_new4(QLine* param1) {
	return new (std::nothrow) QLine(*param1);
}

bool QLine_isNull(const QLine* self) {
	return self->isNull();
}

struct miqt_qpoint QLine_p1(const QLine* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->p1());
}

struct miqt_qpoint QLine_p2(const QLine* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->p2());
}

int QLine_x1(const QLine* self) {
	return self->x1();
}

int QLine_y1(const QLine* self) {
	return self->y1();
}

int QLine_x2(const QLine* self) {
	return self->x2();
}

int QLine_y2(const QLine* self) {
	return self->y2();
}

int QLine_dx(const QLine* self) {
	return self->dx();
}

int QLine_dy(const QLine* self) {
	return self->dy();
}

void QLine_translate(QLine* self, struct miqt_qpoint p) {
	self->translate(miqt_from_cabi<QPoint>(p));
}

void QLine_translate2(QLine* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

QLine* QLine_translated(const QLine* self, struct miqt_qpoint p) {
	return new QLine(self->translated(miqt_from_cabi<QPoint>(p)));
}

QLine* QLine_translated2(const QLine* self, int dx, int dy) {
	return new QLine(self->translated(static_cast<int>(dx), static_cast<int>(dy)));
}

struct miqt_qpoint QLine_center(const QLine* self) {
	return miqt_to_cabi<struct miqt_qpoint>(self->center());
}

void QLine_setP1(QLine* self, struct miqt_qpoint p1) {
	self->setP1(miqt_from_cabi<QPoint>(p1));
}

void QLine_setP2(QLine* self, struct miqt_qpoint p2) {
	self->setP2(miqt_from_cabi<QPoint>(p2));
}

void QLine_setPoints(QLine* self, struct miqt_qpoint p1, struct miqt_qpoint p2) {
	self->setPoints(miqt_from_cabi<QPoint>(p1), miqt_from_cabi<QPoint>(p2));
}

void QLine_setLine(QLine* self, int x1, int y1, int x2, int y2) {
	self->setLine(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

bool QLine_operatorEqual(const QLine* self, QLine* d) {
	return (*self == *d);
}

bool QLine_operatorNotEqual(const QLine* self, QLine* d) {
	return (*self != *d);
}

void QLine_delete(QLine* self) {
	delete self;
}

QLineF* QLineF_new() {
	return new (std::nothrow) QLineF();
}

QLineF* QLineF_new2(struct miqt_qpointf pt1, struct miqt_qpointf pt2) {
	return new (std::nothrow) QLineF(miqt_from_cabi<QPointF>(pt1), miqt_from_cabi<QPointF>(pt2));
}

QLineF* QLineF_new3(double x1, double y1, double x2, double y2) {
	return new (std::nothrow) QLineF(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QLineF* QLineF_new4(QLine* line) {
	return new (std::nothrow) QLineF(*line);
}

QLineF* QLineF_new5(QLineF* param1) {
	return new (std::nothrow) QLineF(*param1);
}

QLineF* QLineF_fromPolar(double length, double angle) {
	return new QLineF(QLineF::fromPolar(static_cast<qreal>(length), static_cast<qreal>(angle)));
}

bool QLineF_isNull(const QLineF* self) {
	return self->isNull();
}

struct miqt_qpointf QLineF_p1(const QLineF* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->p1());
}

struct miqt_qpointf QLineF_p2(const QLineF* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->p2());
}

double QLineF_x1(const QLineF* self) {
	qreal _ret = self->x1();
	return static_cast<double>(_ret);
}

double QLineF_y1(const QLineF* self) {
	qreal _ret = self->y1();
	return static_cast<double>(_ret);
}

double QLineF_x2(const QLineF* self) {
	qreal _ret = self->x2();
	return static_cast<double>(_ret);
}

double QLineF_y2(const QLineF* self) {
	qreal _ret = self->y2();
	return static_cast<double>(_ret);
}

double QLineF_dx(const QLineF* self) {
	qreal _ret = self->dx();
	return static_cast<double>(_ret);
}

double QLineF_dy(const QLineF* self) {
	qreal _ret = self->dy();
	return static_cast<double>(_ret);
}

double QLineF_length(const QLineF* self) {
	qreal _ret = self->length();
	return static_cast<double>(_ret);
}

void QLineF_setLength(QLineF* self, double len) {
	self->setLength(static_cast<qreal>(len));
}

double QLineF_angle(const QLineF* self) {
	qreal _ret = self->angle();
	return static_cast<double>(_ret);
}

void QLineF_setAngle(QLineF* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

double QLineF_angleTo(const QLineF* self, QLineF* l) {
	qreal _ret = self->angleTo(*l);
	return static_cast<double>(_ret);
}

QLineF* QLineF_unitVector(const QLineF* self) {
	return new QLineF(self->unitVector());
}

QLineF* QLineF_normalVector(const QLineF* self) {
	return new QLineF(self->normalVector());
}

int QLineF_intersects(const QLineF* self, QLineF* l, QPointF* intersectionPoint) {
	QLineF::IntersectionType _ret = self->intersects(*l, intersectionPoint);
	return static_cast<int>(_ret);
}

int QLineF_intersect(const QLineF* self, QLineF* l, QPointF* intersectionPoint) {
	QLineF::IntersectType _ret = self->intersect(*l, intersectionPoint);
	return static_cast<int>(_ret);
}

double QLineF_angleWithQLineF(const QLineF* self, QLineF* l) {
	qreal _ret = self->angle(*l);
	return static_cast<double>(_ret);
}

struct miqt_qpointf QLineF_pointAt(const QLineF* self, double t) {
	return miqt_to_cabi<struct miqt_qpointf>(self->pointAt(static_cast<qreal>(t)));
}

void QLineF_translate(QLineF* self, struct miqt_qpointf p) {
	self->translate(miqt_from_cabi<QPointF>(p));
}

void QLineF_translate2(QLineF* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QLineF* QLineF_translated(const QLineF* self, struct miqt_qpointf p) {
	return new QLineF(self->translated(miqt_from_cabi<QPointF>(p)));
}

QLineF* QLineF_translated2(const QLineF* self, double dx, double dy) {
	return new QLineF(self->translated(static_cast<qreal>(dx), static_cast<qreal>(dy)));
}

struct miqt_qpointf QLineF_center(const QLineF* self) {
	return miqt_to_cabi<struct miqt_qpointf>(self->center());
}

void QLineF_setP1(QLineF* self, struct miqt_qpointf p1) {
	self->setP1(miqt_from_cabi<QPointF>(p1));
}

void QLineF_setP2(QLineF* self, struct miqt_qpointf p2) {
	self->setP2(miqt_from_cabi<QPointF>(p2));
}

void QLineF_setPoints(QLineF* self, struct miqt_qpointf p1, struct miqt_qpointf p2) {
	self->setPoints(miqt_from_cabi<QPointF>(p1), miqt_from_cabi<QPointF>(p2));
}

void QLineF_setLine(QLineF* self, double x1, double y1, double x2, double y2) {
	self->setLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

bool QLineF_operatorEqual(const QLineF* self, QLineF* d) {
	return (*self == *d);
}

bool QLineF_operatorNotEqual(const QLineF* self, QLineF* d) {
	return (*self != *d);
}

QLine* QLineF_toLine(const QLineF* self) {
	return new QLine(self->toLine());
}

void QLineF_delete(QLineF* self) {
	delete self;
}

