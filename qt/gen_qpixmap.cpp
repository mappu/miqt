#include <QBitmap>
#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QImageReader>
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
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include "qpixmap.h"
#include "gen_qpixmap.h"
#include "_cgo_export.h"

QPixmap* QPixmap_new() {
	return new QPixmap();
}

QPixmap* QPixmap_new2(int w, int h) {
	return new QPixmap(static_cast<int>(w), static_cast<int>(h));
}

QPixmap* QPixmap_new3(QSize* param1) {
	return new QPixmap(*param1);
}

QPixmap* QPixmap_new4(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QPixmap(fileName_QString);
}

QPixmap* QPixmap_new5(QPixmap* param1) {
	return new QPixmap(*param1);
}

QPixmap* QPixmap_new6(struct miqt_string* fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QPixmap(fileName_QString, format);
}

QPixmap* QPixmap_new7(struct miqt_string* fileName, const char* format, int flags) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QPixmap(fileName_QString, format, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPixmap_OperatorAssign(QPixmap* self, QPixmap* param1) {
	self->operator=(*param1);
}

void QPixmap_Swap(QPixmap* self, QPixmap* other) {
	self->swap(*other);
}

bool QPixmap_IsNull(const QPixmap* self) {
	return self->isNull();
}

int QPixmap_DevType(const QPixmap* self) {
	return self->devType();
}

int QPixmap_Width(const QPixmap* self) {
	return self->width();
}

int QPixmap_Height(const QPixmap* self) {
	return self->height();
}

QSize* QPixmap_Size(const QPixmap* self) {
	QSize _ret = self->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(_ret));
}

QRect* QPixmap_Rect(const QPixmap* self) {
	QRect _ret = self->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(_ret));
}

