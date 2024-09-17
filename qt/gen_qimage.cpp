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
#include "_cgo_export.h"

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

QImage* QImage_new8(struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QImage(fileName_QString);
}

QImage* QImage_new9(QImage* param1) {
	return new QImage(*param1);
}

QImage* QImage_new10(struct miqt_string* fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return new QImage(fileName_QString, format);
}

void QImage_OperatorAssign(QImage* self, QImage* param1) {
	self->operator=(*param1);
}

void QImage_Swap(QImage* self, QImage* other) {
	self->swap(*other);
}

bool QImage_IsNull(const QImage* self) {
	return self->isNull();
}

int QImage_DevType(const QImage* self) {
	return self->devType();
}

bool QImage_OperatorEqual(const QImage* self, QImage* param1) {
	return self->operator==(*param1);
}

bool QImage_OperatorNotEqual(const QImage* self, QImage* param1) {
	return self->operator!=(*param1);
}

void QImage_Detach(QImage* self) {
	self->detach();
}

bool QImage_IsDetached(const QImage* self) {
	return self->isDetached();
}

QImage* QImage_Copy(const QImage* self) {
	return new QImage(self->copy());
}

QImage* QImage_Copy2(const QImage* self, int x, int y, int w, int h) {
	return new QImage(self->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

uintptr_t QImage_Format(const QImage* self) {
	QImage::Format _ret = self->format();
	return static_cast<uintptr_t>(_ret);
}

QImage* QImage_ConvertToFormat(const QImage* self, uintptr_t f) {
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f)));
}

QImage* QImage_ConvertToFormat2(const QImage* self, uintptr_t f, struct miqt_array* /* of unsigned int */ colorTable) {
	QVector<unsigned int> colorTable_QList;
	colorTable_QList.reserve(colorTable->len);
	unsigned int* colorTable_arr = static_cast<unsigned int*>(colorTable->data);
	for(size_t i = 0; i < colorTable->len; ++i) {
		colorTable_QList.push_back(colorTable_arr[i]);
	}
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), colorTable_QList));
}

bool QImage_ReinterpretAsFormat(QImage* self, uintptr_t f) {
	return self->reinterpretAsFormat(static_cast<QImage::Format>(f));
}

void QImage_ConvertTo(QImage* self, uintptr_t f) {
	self->convertTo(static_cast<QImage::Format>(f));
}

int QImage_Width(const QImage* self) {
	return self->width();
}

int QImage_Height(const QImage* self) {
	return self->height();
}

QSize* QImage_Size(const QImage* self) {
	return new QSize(self->size());
}

QRect* QImage_Rect(const QImage* self) {
	return new QRect(self->rect());
}

int QImage_Depth(const QImage* self) {
	return self->depth();
}

int QImage_ColorCount(const QImage* self) {
	return self->colorCount();
}

int QImage_BitPlaneCount(const QImage* self) {
	return self->bitPlaneCount();
}

unsigned int QImage_Color(const QImage* self, int i) {
	return self->color(static_cast<int>(i));
}

void QImage_SetColor(QImage* self, int i, unsigned int c) {
	self->setColor(static_cast<int>(i), static_cast<QRgb>(c));
}

void QImage_SetColorCount(QImage* self, int colorCount) {
	self->setColorCount(static_cast<int>(colorCount));
}

bool QImage_AllGray(const QImage* self) {
	return self->allGray();
}

bool QImage_IsGrayscale(const QImage* self) {
	return self->isGrayscale();
}

unsigned char* QImage_Bits(QImage* self) {
	return self->bits();
}

const unsigned char* QImage_Bits2(const QImage* self) {
	return (const unsigned char*) self->bits();
}

const unsigned char* QImage_ConstBits(const QImage* self) {
	return (const unsigned char*) self->constBits();
}

int QImage_ByteCount(const QImage* self) {
	return self->byteCount();
}

size_t QImage_SizeInBytes(const QImage* self) {
	return self->sizeInBytes();
}

unsigned char* QImage_ScanLine(QImage* self, int param1) {
	return self->scanLine(static_cast<int>(param1));
}

const unsigned char* QImage_ScanLineWithInt(const QImage* self, int param1) {
	return (const unsigned char*) self->scanLine(static_cast<int>(param1));
}

