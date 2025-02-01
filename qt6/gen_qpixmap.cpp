#include <QBitmap>
#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QImageReader>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include <qpixmap.h>
#include "gen_qpixmap.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QPixmap_devType(const QPixmap*, intptr_t);
QPaintEngine* miqt_exec_callback_QPixmap_paintEngine(const QPixmap*, intptr_t);
int miqt_exec_callback_QPixmap_metric(const QPixmap*, intptr_t, int);
void miqt_exec_callback_QPixmap_initPainter(const QPixmap*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPixmap_redirected(const QPixmap*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPixmap_sharedPainter(const QPixmap*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPixmap final : public QPixmap {
public:

	MiqtVirtualQPixmap(): QPixmap() {};
	MiqtVirtualQPixmap(int w, int h): QPixmap(w, h) {};
	MiqtVirtualQPixmap(const QSize& param1): QPixmap(param1) {};
	MiqtVirtualQPixmap(const QString& fileName): QPixmap(fileName) {};
	MiqtVirtualQPixmap(const QPixmap& param1): QPixmap(param1) {};
	MiqtVirtualQPixmap(const QString& fileName, const char* format): QPixmap(fileName, format) {};
	MiqtVirtualQPixmap(const QString& fileName, const char* format, Qt::ImageConversionFlags flags): QPixmap(fileName, format, flags) {};

	virtual ~MiqtVirtualQPixmap() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPixmap::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPixmap_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPixmap::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPixmap::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPixmap_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QPixmap::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QPixmap::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPixmap_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QPixmap::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPixmap::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPixmap_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPixmap::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPixmap::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPixmap_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPixmap::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPixmap::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPixmap_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPixmap::sharedPainter();

	}

};

QPixmap* QPixmap_new() {
	return new MiqtVirtualQPixmap();
}

QPixmap* QPixmap_new2(int w, int h) {
	return new MiqtVirtualQPixmap(static_cast<int>(w), static_cast<int>(h));
}

QPixmap* QPixmap_new3(QSize* param1) {
	return new MiqtVirtualQPixmap(*param1);
}

QPixmap* QPixmap_new4(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQPixmap(fileName_QString);
}

QPixmap* QPixmap_new5(QPixmap* param1) {
	return new MiqtVirtualQPixmap(*param1);
}

QPixmap* QPixmap_new6(struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQPixmap(fileName_QString, format);
}

QPixmap* QPixmap_new7(struct miqt_string fileName, const char* format, int flags) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQPixmap(fileName_QString, format, static_cast<Qt::ImageConversionFlags>(flags));
}

void QPixmap_virtbase(QPixmap* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

void QPixmap_operatorAssign(QPixmap* self, QPixmap* param1) {
	self->operator=(*param1);
}

void QPixmap_swap(QPixmap* self, QPixmap* other) {
	self->swap(*other);
}

QVariant* QPixmap_ToQVariant(const QPixmap* self) {
	return new QVariant(self->operator QVariant());
}

bool QPixmap_isNull(const QPixmap* self) {
	return self->isNull();
}

int QPixmap_devType(const QPixmap* self) {
	return self->devType();
}

int QPixmap_width(const QPixmap* self) {
	return self->width();
}

int QPixmap_height(const QPixmap* self) {
	return self->height();
}

QSize* QPixmap_size(const QPixmap* self) {
	return new QSize(self->size());
}

QRect* QPixmap_rect(const QPixmap* self) {
	return new QRect(self->rect());
}

int QPixmap_depth(const QPixmap* self) {
	return self->depth();
}

int QPixmap_defaultDepth() {
	return QPixmap::defaultDepth();
}

void QPixmap_fill(QPixmap* self) {
	self->fill();
}

QBitmap* QPixmap_mask(const QPixmap* self) {
	return new QBitmap(self->mask());
}

void QPixmap_setMask(QPixmap* self, QBitmap* mask) {
	self->setMask(*mask);
}

double QPixmap_devicePixelRatio(const QPixmap* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

void QPixmap_setDevicePixelRatio(QPixmap* self, double scaleFactor) {
	self->setDevicePixelRatio(static_cast<qreal>(scaleFactor));
}

QSizeF* QPixmap_deviceIndependentSize(const QPixmap* self) {
	return new QSizeF(self->deviceIndependentSize());
}

bool QPixmap_hasAlpha(const QPixmap* self) {
	return self->hasAlpha();
}

bool QPixmap_hasAlphaChannel(const QPixmap* self) {
	return self->hasAlphaChannel();
}

QBitmap* QPixmap_createHeuristicMask(const QPixmap* self) {
	return new QBitmap(self->createHeuristicMask());
}

QBitmap* QPixmap_createMaskFromColor(const QPixmap* self, QColor* maskColor) {
	return new QBitmap(self->createMaskFromColor(*maskColor));
}

QPixmap* QPixmap_scaled(const QPixmap* self, int w, int h) {
	return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QPixmap_scaledWithQSize(const QPixmap* self, QSize* s) {
	return new QPixmap(self->scaled(*s));
}

QPixmap* QPixmap_scaledToWidth(const QPixmap* self, int w) {
	return new QPixmap(self->scaledToWidth(static_cast<int>(w)));
}

QPixmap* QPixmap_scaledToHeight(const QPixmap* self, int h) {
	return new QPixmap(self->scaledToHeight(static_cast<int>(h)));
}

QPixmap* QPixmap_transformed(const QPixmap* self, QTransform* param1) {
	return new QPixmap(self->transformed(*param1));
}

QTransform* QPixmap_trueMatrix(QTransform* m, int w, int h) {
	return new QTransform(QPixmap::trueMatrix(*m, static_cast<int>(w), static_cast<int>(h)));
}

QImage* QPixmap_toImage(const QPixmap* self) {
	return new QImage(self->toImage());
}

QPixmap* QPixmap_fromImage(QImage* image) {
	return new QPixmap(QPixmap::fromImage(*image));
}

QPixmap* QPixmap_fromImageReader(QImageReader* imageReader) {
	return new QPixmap(QPixmap::fromImageReader(imageReader));
}

bool QPixmap_load(QPixmap* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QPixmap_loadFromData(QPixmap* self, const unsigned char* buf, unsigned int len) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(len));
}

bool QPixmap_loadFromDataWithData(QPixmap* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray);
}

bool QPixmap_save(const QPixmap* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString);
}

bool QPixmap_saveWithDevice(const QPixmap* self, QIODevice* device) {
	return self->save(device);
}

bool QPixmap_convertFromImage(QPixmap* self, QImage* img) {
	return self->convertFromImage(*img);
}

QPixmap* QPixmap_copy(const QPixmap* self, int x, int y, int width, int height) {
	return new QPixmap(self->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height)));
}

