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

int miqt_exec_callback_QPixmap_DevType(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QPixmap_PaintEngine(void*, intptr_t);
int miqt_exec_callback_QPixmap_Metric(void*, intptr_t, int);
void miqt_exec_callback_QPixmap_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPixmap_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPixmap_SharedPainter(void*, intptr_t);
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
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPixmap::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPixmap_DevType(const_cast<MiqtVirtualQPixmap*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPixmap::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QPixmap::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPixmap_PaintEngine(const_cast<MiqtVirtualQPixmap*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QPixmap::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QPixmap::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QPixmap_Metric(const_cast<MiqtVirtualQPixmap*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QPixmap::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QPixmap::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPixmap_InitPainter(const_cast<MiqtVirtualQPixmap*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QPixmap::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QPixmap::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPixmap_Redirected(const_cast<MiqtVirtualQPixmap*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QPixmap::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QPixmap::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPixmap_SharedPainter(const_cast<MiqtVirtualQPixmap*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

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

void QPixmap_OperatorAssign(QPixmap* self, QPixmap* param1) {
	self->operator=(*param1);
}

void QPixmap_Swap(QPixmap* self, QPixmap* other) {
	self->swap(*other);
}

QVariant* QPixmap_ToQVariant(const QPixmap* self) {
	return new QVariant(self->operator QVariant());
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

QSizeF* QPixmap_DeviceIndependentSize(const QPixmap* self) {
	return new QSizeF(self->deviceIndependentSize());
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

QPixmap* QPixmap_Transformed(const QPixmap* self, QTransform* param1) {
	return new QPixmap(self->transformed(*param1));
}

QTransform* QPixmap_TrueMatrix(QTransform* m, int w, int h) {
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

bool QPixmap_Load(QPixmap* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QPixmap_LoadFromData(QPixmap* self, const unsigned char* buf, unsigned int lenVal) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(lenVal));
}

bool QPixmap_LoadFromDataWithData(QPixmap* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray);
}

bool QPixmap_Save(const QPixmap* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
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

QPixmap* QPixmap_Transformed2(const QPixmap* self, QTransform* param1, int mode) {
	return new QPixmap(self->transformed(*param1, static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_FromImage2(QImage* image, int flags) {
	return new QPixmap(QPixmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
}

QPixmap* QPixmap_FromImageReader2(QImageReader* imageReader, int flags) {
	return new QPixmap(QPixmap::fromImageReader(imageReader, static_cast<Qt::ImageConversionFlags>(flags)));
}

bool QPixmap_Load2(QPixmap* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString, format);
}

bool QPixmap_Load3(QPixmap* self, struct miqt_string fileName, const char* format, int flags) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString, format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_LoadFromData3(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(lenVal), format);
}

bool QPixmap_LoadFromData4(QPixmap* self, const unsigned char* buf, unsigned int lenVal, const char* format, int flags) {
	return self->loadFromData(static_cast<const uchar*>(buf), static_cast<uint>(lenVal), format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_LoadFromData2(QPixmap* self, struct miqt_string data, const char* format) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray, format);
}

bool QPixmap_LoadFromData32(QPixmap* self, struct miqt_string data, const char* format, int flags) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray, format, static_cast<Qt::ImageConversionFlags>(flags));
}

bool QPixmap_Save2(const QPixmap* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format);
}

bool QPixmap_Save3(const QPixmap* self, struct miqt_string fileName, const char* format, int quality) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
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

void QPixmap_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) )->handle__DevType = slot;
}

int QPixmap_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPixmap*)(self) )->virtualbase_DevType();
}

void QPixmap_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QPixmap_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQPixmap*)(self) )->virtualbase_PaintEngine();
}

void QPixmap_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) )->handle__Metric = slot;
}

int QPixmap_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQPixmap*)(self) )->virtualbase_Metric(param1);
}

void QPixmap_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) )->handle__InitPainter = slot;
}

void QPixmap_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPixmap*)(self) )->virtualbase_InitPainter(painter);
}

void QPixmap_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QPixmap_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPixmap*)(self) )->virtualbase_Redirected(offset);
}

void QPixmap_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) )->handle__SharedPainter = slot;
}

QPainter* QPixmap_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQPixmap*)(self) )->virtualbase_SharedPainter();
}

void QPixmap_Delete(QPixmap* self) {
	delete self;
}

