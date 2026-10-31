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

struct miqt_qrect QRect_new() {
	return miqt_to_cabi<struct miqt_qrect>(QRect());
}

struct miqt_qrect QRect_new2(struct miqt_qpoint topleft, struct miqt_qpoint bottomright) {
	return miqt_to_cabi<struct miqt_qrect>(QRect(miqt_from_cabi<QPoint>(topleft), miqt_from_cabi<QPoint>(bottomright)));
}

struct miqt_qrect QRect_new3(struct miqt_qpoint topleft, struct miqt_qsize size) {
	return miqt_to_cabi<struct miqt_qrect>(QRect(miqt_from_cabi<QPoint>(topleft), miqt_from_cabi<QSize>(size)));
}

struct miqt_qrect QRect_new4(int left, int top, int width, int height) {
	return miqt_to_cabi<struct miqt_qrect>(QRect(static_cast<int>(left), static_cast<int>(top), static_cast<int>(width), static_cast<int>(height)));
}

struct miqt_qrect QRect_new5(struct miqt_qrect param1) {
	return miqt_to_cabi<struct miqt_qrect>(QRect(miqt_from_cabi<QRect>(param1)));
}

bool QRect_isNull(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->isNull();
}

bool QRect_isEmpty(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->isEmpty();
}

bool QRect_isValid(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->isValid();
}

int QRect_left(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->left();
}

int QRect_top(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->top();
}

int QRect_right(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->right();
}

int QRect_bottom(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->bottom();
}

struct miqt_qrect QRect_normalized(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->normalized());
}

int QRect_x(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->x();
}

int QRect_y(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
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

void QRect_setTopLeft(QRect* self, struct miqt_qpoint p) {
	self->setTopLeft(miqt_from_cabi<QPoint>(p));
}

void QRect_setBottomRight(QRect* self, struct miqt_qpoint p) {
	self->setBottomRight(miqt_from_cabi<QPoint>(p));
}

void QRect_setTopRight(QRect* self, struct miqt_qpoint p) {
	self->setTopRight(miqt_from_cabi<QPoint>(p));
}

void QRect_setBottomLeft(QRect* self, struct miqt_qpoint p) {
	self->setBottomLeft(miqt_from_cabi<QPoint>(p));
}

struct miqt_qpoint QRect_topLeft(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qpoint>(self->topLeft());
}

struct miqt_qpoint QRect_bottomRight(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qpoint>(self->bottomRight());
}

struct miqt_qpoint QRect_topRight(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qpoint>(self->topRight());
}

struct miqt_qpoint QRect_bottomLeft(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qpoint>(self->bottomLeft());
}

struct miqt_qpoint QRect_center(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qpoint>(self->center());
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

void QRect_moveTopLeft(QRect* self, struct miqt_qpoint p) {
	self->moveTopLeft(miqt_from_cabi<QPoint>(p));
}

void QRect_moveBottomRight(QRect* self, struct miqt_qpoint p) {
	self->moveBottomRight(miqt_from_cabi<QPoint>(p));
}

void QRect_moveTopRight(QRect* self, struct miqt_qpoint p) {
	self->moveTopRight(miqt_from_cabi<QPoint>(p));
}

void QRect_moveBottomLeft(QRect* self, struct miqt_qpoint p) {
	self->moveBottomLeft(miqt_from_cabi<QPoint>(p));
}

void QRect_moveCenter(QRect* self, struct miqt_qpoint p) {
	self->moveCenter(miqt_from_cabi<QPoint>(p));
}

void QRect_translate(QRect* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

void QRect_translateWithQPoint(QRect* self, struct miqt_qpoint p) {
	self->translate(miqt_from_cabi<QPoint>(p));
}

struct miqt_qrect QRect_translated(struct miqt_qrect self_cabi, int dx, int dy) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->translated(static_cast<int>(dx), static_cast<int>(dy)));
}

struct miqt_qrect QRect_translatedWithQPoint(struct miqt_qrect self_cabi, struct miqt_qpoint p) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->translated(miqt_from_cabi<QPoint>(p)));
}

struct miqt_qrect QRect_transposed(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->transposed());
}

void QRect_moveTo(QRect* self, int x, int t) {
	self->moveTo(static_cast<int>(x), static_cast<int>(t));
}

void QRect_moveToWithQPoint(QRect* self, struct miqt_qpoint p) {
	self->moveTo(miqt_from_cabi<QPoint>(p));
}

void QRect_setRect(QRect* self, int x, int y, int w, int h) {
	self->setRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QRect_getRect(struct miqt_qrect self_cabi, int* x, int* y, int* w, int* h) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	self->getRect(static_cast<int*>(x), static_cast<int*>(y), static_cast<int*>(w), static_cast<int*>(h));
}