QPixmap* QPixmap_copy2(const QPixmap* self) {
	return new QPixmap(self->copy());
}

void QPixmap_scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height));
}

void QPixmap_scroll2(QPixmap* self, int dx, int dy, QRect* rect) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *rect);
}

long long QPixmap_cacheKey(const QPixmap* self) {
	qint64 _ret = self->cacheKey();
	return static_cast<long long>(_ret);
}

bool QPixmap_isDetached(const QPixmap* self) {
	return self->isDetached();
}

void QPixmap_detach(QPixmap* self) {
	self->detach();
}

bool QPixmap_isQBitmap(const QPixmap* self) {
	return self->isQBitmap();
}

QPaintEngine* QPixmap_paintEngine(const QPixmap* self) {
	return self->paintEngine();
}

bool QPixmap_operatorNot(const QPixmap* self) {
	return self->operator!();
}

void QPixmap_fill1(QPixmap* self, QColor* fillColor) {
	self->fill(*fillColor);
}

QBitmap* QPixmap_createHeuristicMask1(const QPixmap* self, bool clipTight) {
	return new QBitmap(self->createHeuristicMask(clipTight));
}

QBitmap* QPixmap_createMaskFromColor2(const QPixmap* self, QColor* maskColor, int mode) {
	return new QBitmap(self->createMaskFromColor(*maskColor, static_cast<Qt::MaskMode>(mode)));
}

