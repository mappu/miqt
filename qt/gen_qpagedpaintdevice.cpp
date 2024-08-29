#include <QMarginsF>
#include <QPageLayout>
#include <QPageSize>
#include <QPagedPaintDevice>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins
#include <QSizeF>
#include "qpagedpaintdevice.h"

#include "gen_qpagedpaintdevice.h"

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

bool QPagedPaintDevice_SetPageOrientation(QPagedPaintDevice* self, uintptr_t orientation) {
	return self->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

bool QPagedPaintDevice_SetPageMargins(QPagedPaintDevice* self, QMarginsF* margins) {
	return self->setPageMargins(*margins);
}

bool QPagedPaintDevice_SetPageMargins2(QPagedPaintDevice* self, QMarginsF* margins, uintptr_t units) {
	return self->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

QPageLayout* QPagedPaintDevice_PageLayout(QPagedPaintDevice* self) {
	QPageLayout ret = const_cast<const QPagedPaintDevice*>(self)->pageLayout();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPageLayout*>(new QPageLayout(ret));
}

void QPagedPaintDevice_SetPageSizeWithSize(QPagedPaintDevice* self, uintptr_t size) {
	self->setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));
}

uintptr_t QPagedPaintDevice_PageSize(QPagedPaintDevice* self) {
	QPagedPaintDevice::PageSize ret = const_cast<const QPagedPaintDevice*>(self)->pageSize();
	return static_cast<uintptr_t>(ret);
}

void QPagedPaintDevice_SetPageSizeMM(QPagedPaintDevice* self, QSizeF* size) {
	self->setPageSizeMM(*size);
}

QSizeF* QPagedPaintDevice_PageSizeMM(QPagedPaintDevice* self) {
	QSizeF ret = const_cast<const QPagedPaintDevice*>(self)->pageSizeMM();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QPagedPaintDevice_SetMargins(QPagedPaintDevice* self, QPagedPaintDevice__Margins* margins) {
	self->setMargins(*margins);
}

QPagedPaintDevice__Margins* QPagedPaintDevice_Margins(QPagedPaintDevice* self) {
	QPagedPaintDevice::Margins ret = const_cast<const QPagedPaintDevice*>(self)->margins();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPagedPaintDevice::Margins*>(new QPagedPaintDevice::Margins(ret));
}

void QPagedPaintDevice_Delete(QPagedPaintDevice* self) {
	delete self;
}

void QPagedPaintDevice__Margins_Delete(QPagedPaintDevice__Margins* self) {
	delete self;
}

