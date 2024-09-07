#include <QByteArray>
#include <QColor>
#include <QColorSpace>
#include <QColorTransform>
#include <QIODevice>
#include <QImage>
#include <QList>
#include <QMatrix>
#include <QPaintEngine>
#include <QPixelFormat>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include "qimage.h"

#include "gen_qimage.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QImage* QImage_new() {
	return new QImage();
}

QImage* QImage_new2(QSize* size, uintptr_t format) {
	return new QImage(*size, static_cast<QImage::Format>(format));
}

QImage* QImage_new3(int width, int height, uintptr_t format) {
	return new QImage(static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new4(unsigned char* data, int width, int height, uintptr_t format) {
	return new QImage(static_cast<uchar*>(data), static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new5(const unsigned char* data, int width, int height, uintptr_t format) {
	return new QImage(static_cast<const uchar*>(data), static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new6(unsigned char* data, int width, int height, int bytesPerLine, uintptr_t format) {
	return new QImage(static_cast<uchar*>(data), static_cast<int>(width), static_cast<int>(height), static_cast<int>(bytesPerLine), static_cast<QImage::Format>(format));
}

QImage* QImage_new7(const unsigned char* data, int width, int height, int bytesPerLine, uintptr_t format) {
	return new QImage(static_cast<const uchar*>(data), static_cast<int>(width), static_cast<int>(height), static_cast<int>(bytesPerLine), static_cast<QImage::Format>(format));
}

QImage* QImage_new8(const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QImage(fileName_QString);
}

QImage* QImage_new9(QImage* param1) {
	return new QImage(*param1);
}

QImage* QImage_new10(const char* fileName, size_t fileName_Strlen, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return new QImage(fileName_QString, format);
}

void QImage_OperatorAssign(QImage* self, QImage* param1) {
	self->operator=(*param1);
}

void QImage_Swap(QImage* self, QImage* other) {
	self->swap(*other);
}

bool QImage_IsNull(QImage* self) {
	return const_cast<const QImage*>(self)->isNull();
}

int QImage_DevType(QImage* self) {
	return const_cast<const QImage*>(self)->devType();
}

bool QImage_OperatorEqual(QImage* self, QImage* param1) {
	return const_cast<const QImage*>(self)->operator==(*param1);
}

bool QImage_OperatorNotEqual(QImage* self, QImage* param1) {
	return const_cast<const QImage*>(self)->operator!=(*param1);
}

void QImage_Detach(QImage* self) {
	self->detach();
}

bool QImage_IsDetached(QImage* self) {
	return const_cast<const QImage*>(self)->isDetached();
}

QImage* QImage_Copy(QImage* self) {
	QImage ret = const_cast<const QImage*>(self)->copy();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Copy2(QImage* self, int x, int y, int w, int h) {
	QImage ret = const_cast<const QImage*>(self)->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

uintptr_t QImage_Format(QImage* self) {
	QImage::Format ret = const_cast<const QImage*>(self)->format();
	return static_cast<uintptr_t>(ret);
}

QImage* QImage_ConvertToFormat(QImage* self, uintptr_t f) {
	QImage ret = const_cast<const QImage*>(self)->convertToFormat(static_cast<QImage::Format>(f));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_ConvertToFormat2(QImage* self, uintptr_t f, unsigned int* colorTable, size_t colorTable_len) {
	QVector<unsigned int> colorTable_QList;
	colorTable_QList.reserve(colorTable_len);
	for(size_t i = 0; i < colorTable_len; ++i) {
		colorTable_QList.push_back(colorTable[i]);
	}
	QImage ret = const_cast<const QImage*>(self)->convertToFormat(static_cast<QImage::Format>(f), colorTable_QList);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

bool QImage_ReinterpretAsFormat(QImage* self, uintptr_t f) {
	return self->reinterpretAsFormat(static_cast<QImage::Format>(f));
}

void QImage_ConvertTo(QImage* self, uintptr_t f) {
	self->convertTo(static_cast<QImage::Format>(f));
}

int QImage_Width(QImage* self) {
	return const_cast<const QImage*>(self)->width();
}

int QImage_Height(QImage* self) {
	return const_cast<const QImage*>(self)->height();
}

QSize* QImage_Size(QImage* self) {
	QSize ret = const_cast<const QImage*>(self)->size();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QRect* QImage_Rect(QImage* self) {
	QRect ret = const_cast<const QImage*>(self)->rect();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

int QImage_Depth(QImage* self) {
	return const_cast<const QImage*>(self)->depth();
}

int QImage_ColorCount(QImage* self) {
	return const_cast<const QImage*>(self)->colorCount();
}

int QImage_BitPlaneCount(QImage* self) {
	return const_cast<const QImage*>(self)->bitPlaneCount();
}

unsigned int QImage_Color(QImage* self, int i) {
	return const_cast<const QImage*>(self)->color(static_cast<int>(i));
}

void QImage_SetColor(QImage* self, int i, unsigned int c) {
	self->setColor(static_cast<int>(i), static_cast<QRgb>(c));
}

void QImage_SetColorCount(QImage* self, int colorCount) {
	self->setColorCount(static_cast<int>(colorCount));
}

bool QImage_AllGray(QImage* self) {
	return const_cast<const QImage*>(self)->allGray();
}

bool QImage_IsGrayscale(QImage* self) {
	return const_cast<const QImage*>(self)->isGrayscale();
}

unsigned char* QImage_Bits(QImage* self) {
	return self->bits();
}

const unsigned char* QImage_Bits2(QImage* self) {
	return (const unsigned char*) const_cast<const QImage*>(self)->bits();
}

const unsigned char* QImage_ConstBits(QImage* self) {
	return (const unsigned char*) const_cast<const QImage*>(self)->constBits();
}

int QImage_ByteCount(QImage* self) {
	return const_cast<const QImage*>(self)->byteCount();
}

size_t QImage_SizeInBytes(QImage* self) {
	return const_cast<const QImage*>(self)->sizeInBytes();
}

unsigned char* QImage_ScanLine(QImage* self, int param1) {
	return self->scanLine(static_cast<int>(param1));
}

const unsigned char* QImage_ScanLineWithInt(QImage* self, int param1) {
	return (const unsigned char*) const_cast<const QImage*>(self)->scanLine(static_cast<int>(param1));
}

const unsigned char* QImage_ConstScanLine(QImage* self, int param1) {
	return (const unsigned char*) const_cast<const QImage*>(self)->constScanLine(static_cast<int>(param1));
}

int QImage_BytesPerLine(QImage* self) {
	return const_cast<const QImage*>(self)->bytesPerLine();
}

bool QImage_Valid(QImage* self, int x, int y) {
	return const_cast<const QImage*>(self)->valid(static_cast<int>(x), static_cast<int>(y));
}

bool QImage_ValidWithPt(QImage* self, QPoint* pt) {
	return const_cast<const QImage*>(self)->valid(*pt);
}

int QImage_PixelIndex(QImage* self, int x, int y) {
	return const_cast<const QImage*>(self)->pixelIndex(static_cast<int>(x), static_cast<int>(y));
}

int QImage_PixelIndexWithPt(QImage* self, QPoint* pt) {
	return const_cast<const QImage*>(self)->pixelIndex(*pt);
}

unsigned int QImage_Pixel(QImage* self, int x, int y) {
	return const_cast<const QImage*>(self)->pixel(static_cast<int>(x), static_cast<int>(y));
}

unsigned int QImage_PixelWithPt(QImage* self, QPoint* pt) {
	return const_cast<const QImage*>(self)->pixel(*pt);
}

void QImage_SetPixel(QImage* self, int x, int y, unsigned int index_or_rgb) {
	self->setPixel(static_cast<int>(x), static_cast<int>(y), static_cast<uint>(index_or_rgb));
}

void QImage_SetPixel2(QImage* self, QPoint* pt, unsigned int index_or_rgb) {
	self->setPixel(*pt, static_cast<uint>(index_or_rgb));
}

QColor* QImage_PixelColor(QImage* self, int x, int y) {
	QColor ret = const_cast<const QImage*>(self)->pixelColor(static_cast<int>(x), static_cast<int>(y));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

QColor* QImage_PixelColorWithPt(QImage* self, QPoint* pt) {
	QColor ret = const_cast<const QImage*>(self)->pixelColor(*pt);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColor*>(new QColor(ret));
}

void QImage_SetPixelColor(QImage* self, int x, int y, QColor* c) {
	self->setPixelColor(static_cast<int>(x), static_cast<int>(y), *c);
}

void QImage_SetPixelColor2(QImage* self, QPoint* pt, QColor* c) {
	self->setPixelColor(*pt, *c);
}

void QImage_ColorTable(QImage* self, unsigned int** _out, size_t* _out_len) {
	QVector<unsigned int> ret = const_cast<const QImage*>(self)->colorTable();
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* __out = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QImage_SetColorTable(QImage* self, unsigned int* colors, size_t colors_len) {
	QVector<unsigned int> colors_QList;
	colors_QList.reserve(colors_len);
	for(size_t i = 0; i < colors_len; ++i) {
		colors_QList.push_back(colors[i]);
	}
	self->setColorTable(colors_QList);
}

double QImage_DevicePixelRatio(QImage* self) {
	return const_cast<const QImage*>(self)->devicePixelRatio();
}

void QImage_SetDevicePixelRatio(QImage* self, double scaleFactor) {
	self->setDevicePixelRatio(static_cast<qreal>(scaleFactor));
}

void QImage_Fill(QImage* self, unsigned int pixel) {
	self->fill(static_cast<uint>(pixel));
}

void QImage_FillWithColor(QImage* self, QColor* color) {
	self->fill(*color);
}

void QImage_Fill2(QImage* self, uintptr_t color) {
	self->fill(static_cast<Qt::GlobalColor>(color));
}

bool QImage_HasAlphaChannel(QImage* self) {
	return const_cast<const QImage*>(self)->hasAlphaChannel();
}

void QImage_SetAlphaChannel(QImage* self, QImage* alphaChannel) {
	self->setAlphaChannel(*alphaChannel);
}

QImage* QImage_AlphaChannel(QImage* self) {
	QImage ret = const_cast<const QImage*>(self)->alphaChannel();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_CreateAlphaMask(QImage* self) {
	QImage ret = const_cast<const QImage*>(self)->createAlphaMask();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_CreateHeuristicMask(QImage* self) {
	QImage ret = const_cast<const QImage*>(self)->createHeuristicMask();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_CreateMaskFromColor(QImage* self, unsigned int color) {
	QImage ret = const_cast<const QImage*>(self)->createMaskFromColor(static_cast<QRgb>(color));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Scaled(QImage* self, int w, int h) {
	QImage ret = const_cast<const QImage*>(self)->scaled(static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_ScaledWithQSize(QImage* self, QSize* s) {
	QImage ret = const_cast<const QImage*>(self)->scaled(*s);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_ScaledToWidth(QImage* self, int w) {
	QImage ret = const_cast<const QImage*>(self)->scaledToWidth(static_cast<int>(w));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_ScaledToHeight(QImage* self, int h) {
	QImage ret = const_cast<const QImage*>(self)->scaledToHeight(static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Transformed(QImage* self, QMatrix* matrix) {
	QImage ret = const_cast<const QImage*>(self)->transformed(*matrix);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QMatrix* QImage_TrueMatrix(QMatrix* param1, int w, int h) {
	QMatrix ret = QImage::trueMatrix(*param1, static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMatrix*>(new QMatrix(ret));
}

QImage* QImage_TransformedWithMatrix(QImage* self, QTransform* matrix) {
	QImage ret = const_cast<const QImage*>(self)->transformed(*matrix);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QTransform* QImage_TrueMatrix2(QTransform* param1, int w, int h) {
	QTransform ret = QImage::trueMatrix(*param1, static_cast<int>(w), static_cast<int>(h));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTransform*>(new QTransform(ret));
}

QImage* QImage_Mirrored(QImage* self) {
	QImage ret = const_cast<const QImage*>(self)->mirrored();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_RgbSwapped(QImage* self) {
	QImage ret = const_cast<const QImage*>(self)->rgbSwapped();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

void QImage_InvertPixels(QImage* self) {
	self->invertPixels();
}

QColorSpace* QImage_ColorSpace(QImage* self) {
	QColorSpace ret = const_cast<const QImage*>(self)->colorSpace();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QColorSpace*>(new QColorSpace(ret));
}

QImage* QImage_ConvertedToColorSpace(QImage* self, QColorSpace* param1) {
	QImage ret = const_cast<const QImage*>(self)->convertedToColorSpace(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

void QImage_ConvertToColorSpace(QImage* self, QColorSpace* param1) {
	self->convertToColorSpace(*param1);
}

void QImage_SetColorSpace(QImage* self, QColorSpace* colorSpace) {
	self->setColorSpace(*colorSpace);
}

void QImage_ApplyColorTransform(QImage* self, QColorTransform* transform) {
	self->applyColorTransform(*transform);
}

bool QImage_Load(QImage* self, QIODevice* device, const char* format) {
	return self->load(device, format);
}

bool QImage_LoadWithFileName(QImage* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return self->load(fileName_QString);
}

bool QImage_LoadFromData(QImage* self, const unsigned char* buf, int lenVal) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<int>(lenVal));
}

bool QImage_LoadFromDataWithData(QImage* self, QByteArray* data) {
	return self->loadFromData(*data);
}

bool QImage_Save(QImage* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return const_cast<const QImage*>(self)->save(fileName_QString);
}

bool QImage_SaveWithDevice(QImage* self, QIODevice* device) {
	return const_cast<const QImage*>(self)->save(device);
}

QImage* QImage_FromData(const unsigned char* data, int size) {
	QImage ret = QImage::fromData(static_cast<const uchar*>(data), static_cast<int>(size));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_FromDataWithData(QByteArray* data) {
	QImage ret = QImage::fromData(*data);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

long long QImage_CacheKey(QImage* self) {
	return const_cast<const QImage*>(self)->cacheKey();
}

QPaintEngine* QImage_PaintEngine(QImage* self) {
	return const_cast<const QImage*>(self)->paintEngine();
}

int QImage_DotsPerMeterX(QImage* self) {
	return const_cast<const QImage*>(self)->dotsPerMeterX();
}

int QImage_DotsPerMeterY(QImage* self) {
	return const_cast<const QImage*>(self)->dotsPerMeterY();
}

void QImage_SetDotsPerMeterX(QImage* self, int dotsPerMeterX) {
	self->setDotsPerMeterX(static_cast<int>(dotsPerMeterX));
}

void QImage_SetDotsPerMeterY(QImage* self, int dotsPerMeterY) {
	self->setDotsPerMeterY(static_cast<int>(dotsPerMeterY));
}

QPoint* QImage_Offset(QImage* self) {
	QPoint ret = const_cast<const QImage*>(self)->offset();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPoint*>(new QPoint(ret));
}

void QImage_SetOffset(QImage* self, QPoint* offset) {
	self->setOffset(*offset);
}

void QImage_TextKeys(QImage* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QImage*>(self)->textKeys();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QImage_Text(QImage* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QImage*>(self)->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImage_SetText(QImage* self, const char* key, size_t key_Strlen, const char* value, size_t value_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QString value_QString = QString::fromUtf8(value, value_Strlen);
	self->setText(key_QString, value_QString);
}

QPixelFormat* QImage_PixelFormat(QImage* self) {
	QPixelFormat ret = const_cast<const QImage*>(self)->pixelFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixelFormat*>(new QPixelFormat(ret));
}

QPixelFormat* QImage_ToPixelFormat(uintptr_t format) {
	QPixelFormat ret = QImage::toPixelFormat(static_cast<QImage::Format>(format));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPixelFormat*>(new QPixelFormat(ret));
}

uintptr_t QImage_ToImageFormat(QPixelFormat* format) {
	QImage::Format ret = QImage::toImageFormat(*format);
	return static_cast<uintptr_t>(ret);
}

QImage* QImage_Copy1(QImage* self, QRect* rect) {
	QImage ret = const_cast<const QImage*>(self)->copy(*rect);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_ConvertToFormat22(QImage* self, uintptr_t f, int flags) {
	QImage ret = const_cast<const QImage*>(self)->convertToFormat(static_cast<QImage::Format>(f), static_cast<Qt::ImageConversionFlags>(flags));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_ConvertToFormat3(QImage* self, uintptr_t f, unsigned int* colorTable, size_t colorTable_len, int flags) {
	QVector<unsigned int> colorTable_QList;
	colorTable_QList.reserve(colorTable_len);
	for(size_t i = 0; i < colorTable_len; ++i) {
		colorTable_QList.push_back(colorTable[i]);
	}
	QImage ret = const_cast<const QImage*>(self)->convertToFormat(static_cast<QImage::Format>(f), colorTable_QList, static_cast<Qt::ImageConversionFlags>(flags));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

void QImage_ConvertTo2(QImage* self, uintptr_t f, int flags) {
	self->convertTo(static_cast<QImage::Format>(f), static_cast<Qt::ImageConversionFlags>(flags));
}

QImage* QImage_CreateAlphaMask1(QImage* self, int flags) {
	QImage ret = const_cast<const QImage*>(self)->createAlphaMask(static_cast<Qt::ImageConversionFlags>(flags));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_CreateHeuristicMask1(QImage* self, bool clipTight) {
	QImage ret = const_cast<const QImage*>(self)->createHeuristicMask(clipTight);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_CreateMaskFromColor2(QImage* self, unsigned int color, uintptr_t mode) {
	QImage ret = const_cast<const QImage*>(self)->createMaskFromColor(static_cast<QRgb>(color), static_cast<Qt::MaskMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Scaled3(QImage* self, int w, int h, uintptr_t aspectMode) {
	QImage ret = const_cast<const QImage*>(self)->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Scaled4(QImage* self, int w, int h, uintptr_t aspectMode, uintptr_t mode) {
	QImage ret = const_cast<const QImage*>(self)->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Scaled2(QImage* self, QSize* s, uintptr_t aspectMode) {
	QImage ret = const_cast<const QImage*>(self)->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Scaled32(QImage* self, QSize* s, uintptr_t aspectMode, uintptr_t mode) {
	QImage ret = const_cast<const QImage*>(self)->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_ScaledToWidth2(QImage* self, int w, uintptr_t mode) {
	QImage ret = const_cast<const QImage*>(self)->scaledToWidth(static_cast<int>(w), static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_ScaledToHeight2(QImage* self, int h, uintptr_t mode) {
	QImage ret = const_cast<const QImage*>(self)->scaledToHeight(static_cast<int>(h), static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Transformed2(QImage* self, QMatrix* matrix, uintptr_t mode) {
	QImage ret = const_cast<const QImage*>(self)->transformed(*matrix, static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Transformed22(QImage* self, QTransform* matrix, uintptr_t mode) {
	QImage ret = const_cast<const QImage*>(self)->transformed(*matrix, static_cast<Qt::TransformationMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Mirrored1(QImage* self, bool horizontally) {
	QImage ret = const_cast<const QImage*>(self)->mirrored(horizontally);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_Mirrored2(QImage* self, bool horizontally, bool vertically) {
	QImage ret = const_cast<const QImage*>(self)->mirrored(horizontally, vertically);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

void QImage_InvertPixels1(QImage* self, uintptr_t param1) {
	self->invertPixels(static_cast<QImage::InvertMode>(param1));
}

bool QImage_Load2(QImage* self, const char* fileName, size_t fileName_Strlen, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return self->load(fileName_QString, format);
}

bool QImage_LoadFromData3(QImage* self, const unsigned char* buf, int lenVal, const char* format) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<int>(lenVal), format);
}

bool QImage_LoadFromData2(QImage* self, QByteArray* data, const char* aformat) {
	return self->loadFromData(*data, aformat);
}

bool QImage_Save2(QImage* self, const char* fileName, size_t fileName_Strlen, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return const_cast<const QImage*>(self)->save(fileName_QString, format);
}

bool QImage_Save3(QImage* self, const char* fileName, size_t fileName_Strlen, const char* format, int quality) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	return const_cast<const QImage*>(self)->save(fileName_QString, format, static_cast<int>(quality));
}

bool QImage_Save22(QImage* self, QIODevice* device, const char* format) {
	return const_cast<const QImage*>(self)->save(device, format);
}

bool QImage_Save32(QImage* self, QIODevice* device, const char* format, int quality) {
	return const_cast<const QImage*>(self)->save(device, format, static_cast<int>(quality));
}

QImage* QImage_FromData3(const unsigned char* data, int size, const char* format) {
	QImage ret = QImage::fromData(static_cast<const uchar*>(data), static_cast<int>(size), format);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

QImage* QImage_FromData2(QByteArray* data, const char* format) {
	QImage ret = QImage::fromData(*data, format);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QImage*>(new QImage(ret));
}

void QImage_Text1(QImage* self, const char* key, size_t key_Strlen, char** _out, int* _out_Strlen) {
	QString key_QString = QString::fromUtf8(key, key_Strlen);
	QString ret = const_cast<const QImage*>(self)->text(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QImage_Delete(QImage* self) {
	delete self;
}

