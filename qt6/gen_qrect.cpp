#include <QMargins>
#include <QMarginsF>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <qrect.h>
#include "gen_qrect.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

bool QRect_isNull(const QRect* self) {
	return self->isNull();
}

bool QRect_isEmpty(const QRect* self) {
	return self->isEmpty();
}

bool QRect_isValid(const QRect* self) {
	return self->isValid();
}

int QRect_left(const QRect* self) {
	return self->left();
}

int QRect_top(const QRect* self) {
	return self->top();
}

int QRect_right(const QRect* self) {
	return self->right();
}

int QRect_bottom(const QRect* self) {
	return self->bottom();
}

QRect* QRect_normalized(const QRect* self) {
	return new QRect(self->normalized());
}

int QRect_x(const QRect* self) {
	return self->x();
}

int QRect_y(const QRect* self) {
	return self->y();
}

void QRect_setLeft(QRect* self, int pos) {
	self->setLeft(static_cast<int>(pos));
}

void QRect_setTop(QRect* self, int pos) {
	self->setTop(static_cast<int>(pos));
}

void QRect_setRight(QRect* self, int pos) {
	self->setRight(static_cast<int>(pos));
}

void QRect_setBottom(QRect* self, int pos) {
	self->setBottom(static_cast<int>(pos));
}

void QRect_setX(QRect* self, int x) {
	self->setX(static_cast<int>(x));
}

void QRect_setY(QRect* self, int y) {
	self->setY(static_cast<int>(y));
}

void QRect_setTopLeft(QRect* self, QPoint* p) {
	self->setTopLeft(*p);
}

void QRect_setBottomRight(QRect* self, QPoint* p) {
	self->setBottomRight(*p);
}

void QRect_setTopRight(QRect* self, QPoint* p) {
	self->setTopRight(*p);
}

void QRect_setBottomLeft(QRect* self, QPoint* p) {
	self->setBottomLeft(*p);
}

QPoint* QRect_topLeft(const QRect* self) {
	return new QPoint(self->topLeft());
}

QPoint* QRect_bottomRight(const QRect* self) {
	return new QPoint(self->bottomRight());
}

QPoint* QRect_topRight(const QRect* self) {
	return new QPoint(self->topRight());
}

QPoint* QRect_bottomLeft(const QRect* self) {
	return new QPoint(self->bottomLeft());
}

QPoint* QRect_center(const QRect* self) {
	return new QPoint(self->center());
}

void QRect_moveLeft(QRect* self, int pos) {
	self->moveLeft(static_cast<int>(pos));
}

void QRect_moveTop(QRect* self, int pos) {
	self->moveTop(static_cast<int>(pos));
}

void QRect_moveRight(QRect* self, int pos) {
	self->moveRight(static_cast<int>(pos));
}

void QRect_moveBottom(QRect* self, int pos) {
	self->moveBottom(static_cast<int>(pos));
}

void QRect_moveTopLeft(QRect* self, QPoint* p) {
	self->moveTopLeft(*p);
}

void QRect_moveBottomRight(QRect* self, QPoint* p) {
	self->moveBottomRight(*p);
}

void QRect_moveTopRight(QRect* self, QPoint* p) {
	self->moveTopRight(*p);
}

void QRect_moveBottomLeft(QRect* self, QPoint* p) {
	self->moveBottomLeft(*p);
}

void QRect_moveCenter(QRect* self, QPoint* p) {
	self->moveCenter(*p);
}

