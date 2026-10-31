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
	return new (std::nothrow) QPageLayout();
}

QPageLayout* QPageLayout_new2(QPageSize* pageSize, int orientation, struct miqt_qmarginsf margins) {
	return new (std::nothrow) QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), miqt_from_cabi<QMarginsF>(margins));
}

QPageLayout* QPageLayout_new3(QPageLayout* other) {
	return new (std::nothrow) QPageLayout(*other);
}

QPageLayout* QPageLayout_new4(QPageSize* pageSize, int orientation, struct miqt_qmarginsf margins, int units) {
	return new (std::nothrow) QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), miqt_from_cabi<QMarginsF>(margins), static_cast<QPageLayout::Unit>(units));
}

QPageLayout* QPageLayout_new5(QPageSize* pageSize, int orientation, struct miqt_qmarginsf margins, int units, struct miqt_qmarginsf minMargins) {
	return new (std::nothrow) QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), miqt_from_cabi<QMarginsF>(margins), static_cast<QPageLayout::Unit>(units), miqt_from_cabi<QMarginsF>(minMargins));
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

bool QPageLayout_setMargins(QPageLayout* self, struct miqt_qmarginsf margins) {
	return self->setMargins(miqt_from_cabi<QMarginsF>(margins));
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

struct miqt_qmarginsf QPageLayout_margins(const QPageLayout* self) {
	return miqt_to_cabi<struct miqt_qmarginsf>(self->margins());
}

struct miqt_qmarginsf QPageLayout_marginsWithUnits(const QPageLayout* self, int units) {
	return miqt_to_cabi<struct miqt_qmarginsf>(self->margins(static_cast<QPageLayout::Unit>(units)));
}

struct miqt_qmargins QPageLayout_marginsPoints(const QPageLayout* self) {
	return miqt_to_cabi<struct miqt_qmargins>(self->marginsPoints());
}

struct miqt_qmargins QPageLayout_marginsPixels(const QPageLayout* self, int resolution) {
	return miqt_to_cabi<struct miqt_qmargins>(self->marginsPixels(static_cast<int>(resolution)));
}

void QPageLayout_setMinimumMargins(QPageLayout* self, struct miqt_qmarginsf minMargins) {
	self->setMinimumMargins(miqt_from_cabi<QMarginsF>(minMargins));
}

struct miqt_qmarginsf QPageLayout_minimumMargins(const QPageLayout* self) {
	return miqt_to_cabi<struct miqt_qmarginsf>(self->minimumMargins());
}

struct miqt_qmarginsf QPageLayout_maximumMargins(const QPageLayout* self) {
	return miqt_to_cabi<struct miqt_qmarginsf>(self->maximumMargins());
}

struct miqt_qrectf QPageLayout_fullRect(const QPageLayout* self) {
	return miqt_to_cabi<struct miqt_qrectf>(self->fullRect());
}

struct miqt_qrectf QPageLayout_fullRectWithUnits(const QPageLayout* self, int units) {
	return miqt_to_cabi<struct miqt_qrectf>(self->fullRect(static_cast<QPageLayout::Unit>(units)));
}

struct miqt_qrect QPageLayout_fullRectPoints(const QPageLayout* self) {
	return miqt_to_cabi<struct miqt_qrect>(self->fullRectPoints());
}

struct miqt_qrect QPageLayout_fullRectPixels(const QPageLayout* self, int resolution) {
	return miqt_to_cabi<struct miqt_qrect>(self->fullRectPixels(static_cast<int>(resolution)));
}

struct miqt_qrectf QPageLayout_paintRect(const QPageLayout* self) {
	return miqt_to_cabi<struct miqt_qrectf>(self->paintRect());
}

struct miqt_qrectf QPageLayout_paintRectWithUnits(const QPageLayout* self, int units) {
	return miqt_to_cabi<struct miqt_qrectf>(self->paintRect(static_cast<QPageLayout::Unit>(units)));
}

struct miqt_qrect QPageLayout_paintRectPoints(const QPageLayout* self) {
	return miqt_to_cabi<struct miqt_qrect>(self->paintRectPoints());
}

struct miqt_qrect QPageLayout_paintRectPixels(const QPageLayout* self, int resolution) {
	return miqt_to_cabi<struct miqt_qrect>(self->paintRectPixels(static_cast<int>(resolution)));
}

void QPageLayout_setPageSize2(QPageLayout* self, QPageSize* pageSize, struct miqt_qmarginsf minMargins) {
	self->setPageSize(*pageSize, miqt_from_cabi<QMarginsF>(minMargins));
}

void QPageLayout_delete(QPageLayout* self) {
	delete self;
}