QPixmap* QPixmap_scaled3(const QPixmap* self, int w, int h, int aspectMode) {
	return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QPixmap* QPixmap_scaled4(const QPixmap* self, int w, int h, int aspectMode, int mode) {
	return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_scaled2(const QPixmap* self, QSize* s, int aspectMode) {
	return new QPixmap(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QPixmap* QPixmap_scaled32(const QPixmap* self, QSize* s, int aspectMode, int mode) {
	return new QPixmap(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_scaledToWidth2(const QPixmap* self, int w, int mode) {
	return new QPixmap(self->scaledToWidth(static_cast<int>(w), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_scaledToHeight2(const QPixmap* self, int h, int mode) {
	return new QPixmap(self->scaledToHeight(static_cast<int>(h), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_transformed2(const QPixmap* self, QTransform* param1, int mode) {
	return new QPixmap(self->transformed(*param1, static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_fromImage2(QImage* image, int flags) {
	return new QPixmap(QPixmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
}

QPixmap* QPixmap_fromImageReader2(QImageReader* imageReader, int flags) {
	return new QPixmap(QPixmap::fromImageReader(imageReader, static_cast<Qt::ImageConversionFlags>(flags)));
}

bool QPixmap_load2(QPixmap* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString, format);
}

bool QPixmap_load3(QPixmap* self, struct miqt_string fileName, const char* format, int flags) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString, format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_loadFromData3(QPixmap* self, const unsigned char* buf, unsigned int len, const char* format) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(len), format);
}

bool QPixmap_loadFromData4(QPixmap* self, const unsigned char* buf, unsigned int len, const char* format, int flags) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(len), format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_loadFromData2(QPixmap* self, struct miqt_string data, const char* format) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray, format);
}

bool QPixmap_loadFromData32(QPixmap* self, struct miqt_string data, const char* format, int flags) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray, format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_save2(const QPixmap* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format);
}

bool QPixmap_save3(const QPixmap* self, struct miqt_string fileName, const char* format, int quality) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format, static_cast<int>(quality));
}

bool QPixmap_save22(const QPixmap* self, QIODevice* device, const char* format) {
	return self->save(device, format);
}

bool QPixmap_save32(const QPixmap* self, QIODevice* device, const char* format, int quality) {
	return self->save(device, format, static_cast<int>(quality));
}

bool QPixmap_convertFromImage2(QPixmap* self, QImage* img, int flags) {
	return self->convertFromImage(*img, static_cast<Qt::ImageConversionFlags>(flags));
}

QPixmap* QPixmap_copy1(const QPixmap* self, QRect* rect) {
	return new QPixmap(self->copy(*rect));
}

void QPixmap_scroll7(QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height), exposed);
}

void QPixmap_scroll4(QPixmap* self, int dx, int dy, QRect* rect, QRegion* exposed) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *rect, exposed);
}

bool QPixmap_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPixmap* self_cast = dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPixmap_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPixmap*)(self) )->virtualbase_devType();
}

bool QPixmap_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPixmap* self_cast = dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPixmap_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQPixmap*)(self) )->virtualbase_paintEngine();
}

bool QPixmap_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPixmap* self_cast = dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPixmap_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPixmap*)(self) )->virtualbase_metric(param1);
}

bool QPixmap_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPixmap* self_cast = dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPixmap_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPixmap*)(self) )->virtualbase_initPainter(painter);
}

bool QPixmap_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPixmap* self_cast = dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPixmap_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPixmap*)(self) )->virtualbase_redirected(offset);
}

bool QPixmap_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPixmap* self_cast = dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPixmap_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPixmap*)(self) )->virtualbase_sharedPainter();
}

void QPixmap_delete(QPixmap* self) {
	delete self;
}

