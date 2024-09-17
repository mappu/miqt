#include <QLine>
#include <QLineF>
#include <QPoint>
#include <QPointF>
#include "qline.h"
#include "gen_qline.h"
#include "_cgo_export.h"

QLine* QLine_new() {
	return new QLine();
}

QLine* QLine_new2(QPoint* pt1, QPoint* pt2) {
	return new QLine(*pt1, *pt2);
}

QLine* QLine_new3(int x1, int y1, int x2, int y2) {
	return new QLine(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

QLine* QLine_new4(QLine* param1) {
	return new QLine(*param1);
}

bool QLine_IsNull(const QLine* self) {
	return self->isNull();
}

QPoint* QLine_P1(const QLine* self) {
	return new QPoint(self->p1());
}

QPoint* QLine_P2(const QLine* self) {
	return new QPoint(self->p2());
}

int QLine_X1(const QLine* self) {
	return self->x1();
}

int QLine_Y1(const QLine* self) {
	return self->y1();
}

int QLine_X2(const QLine* self) {
	return self->x2();
}

int QLine_Y2(const QLine* self) {
	return self->y2();
}

int QLine_Dx(const QLine* self) {
	return self->dx();
}

int QLine_Dy(const QLine* self) {
	return self->dy();
}

void QLine_Translate(QLine* self, QPoint* p) {
	self->translate(*p);
}

void QLine_Translate2(QLine* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

QLine* QLine_Translated(const QLine* self, QPoint* p) {
	return new QLine(self->translated(*p));
}

QLine* QLine_Translated2(const QLine* self, int dx, int dy) {
	return new QLine(self->translated(static_cast<int>(dx), static_cast<int>(dy)));
}

QPoint* QLine_Center(const QLine* self) {
	return new QPoint(self->center());
}

void QLine_SetP1(QLine* self, QPoint* p1) {
	self->setP1(*p1);
}

void QLine_SetP2(QLine* self, QPoint* p2) {
	self->setP2(*p2);
}

void QLine_SetPoints(QLine* self, QPoint* p1, QPoint* p2) {
	self->setPoints(*p1, *p2);
}

void QLine_SetLine(QLine* self, int x1, int y1, int x2, int y2) {
	self->setLine(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

bool QLine_OperatorEqual(const QLine* self, QLine* d) {
	return self->operator==(*d);
}

bool QLine_OperatorNotEqual(const QLine* self, QLine* d) {
	return self->operator!=(*d);
}

void QLine_Delete(QLine* self) {
	delete self;
}

QLineF* QLineF_new() {
	return new QLineF();
}

QLineF* QLineF_new2(QPointF* pt1, QPointF* pt2) {
	return new QLineF(*pt1, *pt2);
}

QLineF* QLineF_new3(double x1, double y1, double x2, double y2) {
	return new QLineF(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QLineF* QLineF_new4(QLine* line) {
	return new QLineF(*line);
}

QLineF* QLineF_new5(QLineF* param1) {
	return new QLineF(*param1);
}

QLineF* QLineF_FromPolar(double length, double angle) {
	return new QLineF(QLineF::fromPolar(static_cast<qreal>(length), static_cast<qreal>(angle)));
}

bool QLineF_IsNull(const QLineF* self) {
	return self->isNull();
}

QPointF* QLineF_P1(const QLineF* self) {
	return new QPointF(self->p1());
}

QPointF* QLineF_P2(const QLineF* self) {
	return new QPointF(self->p2());
}

double QLineF_X1(const QLineF* self) {
	return self->x1();
}

double QLineF_Y1(const QLineF* self) {
	return self->y1();
}

double QLineF_X2(const QLineF* self) {
	return self->x2();
}

double QLineF_Y2(const QLineF* self) {
	return self->y2();
}

double QLineF_Dx(const QLineF* self) {
	return self->dx();
}

double QLineF_Dy(const QLineF* self) {
	return self->dy();
}

double QLineF_Length(const QLineF* self) {
	return self->length();
}

void QLineF_SetLength(QLineF* self, double lenVal) {
	self->setLength(static_cast<qreal>(lenVal));
}

double QLineF_Angle(const QLineF* self) {
	return self->angle();
}

void QLineF_SetAngle(QLineF* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

double QLineF_AngleTo(const QLineF* self, QLineF* l) {
	return self->angleTo(*l);
}

QLineF* QLineF_UnitVector(const QLineF* self) {
	return new QLineF(self->unitVector());
}

QLineF* QLineF_NormalVector(const QLineF* self) {
	return new QLineF(self->normalVector());
}

uintptr_t QLineF_Intersects(const QLineF* self, QLineF* l, QPointF* intersectionPoint) {
	QLineF::IntersectionType _ret = self->intersects(*l, intersectionPoint);
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QLineF_Intersect(const QLineF* self, QLineF* l, QPointF* intersectionPoint) {
	QLineF::IntersectType _ret = self->intersect(*l, intersectionPoint);
	return static_cast<uintptr_t>(_ret);
}

double QLineF_AngleWithQLineF(const QLineF* self, QLineF* l) {
	return self->angle(*l);
}

QPointF* QLineF_PointAt(const QLineF* self, double t) {
	return new QPointF(self->pointAt(static_cast<qreal>(t)));
}

void QLineF_Translate(QLineF* self, QPointF* p) {
	self->translate(*p);
}

void QLineF_Translate2(QLineF* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QLineF* QLineF_Translated(const QLineF* self, QPointF* p) {
	return new QLineF(self->translated(*p));
}

QLineF* QLineF_Translated2(const QLineF* self, double dx, double dy) {
	return new QLineF(self->translated(static_cast<qreal>(dx), static_cast<qreal>(dy)));
}

QPointF* QLineF_Center(const QLineF* self) {
	return new QPointF(self->center());
}

void QLineF_SetP1(QLineF* self, QPointF* p1) {
	self->setP1(*p1);
}

void QLineF_SetP2(QLineF* self, QPointF* p2) {
	self->setP2(*p2);
}

void QLineF_SetPoints(QLineF* self, QPointF* p1, QPointF* p2) {
	self->setPoints(*p1, *p2);
}

void QLineF_SetLine(QLineF* self, double x1, double y1, double x2, double y2) {
	self->setLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

bool QLineF_OperatorEqual(const QLineF* self, QLineF* d) {
	return self->operator==(*d);
}

bool QLineF_OperatorNotEqual(const QLineF* self, QLineF* d) {
	return self->operator!=(*d);
}

QLine* QLineF_ToLine(const QLineF* self) {
	return new QLine(self->toLine());
}

void QLineF_Delete(QLineF* self) {
	delete self;
}

