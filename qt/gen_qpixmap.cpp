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
	return new QSize(self->size());
}

QRect* QPixmap_Rect(const QPixmap* self) {
	return new QRect(self->rect());
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
	return new QBitmap(self->mask());
}

void QPixmap_SetMask(QPixmap* self, QBitmap* mask) {
	self->setMask(*mask);
}

double QPixmap_DevicePixelRatio(const QPixmap* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
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
	return new QBitmap(self->createHeuristicMask());
}

QBitmap* QPixmap_CreateMaskFromColor(const QPixmap* self, QColor* maskColor) {
	return new QBitmap(self->createMaskFromColor(*maskColor));
}

QPixmap* QPixmap_GrabWindow(uintptr_t param1) {
	return new QPixmap(QPixmap::grabWindow(static_cast<WId>(param1)));
}

QPixmap* QPixmap_GrabWidget(QObject* widget, QRect* rect) {
	return new QPixmap(QPixmap::grabWidget(widget, *rect));
}

QPixmap* QPixmap_GrabWidgetWithWidget(QObject* widget) {
	return new QPixmap(QPixmap::grabWidget(widget));
}

QPixmap* QPixmap_Scaled(const QPixmap* self, int w, int h) {
	return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QPixmap_ScaledWithQSize(const QPixmap* self, QSize* s) {
	return new QPixmap(self->scaled(*s));
}

QPixmap* QPixmap_ScaledToWidth(const QPixmap* self, int w) {
	return new QPixmap(self->scaledToWidth(static_cast<int>(w)));
}

QPixmap* QPixmap_ScaledToHeight(const QPixmap* self, int h) {
	return new QPixmap(self->scaledToHeight(static_cast<int>(h)));
}

QPixmap* QPixmap_Transformed(const QPixmap* self, QMatrix* param1) {
	return new QPixmap(self->transformed(*param1));
}

QMatrix* QPixmap_TrueMatrix(QMatrix* m, int w, int h) {
	return new QMatrix(QPixmap::trueMatrix(*m, static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QPixmap_TransformedWithQTransform(const QPixmap* self, QTransform* param1) {
	return new QPixmap(self->transformed(*param1));
}

QTransform* QPixmap_TrueMatrix2(QTransform* m, int w, int h) {
	return new QTransform(QPixmap::trueMatrix(*m, static_cast<int>(w), static_cast<int>(h)));
}

QImage* QPixmap_ToImage(const QPixmap* self) {
	return new QImage(self->toImage());
}

QPixmap* QPixmap_FromImage(QImage* image) {
	return new QPixmap(QPixmap::fromImage(*image));
}

QPixmap* QPixmap_FromImageReader(QImageReader* imageReader) {
	return new QPixmap(QPixmap::fromImageReader(imageReader));
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
	return new QPixmap(self->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height)));
}

QPixmap* QPixmap_Copy2(const QPixmap* self) {
	return new QPixmap(self->copy());
}

void QPixmap_Scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height));
}

void QPixmap_Scroll2(QPixmap* self, int dx, int dy, QRect* rect) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *rect);
}

long long QPixmap_CacheKey(const QPixmap* self) {
	qint64 _ret = self->cacheKey();
	return static_cast<long long>(_ret);
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
	return new QBitmap(self->createHeuristicMask(clipTight));
}

QBitmap* QPixmap_CreateMaskFromColor2(const QPixmap* self, QColor* maskColor, int mode) {
	return new QBitmap(self->createMaskFromColor(*maskColor, static_cast<Qt::MaskMode>(mode)));
}

QPixmap* QPixmap_GrabWindow2(uintptr_t param1, int x) {
	return new QPixmap(QPixmap::grabWindow(static_cast<WId>(param1), static_cast<int>(x)));
}

QPixmap* QPixmap_GrabWindow3(uintptr_t param1, int x, int y) {
	return new QPixmap(QPixmap::grabWindow(static_cast<WId>(param1), static_cast<int>(x), static_cast<int>(y)));
}

QPixmap* QPixmap_GrabWindow4(uintptr_t param1, int x, int y, int w) {
	return new QPixmap(QPixmap::grabWindow(static_cast<WId>(param1), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w)));
}

QPixmap* QPixmap_GrabWindow5(uintptr_t param1, int x, int y, int w, int h) {
	return new QPixmap(QPixmap::grabWindow(static_cast<WId>(param1), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QPixmap_GrabWidget2(QObject* widget, int x) {
	return new QPixmap(QPixmap::grabWidget(widget, static_cast<int>(x)));
}

QPixmap* QPixmap_GrabWidget3(QObject* widget, int x, int y) {
	return new QPixmap(QPixmap::grabWidget(widget, static_cast<int>(x), static_cast<int>(y)));
}

QPixmap* QPixmap_GrabWidget4(QObject* widget, int x, int y, int w) {
	return new QPixmap(QPixmap::grabWidget(widget, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w)));
}

QPixmap* QPixmap_GrabWidget5(QObject* widget, int x, int y, int w, int h) {
	return new QPixmap(QPixmap::grabWidget(widget, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QPixmap_Scaled3(const QPixmap* self, int w, int h, int aspectMode) {
	return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QPixmap* QPixmap_Scaled4(const QPixmap* self, int w, int h, int aspectMode, int mode) {
	return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_Scaled2(const QPixmap* self, QSize* s, int aspectMode) {
	return new QPixmap(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QPixmap* QPixmap_Scaled32(const QPixmap* self, QSize* s, int aspectMode, int mode) {
	return new QPixmap(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_ScaledToWidth2(const QPixmap* self, int w, int mode) {
	return new QPixmap(self->scaledToWidth(static_cast<int>(w), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_ScaledToHeight2(const QPixmap* self, int h, int mode) {
	return new QPixmap(self->scaledToHeight(static_cast<int>(h), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_Transformed2(const QPixmap* self, QMatrix* param1, int mode) {
	return new QPixmap(self->transformed(*param1, static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_Transformed22(const QPixmap* self, QTransform* param1, int mode) {
	return new QPixmap(self->transformed(*param1, static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_FromImage2(QImage* image, int flags) {
	return new QPixmap(QPixmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
}

QPixmap* QPixmap_FromImageReader2(QImageReader* imageReader, int flags) {
	return new QPixmap(QPixmap::fromImageReader(imageReader, static_cast<Qt::ImageConversionFlags>(flags)));
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
	return new QPixmap(self->copy(*rect));
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

