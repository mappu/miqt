#include <QMargins>
#include <QMarginsF>
#include <QPageLayout>
#include <QPageSize>
#include <QRect>
#include <QRectF>
#include <qpagelayout.h>
#include "gen_qpagelayout.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

void QPageLayout_operatorAssign(QPageLayout* self, QPageLayout* other) {
	self->operator=(*other);
}

void QPageLayout_swap(QPageLayout* self, QPageLayout* other) {
	self->swap(*other);
}

bool QPageLayout_isEquivalentTo(const QPageLayout* self, QPageLayout* other) {
	return self->isEquivalentTo(*other);
}

bool QPageLayout_isValid(const QPageLayout* self) {
	return self->isValid();
}

void QPageLayout_setMode(QPageLayout* self, int mode) {
	self->setMode(static_cast<QPageLayout::Mode>(mode));
}

int QPageLayout_mode(const QPageLayout* self) {
	QPageLayout::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

void QPageLayout_setPageSize(QPageLayout* self, QPageSize* pageSize) {
	self->setPageSize(*pageSize);
}

QPageSize* QPageLayout_pageSize(const QPageLayout* self) {
	return new QPageSize(self->pageSize());
}

void QPageLayout_setOrientation(QPageLayout* self, int orientation) {
	self->setOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

int QPageLayout_orientation(const QPageLayout* self) {
	QPageLayout::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QPageLayout_setUnits(QPageLayout* self, int units) {
	self->setUnits(static_cast<QPageLayout::Unit>(units));
}

int QPageLayout_units(const QPageLayout* self) {
	QPageLayout::Unit _ret = self->units();
	return static_cast<int>(_ret);
}

bool QPageLayout_setMargins(QPageLayout* self, QMarginsF* margins) {
	return self->setMargins(*margins);
}

bool QPageLayout_setLeftMargin(QPageLayout* self, double leftMargin) {
	return self->setLeftMargin(static_cast<qreal>(leftMargin));
}

bool QPageLayout_setRightMargin(QPageLayout* self, double rightMargin) {
	return self->setRightMargin(static_cast<qreal>(rightMargin));
}

bool QPageLayout_setTopMargin(QPageLayout* self, double topMargin) {
	return self->setTopMargin(static_cast<qreal>(topMargin));
}

bool QPageLayout_setBottomMargin(QPageLayout* self, double bottomMargin) {
	return self->setBottomMargin(static_cast<qreal>(bottomMargin));
}

QMarginsF* QPageLayout_margins(const QPageLayout* self) {
	return new QMarginsF(self->margins());
}

QMarginsF* QPageLayout_marginsWithUnits(const QPageLayout* self, int units) {
	return new QMarginsF(self->margins(static_cast<QPageLayout::Unit>(units)));
}

QMargins* QPageLayout_marginsPoints(const QPageLayout* self) {
	return new QMargins(self->marginsPoints());
}

QMargins* QPageLayout_marginsPixels(const QPageLayout* self, int resolution) {
	return new QMargins(self->marginsPixels(static_cast<int>(resolution)));
}

void QPageLayout_setMinimumMargins(QPageLayout* self, QMarginsF* minMargins) {
	self->setMinimumMargins(*minMargins);
}

QMarginsF* QPageLayout_minimumMargins(const QPageLayout* self) {
	return new QMarginsF(self->minimumMargins());
}

QMarginsF* QPageLayout_maximumMargins(const QPageLayout* self) {
	return new QMarginsF(self->maximumMargins());
}

QRectF* QPageLayout_fullRect(const QPageLayout* self) {
	return new QRectF(self->fullRect());
}

QRectF* QPageLayout_fullRectWithUnits(const QPageLayout* self, int units) {
	return new QRectF(self->fullRect(static_cast<QPageLayout::Unit>(units)));
}

QRect* QPageLayout_fullRectPoints(const QPageLayout* self) {
	return new QRect(self->fullRectPoints());
}

QRect* QPageLayout_fullRectPixels(const QPageLayout* self, int resolution) {
	return new QRect(self->fullRectPixels(static_cast<int>(resolution)));
}

QRectF* QPageLayout_paintRect(const QPageLayout* self) {
	return new QRectF(self->paintRect());
}

QRectF* QPageLayout_paintRectWithUnits(const QPageLayout* self, int units) {
	return new QRectF(self->paintRect(static_cast<QPageLayout::Unit>(units)));
}

QRect* QPageLayout_paintRectPoints(const QPageLayout* self) {
	return new QRect(self->paintRectPoints());
}

QRect* QPageLayout_paintRectPixels(const QPageLayout* self, int resolution) {
	return new QRect(self->paintRectPixels(static_cast<int>(resolution)));
}

void QPageLayout_setPageSize2(QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins) {
	self->setPageSize(*pageSize, *minMargins);
}

void QPageLayout_delete(QPageLayout* self) {
	delete self;
}

