#include <QMargins>
#include <QMarginsF>
#include <QPageLayout>
#include <QPageSize>
#include <QRect>
#include <QRectF>
#include "qpagelayout.h"

#include "gen_qpagelayout.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPageLayout* QPageLayout_new() {
	return new QPageLayout();
}

QPageLayout* QPageLayout_new2(QPageSize* pageSize, uintptr_t orientation, QMarginsF* margins) {
	return new QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), *margins);
}

QPageLayout* QPageLayout_new3(QPageLayout* other) {
	return new QPageLayout(*other);
}

QPageLayout* QPageLayout_new4(QPageSize* pageSize, uintptr_t orientation, QMarginsF* margins, uintptr_t units) {
	return new QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), *margins, static_cast<QPageLayout::Unit>(units));
}

QPageLayout* QPageLayout_new5(QPageSize* pageSize, uintptr_t orientation, QMarginsF* margins, uintptr_t units, QMarginsF* minMargins) {
	return new QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), *margins, static_cast<QPageLayout::Unit>(units), *minMargins);
}

void QPageLayout_OperatorAssign(QPageLayout* self, QPageLayout* other) {
	self->operator=(*other);
}

void QPageLayout_Swap(QPageLayout* self, QPageLayout* other) {
	self->swap(*other);
}

bool QPageLayout_IsEquivalentTo(QPageLayout* self, QPageLayout* other) {
	return const_cast<const QPageLayout*>(self)->isEquivalentTo(*other);
}

bool QPageLayout_IsValid(QPageLayout* self) {
	return const_cast<const QPageLayout*>(self)->isValid();
}

void QPageLayout_SetMode(QPageLayout* self, uintptr_t mode) {
	self->setMode(static_cast<QPageLayout::Mode>(mode));
}

uintptr_t QPageLayout_Mode(QPageLayout* self) {
	QPageLayout::Mode ret = const_cast<const QPageLayout*>(self)->mode();
	return static_cast<uintptr_t>(ret);
}

void QPageLayout_SetPageSize(QPageLayout* self, QPageSize* pageSize) {
	self->setPageSize(*pageSize);
}

QPageSize* QPageLayout_PageSize(QPageLayout* self) {
	QPageSize ret = const_cast<const QPageLayout*>(self)->pageSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPageSize*>(new QPageSize(ret));
}

void QPageLayout_SetOrientation(QPageLayout* self, uintptr_t orientation) {
	self->setOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

uintptr_t QPageLayout_Orientation(QPageLayout* self) {
	QPageLayout::Orientation ret = const_cast<const QPageLayout*>(self)->orientation();
	return static_cast<uintptr_t>(ret);
}

void QPageLayout_SetUnits(QPageLayout* self, uintptr_t units) {
	self->setUnits(static_cast<QPageLayout::Unit>(units));
}

uintptr_t QPageLayout_Units(QPageLayout* self) {
	QPageLayout::Unit ret = const_cast<const QPageLayout*>(self)->units();
	return static_cast<uintptr_t>(ret);
}

bool QPageLayout_SetMargins(QPageLayout* self, QMarginsF* margins) {
	return self->setMargins(*margins);
}

bool QPageLayout_SetLeftMargin(QPageLayout* self, double leftMargin) {
	return self->setLeftMargin(static_cast<qreal>(leftMargin));
}

bool QPageLayout_SetRightMargin(QPageLayout* self, double rightMargin) {
	return self->setRightMargin(static_cast<qreal>(rightMargin));
}

bool QPageLayout_SetTopMargin(QPageLayout* self, double topMargin) {
	return self->setTopMargin(static_cast<qreal>(topMargin));
}

bool QPageLayout_SetBottomMargin(QPageLayout* self, double bottomMargin) {
	return self->setBottomMargin(static_cast<qreal>(bottomMargin));
}

QMarginsF* QPageLayout_Margins(QPageLayout* self) {
	QMarginsF ret = const_cast<const QPageLayout*>(self)->margins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(ret));
}

QMarginsF* QPageLayout_MarginsWithUnits(QPageLayout* self, uintptr_t units) {
	QMarginsF ret = const_cast<const QPageLayout*>(self)->margins(static_cast<QPageLayout::Unit>(units));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(ret));
}

QMargins* QPageLayout_MarginsPoints(QPageLayout* self) {
	QMargins ret = const_cast<const QPageLayout*>(self)->marginsPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(ret));
}

QMargins* QPageLayout_MarginsPixels(QPageLayout* self, int resolution) {
	QMargins ret = const_cast<const QPageLayout*>(self)->marginsPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(ret));
}

void QPageLayout_SetMinimumMargins(QPageLayout* self, QMarginsF* minMargins) {
	self->setMinimumMargins(*minMargins);
}

QMarginsF* QPageLayout_MinimumMargins(QPageLayout* self) {
	QMarginsF ret = const_cast<const QPageLayout*>(self)->minimumMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(ret));
}

QMarginsF* QPageLayout_MaximumMargins(QPageLayout* self) {
	QMarginsF ret = const_cast<const QPageLayout*>(self)->maximumMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(ret));
}

QRectF* QPageLayout_FullRect(QPageLayout* self) {
	QRectF ret = const_cast<const QPageLayout*>(self)->fullRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QPageLayout_FullRectWithUnits(QPageLayout* self, uintptr_t units) {
	QRectF ret = const_cast<const QPageLayout*>(self)->fullRect(static_cast<QPageLayout::Unit>(units));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRect* QPageLayout_FullRectPoints(QPageLayout* self) {
	QRect ret = const_cast<const QPageLayout*>(self)->fullRectPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QPageLayout_FullRectPixels(QPageLayout* self, int resolution) {
	QRect ret = const_cast<const QPageLayout*>(self)->fullRectPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRectF* QPageLayout_PaintRect(QPageLayout* self) {
	QRectF ret = const_cast<const QPageLayout*>(self)->paintRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRectF* QPageLayout_PaintRectWithUnits(QPageLayout* self, uintptr_t units) {
	QRectF ret = const_cast<const QPageLayout*>(self)->paintRect(static_cast<QPageLayout::Unit>(units));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRect* QPageLayout_PaintRectPoints(QPageLayout* self) {
	QRect ret = const_cast<const QPageLayout*>(self)->paintRectPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QPageLayout_PaintRectPixels(QPageLayout* self, int resolution) {
	QRect ret = const_cast<const QPageLayout*>(self)->paintRectPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QPageLayout_SetPageSize2(QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins) {
	self->setPageSize(*pageSize, *minMargins);
}

void QPageLayout_Delete(QPageLayout* self) {
	delete self;
}