void QRect_translate(QRect* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

void QRect_translateWithQPoint(QRect* self, QPoint* p) {
	self->translate(*p);
}

QRect* QRect_translated(const QRect* self, int dx, int dy) {
	return new QRect(self->translated(static_cast<int>(dx), static_cast<int>(dy)));
}

QRect* QRect_translatedWithQPoint(const QRect* self, QPoint* p) {
	return new QRect(self->translated(*p));
}

QRect* QRect_transposed(const QRect* self) {
	return new QRect(self->transposed());
}

void QRect_moveTo(QRect* self, int x, int t) {
	self->moveTo(static_cast<int>(x), static_cast<int>(t));
}

void QRect_moveToWithQPoint(QRect* self, QPoint* p) {
	self->moveTo(*p);
}

void QRect_setRect(QRect* self, int x, int y, int w, int h) {
	self->setRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QRect_getRect(const QRect* self, int* x, int* y, int* w, int* h) {
	self->getRect(static_cast<int*>(x), static_cast<int*>(y), static_cast<int*>(w), static_cast<int*>(h));
}

void QRect_setCoords(QRect* self, int x1, int y1, int x2, int y2) {
	self->setCoords(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

void QRect_getCoords(const QRect* self, int* x1, int* y1, int* x2, int* y2) {
	self->getCoords(static_cast<int*>(x1), static_cast<int*>(y1), static_cast<int*>(x2), static_cast<int*>(y2));
}

void QRect_adjust(QRect* self, int x1, int y1, int x2, int y2) {
	self->adjust(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

QRect* QRect_adjusted(const QRect* self, int x1, int y1, int x2, int y2) {
	return new QRect(self->adjusted(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2)));
}

QSize* QRect_size(const QRect* self) {
	return new QSize(self->size());
}

int QRect_width(const QRect* self) {
	return self->width();
}

int QRect_height(const QRect* self) {
	return self->height();
}

void QRect_setWidth(QRect* self, int w) {
	self->setWidth(static_cast<int>(w));
}

void QRect_setHeight(QRect* self, int h) {
	self->setHeight(static_cast<int>(h));
}

void QRect_setSize(QRect* self, QSize* s) {
	self->setSize(*s);
}

QRect* QRect_operatorBitwiseOr(const QRect* self, QRect* r) {
	return new QRect(self->operator|(*r));
}

QRect* QRect_operatorBitwiseAnd(const QRect* self, QRect* r) {
	return new QRect(self->operator&(*r));
}

void QRect_operatorBitwiseOrAssign(QRect* self, QRect* r) {
	self->operator|=(*r);
}

void QRect_operatorBitwiseAndAssign(QRect* self, QRect* r) {
	self->operator&=(*r);
}

bool QRect_contains(const QRect* self, QRect* r) {
	return self->contains(*r);
}

bool QRect_containsWithQPoint(const QRect* self, QPoint* p) {
	return self->contains(*p);
}

bool QRect_contains2(const QRect* self, int x, int y) {
	return self->contains(static_cast<int>(x), static_cast<int>(y));
}

bool QRect_contains3(const QRect* self, int x, int y, bool proper) {
	return self->contains(static_cast<int>(x), static_cast<int>(y), proper);
}

QRect* QRect_united(const QRect* self, QRect* other) {
	return new QRect(self->united(*other));
}

QRect* QRect_intersected(const QRect* self, QRect* other) {
	return new QRect(self->intersected(*other));
}

bool QRect_intersects(const QRect* self, QRect* r) {
	return self->intersects(*r);
}

QRect* QRect_marginsAdded(const QRect* self, QMargins* margins) {
	return new QRect(self->marginsAdded(*margins));
}

QRect* QRect_marginsRemoved(const QRect* self, QMargins* margins) {
	return new QRect(self->marginsRemoved(*margins));
}

QRect* QRect_operatorPlusAssign(QRect* self, QMargins* margins) {
	QRect& _ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QRect* QRect_operatorMinusAssign(QRect* self, QMargins* margins) {
	QRect& _ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QRect* QRect_span(QPoint* p1, QPoint* p2) {
	return new QRect(QRect::span(*p1, *p2));
}

QRectF* QRect_toRectF(const QRect* self) {
	return new QRectF(self->toRectF());
}

bool QRect_contains22(const QRect* self, QRect* r, bool proper) {
	return self->contains(*r, proper);
}

bool QRect_contains23(const QRect* self, QPoint* p, bool proper) {
	return self->contains(*p, proper);
}

void QRect_delete(QRect* self) {
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

bool QRectF_isNull(const QRectF* self) {
	return self->isNull();
}

bool QRectF_isEmpty(const QRectF* self) {
	return self->isEmpty();
}

bool QRectF_isValid(const QRectF* self) {
	return self->isValid();
}

QRectF* QRectF_normalized(const QRectF* self) {
	return new QRectF(self->normalized());
}

double QRectF_left(const QRectF* self) {
	qreal _ret = self->left();
	return static_cast<double>(_ret);
}

double QRectF_top(const QRectF* self) {
	qreal _ret = self->top();
	return static_cast<double>(_ret);
}

double QRectF_right(const QRectF* self) {
	qreal _ret = self->right();
	return static_cast<double>(_ret);
}

double QRectF_bottom(const QRectF* self) {
	qreal _ret = self->bottom();
	return static_cast<double>(_ret);
}

double QRectF_x(const QRectF* self) {
	qreal _ret = self->x();
	return static_cast<double>(_ret);
}

double QRectF_y(const QRectF* self) {
	qreal _ret = self->y();
	return static_cast<double>(_ret);
}

void QRectF_setLeft(QRectF* self, double pos) {
	self->setLeft(static_cast<qreal>(pos));
}

void QRectF_setTop(QRectF* self, double pos) {
	self->setTop(static_cast<qreal>(pos));
}

void QRectF_setRight(QRectF* self, double pos) {
	self->setRight(static_cast<qreal>(pos));
}

void QRectF_setBottom(QRectF* self, double pos) {
	self->setBottom(static_cast<qreal>(pos));
}

void QRectF_setX(QRectF* self, double pos) {
	self->setX(static_cast<qreal>(pos));
}

void QRectF_setY(QRectF* self, double pos) {
	self->setY(static_cast<qreal>(pos));
}

QPointF* QRectF_topLeft(const QRectF* self) {
	return new QPointF(self->topLeft());
}

QPointF* QRectF_bottomRight(const QRectF* self) {
	return new QPointF(self->bottomRight());
}

QPointF* QRectF_topRight(const QRectF* self) {
	return new QPointF(self->topRight());
}

QPointF* QRectF_bottomLeft(const QRectF* self) {
	return new QPointF(self->bottomLeft());
}

QPointF* QRectF_center(const QRectF* self) {
	return new QPointF(self->center());
}

void QRectF_setTopLeft(QRectF* self, QPointF* p) {
	self->setTopLeft(*p);
}

void QRectF_setBottomRight(QRectF* self, QPointF* p) {
	self->setBottomRight(*p);
}

void QRectF_setTopRight(QRectF* self, QPointF* p) {
	self->setTopRight(*p);
}

void QRectF_setBottomLeft(QRectF* self, QPointF* p) {
	self->setBottomLeft(*p);
}

void QRectF_moveLeft(QRectF* self, double pos) {
	self->moveLeft(static_cast<qreal>(pos));
}

void QRectF_moveTop(QRectF* self, double pos) {
	self->moveTop(static_cast<qreal>(pos));
}

void QRectF_moveRight(QRectF* self, double pos) {
	self->moveRight(static_cast<qreal>(pos));
}

void QRectF_moveBottom(QRectF* self, double pos) {
	self->moveBottom(static_cast<qreal>(pos));
}

void QRectF_moveTopLeft(QRectF* self, QPointF* p) {
	self->moveTopLeft(*p);
}

void QRectF_moveBottomRight(QRectF* self, QPointF* p) {
	self->moveBottomRight(*p);
}

void QRectF_moveTopRight(QRectF* self, QPointF* p) {
	self->moveTopRight(*p);
}

void QRectF_moveBottomLeft(QRectF* self, QPointF* p) {
	self->moveBottomLeft(*p);
}

void QRectF_moveCenter(QRectF* self, QPointF* p) {
	self->moveCenter(*p);
}

void QRectF_translate(QRectF* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QRectF_translateWithQPointF(QRectF* self, QPointF* p) {
	self->translate(*p);
}

QRectF* QRectF_translated(const QRectF* self, double dx, double dy) {
	return new QRectF(self->translated(static_cast<qreal>(dx), static_cast<qreal>(dy)));
}

QRectF* QRectF_translatedWithQPointF(const QRectF* self, QPointF* p) {
	return new QRectF(self->translated(*p));
}

QRectF* QRectF_transposed(const QRectF* self) {
	return new QRectF(self->transposed());
}

void QRectF_moveTo(QRectF* self, double x, double y) {
	self->moveTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QRectF_moveToWithQPointF(QRectF* self, QPointF* p) {
	self->moveTo(*p);
}

void QRectF_setRect(QRectF* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QRectF_getRect(const QRectF* self, double* x, double* y, double* w, double* h) {
	self->getRect(static_cast<qreal*>(x), static_cast<qreal*>(y), static_cast<qreal*>(w), static_cast<qreal*>(h));
}

void QRectF_setCoords(QRectF* self, double x1, double y1, double x2, double y2) {
	self->setCoords(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

void QRectF_getCoords(const QRectF* self, double* x1, double* y1, double* x2, double* y2) {
	self->getCoords(static_cast<qreal*>(x1), static_cast<qreal*>(y1), static_cast<qreal*>(x2), static_cast<qreal*>(y2));
}

void QRectF_adjust(QRectF* self, double x1, double y1, double x2, double y2) {
	self->adjust(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QRectF* QRectF_adjusted(const QRectF* self, double x1, double y1, double x2, double y2) {
	return new QRectF(self->adjusted(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2)));
}

QSizeF* QRectF_size(const QRectF* self) {
	return new QSizeF(self->size());
}

double QRectF_width(const QRectF* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

double QRectF_height(const QRectF* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

void QRectF_setWidth(QRectF* self, double w) {
	self->setWidth(static_cast<qreal>(w));
}

void QRectF_setHeight(QRectF* self, double h) {
	self->setHeight(static_cast<qreal>(h));
}

void QRectF_setSize(QRectF* self, QSizeF* s) {
	self->setSize(*s);
}

QRectF* QRectF_operatorBitwiseOr(const QRectF* self, QRectF* r) {
	return new QRectF(self->operator|(*r));
}

QRectF* QRectF_operatorBitwiseAnd(const QRectF* self, QRectF* r) {
	return new QRectF(self->operator&(*r));
}

void QRectF_operatorBitwiseOrAssign(QRectF* self, QRectF* r) {
	self->operator|=(*r);
}

void QRectF_operatorBitwiseAndAssign(QRectF* self, QRectF* r) {
	self->operator&=(*r);
}

bool QRectF_contains(const QRectF* self, QRectF* r) {
	return self->contains(*r);
}

bool QRectF_containsWithQPointF(const QRectF* self, QPointF* p) {
	return self->contains(*p);
}

bool QRectF_contains2(const QRectF* self, double x, double y) {
	return self->contains(static_cast<qreal>(x), static_cast<qreal>(y));
}

QRectF* QRectF_united(const QRectF* self, QRectF* other) {
	return new QRectF(self->united(*other));
}

QRectF* QRectF_intersected(const QRectF* self, QRectF* other) {
	return new QRectF(self->intersected(*other));
}

bool QRectF_intersects(const QRectF* self, QRectF* r) {
	return self->intersects(*r);
}

QRectF* QRectF_marginsAdded(const QRectF* self, QMarginsF* margins) {
	return new QRectF(self->marginsAdded(*margins));
}

QRectF* QRectF_marginsRemoved(const QRectF* self, QMarginsF* margins) {
	return new QRectF(self->marginsRemoved(*margins));
}

QRectF* QRectF_operatorPlusAssign(QRectF* self, QMarginsF* margins) {
	QRectF& _ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QRectF* QRectF_operatorMinusAssign(QRectF* self, QMarginsF* margins) {
	QRectF& _ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QRect* QRectF_toRect(const QRectF* self) {
	return new QRect(self->toRect());
}

QRect* QRectF_toAlignedRect(const QRectF* self) {
	return new QRect(self->toAlignedRect());
}

void QRectF_delete(QRectF* self) {
	delete self;
}