void QRect_setCoords(QRect* self, int x1, int y1, int x2, int y2) {
	self->setCoords(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

void QRect_getCoords(struct miqt_qrect self_cabi, int* x1, int* y1, int* x2, int* y2) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	self->getCoords(static_cast<int*>(x1), static_cast<int*>(y1), static_cast<int*>(x2), static_cast<int*>(y2));
}

void QRect_adjust(QRect* self, int x1, int y1, int x2, int y2) {
	self->adjust(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

struct miqt_qrect QRect_adjusted(struct miqt_qrect self_cabi, int x1, int y1, int x2, int y2) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->adjusted(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2)));
}

struct miqt_qsize QRect_size(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qsize>(self->size());
}

int QRect_width(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->width();
}

int QRect_height(struct miqt_qrect self_cabi) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->height();
}

void QRect_setWidth(QRect* self, int w) {
	self->setWidth(static_cast<int>(w));
}

void QRect_setHeight(QRect* self, int h) {
	self->setHeight(static_cast<int>(h));
}

void QRect_setSize(QRect* self, struct miqt_qsize s) {
	self->setSize(miqt_from_cabi<QSize>(s));
}

struct miqt_qrect QRect_operatorBitwiseOr(struct miqt_qrect self_cabi, struct miqt_qrect r) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->operator|(miqt_from_cabi<QRect>(r)));
}

struct miqt_qrect QRect_operatorBitwiseAnd(struct miqt_qrect self_cabi, struct miqt_qrect r) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->operator&(miqt_from_cabi<QRect>(r)));
}

void QRect_operatorBitwiseOrAssign(QRect* self, struct miqt_qrect r) {
	self->operator|=(miqt_from_cabi<QRect>(r));
}

void QRect_operatorBitwiseAndAssign(QRect* self, struct miqt_qrect r) {
	self->operator&=(miqt_from_cabi<QRect>(r));
}

bool QRect_contains(struct miqt_qrect self_cabi, struct miqt_qrect r) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->contains(miqt_from_cabi<QRect>(r));
}

bool QRect_containsWithQPoint(struct miqt_qrect self_cabi, struct miqt_qpoint p) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->contains(miqt_from_cabi<QPoint>(p));
}

bool QRect_contains2(struct miqt_qrect self_cabi, int x, int y) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->contains(static_cast<int>(x), static_cast<int>(y));
}

bool QRect_contains3(struct miqt_qrect self_cabi, int x, int y, bool proper) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->contains(static_cast<int>(x), static_cast<int>(y), proper);
}

struct miqt_qrect QRect_united(struct miqt_qrect self_cabi, struct miqt_qrect other) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->united(miqt_from_cabi<QRect>(other)));
}

struct miqt_qrect QRect_intersected(struct miqt_qrect self_cabi, struct miqt_qrect other) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->intersected(miqt_from_cabi<QRect>(other)));
}

bool QRect_intersects(struct miqt_qrect self_cabi, struct miqt_qrect r) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->intersects(miqt_from_cabi<QRect>(r));
}

struct miqt_qrect QRect_marginsAdded(struct miqt_qrect self_cabi, struct miqt_qmargins margins) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->marginsAdded(miqt_from_cabi<QMargins>(margins)));
}

struct miqt_qrect QRect_marginsRemoved(struct miqt_qrect self_cabi, struct miqt_qmargins margins) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->marginsRemoved(miqt_from_cabi<QMargins>(margins)));
}

QRect* QRect_operatorPlusAssign(QRect* self, struct miqt_qmargins margins) {
	QRect& _ret = self->operator+=(miqt_from_cabi<QMargins>(margins));
	// Cast returned reference into pointer
	return &_ret;
}

QRect* QRect_operatorMinusAssign(QRect* self, struct miqt_qmargins margins) {
	QRect& _ret = self->operator-=(miqt_from_cabi<QMargins>(margins));
	// Cast returned reference into pointer
	return &_ret;
}

void QRect_operatorAssign(QRect* self, struct miqt_qrect param1) {
	self->operator=(miqt_from_cabi<QRect>(param1));
}

bool QRect_contains4(struct miqt_qrect self_cabi, struct miqt_qrect r, bool proper) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->contains(miqt_from_cabi<QRect>(r), proper);
}

bool QRect_contains5(struct miqt_qrect self_cabi, struct miqt_qpoint p, bool proper) {
	const QRect self_val = miqt_from_cabi<QRect>(self_cabi);
	const QRect* self = &self_val;
	return self->contains(miqt_from_cabi<QPoint>(p), proper);
}

struct miqt_qrectf QRectF_new() {
	return miqt_to_cabi<struct miqt_qrectf>(QRectF());
}

struct miqt_qrectf QRectF_new2(struct miqt_qpointf topleft, struct miqt_qsizef size) {
	return miqt_to_cabi<struct miqt_qrectf>(QRectF(miqt_from_cabi<QPointF>(topleft), miqt_from_cabi<QSizeF>(size)));
}

