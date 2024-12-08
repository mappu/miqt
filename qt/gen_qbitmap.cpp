#include <QBitmap>
#include <QImage>
#include <QMatrix>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <qbitmap.h>
#include "gen_qbitmap.h"
#include "_cgo_export.h"

class MiqtVirtualQBitmap : public virtual QBitmap {
public:

	MiqtVirtualQBitmap(): QBitmap() {};
	MiqtVirtualQBitmap(const QPixmap& param1): QBitmap(param1) {};
	MiqtVirtualQBitmap(int w, int h): QBitmap(w, h) {};
	MiqtVirtualQBitmap(const QSize& param1): QBitmap(param1) {};
	MiqtVirtualQBitmap(const QString& fileName): QBitmap(fileName) {};
	MiqtVirtualQBitmap(const QBitmap& other): QBitmap(other) {};
	MiqtVirtualQBitmap(const QString& fileName, const char* format): QBitmap(fileName, format) {};

	virtual ~MiqtVirtualQBitmap() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QBitmap::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QBitmap_DevType(const_cast<MiqtVirtualQBitmap*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QBitmap::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QBitmap::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QBitmap_PaintEngine(const_cast<MiqtVirtualQBitmap*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QBitmap::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QBitmap::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QBitmap_Metric(const_cast<MiqtVirtualQBitmap*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QBitmap::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

};

QBitmap* QBitmap_new() {
	return new MiqtVirtualQBitmap();
}

QBitmap* QBitmap_new2(QPixmap* param1) {
	return new MiqtVirtualQBitmap(*param1);
}

QBitmap* QBitmap_new3(int w, int h) {
	return new MiqtVirtualQBitmap(static_cast<int>(w), static_cast<int>(h));
}

QBitmap* QBitmap_new4(QSize* param1) {
	return new MiqtVirtualQBitmap(*param1);
}

QBitmap* QBitmap_new5(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQBitmap(fileName_QString);
}

QBitmap* QBitmap_new6(QBitmap* other) {
	return new MiqtVirtualQBitmap(*other);
}

QBitmap* QBitmap_new7(struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQBitmap(fileName_QString, format);
}

void QBitmap_virtbase(QBitmap* src, QPixmap** outptr_QPixmap) {
	*outptr_QPixmap = static_cast<QPixmap*>(src);
}

void QBitmap_OperatorAssign(QBitmap* self, QBitmap* other) {
	self->operator=(*other);
}

void QBitmap_OperatorAssignWithQPixmap(QBitmap* self, QPixmap* param1) {
	self->operator=(*param1);
}

void QBitmap_Swap(QBitmap* self, QBitmap* other) {
	self->swap(*other);
}

void QBitmap_Clear(QBitmap* self) {
	self->clear();
}

QBitmap* QBitmap_FromImage(QImage* image) {
	return new QBitmap(QBitmap::fromImage(*image));
}

QBitmap* QBitmap_FromData(QSize* size, const unsigned char* bits) {
	return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits)));
}

QBitmap* QBitmap_Transformed(const QBitmap* self, QMatrix* param1) {
	return new QBitmap(self->transformed(*param1));
}

QBitmap* QBitmap_TransformedWithMatrix(const QBitmap* self, QTransform* matrix) {
	return new QBitmap(self->transformed(*matrix));
}

QBitmap* QBitmap_FromImage2(QImage* image, int flags) {
	return new QBitmap(QBitmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
}

QBitmap* QBitmap_FromData3(QSize* size, const unsigned char* bits, int monoFormat) {
	return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits), static_cast<QImage::Format>(monoFormat)));
}

void QBitmap_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) )->handle__DevType = slot;
}

int QBitmap_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_DevType();
}

void QBitmap_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QBitmap_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_PaintEngine();
}

void QBitmap_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) )->handle__Metric = slot;
}

int QBitmap_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_Metric(param1);
}

void QBitmap_Delete(QBitmap* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQBitmap*>( self );
	} else {
		delete self;
	}
}