const unsigned char* QImage_ConstScanLine(const QImage* self, int param1) {
	return (const unsigned char*) self->constScanLine(static_cast<int>(param1));
}

int QImage_BytesPerLine(const QImage* self) {
	return self->bytesPerLine();
}

bool QImage_Valid(const QImage* self, int x, int y) {
	return self->valid(static_cast<int>(x), static_cast<int>(y));
}

bool QImage_ValidWithPt(const QImage* self, QPoint* pt) {
	return self->valid(*pt);
}

int QImage_PixelIndex(const QImage* self, int x, int y) {
	return self->pixelIndex(static_cast<int>(x), static_cast<int>(y));
}

int QImage_PixelIndexWithPt(const QImage* self, QPoint* pt) {
	return self->pixelIndex(*pt);
}

unsigned int QImage_Pixel(const QImage* self, int x, int y) {
	return self->pixel(static_cast<int>(x), static_cast<int>(y));
}

unsigned int QImage_PixelWithPt(const QImage* self, QPoint* pt) {
	return self->pixel(*pt);
}

void QImage_SetPixel(QImage* self, int x, int y, unsigned int index_or_rgb) {
	self->setPixel(static_cast<int>(x), static_cast<int>(y), static_cast<uint>(index_or_rgb));
}

void QImage_SetPixel2(QImage* self, QPoint* pt, unsigned int index_or_rgb) {
	self->setPixel(*pt, static_cast<uint>(index_or_rgb));
}

QColor* QImage_PixelColor(const QImage* self, int x, int y) {
	return new QColor(self->pixelColor(static_cast<int>(x), static_cast<int>(y)));
}

QColor* QImage_PixelColorWithPt(const QImage* self, QPoint* pt) {
	return new QColor(self->pixelColor(*pt));
}

void QImage_SetPixelColor(QImage* self, int x, int y, QColor* c) {
	self->setPixelColor(static_cast<int>(x), static_cast<int>(y), *c);
}

void QImage_SetPixelColor2(QImage* self, QPoint* pt, QColor* c) {
	self->setPixelColor(*pt, *c);
}

struct miqt_array* QImage_ColorTable(const QImage* self) {
	QVector<unsigned int> _ret = self->colorTable();
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QImage_SetColorTable(QImage* self, struct miqt_array* /* of unsigned int */ colors) {
	QVector<unsigned int> colors_QList;
	colors_QList.reserve(colors->len);
	unsigned int* colors_arr = static_cast<unsigned int*>(colors->data);
	for(size_t i = 0; i < colors->len; ++i) {
		colors_QList.push_back(colors_arr[i]);
	}
	self->setColorTable(colors_QList);
}

double QImage_DevicePixelRatio(const QImage* self) {
	return self->devicePixelRatio();
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

bool QImage_HasAlphaChannel(const QImage* self) {
	return self->hasAlphaChannel();
}

void QImage_SetAlphaChannel(QImage* self, QImage* alphaChannel) {
	self->setAlphaChannel(*alphaChannel);
}

QImage* QImage_AlphaChannel(const QImage* self) {
	return new QImage(self->alphaChannel());
}

QImage* QImage_CreateAlphaMask(const QImage* self) {
	return new QImage(self->createAlphaMask());
}

QImage* QImage_CreateHeuristicMask(const QImage* self) {
	return new QImage(self->createHeuristicMask());
}

QImage* QImage_CreateMaskFromColor(const QImage* self, unsigned int color) {
	return new QImage(self->createMaskFromColor(static_cast<QRgb>(color)));
}

QImage* QImage_Scaled(const QImage* self, int w, int h) {
	return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h)));
}

QImage* QImage_ScaledWithQSize(const QImage* self, QSize* s) {
	return new QImage(self->scaled(*s));
}

QImage* QImage_ScaledToWidth(const QImage* self, int w) {
	return new QImage(self->scaledToWidth(static_cast<int>(w)));
}

QImage* QImage_ScaledToHeight(const QImage* self, int h) {
	return new QImage(self->scaledToHeight(static_cast<int>(h)));
}

QImage* QImage_Transformed(const QImage* self, QMatrix* matrix) {
	return new QImage(self->transformed(*matrix));
}

