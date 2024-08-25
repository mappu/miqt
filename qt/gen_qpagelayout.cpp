#include "gen_qpagelayout.h"
#include "qpagelayout.h"

#include <QMargins>
#include <QMarginsF>
#include <QPageLayout>
#include <QPageSize>
#include <QRect>
#include <QRectF>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPageLayout* QPageLayout_new() {
	return new QPageLayout();
}

QPageLayout* QPageLayout_new2(QPageLayout* other) {
	return new QPageLayout(*other);
}

void QPageLayout_OperatorAssign(QPageLayout* self, QPageLayout* other) {
	self->operator=(*other);
}

void QPageLayout_Swap(QPageLayout* self, QPageLayout* other) {
	self->swap(*other);
}

bool QPageLayout_IsEquivalentTo(QPageLayout* self, QPageLayout* other) {
	return self->isEquivalentTo(*other);
}

bool QPageLayout_IsValid(QPageLayout* self) {
	return self->isValid();
}

void QPageLayout_SetPageSize(QPageLayout* self, QPageSize* pageSize) {
	self->setPageSize(*pageSize);
}

QPageSize* QPageLayout_PageSize(QPageLayout* self) {
	QPageSize ret = self->pageSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPageSize*>(new QPageSize(ret));
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
	QMarginsF ret = self->margins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(ret));
}

QMargins* QPageLayout_MarginsPoints(QPageLayout* self) {
	QMargins ret = self->marginsPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(ret));
}

QMargins* QPageLayout_MarginsPixels(QPageLayout* self, int resolution) {
	QMargins ret = self->marginsPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMargins*>(new QMargins(ret));
}

void QPageLayout_SetMinimumMargins(QPageLayout* self, QMarginsF* minMargins) {
	self->setMinimumMargins(*minMargins);
}

QMarginsF* QPageLayout_MinimumMargins(QPageLayout* self) {
	QMarginsF ret = self->minimumMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(ret));
}

QMarginsF* QPageLayout_MaximumMargins(QPageLayout* self) {
	QMarginsF ret = self->maximumMargins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMarginsF*>(new QMarginsF(ret));
}

QRectF* QPageLayout_FullRect(QPageLayout* self) {
	QRectF ret = self->fullRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRect* QPageLayout_FullRectPoints(QPageLayout* self) {
	QRect ret = self->fullRectPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QPageLayout_FullRectPixels(QPageLayout* self, int resolution) {
	QRect ret = self->fullRectPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRectF* QPageLayout_PaintRect(QPageLayout* self) {
	QRectF ret = self->paintRect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRectF*>(new QRectF(ret));
}

QRect* QPageLayout_PaintRectPoints(QPageLayout* self) {
	QRect ret = self->paintRectPoints();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QRect* QPageLayout_PaintRectPixels(QPageLayout* self, int resolution) {
	QRect ret = self->paintRectPixels(static_cast<int>(resolution));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

void QPageLayout_SetPageSize2(QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins) {
	self->setPageSize(*pageSize, *minMargins);
}

void QPageLayout_Delete(QPageLayout* self) {
	delete self;
}

