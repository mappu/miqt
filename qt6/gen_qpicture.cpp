#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPicture>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpicture.h>
#include "gen_qpicture.h"
#include "_cgo_export.h"

class MiqtVirtualQPicture : public virtual QPicture {
public:

	MiqtVirtualQPicture(): QPicture() {};
	MiqtVirtualQPicture(const QPicture& param1): QPicture(param1) {};
	MiqtVirtualQPicture(int formatVersion): QPicture(formatVersion) {};

	virtual ~MiqtVirtualQPicture() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPicture::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPicture_DevType(const_cast<MiqtVirtualQPicture*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPicture::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(const char* data, uint size) override {
		if (handle__SetData == 0) {
			QPicture::setData(data, size);
			return;
		}
		
		const char* sigval1 = (const char*) data;
		uint size_ret = size;
		unsigned int sigval2 = static_cast<unsigned int>(size_ret);

		miqt_exec_callback_QPicture_SetData(this, handle__SetData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetData(const char* data, unsigned int size) {

		QPicture::setData(data, static_cast<uint>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QPicture::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPicture_PaintEngine(const_cast<MiqtVirtualQPicture*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QPicture::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric m) const override {
		if (handle__Metric == 0) {
			return QPicture::metric(m);
		}
		
		QPaintDevice::PaintDeviceMetric m_ret = m;
		int sigval1 = static_cast<int>(m_ret);

		int callback_return_value = miqt_exec_callback_QPicture_Metric(const_cast<MiqtVirtualQPicture*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int m) const {

		return QPicture::metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QPicture::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPicture_InitPainter(const_cast<MiqtVirtualQPicture*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QPicture::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QPicture::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPicture_Redirected(const_cast<MiqtVirtualQPicture*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QPicture::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QPicture::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPicture_SharedPainter(const_cast<MiqtVirtualQPicture*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QPicture::sharedPainter();

	}

};

void QPicture_new(QPicture** outptr_QPicture, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQPicture* ret = new MiqtVirtualQPicture();
	*outptr_QPicture = ret;
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QPicture_new2(QPicture* param1, QPicture** outptr_QPicture, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQPicture* ret = new MiqtVirtualQPicture(*param1);
	*outptr_QPicture = ret;
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

void QPicture_new3(int formatVersion, QPicture** outptr_QPicture, QPaintDevice** outptr_QPaintDevice) {
	MiqtVirtualQPicture* ret = new MiqtVirtualQPicture(static_cast<int>(formatVersion));
	*outptr_QPicture = ret;
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(ret);
}

bool QPicture_IsNull(const QPicture* self) {
	return self->isNull();
}

int QPicture_DevType(const QPicture* self) {
	return self->devType();
}

unsigned int QPicture_Size(const QPicture* self) {
	uint _ret = self->size();
	return static_cast<unsigned int>(_ret);
}

const char* QPicture_Data(const QPicture* self) {
	return (const char*) self->data();
}

void QPicture_SetData(QPicture* self, const char* data, unsigned int size) {
	self->setData(data, static_cast<uint>(size));
}

bool QPicture_Play(QPicture* self, QPainter* p) {
	return self->play(p);
}

bool QPicture_Load(QPicture* self, QIODevice* dev) {
	return self->load(dev);
}

bool QPicture_LoadWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QPicture_Save(QPicture* self, QIODevice* dev) {
	return self->save(dev);
}

bool QPicture_SaveWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString);
}

QRect* QPicture_BoundingRect(const QPicture* self) {
	return new QRect(self->boundingRect());
}

void QPicture_SetBoundingRect(QPicture* self, QRect* r) {
	self->setBoundingRect(*r);
}

void QPicture_OperatorAssign(QPicture* self, QPicture* p) {
	self->operator=(*p);
}

void QPicture_Swap(QPicture* self, QPicture* other) {
	self->swap(*other);
}

void QPicture_Detach(QPicture* self) {
	self->detach();
}

bool QPicture_IsDetached(const QPicture* self) {
	return self->isDetached();
}

QPaintEngine* QPicture_PaintEngine(const QPicture* self) {
	return self->paintEngine();
}

void QPicture_override_virtual_DevType(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) )->handle__DevType = slot;
}

int QPicture_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_DevType();
}

void QPicture_override_virtual_SetData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) )->handle__SetData = slot;
}

void QPicture_virtualbase_SetData(void* self, const char* data, unsigned int size) {
	( (MiqtVirtualQPicture*)(self) )->virtualbase_SetData(data, size);
}

void QPicture_override_virtual_PaintEngine(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) )->handle__PaintEngine = slot;
}

QPaintEngine* QPicture_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_PaintEngine();
}

void QPicture_override_virtual_Metric(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) )->handle__Metric = slot;
}

int QPicture_virtualbase_Metric(const void* self, int m) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_Metric(m);
}

void QPicture_override_virtual_InitPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) )->handle__InitPainter = slot;
}

void QPicture_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPicture*)(self) )->virtualbase_InitPainter(painter);
}

void QPicture_override_virtual_Redirected(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) )->handle__Redirected = slot;
}

QPaintDevice* QPicture_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_Redirected(offset);
}

void QPicture_override_virtual_SharedPainter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) )->handle__SharedPainter = slot;
}

QPainter* QPicture_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQPicture*)(self) )->virtualbase_SharedPainter();
}

void QPicture_Delete(QPicture* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQPicture*>( self );
	} else {
		delete self;
	}
}

