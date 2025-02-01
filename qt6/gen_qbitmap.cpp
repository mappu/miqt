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

int miqt_exec_callback_QBitmap_devType(const QBitmap*, intptr_t);
QPaintEngine* miqt_exec_callback_QBitmap_paintEngine(const QBitmap*, intptr_t);
int miqt_exec_callback_QBitmap_metric(const QBitmap*, intptr_t, int);
void miqt_exec_callback_QBitmap_initPainter(const QBitmap*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QBitmap_redirected(const QBitmap*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QBitmap_sharedPainter(const QBitmap*, intptr_t);
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
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QBitmap::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QBitmap_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QBitmap::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QBitmap::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QBitmap_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_paintEngine() const {

		return QBitmap::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QBitmap::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QBitmap_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int param1) const {

		return QBitmap::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QBitmap::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QBitmap_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QBitmap::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QBitmap::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QBitmap_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QBitmap::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QBitmap::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QBitmap_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

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

void QBitmap_operatorAssign(QBitmap* self, QPixmap* param1) {
	self->operator=(*param1);
}

void QBitmap_swap(QBitmap* self, QBitmap* other) {
	self->swap(*other);
}

QVariant* QBitmap_ToQVariant(const QBitmap* self) {
	return new QVariant(self->operator QVariant());
}

void QBitmap_clear(QBitmap* self) {
	self->clear();
}

QBitmap* QBitmap_fromImage(QImage* image) {
	return new QBitmap(QBitmap::fromImage(*image));
}

QBitmap* QBitmap_fromData(QSize* size, const unsigned char* bits) {
	return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits)));
}

QBitmap* QBitmap_fromPixmap(QPixmap* pixmap) {
	return new QBitmap(QBitmap::fromPixmap(*pixmap));
}

QBitmap* QBitmap_transformed(const QBitmap* self, QTransform* matrix) {
	return new QBitmap(self->transformed(*matrix));
}

void QBitmap_operatorAssignWithQBitmap(QBitmap* self, QBitmap* param1) {
	self->operator=(*param1);
}

QBitmap* QBitmap_fromImage2(QImage* image, int flags) {
	return new QBitmap(QBitmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
}

QBitmap* QBitmap_fromData3(QSize* size, const unsigned char* bits, int monoFormat) {
	return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits), static_cast<QImage::Format>(monoFormat)));
}

bool QBitmap_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QBitmap_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_devType();
}

bool QBitmap_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QBitmap_virtualbase_paintEngine(const void* self) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_paintEngine();
}

bool QBitmap_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QBitmap_virtualbase_metric(const void* self, int param1) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_metric(param1);
}

bool QBitmap_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QBitmap_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQBitmap*)(self) )->virtualbase_initPainter(painter);
}

bool QBitmap_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QBitmap_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_redirected(offset);
}

bool QBitmap_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = dynamic_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QBitmap_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQBitmap*)(self) )->virtualbase_sharedPainter();
}

void QBitmap_delete(QBitmap* self) {
	delete self;
}