int QPixmap_Depth(const QPixmap* self) {
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

QBitmap* QPixmap_Mask(const QPixmap* self) {
	QBitmap _ret = self->mask();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

void QPixmap_SetMask(QPixmap* self, QBitmap* mask) {
	self->setMask(*mask);
}

double QPixmap_DevicePixelRatio(const QPixmap* self) {
	return self->devicePixelRatio();
}

void QPixmap_SetDevicePixelRatio(QPixmap* self, double scaleFactor) {
	self->setDevicePixelRatio(static_cast<qreal>(scaleFactor));
}

bool QPixmap_HasAlpha(const QPixmap* self) {
	return self->hasAlpha();
}

bool QPixmap_HasAlphaChannel(const QPixmap* self) {
	return self->hasAlphaChannel();
}

QBitmap* QPixmap_CreateHeuristicMask(const QPixmap* self) {
	QBitmap _ret = self->createHeuristicMask();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

QBitmap* QPixmap_CreateMaskFromColor(const QPixmap* self, QColor* maskColor) {
	QBitmap _ret = self->createMaskFromColor(*maskColor);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

QPixmap* QPixmap_GrabWindow(uintptr_t param1) {
	QPixmap _ret = QPixmap::grabWindow(static_cast<quintptr>(param1));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_GrabWidget(QObject* widget, QRect* rect) {
	QPixmap _ret = QPixmap::grabWidget(widget, *rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_GrabWidgetWithWidget(QObject* widget) {
	QPixmap _ret = QPixmap::grabWidget(widget);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_Scaled(const QPixmap* self, int w, int h) {
	QPixmap _ret = self->scaled(static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_ScaledWithQSize(const QPixmap* self, QSize* s) {
	QPixmap _ret = self->scaled(*s);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_ScaledToWidth(const QPixmap* self, int w) {
	QPixmap _ret = self->scaledToWidth(static_cast<int>(w));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_ScaledToHeight(const QPixmap* self, int h) {
	QPixmap _ret = self->scaledToHeight(static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_Transformed(const QPixmap* self, QMatrix* param1) {
	QPixmap _ret = self->transformed(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QMatrix* QPixmap_TrueMatrix(QMatrix* m, int w, int h) {
	QMatrix _ret = QPixmap::trueMatrix(*m, static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(_ret));
}

QPixmap* QPixmap_TransformedWithQTransform(const QPixmap* self, QTransform* param1) {
	QPixmap _ret = self->transformed(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QTransform* QPixmap_TrueMatrix2(QTransform* m, int w, int h) {
	QTransform _ret = QPixmap::trueMatrix(*m, static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(_ret));
}

QImage* QPixmap_ToImage(const QPixmap* self) {
	QImage _ret = self->toImage();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(_ret));
}

QPixmap* QPixmap_FromImage(QImage* image) {
	QPixmap _ret = QPixmap::fromImage(*image);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_FromImageReader(QImageReader* imageReader) {
	QPixmap _ret = QPixmap::fromImageReader(imageReader);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

bool QPixmap_Load(QPixmap* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->load(fileName_QString);
}

bool QPixmap_LoadFromData(QPixmap* self, const unsigned char* buf, unsigned int lenVal) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(lenVal));
}

bool QPixmap_LoadFromDataWithData(QPixmap* self, QByteArray* data) {
	return self->loadFromData(*data);
}

bool QPixmap_Save(const QPixmap* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->save(fileName_QString);
}

bool QPixmap_SaveWithDevice(const QPixmap* self, QIODevice* device) {
	return self->save(device);
}

bool QPixmap_ConvertFromImage(QPixmap* self, QImage* img) {
	return self->convertFromImage(*img);
}

QPixmap* QPixmap_Copy(const QPixmap* self, int x, int y, int width, int height) {
	QPixmap _ret = self->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_Copy2(const QPixmap* self) {
	QPixmap _ret = self->copy();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

void QPixmap_Scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height));
}

void QPixmap_Scroll2(QPixmap* self, int dx, int dy, QRect* rect) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *rect);
}

long long QPixmap_CacheKey(const QPixmap* self) {
	return self->cacheKey();
}

bool QPixmap_IsDetached(const QPixmap* self) {
	return self->isDetached();
}

void QPixmap_Detach(QPixmap* self) {
	self->detach();
}

bool QPixmap_IsQBitmap(const QPixmap* self) {
	return self->isQBitmap();
}

QPaintEngine* QPixmap_PaintEngine(const QPixmap* self) {
	return self->paintEngine();
}

bool QPixmap_OperatorNot(const QPixmap* self) {
	return self->operator!();
}

void QPixmap_Fill1(QPixmap* self, QColor* fillColor) {
	self->fill(*fillColor);
}

QBitmap* QPixmap_CreateHeuristicMask1(const QPixmap* self, bool clipTight) {
	QBitmap _ret = self->createHeuristicMask(clipTight);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

QBitmap* QPixmap_CreateMaskFromColor2(const QPixmap* self, QColor* maskColor, uintptr_t mode) {
	QBitmap _ret = self->createMaskFromColor(*maskColor, static_cast<Qt::MaskMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitmap*>(new QBitmap(_ret));
}

QPixmap* QPixmap_GrabWindow2(uintptr_t param1, int x) {
	QPixmap _ret = QPixmap::grabWindow(static_cast<quintptr>(param1), static_cast<int>(x));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_GrabWindow3(uintptr_t param1, int x, int y) {
	QPixmap _ret = QPixmap::grabWindow(static_cast<quintptr>(param1), static_cast<int>(x), static_cast<int>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_GrabWindow4(uintptr_t param1, int x, int y, int w) {
	QPixmap _ret = QPixmap::grabWindow(static_cast<quintptr>(param1), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_GrabWindow5(uintptr_t param1, int x, int y, int w, int h) {
	QPixmap _ret = QPixmap::grabWindow(static_cast<quintptr>(param1), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_GrabWidget2(QObject* widget, int x) {
	QPixmap _ret = QPixmap::grabWidget(widget, static_cast<int>(x));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_GrabWidget3(QObject* widget, int x, int y) {
	QPixmap _ret = QPixmap::grabWidget(widget, static_cast<int>(x), static_cast<int>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_GrabWidget4(QObject* widget, int x, int y, int w) {
	QPixmap _ret = QPixmap::grabWidget(widget, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_GrabWidget5(QObject* widget, int x, int y, int w, int h) {
	QPixmap _ret = QPixmap::grabWidget(widget, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_Scaled3(const QPixmap* self, int w, int h, uintptr_t aspectMode) {
	QPixmap _ret = self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_Scaled4(const QPixmap* self, int w, int h, uintptr_t aspectMode, uintptr_t mode) {
	QPixmap _ret = self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_Scaled2(const QPixmap* self, QSize* s, uintptr_t aspectMode) {
	QPixmap _ret = self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_Scaled32(const QPixmap* self, QSize* s, uintptr_t aspectMode, uintptr_t mode) {
	QPixmap _ret = self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_ScaledToWidth2(const QPixmap* self, int w, uintptr_t mode) {
	QPixmap _ret = self->scaledToWidth(static_cast<int>(w), static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_ScaledToHeight2(const QPixmap* self, int h, uintptr_t mode) {
	QPixmap _ret = self->scaledToHeight(static_cast<int>(h), static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_Transformed2(const QPixmap* self, QMatrix* param1, uintptr_t mode) {
	QPixmap _ret = self->transformed(*param1, static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_Transformed22(const QPixmap* self, QTransform* param1, uintptr_t mode) {
	QPixmap _ret = self->transformed(*param1, static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_FromImage2(QImage* image, int flags) {
	QPixmap _ret = QPixmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

QPixmap* QPixmap_FromImageReader2(QImageReader* imageReader, int flags) {
	QPixmap _ret = QPixmap::fromImageReader(imageReader, static_cast<Qt::ImageConversionFlags>(flags));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
}

bool QPixmap_Load2(QPixmap* self, struct miqt_string* fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->load(fileName_QString, format);
}

bool QPixmap_Load3(QPixmap* self, struct miqt_string* fileName, const char* format, int flags) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->load(fileName_QString, format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_LoadFromData3(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(lenVal), format);
}

bool QPixmap_LoadFromData4(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format, int flags) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(lenVal), format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_LoadFromData2(QPixmap* self, QByteArray* data, const char* format) {
	return self->loadFromData(*data, format);
}

bool QPixmap_LoadFromData32(QPixmap* self, QByteArray* data, const char* format, int flags) {
	return self->loadFromData(*data, format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_Save2(const QPixmap* self, struct miqt_string* fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->save(fileName_QString, format);
}

bool QPixmap_Save3(const QPixmap* self, struct miqt_string* fileName, const char* format, int quality) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->save(fileName_QString, format, static_cast<int>(quality));
}

bool QPixmap_Save22(const QPixmap* self, QIODevice* device, const char* format) {
	return self->save(device, format);
}

bool QPixmap_Save32(const QPixmap* self, QIODevice* device, const char* format, int quality) {
	return self->save(device, format, static_cast<int>(quality));
}

bool QPixmap_ConvertFromImage2(QPixmap* self, QImage* img, int flags) {
	return self->convertFromImage(*img, static_cast<Qt::ImageConversionFlags>(flags));
}

QPixmap* QPixmap_Copy1(const QPixmap* self, QRect* rect) {
	QPixmap _ret = self->copy(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixmap*>(new QPixmap(_ret));
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

