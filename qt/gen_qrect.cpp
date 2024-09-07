#include <QMargins>
#include <QMarginsF>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include "qrect.h"

#include "gen_qrect.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRect* QRect_new() {
	return new QRect();
}

QRect* QRect_new2(QPoint* topleft, QPoint* bottomright) {
	return new QRect(*topleft, *bottomright);
}

QRect* QRect_new3(QPoint* topleft, QSize* size) {
	return new QRect(*topleft, *size);
}

QRect* QRect_new4(int left, int top, int width, int height) {
	return new QRect(static_cast<int>(left), static_cast<int>(top), static_cast<int>(width), static_cast<int>(height));
}

QRect* QRect_new5(QRect* param1) {
	return new QRect(*param1);
}

bool QRect_IsNull(QRect* self) {
	return const_cast<const QRect*>(self)->isNull();
}

bool QRect_IsEmpty(QRect* self) {
	return const_cast<const QRect*>(self)->isEmpty();
}

bool QRect_IsValid(QRect* self) {
	return const_cast<const QRect*>(self)->isValid();
}

int QRect_Left(QRect* self) {
	return const_cast<const QRect*>(self)->left();
}

int QRect_Top(QRect* self) {
	return const_cast<const QRect*>(self)->top();
}

int QRect_Right(QRect* self) {
	return const_cast<const QRect*>(self)->right();
}

int QRect_Bottom(QRect* self) {
	return const_cast<const QRect*>(self)->bottom();
}

