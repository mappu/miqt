#include <QByteArray>
#include <QByteArrayView>
#include <QColor>
#include <QColorSpace>
#include <QColorTransform>
#include <QIODevice>
#include <QImage>
#include <QList>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPixelFormat>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include <qimage.h>
#include "gen_qimage.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QImage_devType(const QImage*, intptr_t);
QPaintEngine* miqt_exec_callback_QImage_paintEngine(const QImage*, intptr_t);
int miqt_exec_callback_QImage_metric(const QImage*, intptr_t, int);
void miqt_exec_callback_QImage_initPainter(const QImage*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QImage_redirected(const QImage*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QImage_sharedPainter(const QImage*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQImage final : public QImage {
public:

	MiqtVirtualQImage(): QImage() {};
	MiqtVirtualQImage(const QSize& size, QImage::Format format): QImage(size, format) {};
	MiqtVirtualQImage(int width, int height, QImage::Format format): QImage(width, height, format) {};
	MiqtVirtualQImage(uchar* data, int width, int height, QImage::Format format): QImage(data, width, height, format) {};
	MiqtVirtualQImage(const uchar* data, int width, int height, QImage::Format format): QImage(data, width, height, format) {};
	MiqtVirtualQImage(uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format): QImage(data, width, height, bytesPerLine, format) {};
	MiqtVirtualQImage(const uchar* data, int width, int height, qsizetype bytesPerLine, QImage::Format format): QImage(data, width, height, bytesPerLine, format) {};
	MiqtVirtualQImage(const QString& fileName): QImage(fileName) {};
	MiqtVirtualQImage(const QImage& param1): QImage(param1) {};
	MiqtVirtualQImage(const QString& fileName, const char* format): QImage(fileName, format) {};

	virtual ~MiqtVirtualQImage() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QImage::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QImage_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QImage::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QImage::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QImage_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QImage::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (handle__metric == 0) {
			return QImage::metric(metric);
		}
		
		QPaintDevice::PaintDeviceMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);

		int callback_return_value = miqt_exec_callback_QImage_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int metric) const {

		return QImage::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QImage::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QImage_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QImage::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QImage::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QImage_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QImage::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QImage::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QImage_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QImage::sharedPainter();

	}

	// Wrappers to allow calling protected methods:
	friend QImage* QImage_protectedbase_mirroredHelper(bool* _dynamic_cast_ok, const void* self, bool horizontal, bool vertical);
	friend QImage* QImage_protectedbase_rgbSwappedHelper(bool* _dynamic_cast_ok, const void* self);
	friend void QImage_protectedbase_mirroredInplace(bool* _dynamic_cast_ok, void* self, bool horizontal, bool vertical);
	friend void QImage_protectedbase_rgbSwappedInplace(bool* _dynamic_cast_ok, void* self);
	friend QImage* QImage_protectedbase_convertToFormatHelper(bool* _dynamic_cast_ok, const void* self, int format, int flags);
	friend bool QImage_protectedbase_convertToFormatInplace(bool* _dynamic_cast_ok, void* self, int format, int flags);
	friend QImage* QImage_protectedbase_smoothScaled(bool* _dynamic_cast_ok, const void* self, int w, int h);
	friend void QImage_protectedbase_detachMetadata(bool* _dynamic_cast_ok, void* self);
	friend void QImage_protectedbase_detachMetadata1(bool* _dynamic_cast_ok, void* self, bool invalidateCache);
};

QImage* QImage_new() {
	return new MiqtVirtualQImage();
}

QImage* QImage_new2(QSize* size, int format) {
	return new MiqtVirtualQImage(*size, static_cast<QImage::Format>(format));
}

QImage* QImage_new3(int width, int height, int format) {
	return new MiqtVirtualQImage(static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new4(unsigned char* data, int width, int height, int format) {
	return new MiqtVirtualQImage(static_cast<uchar*>(data), static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new5(const unsigned char* data, int width, int height, int format) {
	return new MiqtVirtualQImage(static_cast<const uchar*>(data), static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new6(unsigned char* data, int width, int height, ptrdiff_t bytesPerLine, int format) {
	return new MiqtVirtualQImage(static_cast<uchar*>(data), static_cast<int>(width), static_cast<int>(height), (qsizetype)(bytesPerLine), static_cast<QImage::Format>(format));
}

QImage* QImage_new7(const unsigned char* data, int width, int height, ptrdiff_t bytesPerLine, int format) {
	return new MiqtVirtualQImage(static_cast<const uchar*>(data), static_cast<int>(width), static_cast<int>(height), (qsizetype)(bytesPerLine), static_cast<QImage::Format>(format));
}

QImage* QImage_new8(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQImage(fileName_QString);
}

QImage* QImage_new9(QImage* param1) {
	return new MiqtVirtualQImage(*param1);
}

QImage* QImage_new10(struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQImage(fileName_QString, format);
}

void QImage_virtbase(QImage* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

void QImage_operatorAssign(QImage* self, QImage* param1) {
	self->operator=(*param1);
}

void QImage_swap(QImage* self, QImage* other) {
	self->swap(*other);
}

bool QImage_isNull(const QImage* self) {
	return self->isNull();
}

int QImage_devType(const QImage* self) {
	return self->devType();
}

bool QImage_operatorEqual(const QImage* self, QImage* param1) {
	return (*self == *param1);
}

bool QImage_operatorNotEqual(const QImage* self, QImage* param1) {
	return (*self != *param1);
}

QVariant* QImage_ToQVariant(const QImage* self) {
	return new QVariant(self->operator QVariant());
}

void QImage_detach(QImage* self) {
	self->detach();
}

bool QImage_isDetached(const QImage* self) {
	return self->isDetached();
}

QImage* QImage_copy(const QImage* self) {
	return new QImage(self->copy());
}

QImage* QImage_copy2(const QImage* self, int x, int y, int w, int h) {
	return new QImage(self->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

int QImage_format(const QImage* self) {
	QImage::Format _ret = self->format();
	return static_cast<int>(_ret);
}

QImage* QImage_convertToFormat(const QImage* self, int f) {
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f)));
}

QImage* QImage_convertToFormat2(const QImage* self, int f, struct miqt_array /* of unsigned int */  colorTable) {
	QList<QRgb> colorTable_QList;
	colorTable_QList.reserve(colorTable.len);
	unsigned int* colorTable_arr = static_cast<unsigned int*>(colorTable.data);
	for(size_t i = 0; i < colorTable.len; ++i) {
		colorTable_QList.push_back(static_cast<unsigned int>(colorTable_arr[i]));
	}
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), colorTable_QList));
}

bool QImage_reinterpretAsFormat(QImage* self, int f) {
	return self->reinterpretAsFormat(static_cast<QImage::Format>(f));
}

QImage* QImage_convertedTo(const QImage* self, int f) {
	return new QImage(self->convertedTo(static_cast<QImage::Format>(f)));
}

void QImage_convertTo(QImage* self, int f) {
	self->convertTo(static_cast<QImage::Format>(f));
}

int QImage_width(const QImage* self) {
	return self->width();
}

int QImage_height(const QImage* self) {
	return self->height();
}

QSize* QImage_size(const QImage* self) {
	return new QSize(self->size());
}

QRect* QImage_rect(const QImage* self) {
	return new QRect(self->rect());
}

int QImage_depth(const QImage* self) {
	return self->depth();
}

int QImage_colorCount(const QImage* self) {
	return self->colorCount();
}

int QImage_bitPlaneCount(const QImage* self) {
	return self->bitPlaneCount();
}

unsigned int QImage_color(const QImage* self, int i) {
	QRgb _ret = self->color(static_cast<int>(i));
	return static_cast<unsigned int>(_ret);
}

void QImage_setColor(QImage* self, int i, unsigned int c) {
	self->setColor(static_cast<int>(i), static_cast<QRgb>(c));
}

void QImage_setColorCount(QImage* self, int colorCount) {
	self->setColorCount(static_cast<int>(colorCount));
}

bool QImage_allGray(const QImage* self) {
	return self->allGray();
}

bool QImage_isGrayscale(const QImage* self) {
	return self->isGrayscale();
}

unsigned char* QImage_bits(QImage* self) {
	uchar* _ret = self->bits();
	return static_cast<unsigned char*>(_ret);
}

const unsigned char* QImage_bits2(const QImage* self) {
	const uchar* _ret = self->bits();
	return static_cast<const unsigned char*>(_ret);
}

const unsigned char* QImage_constBits(const QImage* self) {
	const uchar* _ret = self->constBits();
	return static_cast<const unsigned char*>(_ret);
}

ptrdiff_t QImage_sizeInBytes(const QImage* self) {
	qsizetype _ret = self->sizeInBytes();
	return static_cast<ptrdiff_t>(_ret);
}

unsigned char* QImage_scanLine(QImage* self, int param1) {
	uchar* _ret = self->scanLine(static_cast<int>(param1));
	return static_cast<unsigned char*>(_ret);
}

const unsigned char* QImage_scanLineWithInt(const QImage* self, int param1) {
	const uchar* _ret = self->scanLine(static_cast<int>(param1));
	return static_cast<const unsigned char*>(_ret);
}

const unsigned char* QImage_constScanLine(const QImage* self, int param1) {
	const uchar* _ret = self->constScanLine(static_cast<int>(param1));
	return static_cast<const unsigned char*>(_ret);
}

ptrdiff_t QImage_bytesPerLine(const QImage* self) {
	qsizetype _ret = self->bytesPerLine();
	return static_cast<ptrdiff_t>(_ret);
}

bool QImage_valid(const QImage* self, int x, int y) {
	return self->valid(static_cast<int>(x), static_cast<int>(y));
}

bool QImage_validWithPt(const QImage* self, QPoint* pt) {
	return self->valid(*pt);
}

int QImage_pixelIndex(const QImage* self, int x, int y) {
	return self->pixelIndex(static_cast<int>(x), static_cast<int>(y));
}

int QImage_pixelIndexWithPt(const QImage* self, QPoint* pt) {
	return self->pixelIndex(*pt);
}

unsigned int QImage_pixel(const QImage* self, int x, int y) {
	QRgb _ret = self->pixel(static_cast<int>(x), static_cast<int>(y));
	return static_cast<unsigned int>(_ret);
}

unsigned int QImage_pixelWithPt(const QImage* self, QPoint* pt) {
	QRgb _ret = self->pixel(*pt);
	return static_cast<unsigned int>(_ret);
}

void QImage_setPixel(QImage* self, int x, int y, unsigned int index_or_rgb) {
	self->setPixel(static_cast<int>(x), static_cast<int>(y), static_cast<uint>(index_or_rgb));
}

void QImage_setPixel2(QImage* self, QPoint* pt, unsigned int index_or_rgb) {
	self->setPixel(*pt, static_cast<uint>(index_or_rgb));
}

QColor* QImage_pixelColor(const QImage* self, int x, int y) {
	return new QColor(self->pixelColor(static_cast<int>(x), static_cast<int>(y)));
}

QColor* QImage_pixelColorWithPt(const QImage* self, QPoint* pt) {
	return new QColor(self->pixelColor(*pt));
}

void QImage_setPixelColor(QImage* self, int x, int y, QColor* c) {
	self->setPixelColor(static_cast<int>(x), static_cast<int>(y), *c);
}

void QImage_setPixelColor2(QImage* self, QPoint* pt, QColor* c) {
	self->setPixelColor(*pt, *c);
}

struct miqt_array /* of unsigned int */  QImage_colorTable(const QImage* self) {
	QList<QRgb> _ret = self->colorTable();
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QImage_setColorTable(QImage* self, struct miqt_array /* of unsigned int */  colors) {
	QList<QRgb> colors_QList;
	colors_QList.reserve(colors.len);
	unsigned int* colors_arr = static_cast<unsigned int*>(colors.data);
	for(size_t i = 0; i < colors.len; ++i) {
		colors_QList.push_back(static_cast<unsigned int>(colors_arr[i]));
	}
	self->setColorTable(colors_QList);
}

double QImage_devicePixelRatio(const QImage* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

void QImage_setDevicePixelRatio(QImage* self, double scaleFactor) {
	self->setDevicePixelRatio(static_cast<qreal>(scaleFactor));
}

QSizeF* QImage_deviceIndependentSize(const QImage* self) {
	return new QSizeF(self->deviceIndependentSize());
}

void QImage_fill(QImage* self, unsigned int pixel) {
	self->fill(static_cast<uint>(pixel));
}

void QImage_fillWithColor(QImage* self, QColor* color) {
	self->fill(*color);
}

void QImage_fill2(QImage* self, int color) {
	self->fill(static_cast<Qt::GlobalColor>(color));
}

bool QImage_hasAlphaChannel(const QImage* self) {
	return self->hasAlphaChannel();
}

void QImage_setAlphaChannel(QImage* self, QImage* alphaChannel) {
	self->setAlphaChannel(*alphaChannel);
}

QImage* QImage_createAlphaMask(const QImage* self) {
	return new QImage(self->createAlphaMask());
}

QImage* QImage_createHeuristicMask(const QImage* self) {
	return new QImage(self->createHeuristicMask());
}

QImage* QImage_createMaskFromColor(const QImage* self, unsigned int color) {
	return new QImage(self->createMaskFromColor(static_cast<QRgb>(color)));
}

QImage* QImage_scaled(const QImage* self, int w, int h) {
	return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h)));
}

QImage* QImage_scaledWithQSize(const QImage* self, QSize* s) {
	return new QImage(self->scaled(*s));
}

QImage* QImage_scaledToWidth(const QImage* self, int w) {
	return new QImage(self->scaledToWidth(static_cast<int>(w)));
}

QImage* QImage_scaledToHeight(const QImage* self, int h) {
	return new QImage(self->scaledToHeight(static_cast<int>(h)));
}

QImage* QImage_transformed(const QImage* self, QTransform* matrix) {
	return new QImage(self->transformed(*matrix));
}

QTransform* QImage_trueMatrix(QTransform* param1, int w, int h) {
	return new QTransform(QImage::trueMatrix(*param1, static_cast<int>(w), static_cast<int>(h)));
}

QImage* QImage_mirrored(const QImage* self) {
	return new QImage(self->mirrored());
}

QImage* QImage_rgbSwapped(const QImage* self) {
	return new QImage(self->rgbSwapped());
}

void QImage_mirror(QImage* self) {
	self->mirror();
}

void QImage_rgbSwap(QImage* self) {
	self->rgbSwap();
}

void QImage_invertPixels(QImage* self) {
	self->invertPixels();
}

QColorSpace* QImage_colorSpace(const QImage* self) {
	return new QColorSpace(self->colorSpace());
}

QImage* QImage_convertedToColorSpace(const QImage* self, QColorSpace* param1) {
	return new QImage(self->convertedToColorSpace(*param1));
}

void QImage_convertToColorSpace(QImage* self, QColorSpace* param1) {
	self->convertToColorSpace(*param1);
}

void QImage_setColorSpace(QImage* self, QColorSpace* colorSpace) {
	self->setColorSpace(*colorSpace);
}

QImage* QImage_colorTransformed(const QImage* self, QColorTransform* transform) {
	return new QImage(self->colorTransformed(*transform));
}

void QImage_applyColorTransform(QImage* self, QColorTransform* transform) {
	self->applyColorTransform(*transform);
}

bool QImage_load(QImage* self, QIODevice* device, const char* format) {
	return self->load(device, format);
}

bool QImage_loadWithFileName(QImage* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QImage_loadFromData(QImage* self, QByteArrayView* data) {
	return self->loadFromData(*data);
}

bool QImage_loadFromData2(QImage* self, const unsigned char* buf, int len) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<int>(len));
}

bool QImage_loadFromDataWithData(QImage* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray);
}

bool QImage_save(const QImage* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString);
}

