#include <QMarginsF>
#include <QPageLayout>
#include <QPageSize>
#include <QPagedPaintDevice>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QSizeF>
#include <qpagedpaintdevice.h>
#include "gen_qpagedpaintdevice.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QPagedPaintDevice_newPage(QPagedPaintDevice*, intptr_t);
void miqt_exec_callback_QPagedPaintDevice_setPageSizeWithSize(QPagedPaintDevice*, intptr_t, int);
void miqt_exec_callback_QPagedPaintDevice_setPageSizeMM(QPagedPaintDevice*, intptr_t, QSizeF*);
void miqt_exec_callback_QPagedPaintDevice_setMargins(QPagedPaintDevice*, intptr_t, QPagedPaintDevice__Margins*);
int miqt_exec_callback_QPagedPaintDevice_devType(const QPagedPaintDevice*, intptr_t);
QPaintEngine* miqt_exec_callback_QPagedPaintDevice_paintEngine(const QPagedPaintDevice*, intptr_t);
int miqt_exec_callback_QPagedPaintDevice_metric(const QPagedPaintDevice*, intptr_t, int);
void miqt_exec_callback_QPagedPaintDevice_initPainter(const QPagedPaintDevice*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPagedPaintDevice_redirected(const QPagedPaintDevice*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPagedPaintDevice_sharedPainter(const QPagedPaintDevice*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPagedPaintDevice final : public QPagedPaintDevice {
public:

	MiqtVirtualQPagedPaintDevice(): QPagedPaintDevice() {};

	virtual ~MiqtVirtualQPagedPaintDevice() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__newPage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool newPage() override {
		if (handle__newPage == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		

		bool callback_return_value = miqt_exec_callback_QPagedPaintDevice_newPage(this, handle__newPage);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageSizeWithSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSize(QPagedPaintDevice::PageSize size) override {
		if (handle__setPageSizeWithSize == 0) {
			QPagedPaintDevice::setPageSize(size);
			return;
		}
		
		QPagedPaintDevice::PageSize size_ret = size;
		int sigval1 = static_cast<int>(size_ret);

		miqt_exec_callback_QPagedPaintDevice_setPageSizeWithSize(this, handle__setPageSizeWithSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setPageSizeWithSize(int size) {

		QPagedPaintDevice::setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPageSizeMM = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSizeMM(const QSizeF& size) override {
		if (handle__setPageSizeMM == 0) {
			QPagedPaintDevice::setPageSizeMM(size);
			return;
		}
		
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);

		miqt_exec_callback_QPagedPaintDevice_setPageSizeMM(this, handle__setPageSizeMM, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setPageSizeMM(QSizeF* size) {

		QPagedPaintDevice::setPageSizeMM(*size);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMargins(const QPagedPaintDevice::Margins& margins) override {
		if (handle__setMargins == 0) {
			QPagedPaintDevice::setMargins(margins);
			return;
		}
		
		const QPagedPaintDevice::Margins& margins_ret = margins;
		// Cast returned reference into pointer
		QPagedPaintDevice__Margins* sigval1 = const_cast<QPagedPaintDevice::Margins*>(&margins_ret);

		miqt_exec_callback_QPagedPaintDevice_setMargins(this, handle__setMargins, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_setMargins(QPagedPaintDevice__Margins* margins) {

		QPagedPaintDevice::setMargins(*margins);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPagedPaintDevice::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPagedPaintDevice_devType(this, handle__devType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_devType() const {

		return QPagedPaintDevice::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPagedPaintDevice_paintEngine(this, handle__paintEngine);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (handle__metric == 0) {
			return QPagedPaintDevice::metric(metric);
		}
		
		QPaintDevice::PaintDeviceMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);

		int callback_return_value = miqt_exec_callback_QPagedPaintDevice_metric(this, handle__metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_metric(int metric) const {

		return QPagedPaintDevice::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QPagedPaintDevice::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPagedPaintDevice_initPainter(this, handle__initPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_initPainter(QPainter* painter) const {

		QPagedPaintDevice::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QPagedPaintDevice::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPagedPaintDevice_redirected(this, handle__redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_redirected(QPoint* offset) const {

		return QPagedPaintDevice::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QPagedPaintDevice::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPagedPaintDevice_sharedPainter(this, handle__sharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_sharedPainter() const {

		return QPagedPaintDevice::sharedPainter();

	}

	// Wrappers to allow calling protected methods:
	friend QPageLayout* QPagedPaintDevice_protectedbase_devicePageLayout(bool* _dynamic_cast_ok, const void* self);
	friend QPageLayout* QPagedPaintDevice_protectedbase_devicePageLayout2(bool* _dynamic_cast_ok, void* self);
};

QPagedPaintDevice* QPagedPaintDevice_new() {
	return new MiqtVirtualQPagedPaintDevice();
}

void QPagedPaintDevice_virtbase(QPagedPaintDevice* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

bool QPagedPaintDevice_newPage(QPagedPaintDevice* self) {
	return self->newPage();
}

bool QPagedPaintDevice_setPageLayout(QPagedPaintDevice* self, QPageLayout* pageLayout) {
	return self->setPageLayout(*pageLayout);
}

bool QPagedPaintDevice_setPageSize(QPagedPaintDevice* self, QPageSize* pageSize) {
	return self->setPageSize(*pageSize);
}

bool QPagedPaintDevice_setPageOrientation(QPagedPaintDevice* self, int orientation) {
	return self->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

bool QPagedPaintDevice_setPageMargins(QPagedPaintDevice* self, QMarginsF* margins) {
	return self->setPageMargins(*margins);
}

bool QPagedPaintDevice_setPageMargins2(QPagedPaintDevice* self, QMarginsF* margins, int units) {
	return self->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

QPageLayout* QPagedPaintDevice_pageLayout(const QPagedPaintDevice* self) {
	return new QPageLayout(self->pageLayout());
}

void QPagedPaintDevice_setPageSizeWithSize(QPagedPaintDevice* self, int size) {
	self->setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));
}

int QPagedPaintDevice_pageSize(const QPagedPaintDevice* self) {
	QPagedPaintDevice::PageSize _ret = self->pageSize();
	return static_cast<int>(_ret);
}

void QPagedPaintDevice_setPageSizeMM(QPagedPaintDevice* self, QSizeF* size) {
	self->setPageSizeMM(*size);
}

QSizeF* QPagedPaintDevice_pageSizeMM(const QPagedPaintDevice* self) {
	return new QSizeF(self->pageSizeMM());
}

void QPagedPaintDevice_setMargins(QPagedPaintDevice* self, QPagedPaintDevice__Margins* margins) {
	self->setMargins(*margins);
}

QPagedPaintDevice__Margins* QPagedPaintDevice_margins(const QPagedPaintDevice* self) {
	return new QPagedPaintDevice::Margins(self->margins());
}

bool QPagedPaintDevice_override_virtual_newPage(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__newPage = slot;
	return true;
}

bool QPagedPaintDevice_override_virtual_setPageSizeWithSize(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageSizeWithSize = slot;
	return true;
}

void QPagedPaintDevice_virtualbase_setPageSizeWithSize(void* self, int size) {
	( (MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_setPageSizeWithSize(size);
}

bool QPagedPaintDevice_override_virtual_setPageSizeMM(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPageSizeMM = slot;
	return true;
}

void QPagedPaintDevice_virtualbase_setPageSizeMM(void* self, QSizeF* size) {
	( (MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_setPageSizeMM(size);
}

bool QPagedPaintDevice_override_virtual_setMargins(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setMargins = slot;
	return true;
}

void QPagedPaintDevice_virtualbase_setMargins(void* self, QPagedPaintDevice__Margins* margins) {
	( (MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_setMargins(margins);
}

bool QPagedPaintDevice_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__devType = slot;
	return true;
}

int QPagedPaintDevice_virtualbase_devType(const void* self) {
	return ( (const MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_devType();
}

bool QPagedPaintDevice_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paintEngine = slot;
	return true;
}

bool QPagedPaintDevice_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metric = slot;
	return true;
}

int QPagedPaintDevice_virtualbase_metric(const void* self, int metric) {
	return ( (const MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_metric(metric);
}

bool QPagedPaintDevice_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__initPainter = slot;
	return true;
}

void QPagedPaintDevice_virtualbase_initPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_initPainter(painter);
}

bool QPagedPaintDevice_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QPagedPaintDevice_virtualbase_redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_redirected(offset);
}

bool QPagedPaintDevice_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QPagedPaintDevice_virtualbase_sharedPainter(const void* self) {
	return ( (const MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_sharedPainter();
}

QPageLayout* QPagedPaintDevice_protectedbase_devicePageLayout(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QPageLayout(self_cast->devicePageLayout());

}

QPageLayout* QPagedPaintDevice_protectedbase_devicePageLayout2(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	QPageLayout& _ret = self_cast->devicePageLayout();
	// Cast returned reference into pointer
	return &_ret;

}

void QPagedPaintDevice_delete(QPagedPaintDevice* self) {
	delete self;
}

void QPagedPaintDevice__Margins_delete(QPagedPaintDevice__Margins* self) {
	delete self;
}