QRect* QRect_Normalized(QRect* self) {
	QRect ret = const_cast<const QRect*>(self)->normalized();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QRect_X(QRect* self) {
	return const_cast<const QRect*>(self)->x();
}

int QRect_Y(QRect* self) {
	return const_cast<const QRect*>(self)->y();
}

void QRect_SetLeft(QRect* self, int pos) {
	self->setLeft(static_cast<int>(pos));
}

void QRect_SetTop(QRect* self, int pos) {
	self->setTop(static_cast<int>(pos));
}

void QRect_SetRight(QRect* self, int pos) {
	self->setRight(static_cast<int>(pos));
}

void QRect_SetBottom(QRect* self, int pos) {
	self->setBottom(static_cast<int>(pos));
}

void QRect_SetX(QRect* self, int x) {
	self->setX(static_cast<int>(x));
}

void QRect_SetY(QRect* self, int y) {
	self->setY(static_cast<int>(y));
}

void QRect_SetTopLeft(QRect* self, QPoint* p) {
	self->setTopLeft(*p);
}

void QRect_SetBottomRight(QRect* self, QPoint* p) {
	self->setBottomRight(*p);
}

void QRect_SetTopRight(QRect* self, QPoint* p) {
	self->setTopRight(*p);
}

void QRect_SetBottomLeft(QRect* self, QPoint* p) {
	self->setBottomLeft(*p);
}

QPoint* QRect_TopLeft(QRect* self) {
	QPoint ret = const_cast<const QRect*>(self)->topLeft();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QRect_BottomRight(QRect* self) {
	QPoint ret = const_cast<const QRect*>(self)->bottomRight();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QRect_TopRight(QRect* self) {
	QPoint ret = const_cast<const QRect*>(self)->topRight();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QRect_BottomLeft(QRect* self) {
	QPoint ret = const_cast<const QRect*>(self)->bottomLeft();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

QPoint* QRect_Center(QRect* self) {
	QPoint ret = const_cast<const QRect*>(self)->center();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QRect_MoveLeft(QRect* self, int pos) {
	self->moveLeft(static_cast<int>(pos));
}

void QRect_MoveTop(QRect* self, int pos) {
	self->moveTop(static_cast<int>(pos));
}

void QRect_MoveRight(QRect* self, int pos) {
	self->moveRight(static_cast<int>(pos));
}

void QRect_MoveBottom(QRect* self, int pos) {
	self->moveBottom(static_cast<int>(pos));
}

void QRect_MoveTopLeft(QRect* self, QPoint* p) {
	self->moveTopLeft(*p);
}

void QRect_MoveBottomRight(QRect* self, QPoint* p) {
	self->moveBottomRight(*p);
}

void QRect_MoveTopRight(QRect* self, QPoint* p) {
	self->moveTopRight(*p);
}

void QRect_MoveBottomLeft(QRect* self, QPoint* p) {
	self->moveBottomLeft(*p);
}

void QRect_MoveCenter(QRect* self, QPoint* p) {
	self->moveCenter(*p);
}

void QRect_Translate(QRect* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

void QRect_TranslateWithQPoint(QRect* self, QPoint* p) {
	self->translate(*p);
}

QRect* QRect_Translated(QRect* self, int dx, int dy) {
	QRect ret = const_cast<const QRect*>(self)->translated(static_cast<int>(dx), static_cast<int>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QRect_TranslatedWithQPoint(QRect* self, QPoint* p) {
	QRect ret = const_cast<const QRect*>(self)->translated(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QRect_Transposed(QRect* self) {
	QRect ret = const_cast<const QRect*>(self)->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QRect_MoveTo(QRect* self, int x, int t) {
	self->moveTo(static_cast<int>(x), static_cast<int>(t));
}

void QRect_MoveToWithQPoint(QRect* self, QPoint* p) {
	self->moveTo(*p);
}

void QRect_SetRect(QRect* self, int x, int y, int w, int h) {
	self->setRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QRect_GetRect(QRect* self, int* x, int* y, int* w, int* h) {
	const_cast<const QRect*>(self)->getRect(static_cast<int*>(x), static_cast<int*>(y), static_cast<int*>(w), static_cast<int*>(h));
}

void QRect_SetCoords(QRect* self, int x1, int y1, int x2, int y2) {
	self->setCoords(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

void QRect_GetCoords(QRect* self, int* x1, int* y1, int* x2, int* y2) {
	const_cast<const QRect*>(self)->getCoords(static_cast<int*>(x1), static_cast<int*>(y1), static_cast<int*>(x2), static_cast<int*>(y2));
}

void QRect_Adjust(QRect* self, int x1, int y1, int x2, int y2) {
	self->adjust(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

QRect* QRect_Adjusted(QRect* self, int x1, int y1, int x2, int y2) {
	QRect ret = const_cast<const QRect*>(self)->adjusted(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QSize* QRect_Size(QRect* self) {
	QSize ret = const_cast<const QRect*>(self)->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QRect_Width(QRect* self) {
	return const_cast<const QRect*>(self)->width();
}

int QRect_Height(QRect* self) {
	return const_cast<const QRect*>(self)->height();
}

void QRect_SetWidth(QRect* self, int w) {
	self->setWidth(static_cast<int>(w));
}

void QRect_SetHeight(QRect* self, int h) {
	self->setHeight(static_cast<int>(h));
}

void QRect_SetSize(QRect* self, QSize* s) {
	self->setSize(*s);
}

QRect* QRect_OperatorBitwiseOr(QRect* self, QRect* r) {
	QRect ret = const_cast<const QRect*>(self)->operator|(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QRect_OperatorBitwiseAnd(QRect* self, QRect* r) {
	QRect ret = const_cast<const QRect*>(self)->operator&(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QRect_OperatorBitwiseOrAssign(QRect* self, QRect* r) {
	self->operator|=(*r);
}

void QRect_OperatorBitwiseAndAssign(QRect* self, QRect* r) {
	self->operator&=(*r);
}

bool QRect_Contains(QRect* self, QRect* r) {
	return const_cast<const QRect*>(self)->contains(*r);
}

bool QRect_ContainsWithQPoint(QRect* self, QPoint* p) {
	return const_cast<const QRect*>(self)->contains(*p);
}

bool QRect_Contains2(QRect* self, int x, int y) {
	return const_cast<const QRect*>(self)->contains(static_cast<int>(x), static_cast<int>(y));
}

bool QRect_Contains3(QRect* self, int x, int y, bool proper) {
	return const_cast<const QRect*>(self)->contains(static_cast<int>(x), static_cast<int>(y), proper);
}

QRect* QRect_United(QRect* self, QRect* other) {
	QRect ret = const_cast<const QRect*>(self)->united(*other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QRect_Intersected(QRect* self, QRect* other) {
	QRect ret = const_cast<const QRect*>(self)->intersected(*other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

bool QRect_Intersects(QRect* self, QRect* r) {
	return const_cast<const QRect*>(self)->intersects(*r);
}

QRect* QRect_MarginsAdded(QRect* self, QMargins* margins) {
	QRect ret = const_cast<const QRect*>(self)->marginsAdded(*margins);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QRect_MarginsRemoved(QRect* self, QMargins* margins) {
	QRect ret = const_cast<const QRect*>(self)->marginsRemoved(*margins);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QRect_OperatorPlusAssign(QRect* self, QMargins* margins) {
	QRect& ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &ret;
}

QRect* QRect_OperatorMinusAssign(QRect* self, QMargins* margins) {
	QRect& ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &ret;
}

bool QRect_Contains22(QRect* self, QRect* r, bool proper) {
	return const_cast<const QRect*>(self)->contains(*r, proper);
}

bool QRect_Contains23(QRect* self, QPoint* p, bool proper) {
	return const_cast<const QRect*>(self)->contains(*p, proper);
}

void QRect_Delete(QRect* self) {
	delete self;
}

QRectF* QRectF_new() {
	return new QRectF();
}

QRectF* QRectF_new2(QPointF* topleft, QSizeF* size) {
	return new QRectF(*topleft, *size);
}

QRectF* QRectF_new3(QPointF* topleft, QPointF* bottomRight) {
	return new QRectF(*topleft, *bottomRight);
}

QRectF* QRectF_new4(double left, double top, double width, double height) {
	return new QRectF(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(width), static_cast<qreal>(height));
}

QRectF* QRectF_new5(QRect* rect) {
	return new QRectF(*rect);
}

QRectF* QRectF_new6(QRectF* param1) {
	return new QRectF(*param1);
}

bool QRectF_IsNull(QRectF* self) {
	return const_cast<const QRectF*>(self)->isNull();
}

bool QRectF_IsEmpty(QRectF* self) {
	return const_cast<const QRectF*>(self)->isEmpty();
}

bool QRectF_IsValid(QRectF* self) {
	return const_cast<const QRectF*>(self)->isValid();
}

QRectF* QRectF_Normalized(QRectF* self) {
	QRectF ret = const_cast<const QRectF*>(self)->normalized();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

double QRectF_Left(QRectF* self) {
	return const_cast<const QRectF*>(self)->left();
}

double QRectF_Top(QRectF* self) {
	return const_cast<const QRectF*>(self)->top();
}

double QRectF_Right(QRectF* self) {
	return const_cast<const QRectF*>(self)->right();
}

double QRectF_Bottom(QRectF* self) {
	return const_cast<const QRectF*>(self)->bottom();
}

double QRectF_X(QRectF* self) {
	return const_cast<const QRectF*>(self)->x();
}

double QRectF_Y(QRectF* self) {
	return const_cast<const QRectF*>(self)->y();
}

void QRectF_SetLeft(QRectF* self, double pos) {
	self->setLeft(static_cast<qreal>(pos));
}

void QRectF_SetTop(QRectF* self, double pos) {
	self->setTop(static_cast<qreal>(pos));
}

void QRectF_SetRight(QRectF* self, double pos) {
	self->setRight(static_cast<qreal>(pos));
}

void QRectF_SetBottom(QRectF* self, double pos) {
	self->setBottom(static_cast<qreal>(pos));
}

void QRectF_SetX(QRectF* self, double pos) {
	self->setX(static_cast<qreal>(pos));
}

void QRectF_SetY(QRectF* self, double pos) {
	self->setY(static_cast<qreal>(pos));
}

QPointF* QRectF_TopLeft(QRectF* self) {
	QPointF ret = const_cast<const QRectF*>(self)->topLeft();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QRectF_BottomRight(QRectF* self) {
	QPointF ret = const_cast<const QRectF*>(self)->bottomRight();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QRectF_TopRight(QRectF* self) {
	QPointF ret = const_cast<const QRectF*>(self)->topRight();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QRectF_BottomLeft(QRectF* self) {
	QPointF ret = const_cast<const QRectF*>(self)->bottomLeft();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

QPointF* QRectF_Center(QRectF* self) {
	QPointF ret = const_cast<const QRectF*>(self)->center();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPointF*>(new QPointF(ret));
}

void QRectF_SetTopLeft(QRectF* self, QPointF* p) {
	self->setTopLeft(*p);
}

void QRectF_SetBottomRight(QRectF* self, QPointF* p) {
	self->setBottomRight(*p);
}

void QRectF_SetTopRight(QRectF* self, QPointF* p) {
	self->setTopRight(*p);
}

void QRectF_SetBottomLeft(QRectF* self, QPointF* p) {
	self->setBottomLeft(*p);
}

void QRectF_MoveLeft(QRectF* self, double pos) {
	self->moveLeft(static_cast<qreal>(pos));
}

void QRectF_MoveTop(QRectF* self, double pos) {
	self->moveTop(static_cast<qreal>(pos));
}

void QRectF_MoveRight(QRectF* self, double pos) {
	self->moveRight(static_cast<qreal>(pos));
}

void QRectF_MoveBottom(QRectF* self, double pos) {
	self->moveBottom(static_cast<qreal>(pos));
}

void QRectF_MoveTopLeft(QRectF* self, QPointF* p) {
	self->moveTopLeft(*p);
}

void QRectF_MoveBottomRight(QRectF* self, QPointF* p) {
	self->moveBottomRight(*p);
}

void QRectF_MoveTopRight(QRectF* self, QPointF* p) {
	self->moveTopRight(*p);
}

void QRectF_MoveBottomLeft(QRectF* self, QPointF* p) {
	self->moveBottomLeft(*p);
}

void QRectF_MoveCenter(QRectF* self, QPointF* p) {
	self->moveCenter(*p);
}

void QRectF_Translate(QRectF* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QRectF_TranslateWithQPointF(QRectF* self, QPointF* p) {
	self->translate(*p);
}

QRectF* QRectF_Translated(QRectF* self, double dx, double dy) {
	QRectF ret = const_cast<const QRectF*>(self)->translated(static_cast<qreal>(dx), static_cast<qreal>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QRectF_TranslatedWithQPointF(QRectF* self, QPointF* p) {
	QRectF ret = const_cast<const QRectF*>(self)->translated(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QRectF_Transposed(QRectF* self) {
	QRectF ret = const_cast<const QRectF*>(self)->transposed();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QRectF_MoveTo(QRectF* self, double x, double y) {
	self->moveTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QRectF_MoveToWithQPointF(QRectF* self, QPointF* p) {
	self->moveTo(*p);
}

void QRectF_SetRect(QRectF* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QRectF_GetRect(QRectF* self, double* x, double* y, double* w, double* h) {
	const_cast<const QRectF*>(self)->getRect(static_cast<qreal*>(x), static_cast<qreal*>(y), static_cast<qreal*>(w), static_cast<qreal*>(h));
}

void QRectF_SetCoords(QRectF* self, double x1, double y1, double x2, double y2) {
	self->setCoords(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

void QRectF_GetCoords(QRectF* self, double* x1, double* y1, double* x2, double* y2) {
	const_cast<const QRectF*>(self)->getCoords(static_cast<qreal*>(x1), static_cast<qreal*>(y1), static_cast<qreal*>(x2), static_cast<qreal*>(y2));
}

void QRectF_Adjust(QRectF* self, double x1, double y1, double x2, double y2) {
	self->adjust(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QRectF* QRectF_Adjusted(QRectF* self, double x1, double y1, double x2, double y2) {
	QRectF ret = const_cast<const QRectF*>(self)->adjusted(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QSizeF* QRectF_Size(QRectF* self) {
	QSizeF ret = const_cast<const QRectF*>(self)->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

double QRectF_Width(QRectF* self) {
	return const_cast<const QRectF*>(self)->width();
}

double QRectF_Height(QRectF* self) {
	return const_cast<const QRectF*>(self)->height();
}

void QRectF_SetWidth(QRectF* self, double w) {
	self->setWidth(static_cast<qreal>(w));
}

void QRectF_SetHeight(QRectF* self, double h) {
	self->setHeight(static_cast<qreal>(h));
}

void QRectF_SetSize(QRectF* self, QSizeF* s) {
	self->setSize(*s);
}

QRectF* QRectF_OperatorBitwiseOr(QRectF* self, QRectF* r) {
	QRectF ret = const_cast<const QRectF*>(self)->operator|(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QRectF_OperatorBitwiseAnd(QRectF* self, QRectF* r) {
	QRectF ret = const_cast<const QRectF*>(self)->operator&(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

void QRectF_OperatorBitwiseOrAssign(QRectF* self, QRectF* r) {
	self->operator|=(*r);
}

void QRectF_OperatorBitwiseAndAssign(QRectF* self, QRectF* r) {
	self->operator&=(*r);
}

bool QRectF_Contains(QRectF* self, QRectF* r) {
	return const_cast<const QRectF*>(self)->contains(*r);
}

bool QRectF_ContainsWithQPointF(QRectF* self, QPointF* p) {
	return const_cast<const QRectF*>(self)->contains(*p);
}

bool QRectF_Contains2(QRectF* self, double x, double y) {
	return const_cast<const QRectF*>(self)->contains(static_cast<qreal>(x), static_cast<qreal>(y));
}

QRectF* QRectF_United(QRectF* self, QRectF* other) {
	QRectF ret = const_cast<const QRectF*>(self)->united(*other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QRectF_Intersected(QRectF* self, QRectF* other) {
	QRectF ret = const_cast<const QRectF*>(self)->intersected(*other);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

bool QRectF_Intersects(QRectF* self, QRectF* r) {
	return const_cast<const QRectF*>(self)->intersects(*r);
}

QRectF* QRectF_MarginsAdded(QRectF* self, QMarginsF* margins) {
	QRectF ret = const_cast<const QRectF*>(self)->marginsAdded(*margins);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QRectF_MarginsRemoved(QRectF* self, QMarginsF* margins) {
	QRectF ret = const_cast<const QRectF*>(self)->marginsRemoved(*margins);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QRectF_OperatorPlusAssign(QRectF* self, QMarginsF* margins) {
	QRectF& ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &ret;
}

QRectF* QRectF_OperatorMinusAssign(QRectF* self, QMarginsF* margins) {
	QRectF& ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &ret;
}

QRect* QRectF_ToRect(QRectF* self) {
	QRect ret = const_cast<const QRectF*>(self)->toRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QRectF_ToAlignedRect(QRectF* self) {
	QRect ret = const_cast<const QRectF*>(self)->toAlignedRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QRectF_Delete(QRectF* self) {
	delete self;
}