bool QImage_saveWithDevice(const QImage* self, QIODevice* device) {
	return self->save(device);
}

QImage* QImage_fromData(QByteArrayView* data) {
	return new QImage(QImage::fromData(*data));
}

QImage* QImage_fromData2(const unsigned char* data, int size) {
	return new QImage(QImage::fromData(static_cast<const uchar*>(data), static_cast<int>(size)));
}

QImage* QImage_fromDataWithData(struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QImage(QImage::fromData(data_QByteArray));
}

long long QImage_cacheKey(const QImage* self) {
	qint64 _ret = self->cacheKey();
	return static_cast<long long>(_ret);
}

QPaintEngine* QImage_paintEngine(const QImage* self) {
	return self->paintEngine();
}

int QImage_dotsPerMeterX(const QImage* self) {
	return self->dotsPerMeterX();
}

int QImage_dotsPerMeterY(const QImage* self) {
	return self->dotsPerMeterY();
}

void QImage_setDotsPerMeterX(QImage* self, int dotsPerMeterX) {
	self->setDotsPerMeterX(static_cast<int>(dotsPerMeterX));
}

void QImage_setDotsPerMeterY(QImage* self, int dotsPerMeterY) {
	self->setDotsPerMeterY(static_cast<int>(dotsPerMeterY));
}

