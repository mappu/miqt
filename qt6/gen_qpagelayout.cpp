#include <QMargins>
#include <QMarginsF>
#include <QPageLayout>
#include <QPageSize>
#include <QRect>
#include <QRectF>
#include <qpagelayout.h>
#include "gen_qpagelayout.h"
#include "_cgo_export.h"

QPageLayout* QPageLayout_new() {
	return new QPageLayout();
}

QPageLayout* QPageLayout_new2(QPageSize* pageSize, int orientation, QMarginsF* margins) {
	return new QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), *margins);
}

QPageLayout* QPageLayout_new3(QPageLayout* other) {
	return new QPageLayout(*other);
}

QPageLayout* QPageLayout_new4(QPageSize* pageSize, int orientation, QMarginsF* margins, int units) {
	return new QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), *margins, static_cast<QPageLayout::Unit>(units));
}

QPageLayout* QPageLayout_new5(QPageSize* pageSize, int orientation, QMarginsF* margins, int units, QMarginsF* minMargins) {
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

void QPageLayout_SetMode(QPageLayout* self, int mode) {
	self->setMode(static_cast<QPageLayout::Mode>(mode));
}

int QPageLayout_Mode(const QPageLayout* self) {
	QPageLayout::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

void QPageLayout_SetPageSize(QPageLayout* self, QPageSize* pageSize) {
	self->setPageSize(*pageSize);
}

QPageSize* QPageLayout_PageSize(const QPageLayout* self) {
	return new QPageSize(self->pageSize());
}

void QPageLayout_SetOrientation(QPageLayout* self, int orientation) {
	self->setOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

int QPageLayout_Orientation(const QPageLayout* self) {
	QPageLayout::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QPageLayout_SetUnits(QPageLayout* self, int units) {
	self->setUnits(static_cast<QPageLayout::Unit>(units));
}

int QPageLayout_Units(const QPageLayout* self) {
	QPageLayout::Unit _ret = self->units();
	return static_cast<int>(_ret);
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
	return new QMarginsF(self->margins());
}

QMarginsF* QPageLayout_MarginsWithUnits(const QPageLayout* self, int units) {
	return new QMarginsF(self->margins(static_cast<QPageLayout::Unit>(units)));
}

QMargins* QPageLayout_MarginsPoints(const QPageLayout* self) {
	return new QMargins(self->marginsPoints());
}

QMargins* QPageLayout_MarginsPixels(const QPageLayout* self, int resolution) {
	return new QMargins(self->marginsPixels(static_cast<int>(resolution)));
}

void QPageLayout_SetMinimumMargins(QPageLayout* self, QMarginsF* minMargins) {
	self->setMinimumMargins(*minMargins);
}

QMarginsF* QPageLayout_MinimumMargins(const QPageLayout* self) {
	return new QMarginsF(self->minimumMargins());
}

QMarginsF* QPageLayout_MaximumMargins(const QPageLayout* self) {
	return new QMarginsF(self->maximumMargins());
}

QRectF* QPageLayout_FullRect(const QPageLayout* self) {
	return new QRectF(self->fullRect());
}

QRectF* QPageLayout_FullRectWithUnits(const QPageLayout* self, int units) {
	return new QRectF(self->fullRect(static_cast<QPageLayout::Unit>(units)));
}

QRect* QPageLayout_FullRectPoints(const QPageLayout* self) {
	return new QRect(self->fullRectPoints());
}

QRect* QPageLayout_FullRectPixels(const QPageLayout* self, int resolution) {
	return new QRect(self->fullRectPixels(static_cast<int>(resolution)));
}

QRectF* QPageLayout_PaintRect(const QPageLayout* self) {
	return new QRectF(self->paintRect());
}

QRectF* QPageLayout_PaintRectWithUnits(const QPageLayout* self, int units) {
	return new QRectF(self->paintRect(static_cast<QPageLayout::Unit>(units)));
}

QRect* QPageLayout_PaintRectPoints(const QPageLayout* self) {
	return new QRect(self->paintRectPoints());
}

QRect* QPageLayout_PaintRectPixels(const QPageLayout* self, int resolution) {
	return new QRect(self->paintRectPixels(static_cast<int>(resolution)));
}

void QPageLayout_SetPageSize2(QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins) {
	self->setPageSize(*pageSize, *minMargins);
}

void QPageLayout_Delete(QPageLayout* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPageLayout*>( self );
	} else {
		delete self;
	}
}

