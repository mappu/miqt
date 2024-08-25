#include "gen_qpixmap.h"
#include "qpixmap.h"

#include <QBitmap>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QMatrix>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QTransform>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QPixmap* QPixmap_new() {
	return new QPixmap();
}

QPixmap* QPixmap_new2(int w, int h) {
	return new QPixmap(static_cast<int>(w), static_cast<int>(h));
}

QPixmap* QPixmap_new3(QSize* param1) {
	return new QPixmap(*param1);
}

QPixmap* QPixmap_new4(char* xpm) {
	return new QPixmap(xpm);
}

QPixmap* QPixmap_new5(QPixmap* param1) {
	return new QPixmap(*param1);
}

void QPixmap_OperatorAssign(QPixmap* self, QPixmap* param1) {
	self->operator=(*param1);
}

void QPixmap_Swap(QPixmap* self, QPixmap* other) {
	self->swap(*other);
}

bool QPixmap_IsNull(QPixmap* self) {
	return self->isNull();
}

int QPixmap_DevType(QPixmap* self) {
	return self->devType();
}

int QPixmap_Width(QPixmap* self) {
	return self->width();
}

int QPixmap_Height(QPixmap* self) {
	return self->height();
}

QSize* QPixmap_Size(QPixmap* self) {
	QSize ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QPixmap_Rect(QPixmap* self) {
	QRect ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QPixmap_Depth(QPixmap* self) {
	return self->depth();
}

int QPixmap_DefaultDepth() {
	return QPixmap::defaultDepth();
}

void QPixmap_Fill(QPixmap* self) {
	self->fill();
}

void QPixmap_Fill2(QPixmap* self, QPaintDevice* device, QPoint* ofs) {
	self->fill(device, *ofs);
}

void QPixmap_Fill3(QPixmap* self, QPaintDevice* device, int xofs, int yofs) {
	self->fill(device, static_cast<int>(xofs), static_cast<int>(yofs));
}

QBitmap* QPixmap_Mask(QPixmap* self) {
	QBitmap ret = self->mask();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(ret));
}

void QPixmap_SetMask(QPixmap* self, QBitmap* mask) {
	self->setMask(*mask);
}

double QPixmap_DevicePixelRatio(QPixmap* self) {
	return self->devicePixelRatio();
}

void QPixmap_SetDevicePixelRatio(QPixmap* self, double scaleFactor) {
	self->setDevicePixelRatio(static_cast<qreal>(scaleFactor));
}

bool QPixmap_HasAlpha(QPixmap* self) {
	return self->hasAlpha();
}

bool QPixmap_HasAlphaChannel(QPixmap* self) {
	return self->hasAlphaChannel();
}

QBitmap* QPixmap_CreateHeuristicMask(QPixmap* self) {
	QBitmap ret = self->createHeuristicMask();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(ret));
}

QPixmap* QPixmap_GrabWindow(uintptr_t param1) {
	QPixmap ret = QPixmap::grabWindow(static_cast<uintptr_t>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QPixmap_GrabWidget(QObject* widget, QRect* rect) {
	QPixmap ret = QPixmap::grabWidget(widget, *rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QPixmap_GrabWidgetWithWidget(QObject* widget) {
	QPixmap ret = QPixmap::grabWidget(widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QMatrix* QPixmap_TrueMatrix(QMatrix* m, int w, int h) {
	QMatrix ret = QPixmap::trueMatrix(*m, static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

QTransform* QPixmap_TrueMatrix2(QTransform* m, int w, int h) {
	QTransform ret = QPixmap::trueMatrix(*m, static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QImage* QPixmap_ToImage(QPixmap* self) {
	QImage ret = self->toImage();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

bool QPixmap_Save(QPixmap* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return self->save(fileName_QString);
}

bool QPixmap_SaveWithDevice(QPixmap* self, QIODevice* device) {
	return self->save(device);
}

QPixmap* QPixmap_Copy(QPixmap* self, int x, int y, int width, int height) {
	QPixmap ret = self->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QPixmap_Copy2(QPixmap* self) {
	QPixmap ret = self->copy();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QPixmap_Scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height));
}

void QPixmap_Scroll2(QPixmap* self, int dx, int dy, QRect* rect) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *rect);
}

int64_t QPixmap_CacheKey(QPixmap* self) {
	return self->cacheKey();
}

bool QPixmap_IsDetached(QPixmap* self) {
	return self->isDetached();
}

void QPixmap_Detach(QPixmap* self) {
	self->detach();
}

bool QPixmap_IsQBitmap(QPixmap* self) {
	return self->isQBitmap();
}

QPaintEngine* QPixmap_PaintEngine(QPixmap* self) {
	return self->paintEngine();
}

bool QPixmap_OperatorNot(QPixmap* self) {
	return self->operator!();
}

void QPixmap_Fill1(QPixmap* self, QColor* fillColor) {
	self->fill(*fillColor);
}

QBitmap* QPixmap_CreateHeuristicMask1(QPixmap* self, bool clipTight) {
	QBitmap ret = self->createHeuristicMask(clipTight);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(ret));
}

QPixmap* QPixmap_GrabWindow2(uintptr_t param1, int x) {
	QPixmap ret = QPixmap::grabWindow(static_cast<uintptr_t>(param1), static_cast<int>(x));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QPixmap_GrabWindow3(uintptr_t param1, int x, int y) {
	QPixmap ret = QPixmap::grabWindow(static_cast<uintptr_t>(param1), static_cast<int>(x), static_cast<int>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QPixmap_GrabWindow4(uintptr_t param1, int x, int y, int w) {
	QPixmap ret = QPixmap::grabWindow(static_cast<uintptr_t>(param1), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QPixmap_GrabWindow5(uintptr_t param1, int x, int y, int w, int h) {
	QPixmap ret = QPixmap::grabWindow(static_cast<uintptr_t>(param1), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QPixmap_GrabWidget2(QObject* widget, int x) {
	QPixmap ret = QPixmap::grabWidget(widget, static_cast<int>(x));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QPixmap_GrabWidget3(QObject* widget, int x, int y) {
	QPixmap ret = QPixmap::grabWidget(widget, static_cast<int>(x), static_cast<int>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QPixmap_GrabWidget4(QObject* widget, int x, int y, int w) {
	QPixmap ret = QPixmap::grabWidget(widget, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

QPixmap* QPixmap_GrabWidget5(QObject* widget, int x, int y, int w, int h) {
	QPixmap ret = QPixmap::grabWidget(widget, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

bool QPixmap_Save2(QPixmap* self, const char* fileName, size_t fileName_Strlen, char* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return self->save(fileName_QString, format);
}

bool QPixmap_Save3(QPixmap* self, const char* fileName, size_t fileName_Strlen, char* format, int quality) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return self->save(fileName_QString, format, static_cast<int>(quality));
}

bool QPixmap_Save22(QPixmap* self, QIODevice* device, char* format) {
	return self->save(device, format);
}

bool QPixmap_Save32(QPixmap* self, QIODevice* device, char* format, int quality) {
	return self->save(device, format, static_cast<int>(quality));
}

QPixmap* QPixmap_Copy1(QPixmap* self, QRect* rect) {
	QPixmap ret = self->copy(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(ret));
}

void QPixmap_Scroll7(QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height), exposed);
}

void QPixmap_Scroll4(QPixmap* self, int dx, int dy, QRect* rect, QRegion* exposed) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *rect, exposed);
}

void QPixmap_Delete(QPixmap* self) {
	delete self;
}