QPoint* QImage_offset(const QImage* self) {
	return new QPoint(self->offset());
}

void QImage_setOffset(QImage* self, QPoint* offset) {
	self->setOffset(*offset);
}

struct miqt_array /* of struct miqt_string */  QImage_textKeys(const QImage* self) {
	QStringList _ret = self->textKeys();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QImage_text(const QImage* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImage_setText(QImage* self, struct miqt_string key, struct miqt_string value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setText(key_QString, value_QString);
}

QPixelFormat* QImage_pixelFormat(const QImage* self) {
	return new QPixelFormat(self->pixelFormat());
}

QPixelFormat* QImage_toPixelFormat(int format) {
	return new QPixelFormat(QImage::toPixelFormat(static_cast<QImage::Format>(format)));
}

int QImage_toImageFormat(QPixelFormat* format) {
	QImage::Format _ret = QImage::toImageFormat(*format);
	return static_cast<int>(_ret);
}

QImage* QImage_copy1(const QImage* self, QRect* rect) {
	return new QImage(self->copy(*rect));
}

QImage* QImage_convertToFormat22(const QImage* self, int f, int flags) {
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), static_cast<Qt::ImageConversionFlags>(flags)));
}

QImage* QImage_convertToFormat3(const QImage* self, int f, struct miqt_array /* of unsigned int */  colorTable, int flags) {
	QList<QRgb> colorTable_QList;
	colorTable_QList.reserve(colorTable.len);
	unsigned int* colorTable_arr = static_cast<unsigned int*>(colorTable.data);
	for(size_t i = 0; i < colorTable.len; ++i) {
		colorTable_QList.push_back(static_cast<unsigned int>(colorTable_arr[i]));
	}
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), colorTable_QList, static_cast<Qt::ImageConversionFlags>(flags)));
}