QMatrix* QImage_TrueMatrix(QMatrix* param1, int w, int h) {
	return new QMatrix(QImage::trueMatrix(*param1, static_cast<int>(w), static_cast<int>(h)));
}

QImage* QImage_TransformedWithMatrix(const QImage* self, QTransform* matrix) {
	return new QImage(self->transformed(*matrix));
}

QTransform* QImage_TrueMatrix2(QTransform* param1, int w, int h) {
	return new QTransform(QImage::trueMatrix(*param1, static_cast<int>(w), static_cast<int>(h)));
}

QImage* QImage_Mirrored(const QImage* self) {
	return new QImage(self->mirrored());
}

QImage* QImage_RgbSwapped(const QImage* self) {
	return new QImage(self->rgbSwapped());
}

void QImage_InvertPixels(QImage* self) {
	self->invertPixels();
}

QColorSpace* QImage_ColorSpace(const QImage* self) {
	return new QColorSpace(self->colorSpace());
}

QImage* QImage_ConvertedToColorSpace(const QImage* self, QColorSpace* param1) {
	return new QImage(self->convertedToColorSpace(*param1));
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

bool QImage_LoadWithFileName(QImage* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->load(fileName_QString);
}

bool QImage_LoadFromData(QImage* self, const unsigned char* buf, int lenVal) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<int>(lenVal));
}

bool QImage_LoadFromDataWithData(QImage* self, QByteArray* data) {
	return self->loadFromData(*data);
}

bool QImage_Save(const QImage* self, struct miqt_string* fileName) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->save(fileName_QString);
}

bool QImage_SaveWithDevice(const QImage* self, QIODevice* device) {
	return self->save(device);
}

QImage* QImage_FromData(const unsigned char* data, int size) {
	return new QImage(QImage::fromData(static_cast<const uchar*>(data), static_cast<int>(size)));
}

QImage* QImage_FromDataWithData(QByteArray* data) {
	return new QImage(QImage::fromData(*data));
}

long long QImage_CacheKey(const QImage* self) {
	return self->cacheKey();
}

QPaintEngine* QImage_PaintEngine(const QImage* self) {
	return self->paintEngine();
}

int QImage_DotsPerMeterX(const QImage* self) {
	return self->dotsPerMeterX();
}

int QImage_DotsPerMeterY(const QImage* self) {
	return self->dotsPerMeterY();
}

void QImage_SetDotsPerMeterX(QImage* self, int dotsPerMeterX) {
	self->setDotsPerMeterX(static_cast<int>(dotsPerMeterX));
}

void QImage_SetDotsPerMeterY(QImage* self, int dotsPerMeterY) {
	self->setDotsPerMeterY(static_cast<int>(dotsPerMeterY));
}

QPoint* QImage_Offset(const QImage* self) {
	return new QPoint(self->offset());
}

void QImage_SetOffset(QImage* self, QPoint* offset) {
	self->setOffset(*offset);
}

struct miqt_array* QImage_TextKeys(const QImage* self) {
	QStringList _ret = self->textKeys();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QImage_Text(const QImage* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QImage_SetText(QImage* self, struct miqt_string* key, struct miqt_string* value) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QString value_QString = QString::fromUtf8(&value->data, value->len);
	self->setText(key_QString, value_QString);
}

QPixelFormat* QImage_PixelFormat(const QImage* self) {
	return new QPixelFormat(self->pixelFormat());
}

QPixelFormat* QImage_ToPixelFormat(uintptr_t format) {
	return new QPixelFormat(QImage::toPixelFormat(static_cast<QImage::Format>(format)));
}

uintptr_t QImage_ToImageFormat(QPixelFormat* format) {
	QImage::Format _ret = QImage::toImageFormat(*format);
	return static_cast<uintptr_t>(_ret);
}

QImage* QImage_Copy1(const QImage* self, QRect* rect) {
	return new QImage(self->copy(*rect));
}

QImage* QImage_ConvertToFormat22(const QImage* self, uintptr_t f, int flags) {
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), static_cast<Qt::ImageConversionFlags>(flags)));
}

