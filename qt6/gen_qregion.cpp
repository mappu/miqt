#include <QBitmap>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QVariant>
#include <qregion.h>
#include "gen_qregion.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QRegion* QRegion_new() {
	return new QRegion();
}

QRegion* QRegion_new2(int x, int y, int w, int h) {
	return new QRegion(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

QRegion* QRegion_new3(QRect* r) {
	return new QRegion(*r);
}

QRegion* QRegion_new4(QRegion* region) {
	return new QRegion(*region);
}

QRegion* QRegion_new5(QBitmap* bitmap) {
	return new QRegion(*bitmap);
}

QRegion* QRegion_new6(int x, int y, int w, int h, int t) {
	return new QRegion(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<QRegion::RegionType>(t));
}

QRegion* QRegion_new7(QRect* r, int t) {
	return new QRegion(*r, static_cast<QRegion::RegionType>(t));
}

void QRegion_operatorAssign(QRegion* self, QRegion* param1) {
	self->operator=(*param1);
}

void QRegion_swap(QRegion* self, QRegion* other) {
	self->swap(*other);
}

bool QRegion_isEmpty(const QRegion* self) {
	return self->isEmpty();
}

bool QRegion_isNull(const QRegion* self) {
	return self->isNull();
}

QRect* QRegion_begin(const QRegion* self) {
	QRegion::const_iterator _ret = self->begin();
	return const_cast<QRect*>(static_cast<const QRect*>(_ret));
}

QRect* QRegion_cbegin(const QRegion* self) {
	QRegion::const_iterator _ret = self->cbegin();
	return const_cast<QRect*>(static_cast<const QRect*>(_ret));
}

QRect* QRegion_end(const QRegion* self) {
	QRegion::const_iterator _ret = self->end();
	return const_cast<QRect*>(static_cast<const QRect*>(_ret));
}

QRect* QRegion_cend(const QRegion* self) {
	QRegion::const_iterator _ret = self->cend();
	return const_cast<QRect*>(static_cast<const QRect*>(_ret));
}

bool QRegion_contains(const QRegion* self, QPoint* p) {
	return self->contains(*p);
}

bool QRegion_containsWithQRect(const QRegion* self, QRect* r) {
	return self->contains(*r);
}

void QRegion_translate(QRegion* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

void QRegion_translateWithQPoint(QRegion* self, QPoint* p) {
	self->translate(*p);
}

QRegion* QRegion_translated(const QRegion* self, int dx, int dy) {
	return new QRegion(self->translated(static_cast<int>(dx), static_cast<int>(dy)));
}

QRegion* QRegion_translatedWithQPoint(const QRegion* self, QPoint* p) {
	return new QRegion(self->translated(*p));
}

QRegion* QRegion_united(const QRegion* self, QRegion* r) {
	return new QRegion(self->united(*r));
}

QRegion* QRegion_unitedWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->united(*r));
}

QRegion* QRegion_intersected(const QRegion* self, QRegion* r) {
	return new QRegion(self->intersected(*r));
}

QRegion* QRegion_intersectedWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->intersected(*r));
}

QRegion* QRegion_subtracted(const QRegion* self, QRegion* r) {
	return new QRegion(self->subtracted(*r));
}

QRegion* QRegion_xored(const QRegion* self, QRegion* r) {
	return new QRegion(self->xored(*r));
}

bool QRegion_intersects(const QRegion* self, QRegion* r) {
	return self->intersects(*r);
}

bool QRegion_intersectsWithQRect(const QRegion* self, QRect* r) {
	return self->intersects(*r);
}

QRect* QRegion_boundingRect(const QRegion* self) {
	return new QRect(self->boundingRect());
}

void QRegion_setRects(QRegion* self, QRect* rect, int num) {
	self->setRects(rect, static_cast<int>(num));
}

int QRegion_rectCount(const QRegion* self) {
	return self->rectCount();
}

QRegion* QRegion_operatorBitwiseOr(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator|(*r));
}

QRegion* QRegion_operatorPlus(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator+(*r));
}

QRegion* QRegion_operatorPlusWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->operator+(*r));
}

QRegion* QRegion_operatorBitwiseAnd(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator&(*r));
}

QRegion* QRegion_operatorBitwiseAndWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->operator&(*r));
}

QRegion* QRegion_operatorMinus(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator-(*r));
}

QRegion* QRegion_operatorBitwiseNot(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator^(*r));
}

void QRegion_operatorBitwiseOrAssign(QRegion* self, QRegion* r) {
	self->operator|=(*r);
}

QRegion* QRegion_operatorPlusAssign(QRegion* self, QRegion* r) {
	QRegion& _ret = self->operator+=(*r);
	// Cast returned reference into pointer
	return &_ret;
}

QRegion* QRegion_operatorPlusAssignWithQRect(QRegion* self, QRect* r) {
	QRegion& _ret = self->operator+=(*r);
	// Cast returned reference into pointer
	return &_ret;
}

void QRegion_operatorBitwiseAndAssign(QRegion* self, QRegion* r) {
	self->operator&=(*r);
}

void QRegion_operatorBitwiseAndAssignWithQRect(QRegion* self, QRect* r) {
	self->operator&=(*r);
}

QRegion* QRegion_operatorMinusAssign(QRegion* self, QRegion* r) {
	QRegion& _ret = self->operator-=(*r);
	// Cast returned reference into pointer
	return &_ret;
}

void QRegion_operatorBitwiseNotAssign(QRegion* self, QRegion* r) {
	self->operator^=(*r);
}

bool QRegion_operatorEqual(const QRegion* self, QRegion* r) {
	return (*self == *r);
}

bool QRegion_operatorNotEqual(const QRegion* self, QRegion* r) {
	return (*self != *r);
}

QVariant* QRegion_ToQVariant(const QRegion* self) {
	return new QVariant(self->operator QVariant());
}

void QRegion_delete(QRegion* self) {
	delete self;
}