QImage* QImage_convertedTo2(const QImage* self, int f, int flags) {
	return new QImage(self->convertedTo(static_cast<QImage::Format>(f), static_cast<Qt::ImageConversionFlags>(flags)));
}

void QImage_convertTo2(QImage* self, int f, int flags) {
	self->convertTo(static_cast<QImage::Format>(f), static_cast<Qt::ImageConversionFlags>(flags));
}

QImage* QImage_createAlphaMask1(const QImage* self, int flags) {
	return new QImage(self->createAlphaMask(static_cast<Qt::ImageConversionFlags>(flags)));
}

QImage* QImage_createHeuristicMask1(const QImage* self, bool clipTight) {
	return new QImage(self->createHeuristicMask(clipTight));
}

QImage* QImage_createMaskFromColor2(const QImage* self, unsigned int color, int mode) {
	return new QImage(self->createMaskFromColor(static_cast<QRgb>(color), static_cast<Qt::MaskMode>(mode)));
}

QImage* QImage_scaled3(const QImage* self, int w, int h, int aspectMode) {
	return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QImage* QImage_scaled4(const QImage* self, int w, int h, int aspectMode, int mode) {
	return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_scaled2(const QImage* self, QSize* s, int aspectMode) {
	return new QImage(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QImage* QImage_scaled32(const QImage* self, QSize* s, int aspectMode, int mode) {
	return new QImage(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_scaledToWidth2(const QImage* self, int w, int mode) {
	return new QImage(self->scaledToWidth(static_cast<int>(w), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_scaledToHeight2(const QImage* self, int h, int mode) {
	return new QImage(self->scaledToHeight(static_cast<int>(h), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_transformed2(const QImage* self, QTransform* matrix, int mode) {
	return new QImage(self->transformed(*matrix, static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_mirrored1(const QImage* self, bool horizontally) {
	return new QImage(self->mirrored(horizontally));
}

QImage* QImage_mirrored2(const QImage* self, bool horizontally, bool vertically) {
	return new QImage(self->mirrored(horizontally, vertically));
}

void QImage_mirror1(QImage* self, bool horizontally) {
	self->mirror(horizontally);
}

void QImage_mirror2(QImage* self, bool horizontally, bool vertically) {
	self->mirror(horizontally, vertically);
}

void QImage_invertPixels1(QImage* self, int param1) {
	self->invertPixels(static_cast<QImage::InvertMode>(param1));
}

bool QImage_load2(QImage* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString, format);
}

bool QImage_loadFromData22(QImage* self, QByteArrayView* data, const char* format) {
	return self->loadFromData(*data, format);
}

bool QImage_loadFromData3(QImage* self, const unsigned char* buf, int len, const char* format) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<int>(len), format);
}

bool QImage_loadFromData23(QImage* self, struct miqt_string data, const char* format) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray, format);
}

bool QImage_save2(const QImage* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format);
}

bool QImage_save3(const QImage* self, struct miqt_string fileName, const char* format, int quality) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format, static_cast<int>(quality));
}

bool QImage_save22(const QImage* self, QIODevice* device, const char* format) {
	return self->save(device, format);
}

bool QImage_save32(const QImage* self, QIODevice* device, const char* format, int quality) {
	return self->save(device, format, static_cast<int>(quality));
}

QImage* QImage_fromData22(QByteArrayView* data, const char* format) {
	return new QImage(QImage::fromData(*data, format));
}

QImage* QImage_fromData3(const unsigned char* data, int size, const char* format) {
	return new QImage(QImage::fromData(static_cast<const uchar*>(data), static_cast<int>(size), format));
}

QImage* QImage_fromData23(struct miqt_string data, const char* format) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QImage(QImage::fromData(data_QByteArray, format));
}

struct miqt_string QImage_text1(const QImage* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString _ret = self->text(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImage_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QImage_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQImage*)(self) )->virtualbase_devType();
}

bool QImage_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QImage_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQImage*)(self) )->virtualbase_paintEngine();
}

bool QImage_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QImage_virtualbase_metric(const void* self, int metric) {
	return ( (const MiqtVirtualQImage*)(self) )->virtualbase_metric(metric);
}

bool QImage_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QImage_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQImage*)(self) )->virtualbase_initPainter(painter);
}

