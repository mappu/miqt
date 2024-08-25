#include "gen_qpagedpaintdevice.h"
#include "qpagedpaintdevice.h"

#include <QMarginsF>
#include <QPageLayout>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <QSizeF>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

bool QPagedPaintDevice_NewPage(QPagedPaintDevice* self) {
	return self->newPage();
}

bool QPagedPaintDevice_SetPageLayout(QPagedPaintDevice* self, QPageLayout* pageLayout) {
	return self->setPageLayout(*pageLayout);
}

bool QPagedPaintDevice_SetPageSize(QPagedPaintDevice* self, QPageSize* pageSize) {
	return self->setPageSize(*pageSize);
}

bool QPagedPaintDevice_SetPageMargins(QPagedPaintDevice* self, QMarginsF* margins) {
	return self->setPageMargins(*margins);
}

QPageLayout* QPagedPaintDevice_PageLayout(QPagedPaintDevice* self) {
	QPageLayout ret = self->pageLayout();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPageLayout*>(new QPageLayout(ret));
}

void QPagedPaintDevice_SetPageSizeMM(QPagedPaintDevice* self, QSizeF* size) {
	self->setPageSizeMM(*size);
}

QSizeF* QPagedPaintDevice_PageSizeMM(QPagedPaintDevice* self) {
	QSizeF ret = self->pageSizeMM();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QPagedPaintDevice_Delete(QPagedPaintDevice* self) {
	delete self;
}

