#include <QBackingStore>
#include <QPaintDevice>
#include <QPoint>
#include <QRegion>
#include <QSize>
#include <QWindow>
#include "qbackingstore.h"

#include "gen_qbackingstore.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QBackingStore* QBackingStore_new(QWindow* window) {
	return new QBackingStore(window);
}

QWindow* QBackingStore_Window(const QBackingStore* self) {
	return self->window();
}

QPaintDevice* QBackingStore_PaintDevice(QBackingStore* self) {
	return self->paintDevice();
}

void QBackingStore_Flush(QBackingStore* self, QRegion* region) {
	self->flush(*region);
}

void QBackingStore_Resize(QBackingStore* self, QSize* size) {
	self->resize(*size);
}

QSize* QBackingStore_Size(const QBackingStore* self) {
	QSize ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

bool QBackingStore_Scroll(QBackingStore* self, QRegion* area, int dx, int dy) {
	return self->scroll(*area, static_cast<int>(dx), static_cast<int>(dy));
}

void QBackingStore_BeginPaint(QBackingStore* self, QRegion* param1) {
	self->beginPaint(*param1);
}

void QBackingStore_EndPaint(QBackingStore* self) {
	self->endPaint();
}

void QBackingStore_SetStaticContents(QBackingStore* self, QRegion* region) {
	self->setStaticContents(*region);
}

QRegion* QBackingStore_StaticContents(const QBackingStore* self) {
	QRegion ret = self->staticContents();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRegion*>(new QRegion(ret));
}

bool QBackingStore_HasStaticContents(const QBackingStore* self) {
	return self->hasStaticContents();
}

void QBackingStore_Flush2(QBackingStore* self, QRegion* region, QWindow* window) {
	self->flush(*region, window);
}

void QBackingStore_Flush3(QBackingStore* self, QRegion* region, QWindow* window, QPoint* offset) {
	self->flush(*region, window, *offset);
}

void QBackingStore_Delete(QBackingStore* self) {
	delete self;
}

