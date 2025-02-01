#include <QBackingStore>
#include <QPaintDevice>
#include <QPoint>
#include <QRegion>
#include <QSize>
#include <QWindow>
#include <qbackingstore.h>
#include "gen_qbackingstore.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QBackingStore* QBackingStore_new(QWindow* window) {
	return new QBackingStore(window);
}

QWindow* QBackingStore_window(const QBackingStore* self) {
	return self->window();
}

QPaintDevice* QBackingStore_paintDevice(QBackingStore* self) {
	return self->paintDevice();
}

void QBackingStore_flush(QBackingStore* self, QRegion* region) {
	self->flush(*region);
}

void QBackingStore_resize(QBackingStore* self, QSize* size) {
	self->resize(*size);
}

QSize* QBackingStore_size(const QBackingStore* self) {
	return new QSize(self->size());
}

bool QBackingStore_scroll(QBackingStore* self, QRegion* area, int dx, int dy) {
	return self->scroll(*area, static_cast<int>(dx), static_cast<int>(dy));
}

void QBackingStore_beginPaint(QBackingStore* self, QRegion* param1) {
	self->beginPaint(*param1);
}

void QBackingStore_endPaint(QBackingStore* self) {
	self->endPaint();
}

void QBackingStore_setStaticContents(QBackingStore* self, QRegion* region) {
	self->setStaticContents(*region);
}

QRegion* QBackingStore_staticContents(const QBackingStore* self) {
	return new QRegion(self->staticContents());
}

bool QBackingStore_hasStaticContents(const QBackingStore* self) {
	return self->hasStaticContents();
}

void QBackingStore_flush2(QBackingStore* self, QRegion* region, QWindow* window) {
	self->flush(*region, window);
}

void QBackingStore_flush3(QBackingStore* self, QRegion* region, QWindow* window, QPoint* offset) {
	self->flush(*region, window, *offset);
}

void QBackingStore_delete(QBackingStore* self) {
	delete self;
}

