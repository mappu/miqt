#include "gen_qpainterpath.h"
#include "qpainterpath.h"

#include <QFont>
#include <QList>
#include <QPainterPath>
#include <QPainterPathStroker>
#include <QPen>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPainterPath* QPainterPath_new() {
	return new QPainterPath();
}

QPainterPath* QPainterPath_new2(QPointF* startPoint) {
	return new QPainterPath(*startPoint);
}

QPainterPath* QPainterPath_new3(QPainterPath* other) {
	return new QPainterPath(*other);
}

void QPainterPath_OperatorAssign(QPainterPath* self, QPainterPath* other) {
	self->operator=(*other);
}

void QPainterPath_Swap(QPainterPath* self, QPainterPath* other) {
	self->swap(*other);
}

void QPainterPath_Clear(QPainterPath* self) {
	self->clear();
}

void QPainterPath_Reserve(QPainterPath* self, int size) {
	self->reserve(static_cast<int>(size));
}

int QPainterPath_Capacity(QPainterPath* self) {
	return self->capacity();
}

void QPainterPath_CloseSubpath(QPainterPath* self) {
	self->closeSubpath();
}

void QPainterPath_MoveTo(QPainterPath* self, QPointF* p) {
	self->moveTo(*p);
}

void QPainterPath_MoveTo2(QPainterPath* self, double x, double y) {
	self->moveTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QPainterPath_LineTo(QPainterPath* self, QPointF* p) {
	self->lineTo(*p);
}

void QPainterPath_LineTo2(QPainterPath* self, double x, double y) {
	self->lineTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QPainterPath_ArcMoveTo(QPainterPath* self, QRectF* rect, double angle) {
	self->arcMoveTo(*rect, static_cast<qreal>(angle));
}

void QPainterPath_ArcMoveTo2(QPainterPath* self, double x, double y, double w, double h, double angle) {
	self->arcMoveTo(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(angle));
}

void QPainterPath_ArcTo(QPainterPath* self, QRectF* rect, double startAngle, double arcLength) {
	self->arcTo(*rect, static_cast<qreal>(startAngle), static_cast<qreal>(arcLength));
}

void QPainterPath_ArcTo2(QPainterPath* self, double x, double y, double w, double h, double startAngle, double arcLength) {
	self->arcTo(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(startAngle), static_cast<qreal>(arcLength));
}

void QPainterPath_CubicTo(QPainterPath* self, QPointF* ctrlPt1, QPointF* ctrlPt2, QPointF* endPt) {
	self->cubicTo(*ctrlPt1, *ctrlPt2, *endPt);
}

void QPainterPath_CubicTo2(QPainterPath* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty) {
	self->cubicTo(static_cast<qreal>(ctrlPt1x), static_cast<qreal>(ctrlPt1y), static_cast<qreal>(ctrlPt2x), static_cast<qreal>(ctrlPt2y), static_cast<qreal>(endPtx), static_cast<qreal>(endPty));
}

void QPainterPath_QuadTo(QPainterPath* self, QPointF* ctrlPt, QPointF* endPt) {
	self->quadTo(*ctrlPt, *endPt);
}

void QPainterPath_QuadTo2(QPainterPath* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
	self->quadTo(static_cast<qreal>(ctrlPtx), static_cast<qreal>(ctrlPty), static_cast<qreal>(endPtx), static_cast<qreal>(endPty));
}

QPointF* QPainterPath_CurrentPosition(QPainterPath* self) {
	QPointF ret = self->currentPosition();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QPainterPath_AddRect(QPainterPath* self, QRectF* rect) {
	self->addRect(*rect);
}

void QPainterPath_AddRect2(QPainterPath* self, double x, double y, double w, double h) {
	self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QPainterPath_AddEllipse(QPainterPath* self, QRectF* rect) {
	self->addEllipse(*rect);
}

void QPainterPath_AddEllipse2(QPainterPath* self, double x, double y, double w, double h) {
	self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QPainterPath_AddEllipse3(QPainterPath* self, QPointF* center, double rx, double ry) {
	self->addEllipse(*center, static_cast<qreal>(rx), static_cast<qreal>(ry));
}

void QPainterPath_AddText(QPainterPath* self, QPointF* point, QFont* f, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->addText(*point, *f, text_QString);
}

void QPainterPath_AddText2(QPainterPath* self, double x, double y, QFont* f, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->addText(static_cast<qreal>(x), static_cast<qreal>(y), *f, text_QString);
}

void QPainterPath_AddPath(QPainterPath* self, QPainterPath* path) {
	self->addPath(*path);
}

void QPainterPath_AddRegion(QPainterPath* self, QRegion* region) {
	self->addRegion(*region);
}

void QPainterPath_AddRoundRect(QPainterPath* self, QRectF* rect, int xRnd, int yRnd) {
	self->addRoundRect(*rect, static_cast<int>(xRnd), static_cast<int>(yRnd));
}

void QPainterPath_AddRoundRect2(QPainterPath* self, double x, double y, double w, double h, int xRnd, int yRnd) {
	self->addRoundRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xRnd), static_cast<int>(yRnd));
}

void QPainterPath_AddRoundRect3(QPainterPath* self, QRectF* rect, int roundness) {
	self->addRoundRect(*rect, static_cast<int>(roundness));
}

void QPainterPath_AddRoundRect4(QPainterPath* self, double x, double y, double w, double h, int roundness) {
	self->addRoundRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(roundness));
}

void QPainterPath_ConnectPath(QPainterPath* self, QPainterPath* path) {
	self->connectPath(*path);
}

bool QPainterPath_Contains(QPainterPath* self, QPointF* pt) {
	return self->contains(*pt);
}

bool QPainterPath_ContainsWithRect(QPainterPath* self, QRectF* rect) {
	return self->contains(*rect);
}

bool QPainterPath_Intersects(QPainterPath* self, QRectF* rect) {
	return self->intersects(*rect);
}

void QPainterPath_Translate(QPainterPath* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QPainterPath_TranslateWithOffset(QPainterPath* self, QPointF* offset) {
	self->translate(*offset);
}

QPainterPath* QPainterPath_Translated(QPainterPath* self, double dx, double dy) {
	QPainterPath ret = self->translated(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QPainterPath_TranslatedWithOffset(QPainterPath* self, QPointF* offset) {
	QPainterPath ret = self->translated(*offset);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QRectF* QPainterPath_BoundingRect(QPainterPath* self) {
	QRectF ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QPainterPath_ControlPointRect(QPainterPath* self) {
	QRectF ret = self->controlPointRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

bool QPainterPath_IsEmpty(QPainterPath* self) {
	return self->isEmpty();
}

QPainterPath* QPainterPath_ToReversed(QPainterPath* self) {
	QPainterPath ret = self->toReversed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

int QPainterPath_ElementCount(QPainterPath* self) {
	return self->elementCount();
}

void QPainterPath_SetElementPositionAt(QPainterPath* self, int i, double x, double y) {
	self->setElementPositionAt(static_cast<int>(i), static_cast<qreal>(x), static_cast<qreal>(y));
}

double QPainterPath_Length(QPainterPath* self) {
	return self->length();
}

double QPainterPath_PercentAtLength(QPainterPath* self, double t) {
	return self->percentAtLength(static_cast<qreal>(t));
}

QPointF* QPainterPath_PointAtPercent(QPainterPath* self, double t) {
	QPointF ret = self->pointAtPercent(static_cast<qreal>(t));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

double QPainterPath_AngleAtPercent(QPainterPath* self, double t) {
	return self->angleAtPercent(static_cast<qreal>(t));
}

double QPainterPath_SlopeAtPercent(QPainterPath* self, double t) {
	return self->slopeAtPercent(static_cast<qreal>(t));
}

bool QPainterPath_IntersectsWithQPainterPath(QPainterPath* self, QPainterPath* p) {
	return self->intersects(*p);
}

bool QPainterPath_ContainsWithQPainterPath(QPainterPath* self, QPainterPath* p) {
	return self->contains(*p);
}

QPainterPath* QPainterPath_United(QPainterPath* self, QPainterPath* r) {
	QPainterPath ret = self->united(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QPainterPath_Intersected(QPainterPath* self, QPainterPath* r) {
	QPainterPath ret = self->intersected(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QPainterPath_Subtracted(QPainterPath* self, QPainterPath* r) {
	QPainterPath ret = self->subtracted(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QPainterPath_SubtractedInverted(QPainterPath* self, QPainterPath* r) {
	QPainterPath ret = self->subtractedInverted(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QPainterPath_Simplified(QPainterPath* self) {
	QPainterPath ret = self->simplified();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

bool QPainterPath_OperatorEqual(QPainterPath* self, QPainterPath* other) {
	return self->operator==(*other);
}

bool QPainterPath_OperatorNotEqual(QPainterPath* self, QPainterPath* other) {
	return self->operator!=(*other);
}

QPainterPath* QPainterPath_OperatorBitwiseAnd(QPainterPath* self, QPainterPath* other) {
	QPainterPath ret = self->operator&(*other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QPainterPath_OperatorBitwiseOr(QPainterPath* self, QPainterPath* other) {
	QPainterPath ret = self->operator|(*other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QPainterPath_OperatorPlus(QPainterPath* self, QPainterPath* other) {
	QPainterPath ret = self->operator+(*other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

QPainterPath* QPainterPath_OperatorMinus(QPainterPath* self, QPainterPath* other) {
	QPainterPath ret = self->operator-(*other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

void QPainterPath_OperatorBitwiseAndAssign(QPainterPath* self, QPainterPath* other) {
	self->operator&=(*other);
}

void QPainterPath_OperatorBitwiseOrAssign(QPainterPath* self, QPainterPath* other) {
	self->operator|=(*other);
}

QPainterPath* QPainterPath_OperatorPlusAssign(QPainterPath* self, QPainterPath* other) {
	QPainterPath& ret = self->operator+=(*other);
	// Cast returned reference into pointer
	return &ret;
}

QPainterPath* QPainterPath_OperatorMinusAssign(QPainterPath* self, QPainterPath* other) {
	QPainterPath& ret = self->operator-=(*other);
	// Cast returned reference into pointer
	return &ret;
}

void QPainterPath_Delete(QPainterPath* self) {
	delete self;
}

QPainterPathStroker* QPainterPathStroker_new() {
	return new QPainterPathStroker();
}

QPainterPathStroker* QPainterPathStroker_new2(QPen* pen) {
	return new QPainterPathStroker(*pen);
}

void QPainterPathStroker_SetWidth(QPainterPathStroker* self, double width) {
	self->setWidth(static_cast<qreal>(width));
}

double QPainterPathStroker_Width(QPainterPathStroker* self) {
	return self->width();
}

void QPainterPathStroker_SetMiterLimit(QPainterPathStroker* self, double length) {
	self->setMiterLimit(static_cast<qreal>(length));
}

double QPainterPathStroker_MiterLimit(QPainterPathStroker* self) {
	return self->miterLimit();
}

void QPainterPathStroker_SetCurveThreshold(QPainterPathStroker* self, double threshold) {
	self->setCurveThreshold(static_cast<qreal>(threshold));
}

double QPainterPathStroker_CurveThreshold(QPainterPathStroker* self) {
	return self->curveThreshold();
}

void QPainterPathStroker_SetDashPattern(QPainterPathStroker* self, double* dashPattern, size_t dashPattern_len) {
	QVector<qreal> dashPattern_QList;
	dashPattern_QList.reserve(dashPattern_len);
	for(size_t i = 0; i < dashPattern_len; ++i) {
		dashPattern_QList.push_back(dashPattern[i]);
	}
	self->setDashPattern(dashPattern_QList);
}

void QPainterPathStroker_DashPattern(QPainterPathStroker* self, double** _out, size_t* _out_len) {
	QVector<qreal> ret = self->dashPattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* __out = static_cast<double*>(malloc(sizeof(double) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QPainterPathStroker_SetDashOffset(QPainterPathStroker* self, double offset) {
	self->setDashOffset(static_cast<qreal>(offset));
}

double QPainterPathStroker_DashOffset(QPainterPathStroker* self) {
	return self->dashOffset();
}

QPainterPath* QPainterPathStroker_CreateStroke(QPainterPathStroker* self, QPainterPath* path) {
	QPainterPath ret = self->createStroke(*path);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPainterPath*>(new QPainterPath(ret));
}

void QPainterPathStroker_Delete(QPainterPathStroker* self) {
	delete self;
}

