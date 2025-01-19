#include <QBitmap>
#include <QImage>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include <qbitmap.h>
#include "gen_qbitmap.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QBitmap_DevType(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QBitmap_PaintEngine(void*, intptr_t);
int miqt_exec_callback_QBitmap_Metric(void*, intptr_t, int);
void miqt_exec_callback_QBitmap_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QBitmap_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QBitmap_SharedPainter(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBitmap final : public QBitmap {
public:

	MiqtVirtualQBitmap(): QBitmap() {};
	MiqtVirtualQBitmap(const QPixmap& param1): QBitmap(param1) {};
	MiqtVirtualQBitmap(int w, int h): QBitmap(w, h) {};
	MiqtVirtualQBitmap(const QSize& param1): QBitmap(param1) {};
	MiqtVirtualQBitmap(const QString& fileName): QBitmap(fileName) {};
	MiqtVirtualQBitmap(const QBitmap& param1): QBitmap(param1) {};
	MiqtVirtualQBitmap(const QString& fileName, const char* format): QBitmap(fileName, format) {};

	virtual ~MiqtVirtualQBitmap() override = default;

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

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QBitmap::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QBitmap_InitPainter(const_cast<MiqtVirtualQBitmap*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QBitmap::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QBitmap::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QBitmap_Redirected(const_cast<MiqtVirtualQBitmap*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QBitmap::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QBitmap::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QBitmap_SharedPainter(const_cast<MiqtVirtualQBitmap*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QBitmap::sharedPainter();

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

QBitmap* QBitmap_new6(QBitmap* param1) {
	return new MiqtVirtualQBitmap(*param1);
}

QBitmap* QBitmap_new7(struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new MiqtVirtualQBitmap(fileName_QString, format);
}

void QBitmap_virtbase(QBitmap* src, QPixmap** outptr_QPixmap) {
	*outptr_QPixmap = static_cast<QPixmap*>(src);
}

void QBitmap_OperatorAssign(QBitmap* self, QPixmap* param1) {
	self->operator=(*param1);
}

void QBitmap_Swap(QBitmap* self, QBitmap* other) {
	self->swap(*other);
}

QVariant* QBitmap_ToQVariant(const QBitmap* self) {
	return new QVariant(self->operator QVariant());
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

QBitmap* QBitmap_FromPixmap(QPixmap* pixmap) {
	return new QBitmap(QBitmap::fromPixmap(*pixmap));
}

QBitmap* QBitmap_Transformed(const QBitmap* self, QTransform* matrix) {
	return new QBitmap(self->transformed(*matrix));
}

void QBitmap_OperatorAssignWithQBitmap(QBitmap* self, QBitmap* param1) {
	self->operator=(*param1);
}

QBitmap* QBitmap_FromImage2(QImage* image, int flags) {
	return new QBitmap(QBitmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
}

QBitmap* QBitmap_FromData3(QSize* size, const unsigned char* bits, int monoFormat) {
	return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits), static_cast<QImage::Format>(monoFormat)));
}

bool QBitmap_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QBitmap_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_DevType();
}

bool QBitmap_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QBitmap_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_PaintEngine();
}

bool QBitmap_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QBitmap_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_Metric(param1);
}

bool QBitmap_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QBitmap_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQBitmap*)(self) )->virtualbase_InitPainter(painter);
}

bool QBitmap_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QBitmap_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_Redirected(offset);
}

bool QBitmap_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QBitmap_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_SharedPainter();
}

void QBitmap_Delete(QBitmap* self) {
	delete self;
}

