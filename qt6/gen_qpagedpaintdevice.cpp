#include <QMarginsF>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <qpagedpaintdevice.h>
#include "gen_qpagedpaintdevice.h"
#include "_cgo_export.h"

bool QPagedPaintDevice_NewPage(QPagedPaintDevice* self) {
	return self->newPage();
}

bool QPagedPaintDevice_SetPageLayout(QPagedPaintDevice* self, QPageLayout* pageLayout) {
	return self->setPageLayout(*pageLayout);
}

bool QPagedPaintDevice_SetPageSize(QPagedPaintDevice* self, QPageSize* pageSize) {
	return self->setPageSize(*pageSize);
}

bool QPagedPaintDevice_SetPageOrientation(QPagedPaintDevice* self, int orientation) {
	return self->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

bool QPagedPaintDevice_SetPageMargins(QPagedPaintDevice* self, QMarginsF* margins) {
	return self->setPageMargins(*margins);
}

QPageLayout* QPagedPaintDevice_PageLayout(const QPagedPaintDevice* self) {
	return new QPageLayout(self->pageLayout());
}

void QPagedPaintDevice_SetPageRanges(QPagedPaintDevice* self, QPageRanges* ranges) {
	self->setPageRanges(*ranges);
}

QPageRanges* QPagedPaintDevice_PageRanges(const QPagedPaintDevice* self) {
	return new QPageRanges(self->pageRanges());
}

bool QPagedPaintDevice_SetPageMargins2(QPagedPaintDevice* self, QMarginsF* margins, int units) {
	return self->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

void QPagedPaintDevice_Delete(QPagedPaintDevice* self) {
	delete self;
}

