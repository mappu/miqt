#include <QBitmap>
#include <QList>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include "qregion.h"
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

QRegion* QRegion_new6(int x, int y, int w, int h, uintptr_t t) {
	return new QRegion(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<QRegion::RegionType>(t));
}

QRegion* QRegion_new7(QRect* r, uintptr_t t) {
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
	return (QRect*) self->begin();
}

QRect* QRegion_Cbegin(const QRegion* self) {
	return (QRect*) self->cbegin();
}

QRect* QRegion_End(const QRegion* self) {
	return (QRect*) self->end();
}

QRect* QRegion_Cend(const QRegion* self) {
	return (QRect*) self->cend();
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
	QRegion _ret = self->translated(static_cast<int>(dx), static_cast<int>(dy));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_TranslatedWithQPoint(const QRegion* self, QPoint* p) {
	QRegion _ret = self->translated(*p);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_United(const QRegion* self, QRegion* r) {
	QRegion _ret = self->united(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_UnitedWithQRect(const QRegion* self, QRect* r) {
	QRegion _ret = self->united(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_Intersected(const QRegion* self, QRegion* r) {
	QRegion _ret = self->intersected(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_IntersectedWithQRect(const QRegion* self, QRect* r) {
	QRegion _ret = self->intersected(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_Subtracted(const QRegion* self, QRegion* r) {
	QRegion _ret = self->subtracted(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_Xored(const QRegion* self, QRegion* r) {
	QRegion _ret = self->xored(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

bool QRegion_Intersects(const QRegion* self, QRegion* r) {
	return self->intersects(*r);
}

bool QRegion_IntersectsWithQRect(const QRegion* self, QRect* r) {
	return self->intersects(*r);
}

QRect* QRegion_BoundingRect(const QRegion* self) {
	QRect _ret = self->boundingRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

struct miqt_array* QRegion_Rects(const QRegion* self) {
	QVector<QRect> _ret = self->rects();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QRect** _arr = static_cast<QRect**>(malloc(sizeof(QRect**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QRect(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QRegion_SetRects(QRegion* self, QRect* rect, int num) {
	self->setRects(rect, static_cast<int>(num));
}

int QRegion_RectCount(const QRegion* self) {
	return self->rectCount();
}

QRegion* QRegion_OperatorBitwiseOr(const QRegion* self, QRegion* r) {
	QRegion _ret = self->operator|(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_OperatorPlus(const QRegion* self, QRegion* r) {
	QRegion _ret = self->operator+(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_OperatorPlusWithQRect(const QRegion* self, QRect* r) {
	QRegion _ret = self->operator+(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_OperatorBitwiseAnd(const QRegion* self, QRegion* r) {
	QRegion _ret = self->operator&(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_OperatorBitwiseAndWithQRect(const QRegion* self, QRect* r) {
	QRegion _ret = self->operator&(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_OperatorMinus(const QRegion* self, QRegion* r) {
	QRegion _ret = self->operator-(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
}

QRegion* QRegion_OperatorBitwiseNot(const QRegion* self, QRegion* r) {
	QRegion _ret = self->operator^(*r);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(_ret));
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

