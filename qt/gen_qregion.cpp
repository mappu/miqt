#include "gen_qregion.h"
#include "qregion.h"

#include <QBitmap>
#include <QList>
#include <QPoint>
#include <QRect>
#include <QRegion>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRegion* QRegion_new() {
	return new QRegion();
}

QRegion* QRegion_new2(QRegion* region) {
	return new QRegion(*region);
}

QRegion* QRegion_new3(QBitmap* bitmap) {
	return new QRegion(*bitmap);
}

void QRegion_OperatorAssign(QRegion* self, QRegion* param1) {
	self->operator=(*param1);
}

void QRegion_Swap(QRegion* self, QRegion* other) {
	self->swap(*other);
}

bool QRegion_IsEmpty(QRegion* self) {
	return self->isEmpty();
}

bool QRegion_IsNull(QRegion* self) {
	return self->isNull();
}

bool QRegion_Contains(QRegion* self, QPoint* p) {
	return self->contains(*p);
}

bool QRegion_ContainsWithQRect(QRegion* self, QRect* r) {
	return self->contains(*r);
}

void QRegion_Translate(QRegion* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

void QRegion_TranslateWithQPoint(QRegion* self, QPoint* p) {
	self->translate(*p);
}

QRegion* QRegion_Translated(QRegion* self, int dx, int dy) {
	QRegion ret = self->translated(static_cast<int>(dx), static_cast<int>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_TranslatedWithQPoint(QRegion* self, QPoint* p) {
	QRegion ret = self->translated(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_United(QRegion* self, QRegion* r) {
	QRegion ret = self->united(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_UnitedWithQRect(QRegion* self, QRect* r) {
	QRegion ret = self->united(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_Intersected(QRegion* self, QRegion* r) {
	QRegion ret = self->intersected(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_IntersectedWithQRect(QRegion* self, QRect* r) {
	QRegion ret = self->intersected(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_Subtracted(QRegion* self, QRegion* r) {
	QRegion ret = self->subtracted(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_Xored(QRegion* self, QRegion* r) {
	QRegion ret = self->xored(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

bool QRegion_Intersects(QRegion* self, QRegion* r) {
	return self->intersects(*r);
}

bool QRegion_IntersectsWithQRect(QRegion* self, QRect* r) {
	return self->intersects(*r);
}

QRect* QRegion_BoundingRect(QRegion* self) {
	QRect ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QRegion_Rects(QRegion* self, QRect*** _out, size_t* _out_len) {
	QVector<QRect> ret = self->rects();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QRect** __out = static_cast<QRect**>(malloc(sizeof(QRect**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QRect(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QRegion_SetRects(QRegion* self, QRect* rect, int num) {
	self->setRects(rect, static_cast<int>(num));
}

int QRegion_RectCount(QRegion* self) {
	return self->rectCount();
}

QRegion* QRegion_OperatorBitwiseOr(QRegion* self, QRegion* r) {
	QRegion ret = self->operator|(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_OperatorPlus(QRegion* self, QRegion* r) {
	QRegion ret = self->operator+(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_OperatorPlusWithQRect(QRegion* self, QRect* r) {
	QRegion ret = self->operator+(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_OperatorBitwiseAnd(QRegion* self, QRegion* r) {
	QRegion ret = self->operator&(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_OperatorBitwiseAndWithQRect(QRegion* self, QRect* r) {
	QRegion ret = self->operator&(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_OperatorMinus(QRegion* self, QRegion* r) {
	QRegion ret = self->operator-(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

QRegion* QRegion_OperatorBitwiseNot(QRegion* self, QRegion* r) {
	QRegion ret = self->operator^(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

void QRegion_OperatorBitwiseOrAssign(QRegion* self, QRegion* r) {
	self->operator|=(*r);
}

QRegion* QRegion_OperatorPlusAssign(QRegion* self, QRegion* r) {
	QRegion& ret = self->operator+=(*r);
	// Cast returned reference into pointer
	return &ret;
}

QRegion* QRegion_OperatorPlusAssignWithQRect(QRegion* self, QRect* r) {
	QRegion& ret = self->operator+=(*r);
	// Cast returned reference into pointer
	return &ret;
}

void QRegion_OperatorBitwiseAndAssign(QRegion* self, QRegion* r) {
	self->operator&=(*r);
}

void QRegion_OperatorBitwiseAndAssignWithQRect(QRegion* self, QRect* r) {
	self->operator&=(*r);
}

QRegion* QRegion_OperatorMinusAssign(QRegion* self, QRegion* r) {
	QRegion& ret = self->operator-=(*r);
	// Cast returned reference into pointer
	return &ret;
}

void QRegion_OperatorBitwiseNotAssign(QRegion* self, QRegion* r) {
	self->operator^=(*r);
}

bool QRegion_OperatorEqual(QRegion* self, QRegion* r) {
	return self->operator==(*r);
}

bool QRegion_OperatorNotEqual(QRegion* self, QRegion* r) {
	return self->operator!=(*r);
}

void QRegion_Delete(QRegion* self) {
	delete self;
}