bool QImage_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QImage_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQImage*)(self) )->virtualbase_redirected(offset);
}

bool QImage_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QImage_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQImage*)(self) )->virtualbase_sharedPainter();
}

QImage* QImage_protectedbase_mirroredHelper(bool* _dynamic_cast_ok, const void* self, bool horizontal, bool vertical) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QImage(self_cast->mirrored_helper(horizontal, vertical));

}

QImage* QImage_protectedbase_rgbSwappedHelper(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QImage(self_cast->rgbSwapped_helper());

}

void QImage_protectedbase_mirroredInplace(bool* _dynamic_cast_ok, void* self, bool horizontal, bool vertical) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->mirrored_inplace(horizontal, vertical);

}

void QImage_protectedbase_rgbSwappedInplace(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->rgbSwapped_inplace();

}

QImage* QImage_protectedbase_convertToFormatHelper(bool* _dynamic_cast_ok, const void* self, int format, int flags) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QImage(self_cast->convertToFormat_helper(static_cast<MiqtVirtualQImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags)));

}

bool QImage_protectedbase_convertToFormatInplace(bool* _dynamic_cast_ok, void* self, int format, int flags) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->convertToFormat_inplace(static_cast<MiqtVirtualQImage::Format>(format), static_cast<Qt::ImageConversionFlags>(flags));

}

QImage* QImage_protectedbase_smoothScaled(bool* _dynamic_cast_ok, const void* self, int w, int h) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QImage(self_cast->smoothScaled(static_cast<int>(w), static_cast<int>(h)));

}

void QImage_protectedbase_detachMetadata(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->detachMetadata();

}

void QImage_protectedbase_detachMetadata1(bool* _dynamic_cast_ok, void* self, bool invalidateCache) {
	MiqtVirtualQImage* self_cast = dynamic_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->detachMetadata(invalidateCache);

}

void QImage_delete(QImage* self) {
	delete self;
}