struct miqt_qrectf QRectF_new3(struct miqt_qpointf topleft, struct miqt_qpointf bottomRight) {
	return miqt_to_cabi<struct miqt_qrectf>(QRectF(miqt_from_cabi<QPointF>(topleft), miqt_from_cabi<QPointF>(bottomRight)));
}

struct miqt_qrectf QRectF_new4(double left, double top, double width, double height) {
	return miqt_to_cabi<struct miqt_qrectf>(QRectF(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(width), static_cast<qreal>(height)));
}

struct miqt_qrectf QRectF_new5(struct miqt_qrect rect) {
	return miqt_to_cabi<struct miqt_qrectf>(QRectF(miqt_from_cabi<QRect>(rect)));
}

struct miqt_qrectf QRectF_new6(struct miqt_qrectf param1) {
	return miqt_to_cabi<struct miqt_qrectf>(QRectF(miqt_from_cabi<QRectF>(param1)));
}

bool QRectF_isNull(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return self->isNull();
}

bool QRectF_isEmpty(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return self->isEmpty();
}

bool QRectF_isValid(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return self->isValid();
}

struct miqt_qrectf QRectF_normalized(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->normalized());
}

double QRectF_left(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	qreal _ret = self->left();
	return static_cast<double>(_ret);
}

double QRectF_top(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	qreal _ret = self->top();
	return static_cast<double>(_ret);
}

double QRectF_right(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	qreal _ret = self->right();
	return static_cast<double>(_ret);
}

double QRectF_bottom(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	qreal _ret = self->bottom();
	return static_cast<double>(_ret);
}

double QRectF_x(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	qreal _ret = self->x();
	return static_cast<double>(_ret);
}

double QRectF_y(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
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

struct miqt_qpointf QRectF_topLeft(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qpointf>(self->topLeft());
}

struct miqt_qpointf QRectF_bottomRight(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qpointf>(self->bottomRight());
}

struct miqt_qpointf QRectF_topRight(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qpointf>(self->topRight());
}

struct miqt_qpointf QRectF_bottomLeft(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qpointf>(self->bottomLeft());
}

struct miqt_qpointf QRectF_center(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qpointf>(self->center());
}

void QRectF_setTopLeft(QRectF* self, struct miqt_qpointf p) {
	self->setTopLeft(miqt_from_cabi<QPointF>(p));
}

void QRectF_setBottomRight(QRectF* self, struct miqt_qpointf p) {
	self->setBottomRight(miqt_from_cabi<QPointF>(p));
}

void QRectF_setTopRight(QRectF* self, struct miqt_qpointf p) {
	self->setTopRight(miqt_from_cabi<QPointF>(p));
}

void QRectF_setBottomLeft(QRectF* self, struct miqt_qpointf p) {
	self->setBottomLeft(miqt_from_cabi<QPointF>(p));
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

void QRectF_moveTopLeft(QRectF* self, struct miqt_qpointf p) {
	self->moveTopLeft(miqt_from_cabi<QPointF>(p));
}

void QRectF_moveBottomRight(QRectF* self, struct miqt_qpointf p) {
	self->moveBottomRight(miqt_from_cabi<QPointF>(p));
}

void QRectF_moveTopRight(QRectF* self, struct miqt_qpointf p) {
	self->moveTopRight(miqt_from_cabi<QPointF>(p));
}

void QRectF_moveBottomLeft(QRectF* self, struct miqt_qpointf p) {
	self->moveBottomLeft(miqt_from_cabi<QPointF>(p));
}

void QRectF_moveCenter(QRectF* self, struct miqt_qpointf p) {
	self->moveCenter(miqt_from_cabi<QPointF>(p));
}

void QRectF_translate(QRectF* self, double dx, double dy) {
	self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QRectF_translateWithQPointF(QRectF* self, struct miqt_qpointf p) {
	self->translate(miqt_from_cabi<QPointF>(p));
}

struct miqt_qrectf QRectF_translated(struct miqt_qrectf self_cabi, double dx, double dy) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->translated(static_cast<qreal>(dx), static_cast<qreal>(dy)));
}

struct miqt_qrectf QRectF_translatedWithQPointF(struct miqt_qrectf self_cabi, struct miqt_qpointf p) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->translated(miqt_from_cabi<QPointF>(p)));
}

struct miqt_qrectf QRectF_transposed(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->transposed());
}

