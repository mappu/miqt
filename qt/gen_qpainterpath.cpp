#include <QFont>
#include <QList>
#include <QPainterPath>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPainterPath__Element
#include <QPainterPathStroker>
#include <QPen>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpainterpath.h>
#include "gen_qpainterpath.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPainterPath* QPainterPath_new() {
	return new QPainterPath();
}

QPainterPath* QPainterPath_new2(QPointF* startPoint) {
	return new QPainterPath(*startPoint);
}

QPainterPath* QPainterPath_new3(QPainterPath* other) {
	return new QPainterPath(*other);
}

void QPainterPath_operatorAssign(QPainterPath* self, QPainterPath* other) {
	self->operator=(*other);
}

void QPainterPath_swap(QPainterPath* self, QPainterPath* other) {
	self->swap(*other);
}

void QPainterPath_clear(QPainterPath* self) {
	self->clear();
}

void QPainterPath_reserve(QPainterPath* self, int size) {
	self->reserve(static_cast<int>(size));
}

int QPainterPath_capacity(const QPainterPath* self) {
	return self->capacity();
}

void QPainterPath_closeSubpath(QPainterPath* self) {
	self->closeSubpath();
}

void QPainterPath_moveTo(QPainterPath* self, QPointF* p) {
	self->moveTo(*p);
}

void QPainterPath_moveTo2(QPainterPath* self, double x, double y) {
	self->moveTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QPainterPath_lineTo(QPainterPath* self, QPointF* p) {
	self->lineTo(*p);
}

void QPainterPath_lineTo2(QPainterPath* self, double x, double y) {
	self->lineTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QPainterPath_arcMoveTo(QPainterPath* self, QRectF* rect, double angle) {
	self->arcMoveTo(*rect, static_cast<qreal>(angle));
}

void QPainterPath_arcMoveTo2(QPainterPath* self, double x, double y, double w, double h, double angle) {
	self->arcMoveTo(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(angle));
}

void QPainterPath_arcTo(QPainterPath* self, QRectF* rect, double startAngle, double arcLength) {
	self->arcTo(*rect, static_cast<qreal>(startAngle), static_cast<qreal>(arcLength));
}

void QPainterPath_arcTo2(QPainterPath* self, double x, double y, double w, double h, double startAngle, double arcLength) {
	self->arcTo(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(startAngle), static_cast<qreal>(arcLength));
}

void QPainterPath_cubicTo(QPainterPath* self, QPointF* ctrlPt1, QPointF* ctrlPt2, QPointF* endPt) {
	self->cubicTo(*ctrlPt1, *ctrlPt2, *endPt);
}

void QPainterPath_cubicTo2(QPainterPath* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty) {
	self->cubicTo(static_cast<qreal>(ctrlPt1x), static_cast<qreal>(ctrlPt1y), static_cast<qreal>(ctrlPt2x), static_cast<qreal>(ctrlPt2y), static_cast<qreal>(endPtx), static_cast<qreal>(endPty));
}

void QPainterPath_quadTo(QPainterPath* self, QPointF* ctrlPt, QPointF* endPt) {
	self->quadTo(*ctrlPt, *endPt);
}

void QPainterPath_quadTo2(QPainterPath* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
	self->quadTo(static_cast<qreal>(ctrlPtx), static_cast<qreal>(ctrlPty), static_cast<qreal>(endPtx), static_cast<qreal>(endPty));
}

QPointF* QPainterPath_currentPosition(const QPainterPath* self) {
	return new QPointF(self->currentPosition());
}

void QPainterPath_addRect(QPainterPath* self, QRectF* rect) {
	self->addRect(*rect);
}

void QPainterPath_addRect2(QPainterPath* self, double x, double y, double w, double h) {
	self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QPainterPath_addEllipse(QPainterPath* self, QRectF* rect) {
	self->addEllipse(*rect);
}

void QPainterPath_addEllipse2(QPainterPath* self, double x, double y, double w, double h) {
	self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QPainterPath_addEllipse3(QPainterPath* self, QPointF* center, double rx, double ry) {
	self->addEllipse(*center, static_cast<qreal>(rx), static_cast<qreal>(ry));
}

void QPainterPath_addText(QPainterPath* self, QPointF* point, QFont* f, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addText(*point, *f, text_QString);
}

void QPainterPath_addText2(QPainterPath* self, double x, double y, QFont* f, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addText(static_cast<qreal>(x), static_cast<qreal>(y), *f, text_QString);
}

void QPainterPath_addPath(QPainterPath* self, QPainterPath* path) {
	self->addPath(*path);
}

void QPainterPath_addRegion(QPainterPath* self, QRegion* region) {
	self->addRegion(*region);
}

void QPainterPath_addRoundedRect(QPainterPath* self, QRectF* rect, double xRadius, double yRadius) {
	self->addRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius));
}

void QPainterPath_addRoundedRect2(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius) {
	self->addRoundedRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius));
}

