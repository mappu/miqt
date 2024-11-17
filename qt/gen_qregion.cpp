#include <QBitmap>
#include <QList>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <qregion.h>
#include "gen_qregion.h"
#include "_cgo_export.h"

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

void QRegion_OperatorAssign(QRegion* self, QRegion* param1) {
	self->operator=(*param1);
}

void QRegion_Swap(QRegion* self, QRegion* other) {
	self->swap(*other);
}

bool QRegion_IsEmpty(const QRegion* self) {
	return self->isEmpty();
}

bool QRegion_IsNull(const QRegion* self) {
	return self->isNull();
}

QRect* QRegion_Begin(const QRegion* self) {
	QRegion::const_iterator _ret = self->begin();
	return const_cast<QRect*>(static_cast<const QRect*>(_ret));
}

QRect* QRegion_Cbegin(const QRegion* self) {
	QRegion::const_iterator _ret = self->cbegin();
	return const_cast<QRect*>(static_cast<const QRect*>(_ret));
}

QRect* QRegion_End(const QRegion* self) {
	QRegion::const_iterator _ret = self->end();
	return const_cast<QRect*>(static_cast<const QRect*>(_ret));
}

QRect* QRegion_Cend(const QRegion* self) {
	QRegion::const_iterator _ret = self->cend();
	return const_cast<QRect*>(static_cast<const QRect*>(_ret));
}

bool QRegion_Contains(const QRegion* self, QPoint* p) {
	return self->contains(*p);
}

bool QRegion_ContainsWithQRect(const QRegion* self, QRect* r) {
	return self->contains(*r);
}

void QRegion_Translate(QRegion* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

void QRegion_TranslateWithQPoint(QRegion* self, QPoint* p) {
	self->translate(*p);
}

QRegion* QRegion_Translated(const QRegion* self, int dx, int dy) {
	return new QRegion(self->translated(static_cast<int>(dx), static_cast<int>(dy)));
}

QRegion* QRegion_TranslatedWithQPoint(const QRegion* self, QPoint* p) {
	return new QRegion(self->translated(*p));
}

QRegion* QRegion_United(const QRegion* self, QRegion* r) {
	return new QRegion(self->united(*r));
}

QRegion* QRegion_UnitedWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->united(*r));
}

QRegion* QRegion_Intersected(const QRegion* self, QRegion* r) {
	return new QRegion(self->intersected(*r));
}

QRegion* QRegion_IntersectedWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->intersected(*r));
}

QRegion* QRegion_Subtracted(const QRegion* self, QRegion* r) {
	return new QRegion(self->subtracted(*r));
}

QRegion* QRegion_Xored(const QRegion* self, QRegion* r) {
	return new QRegion(self->xored(*r));
}

bool QRegion_Intersects(const QRegion* self, QRegion* r) {
	return self->intersects(*r);
}

bool QRegion_IntersectsWithQRect(const QRegion* self, QRect* r) {
	return self->intersects(*r);
}

QRect* QRegion_BoundingRect(const QRegion* self) {
	return new QRect(self->boundingRect());
}

struct miqt_array /* of QRect* */  QRegion_Rects(const QRegion* self) {
	QVector<QRect> _ret = self->rects();
	// Convert QList<> from C++ memory to manually-managed C memory
	QRect** _arr = static_cast<QRect**>(malloc(sizeof(QRect*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QRect(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QRegion_SetRects(QRegion* self, QRect* rect, int num) {
	self->setRects(rect, static_cast<int>(num));
}

int QRegion_RectCount(const QRegion* self) {
	return self->rectCount();
}

QRegion* QRegion_OperatorBitwiseOr(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator|(*r));
}

QRegion* QRegion_OperatorPlus(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator+(*r));
}

QRegion* QRegion_OperatorPlusWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->operator+(*r));
}

QRegion* QRegion_OperatorBitwiseAnd(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator&(*r));
}

QRegion* QRegion_OperatorBitwiseAndWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->operator&(*r));
}

QRegion* QRegion_OperatorMinus(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator-(*r));
}

QRegion* QRegion_OperatorBitwiseNot(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator^(*r));
}

void QRegion_OperatorBitwiseOrAssign(QRegion* self, QRegion* r) {
	self->operator|=(*r);
}

QRegion* QRegion_OperatorPlusAssign(QRegion* self, QRegion* r) {
	QRegion& _ret = self->operator+=(*r);
	// Cast returned reference into pointer
	return &_ret;
}

QRegion* QRegion_OperatorPlusAssignWithQRect(QRegion* self, QRect* r) {
	QRegion& _ret = self->operator+=(*r);
	// Cast returned reference into pointer
	return &_ret;
}

void QRegion_OperatorBitwiseAndAssign(QRegion* self, QRegion* r) {
	self->operator&=(*r);
}

void QRegion_OperatorBitwiseAndAssignWithQRect(QRegion* self, QRect* r) {
	self->operator&=(*r);
}

QRegion* QRegion_OperatorMinusAssign(QRegion* self, QRegion* r) {
	QRegion& _ret = self->operator-=(*r);
	// Cast returned reference into pointer
	return &_ret;
}

void QRegion_OperatorBitwiseNotAssign(QRegion* self, QRegion* r) {
	self->operator^=(*r);
}

bool QRegion_OperatorEqual(const QRegion* self, QRegion* r) {
	return self->operator==(*r);
}

bool QRegion_OperatorNotEqual(const QRegion* self, QRegion* r) {
	return self->operator!=(*r);
}

void QRegion_Delete(QRegion* self) {
	delete self;
}