void QRectF_moveTo(QRectF* self, double x, double y) {
	self->moveTo(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QRectF_moveToWithQPointF(QRectF* self, struct miqt_qpointf p) {
	self->moveTo(miqt_from_cabi<QPointF>(p));
}

void QRectF_setRect(QRectF* self, double x, double y, double w, double h) {
	self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QRectF_getRect(struct miqt_qrectf self_cabi, double* x, double* y, double* w, double* h) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	self->getRect(static_cast<qreal*>(x), static_cast<qreal*>(y), static_cast<qreal*>(w), static_cast<qreal*>(h));
}

void QRectF_setCoords(QRectF* self, double x1, double y1, double x2, double y2) {
	self->setCoords(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

void QRectF_getCoords(struct miqt_qrectf self_cabi, double* x1, double* y1, double* x2, double* y2) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	self->getCoords(static_cast<qreal*>(x1), static_cast<qreal*>(y1), static_cast<qreal*>(x2), static_cast<qreal*>(y2));
}

void QRectF_adjust(QRectF* self, double x1, double y1, double x2, double y2) {
	self->adjust(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

struct miqt_qrectf QRectF_adjusted(struct miqt_qrectf self_cabi, double x1, double y1, double x2, double y2) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->adjusted(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2)));
}

struct miqt_qsizef QRectF_size(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qsizef>(self->size());
}

double QRectF_width(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

double QRectF_height(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

void QRectF_setWidth(QRectF* self, double w) {
	self->setWidth(static_cast<qreal>(w));
}

void QRectF_setHeight(QRectF* self, double h) {
	self->setHeight(static_cast<qreal>(h));
}

void QRectF_setSize(QRectF* self, struct miqt_qsizef s) {
	self->setSize(miqt_from_cabi<QSizeF>(s));
}

struct miqt_qrectf QRectF_operatorBitwiseOr(struct miqt_qrectf self_cabi, struct miqt_qrectf r) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->operator|(miqt_from_cabi<QRectF>(r)));
}

struct miqt_qrectf QRectF_operatorBitwiseAnd(struct miqt_qrectf self_cabi, struct miqt_qrectf r) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->operator&(miqt_from_cabi<QRectF>(r)));
}

void QRectF_operatorBitwiseOrAssign(QRectF* self, struct miqt_qrectf r) {
	self->operator|=(miqt_from_cabi<QRectF>(r));
}

void QRectF_operatorBitwiseAndAssign(QRectF* self, struct miqt_qrectf r) {
	self->operator&=(miqt_from_cabi<QRectF>(r));
}

bool QRectF_contains(struct miqt_qrectf self_cabi, struct miqt_qrectf r) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return self->contains(miqt_from_cabi<QRectF>(r));
}

bool QRectF_containsWithQPointF(struct miqt_qrectf self_cabi, struct miqt_qpointf p) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return self->contains(miqt_from_cabi<QPointF>(p));
}

bool QRectF_contains2(struct miqt_qrectf self_cabi, double x, double y) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return self->contains(static_cast<qreal>(x), static_cast<qreal>(y));
}

struct miqt_qrectf QRectF_united(struct miqt_qrectf self_cabi, struct miqt_qrectf other) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->united(miqt_from_cabi<QRectF>(other)));
}

struct miqt_qrectf QRectF_intersected(struct miqt_qrectf self_cabi, struct miqt_qrectf other) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->intersected(miqt_from_cabi<QRectF>(other)));
}

bool QRectF_intersects(struct miqt_qrectf self_cabi, struct miqt_qrectf r) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return self->intersects(miqt_from_cabi<QRectF>(r));
}

struct miqt_qrectf QRectF_marginsAdded(struct miqt_qrectf self_cabi, struct miqt_qmarginsf margins) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->marginsAdded(miqt_from_cabi<QMarginsF>(margins)));
}

struct miqt_qrectf QRectF_marginsRemoved(struct miqt_qrectf self_cabi, struct miqt_qmarginsf margins) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrectf>(self->marginsRemoved(miqt_from_cabi<QMarginsF>(margins)));
}

QRectF* QRectF_operatorPlusAssign(QRectF* self, struct miqt_qmarginsf margins) {
	QRectF& _ret = self->operator+=(miqt_from_cabi<QMarginsF>(margins));
	// Cast returned reference into pointer
	return &_ret;
}

QRectF* QRectF_operatorMinusAssign(QRectF* self, struct miqt_qmarginsf margins) {
	QRectF& _ret = self->operator-=(miqt_from_cabi<QMarginsF>(margins));
	// Cast returned reference into pointer
	return &_ret;
}

struct miqt_qrect QRectF_toRect(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->toRect());
}

struct miqt_qrect QRectF_toAlignedRect(struct miqt_qrectf self_cabi) {
	const QRectF self_val = miqt_from_cabi<QRectF>(self_cabi);
	const QRectF* self = &self_val;
	return miqt_to_cabi<struct miqt_qrect>(self->toAlignedRect());
}

void QRectF_operatorAssign(QRectF* self, struct miqt_qrectf param1) {
	self->operator=(miqt_from_cabi<QRectF>(param1));
}