void QPainterPath_addRoundRect(QPainterPath* self, QRectF* rect, int xRnd, int yRnd) {
	self->addRoundRect(*rect, static_cast<int>(xRnd), static_cast<int>(yRnd));
}

void QPainterPath_addRoundRect2(QPainterPath* self, double x, double y, double w, double h, int xRnd, int yRnd) {
	self->addRoundRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xRnd), static_cast<int>(yRnd));
}

void QPainterPath_addRoundRect3(QPainterPath* self, QRectF* rect, int roundness) {
	self->addRoundRect(*rect, static_cast<int>(roundness));
}

void QPainterPath_addRoundRect4(QPainterPath* self, double x, double y, double w, double h, int roundness) {
	self->addRoundRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(roundness));
}

void QPainterPath_connectPath(QPainterPath* self, QPainterPath* path) {
	self->connectPath(*path);
}

bool QPainterPath_contains(const QPainterPath* self, QPointF* pt) {
	return self->contains(*pt);
}

bool QPainterPath_containsWithRect(const QPainterPath* self, QRectF* rect) {
	return self->contains(*rect);
}

bool QPainterPath_intersects(const QPainterPath* self, QRectF* rect) {
	return self->intersects(*rect);
}

void QPainterPath_translate(QPainterPath* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QPainterPath_translateWithOffset(QPainterPath* self, QPointF* offset) {
	self->translate(*offset);
}

QPainterPath* QPainterPath_translated(const QPainterPath* self, double dx, double dy) {
	return new QPainterPath(self->translated(static_cast<qreal>(dx), static_cast<qreal>(dy)));
}

QPainterPath* QPainterPath_translatedWithOffset(const QPainterPath* self, QPointF* offset) {
	return new QPainterPath(self->translated(*offset));
}

QRectF* QPainterPath_boundingRect(const QPainterPath* self) {
	return new QRectF(self->boundingRect());
}

QRectF* QPainterPath_controlPointRect(const QPainterPath* self) {
	return new QRectF(self->controlPointRect());
}

int QPainterPath_fillRule(const QPainterPath* self) {
	Qt::FillRule _ret = self->fillRule();
	return static_cast<int>(_ret);
}

void QPainterPath_setFillRule(QPainterPath* self, int fillRule) {
	self->setFillRule(static_cast<Qt::FillRule>(fillRule));
}

bool QPainterPath_isEmpty(const QPainterPath* self) {
	return self->isEmpty();
}

QPainterPath* QPainterPath_toReversed(const QPainterPath* self) {
	return new QPainterPath(self->toReversed());
}

int QPainterPath_elementCount(const QPainterPath* self) {
	return self->elementCount();
}

QPainterPath__Element* QPainterPath_elementAt(const QPainterPath* self, int i) {
	return new QPainterPath::Element(self->elementAt(static_cast<int>(i)));
}

void QPainterPath_setElementPositionAt(QPainterPath* self, int i, double x, double y) {
	self->setElementPositionAt(static_cast<int>(i), static_cast<qreal>(x), static_cast<qreal>(y));
}

double QPainterPath_length(const QPainterPath* self) {
	qreal _ret = self->length();
	return static_cast<double>(_ret);
}

double QPainterPath_percentAtLength(const QPainterPath* self, double t) {
	qreal _ret = self->percentAtLength(static_cast<qreal>(t));
	return static_cast<double>(_ret);
}

QPointF* QPainterPath_pointAtPercent(const QPainterPath* self, double t) {
	return new QPointF(self->pointAtPercent(static_cast<qreal>(t)));
}

double QPainterPath_angleAtPercent(const QPainterPath* self, double t) {
	qreal _ret = self->angleAtPercent(static_cast<qreal>(t));
	return static_cast<double>(_ret);
}

double QPainterPath_slopeAtPercent(const QPainterPath* self, double t) {
	qreal _ret = self->slopeAtPercent(static_cast<qreal>(t));
	return static_cast<double>(_ret);
}

bool QPainterPath_intersectsWithQPainterPath(const QPainterPath* self, QPainterPath* p) {
	return self->intersects(*p);
}

bool QPainterPath_containsWithQPainterPath(const QPainterPath* self, QPainterPath* p) {
	return self->contains(*p);
}

QPainterPath* QPainterPath_united(const QPainterPath* self, QPainterPath* r) {
	return new QPainterPath(self->united(*r));
}

QPainterPath* QPainterPath_intersected(const QPainterPath* self, QPainterPath* r) {
	return new QPainterPath(self->intersected(*r));
}

QPainterPath* QPainterPath_subtracted(const QPainterPath* self, QPainterPath* r) {
	return new QPainterPath(self->subtracted(*r));
}

QPainterPath* QPainterPath_subtractedInverted(const QPainterPath* self, QPainterPath* r) {
	return new QPainterPath(self->subtractedInverted(*r));
}

QPainterPath* QPainterPath_simplified(const QPainterPath* self) {
	return new QPainterPath(self->simplified());
}

bool QPainterPath_operatorEqual(const QPainterPath* self, QPainterPath* other) {
	return (*self == *other);
}

bool QPainterPath_operatorNotEqual(const QPainterPath* self, QPainterPath* other) {
	return (*self != *other);
}

QPainterPath* QPainterPath_operatorBitwiseAnd(const QPainterPath* self, QPainterPath* other) {
	return new QPainterPath(self->operator&(*other));
}

QPainterPath* QPainterPath_operatorBitwiseOr(const QPainterPath* self, QPainterPath* other) {
	return new QPainterPath(self->operator|(*other));
}

QPainterPath* QPainterPath_operatorPlus(const QPainterPath* self, QPainterPath* other) {
	return new QPainterPath(self->operator+(*other));
}

QPainterPath* QPainterPath_operatorMinus(const QPainterPath* self, QPainterPath* other) {
	return new QPainterPath(self->operator-(*other));
}

void QPainterPath_operatorBitwiseAndAssign(QPainterPath* self, QPainterPath* other) {
	self->operator&=(*other);
}

void QPainterPath_operatorBitwiseOrAssign(QPainterPath* self, QPainterPath* other) {
	self->operator|=(*other);
}

QPainterPath* QPainterPath_operatorPlusAssign(QPainterPath* self, QPainterPath* other) {
	QPainterPath& _ret = self->operator+=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QPainterPath* QPainterPath_operatorMinusAssign(QPainterPath* self, QPainterPath* other) {
	QPainterPath& _ret = self->operator-=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

void QPainterPath_addRoundedRect4(QPainterPath* self, QRectF* rect, double xRadius, double yRadius, int mode) {
	self->addRoundedRect(*rect, static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainterPath_addRoundedRect7(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius, int mode) {
	self->addRoundedRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<qreal>(xRadius), static_cast<qreal>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainterPath_delete(QPainterPath* self) {
	delete self;
}

QPainterPathStroker* QPainterPathStroker_new() {
	return new QPainterPathStroker();
}

QPainterPathStroker* QPainterPathStroker_new2(QPen* pen) {
	return new QPainterPathStroker(*pen);
}

void QPainterPathStroker_setWidth(QPainterPathStroker* self, double width) {
	self->setWidth(static_cast<qreal>(width));
}

double QPainterPathStroker_width(const QPainterPathStroker* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

void QPainterPathStroker_setCapStyle(QPainterPathStroker* self, int style) {
	self->setCapStyle(static_cast<Qt::PenCapStyle>(style));
}

int QPainterPathStroker_capStyle(const QPainterPathStroker* self) {
	Qt::PenCapStyle _ret = self->capStyle();
	return static_cast<int>(_ret);
}

void QPainterPathStroker_setJoinStyle(QPainterPathStroker* self, int style) {
	self->setJoinStyle(static_cast<Qt::PenJoinStyle>(style));
}

int QPainterPathStroker_joinStyle(const QPainterPathStroker* self) {
	Qt::PenJoinStyle _ret = self->joinStyle();
	return static_cast<int>(_ret);
}

void QPainterPathStroker_setMiterLimit(QPainterPathStroker* self, double length) {
	self->setMiterLimit(static_cast<qreal>(length));
}

double QPainterPathStroker_miterLimit(const QPainterPathStroker* self) {
	qreal _ret = self->miterLimit();
	return static_cast<double>(_ret);
}

void QPainterPathStroker_setCurveThreshold(QPainterPathStroker* self, double threshold) {
	self->setCurveThreshold(static_cast<qreal>(threshold));
}

double QPainterPathStroker_curveThreshold(const QPainterPathStroker* self) {
	qreal _ret = self->curveThreshold();
	return static_cast<double>(_ret);
}

void QPainterPathStroker_setDashPattern(QPainterPathStroker* self, int dashPattern) {
	self->setDashPattern(static_cast<Qt::PenStyle>(dashPattern));
}

void QPainterPathStroker_setDashPatternWithDashPattern(QPainterPathStroker* self, struct miqt_array /* of double */  dashPattern) {
	QVector<qreal> dashPattern_QList;
	dashPattern_QList.reserve(dashPattern.len);
	double* dashPattern_arr = static_cast<double*>(dashPattern.data);
	for(size_t i = 0; i < dashPattern.len; ++i) {
		dashPattern_QList.push_back(static_cast<double>(dashPattern_arr[i]));
	}
	self->setDashPattern(dashPattern_QList);
}

struct miqt_array /* of double */  QPainterPathStroker_dashPattern(const QPainterPathStroker* self) {
	QVector<qreal> _ret = self->dashPattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QPainterPathStroker_setDashOffset(QPainterPathStroker* self, double offset) {
	self->setDashOffset(static_cast<qreal>(offset));
}

double QPainterPathStroker_dashOffset(const QPainterPathStroker* self) {
	qreal _ret = self->dashOffset();
	return static_cast<double>(_ret);
}

QPainterPath* QPainterPathStroker_createStroke(const QPainterPathStroker* self, QPainterPath* path) {
	return new QPainterPath(self->createStroke(*path));
}

void QPainterPathStroker_delete(QPainterPathStroker* self) {
	delete self;
}

bool QPainterPath__Element_isMoveTo(const QPainterPath__Element* self) {
	return self->isMoveTo();
}

bool QPainterPath__Element_isLineTo(const QPainterPath__Element* self) {
	return self->isLineTo();
}

bool QPainterPath__Element_isCurveTo(const QPainterPath__Element* self) {
	return self->isCurveTo();
}

QPointF* QPainterPath__Element_ToQPointF(const QPainterPath__Element* self) {
	return new QPointF(self->operator QPointF());
}

bool QPainterPath__Element_operatorEqual(const QPainterPath__Element* self, QPainterPath__Element* e) {
	return (*self == *e);
}

bool QPainterPath__Element_operatorNotEqual(const QPainterPath__Element* self, QPainterPath__Element* e) {
	return (*self != *e);
}

void QPainterPath__Element_delete(QPainterPath__Element* self) {
	delete self;
}

