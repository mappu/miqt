#include <QMargins>
#include <QMarginsF>
#include <QPageLayout>
#include <QPageSize>
#include <QRect>
#include <QRectF>
#include "qpagelayout.h"
#include "gen_qpagelayout.h"
#include "_cgo_export.h"

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

bool QPageLayout_IsEquivalentTo(const QPageLayout* self, QPageLayout* other) {
	return self->isEquivalentTo(*other);
}

bool QPageLayout_IsValid(const QPageLayout* self) {
	return self->isValid();
}

void QPageLayout_SetMode(QPageLayout* self, uintptr_t mode) {
	self->setMode(static_cast<QPageLayout::Mode>(mode));
}

uintptr_t QPageLayout_Mode(const QPageLayout* self) {
	QPageLayout::Mode _ret = self->mode();
	return static_cast<uintptr_t>(_ret);
}

void QPageLayout_SetPageSize(QPageLayout* self, QPageSize* pageSize) {
	self->setPageSize(*pageSize);
}

QPageSize* QPageLayout_PageSize(const QPageLayout* self) {
	QPageSize _ret = self->pageSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPageSize*>(new QPageSize(_ret));
}

void QPageLayout_SetOrientation(QPageLayout* self, uintptr_t orientation) {
	self->setOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

uintptr_t QPageLayout_Orientation(const QPageLayout* self) {
	QPageLayout::Orientation _ret = self->orientation();
	return static_cast<uintptr_t>(_ret);
}

void QPageLayout_SetUnits(QPageLayout* self, uintptr_t units) {
	self->setUnits(static_cast<QPageLayout::Unit>(units));
}

uintptr_t QPageLayout_Units(const QPageLayout* self) {
	QPageLayout::Unit _ret = self->units();
	return static_cast<uintptr_t>(_ret);
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

QMarginsF* QPageLayout_Margins(const QPageLayout* self) {
	QMarginsF _ret = self->margins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(_ret));
}

QMarginsF* QPageLayout_MarginsWithUnits(const QPageLayout* self, uintptr_t units) {
	QMarginsF _ret = self->margins(static_cast<QPageLayout::Unit>(units));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(_ret));
}

QMargins* QPageLayout_MarginsPoints(const QPageLayout* self) {
	QMargins _ret = self->marginsPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(_ret));
}

QMargins* QPageLayout_MarginsPixels(const QPageLayout* self, int resolution) {
	QMargins _ret = self->marginsPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(_ret));
}

void QPageLayout_SetMinimumMargins(QPageLayout* self, QMarginsF* minMargins) {
	self->setMinimumMargins(*minMargins);
}

QMarginsF* QPageLayout_MinimumMargins(const QPageLayout* self) {
	QMarginsF _ret = self->minimumMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(_ret));
}

QMarginsF* QPageLayout_MaximumMargins(const QPageLayout* self) {
	QMarginsF _ret = self->maximumMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(_ret));
}

QRectF* QPageLayout_FullRect(const QPageLayout* self) {
	QRectF _ret = self->fullRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QPageLayout_FullRectWithUnits(const QPageLayout* self, uintptr_t units) {
	QRectF _ret = self->fullRect(static_cast<QPageLayout::Unit>(units));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRect* QPageLayout_FullRectPoints(const QPageLayout* self) {
	QRect _ret = self->fullRectPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QPageLayout_FullRectPixels(const QPageLayout* self, int resolution) {
	QRect _ret = self->fullRectPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRectF* QPageLayout_PaintRect(const QPageLayout* self) {
	QRectF _ret = self->paintRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRectF* QPageLayout_PaintRectWithUnits(const QPageLayout* self, uintptr_t units) {
	QRectF _ret = self->paintRect(static_cast<QPageLayout::Unit>(units));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(_ret));
}

QRect* QPageLayout_PaintRectPoints(const QPageLayout* self) {
	QRect _ret = self->paintRectPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

QRect* QPageLayout_PaintRectPixels(const QPageLayout* self, int resolution) {
	QRect _ret = self->paintRectPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

void QPageLayout_SetPageSize2(QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins) {
	self->setPageSize(*pageSize, *minMargins);
}

void QPageLayout_Delete(QPageLayout* self) {
	delete self;
}

