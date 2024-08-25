#include "gen_qline.h"
#include "qline.h"

#include <QLine>
#include <QLineF>
#include <QPoint>
#include <QPointF>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

bool QLine_IsNull(QLine* self) {
	return self->isNull();
}

QPoint* QLine_P1(QLine* self) {
	QPoint ret = self->p1();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QLine_P2(QLine* self) {
	QPoint ret = self->p2();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

int QLine_X1(QLine* self) {
	return self->x1();
}

int QLine_Y1(QLine* self) {
	return self->y1();
}

int QLine_X2(QLine* self) {
	return self->x2();
}

int QLine_Y2(QLine* self) {
	return self->y2();
}

int QLine_Dx(QLine* self) {
	return self->dx();
}

int QLine_Dy(QLine* self) {
	return self->dy();
}

void QLine_Translate(QLine* self, QPoint* p) {
	self->translate(*p);
}

void QLine_Translate2(QLine* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

QLine* QLine_Translated(QLine* self, QPoint* p) {
	QLine ret = self->translated(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLine*>(new QLine(ret));
}

QLine* QLine_Translated2(QLine* self, int dx, int dy) {
	QLine ret = self->translated(static_cast<int>(dx), static_cast<int>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLine*>(new QLine(ret));
}

QPoint* QLine_Center(QLine* self) {
	QPoint ret = self->center();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
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

bool QLine_OperatorEqual(QLine* self, QLine* d) {
	return self->operator==(*d);
}

bool QLine_OperatorNotEqual(QLine* self, QLine* d) {
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
	QLineF ret = QLineF::fromPolar(static_cast<qreal>(length), static_cast<qreal>(angle));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(ret));
}

bool QLineF_IsNull(QLineF* self) {
	return self->isNull();
}

QPointF* QLineF_P1(QLineF* self) {
	QPointF ret = self->p1();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QLineF_P2(QLineF* self) {
	QPointF ret = self->p2();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

double QLineF_X1(QLineF* self) {
	return self->x1();
}

double QLineF_Y1(QLineF* self) {
	return self->y1();
}

double QLineF_X2(QLineF* self) {
	return self->x2();
}

double QLineF_Y2(QLineF* self) {
	return self->y2();
}

double QLineF_Dx(QLineF* self) {
	return self->dx();
}

double QLineF_Dy(QLineF* self) {
	return self->dy();
}

double QLineF_Length(QLineF* self) {
	return self->length();
}

void QLineF_SetLength(QLineF* self, double lenVal) {
	self->setLength(static_cast<qreal>(lenVal));
}

double QLineF_Angle(QLineF* self) {
	return self->angle();
}

void QLineF_SetAngle(QLineF* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

double QLineF_AngleTo(QLineF* self, QLineF* l) {
	return self->angleTo(*l);
}

QLineF* QLineF_UnitVector(QLineF* self) {
	QLineF ret = self->unitVector();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(ret));
}

QLineF* QLineF_NormalVector(QLineF* self) {
	QLineF ret = self->normalVector();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(ret));
}

double QLineF_AngleWithQLineF(QLineF* self, QLineF* l) {
	return self->angle(*l);
}

QPointF* QLineF_PointAt(QLineF* self, double t) {
	QPointF ret = self->pointAt(static_cast<qreal>(t));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QLineF_Translate(QLineF* self, QPointF* p) {
	self->translate(*p);
}

void QLineF_Translate2(QLineF* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QLineF* QLineF_Translated(QLineF* self, QPointF* p) {
	QLineF ret = self->translated(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(ret));
}

QLineF* QLineF_Translated2(QLineF* self, double dx, double dy) {
	QLineF ret = self->translated(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLineF*>(new QLineF(ret));
}

QPointF* QLineF_Center(QLineF* self) {
	QPointF ret = self->center();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
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

bool QLineF_OperatorEqual(QLineF* self, QLineF* d) {
	return self->operator==(*d);
}

bool QLineF_OperatorNotEqual(QLineF* self, QLineF* d) {
	return self->operator!=(*d);
}

QLine* QLineF_ToLine(QLineF* self) {
	QLine ret = self->toLine();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLine*>(new QLine(ret));
}

void QLineF_Delete(QLineF* self) {
	delete self;
}