QImage* QImage_ConvertToFormat3(const QImage* self, uintptr_t f, struct miqt_array* /* of unsigned int */ colorTable, int flags) {
	QVector<unsigned int> colorTable_QList;
	colorTable_QList.reserve(colorTable->len);
	unsigned int* colorTable_arr = static_cast<unsigned int*>(colorTable->data);
	for(size_t i = 0; i < colorTable->len; ++i) {
		colorTable_QList.push_back(colorTable_arr[i]);
	}
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), colorTable_QList, static_cast<Qt::ImageConversionFlags>(flags)));
}

void QImage_ConvertTo2(QImage* self, uintptr_t f, int flags) {
	self->convertTo(static_cast<QImage::Format>(f), static_cast<Qt::ImageConversionFlags>(flags));
}

QImage* QImage_CreateAlphaMask1(const QImage* self, int flags) {
	return new QImage(self->createAlphaMask(static_cast<Qt::ImageConversionFlags>(flags)));
}

QImage* QImage_CreateHeuristicMask1(const QImage* self, bool clipTight) {
	return new QImage(self->createHeuristicMask(clipTight));
}

QImage* QImage_CreateMaskFromColor2(const QImage* self, unsigned int color, uintptr_t mode) {
	return new QImage(self->createMaskFromColor(static_cast<QRgb>(color), static_cast<Qt::MaskMode>(mode)));
}

QImage* QImage_Scaled3(const QImage* self, int w, int h, uintptr_t aspectMode) {
	return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QImage* QImage_Scaled4(const QImage* self, int w, int h, uintptr_t aspectMode, uintptr_t mode) {
	return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_Scaled2(const QImage* self, QSize* s, uintptr_t aspectMode) {
	return new QImage(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QImage* QImage_Scaled32(const QImage* self, QSize* s, uintptr_t aspectMode, uintptr_t mode) {
	return new QImage(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_ScaledToWidth2(const QImage* self, int w, uintptr_t mode) {
	return new QImage(self->scaledToWidth(static_cast<int>(w), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_ScaledToHeight2(const QImage* self, int h, uintptr_t mode) {
	return new QImage(self->scaledToHeight(static_cast<int>(h), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_Transformed2(const QImage* self, QMatrix* matrix, uintptr_t mode) {
	return new QImage(self->transformed(*matrix, static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_Transformed22(const QImage* self, QTransform* matrix, uintptr_t mode) {
	return new QImage(self->transformed(*matrix, static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_Mirrored1(const QImage* self, bool horizontally) {
	return new QImage(self->mirrored(horizontally));
}

QImage* QImage_Mirrored2(const QImage* self, bool horizontally, bool vertically) {
	return new QImage(self->mirrored(horizontally, vertically));
}

void QImage_InvertPixels1(QImage* self, uintptr_t param1) {
	self->invertPixels(static_cast<QImage::InvertMode>(param1));
}

bool QImage_Load2(QImage* self, struct miqt_string* fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->load(fileName_QString, format);
}

bool QImage_LoadFromData3(QImage* self, const unsigned char* buf, int lenVal, const char* format) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<int>(lenVal), format);
}

bool QImage_LoadFromData2(QImage* self, QByteArray* data, const char* aformat) {
	return self->loadFromData(*data, aformat);
}

bool QImage_Save2(const QImage* self, struct miqt_string* fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->save(fileName_QString, format);
}

bool QImage_Save3(const QImage* self, struct miqt_string* fileName, const char* format, int quality) {
	QString fileName_QString = QString::fromUtf8(&fileName->data, fileName->len);
	return self->save(fileName_QString, format, static_cast<int>(quality));
}

bool QImage_Save22(const QImage* self, QIODevice* device, const char* format) {
	return self->save(device, format);
}

bool QImage_Save32(const QImage* self, QIODevice* device, const char* format, int quality) {
	return self->save(device, format, static_cast<int>(quality));
}

QImage* QImage_FromData3(const unsigned char* data, int size, const char* format) {
	return new QImage(QImage::fromData(static_cast<const uchar*>(data), static_cast<int>(size), format));
}

QImage* QImage_FromData2(QByteArray* data, const char* format) {
	return new QImage(QImage::fromData(*data, format));
}

struct miqt_string* QImage_Text1(const QImage* self, struct miqt_string* key) {
	QString key_QString = QString::fromUtf8(&key->data, key->len);
	QString _ret = self->text(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QImage_Delete(QImage* self) {
	delete self;
}

