#include <QRectF>
#include <QSize>
#include <qwt_raster_data.h>
#include "gen_qwt_raster_data.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtRasterData_setInterval(QwtRasterData*, intptr_t, int, QwtInterval*);
QRectF* miqt_exec_callback_QwtRasterData_pixelHint(const QwtRasterData*, intptr_t, QRectF*);
void miqt_exec_callback_QwtRasterData_initRaster(QwtRasterData*, intptr_t, QRectF*, QSize*);
void miqt_exec_callback_QwtRasterData_discardRaster(QwtRasterData*, intptr_t);
double miqt_exec_callback_QwtRasterData_value(const QwtRasterData*, intptr_t, double, double);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtRasterData final : public QwtRasterData {
public:

	MiqtVirtualQwtRasterData(): QwtRasterData() {}

	virtual ~MiqtVirtualQwtRasterData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setInterval = 0;

	// Subclass to allow providing a Go implementation
	virtual void setInterval(Qt::Axis param1, const QwtInterval& param2) override {
		if (handle__setInterval == 0) {
			QwtRasterData::setInterval(param1, param2);
			return;
		}

		Qt::Axis param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		const QwtInterval& param2_ret = param2;
		// Cast returned reference into pointer
		QwtInterval* sigval2 = const_cast<QwtInterval*>(&param2_ret);
		miqt_exec_callback_QwtRasterData_setInterval(this, handle__setInterval, sigval1, sigval2);

	}

	friend void QwtRasterData_virtualbase_setInterval(void* self, int param1, QwtInterval* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pixelHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF pixelHint(const QRectF& param1) const override {
		if (handle__pixelHint == 0) {
			return QwtRasterData::pixelHint(param1);
		}

		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		QRectF* callback_return_value = miqt_exec_callback_QwtRasterData_pixelHint(this, handle__pixelHint, sigval1);
		return *callback_return_value;
	}

	friend QRectF* QwtRasterData_virtualbase_pixelHint(const void* self, QRectF* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initRaster = 0;

	// Subclass to allow providing a Go implementation
	virtual void initRaster(const QRectF& param1, const QSize& raster) override {
		if (handle__initRaster == 0) {
			QwtRasterData::initRaster(param1, raster);
			return;
		}

		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		const QSize& raster_ret = raster;
		// Cast returned reference into pointer
		QSize* sigval2 = const_cast<QSize*>(&raster_ret);
		miqt_exec_callback_QwtRasterData_initRaster(this, handle__initRaster, sigval1, sigval2);

	}

	friend void QwtRasterData_virtualbase_initRaster(void* self, QRectF* param1, QSize* raster);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__discardRaster = 0;

	// Subclass to allow providing a Go implementation
	virtual void discardRaster() override {
		if (handle__discardRaster == 0) {
			QwtRasterData::discardRaster();
			return;
		}

		miqt_exec_callback_QwtRasterData_discardRaster(this, handle__discardRaster);

	}

	friend void QwtRasterData_virtualbase_discardRaster(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__value = 0;

	// Subclass to allow providing a Go implementation
	virtual double value(double x, double y) const override {
		if (handle__value == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		double sigval1 = x;
		double sigval2 = y;
		double callback_return_value = miqt_exec_callback_QwtRasterData_value(this, handle__value, sigval1, sigval2);
		return static_cast<double>(callback_return_value);
	}

};

QwtRasterData* QwtRasterData_new() {
	return new (std::nothrow) MiqtVirtualQwtRasterData();
}

void QwtRasterData_setInterval(QwtRasterData* self, int param1, QwtInterval* param2) {
	self->setInterval(static_cast<Qt::Axis>(param1), *param2);
}

QwtInterval* QwtRasterData_interval(const QwtRasterData* self, int param1) {
	const QwtInterval& _ret = self->interval(static_cast<Qt::Axis>(param1));
	// Cast returned reference into pointer
	return const_cast<QwtInterval*>(&_ret);
}

QRectF* QwtRasterData_pixelHint(const QwtRasterData* self, QRectF* param1) {
	return new QRectF(self->pixelHint(*param1));
}

void QwtRasterData_initRaster(QwtRasterData* self, QRectF* param1, QSize* raster) {
	self->initRaster(*param1, *raster);
}

void QwtRasterData_discardRaster(QwtRasterData* self) {
	self->discardRaster();
}

double QwtRasterData_value(const QwtRasterData* self, double x, double y) {
	return self->value(static_cast<double>(x), static_cast<double>(y));
}

bool QwtRasterData_override_virtual_setInterval(void* self, intptr_t slot) {
	MiqtVirtualQwtRasterData* self_cast = dynamic_cast<MiqtVirtualQwtRasterData*>( (QwtRasterData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setInterval = slot;
	return true;
}

void QwtRasterData_virtualbase_setInterval(void* self, int param1, QwtInterval* param2) {
	static_cast<MiqtVirtualQwtRasterData*>(self)->QwtRasterData::setInterval(static_cast<Qt::Axis>(param1), *param2);
}

bool QwtRasterData_override_virtual_pixelHint(void* self, intptr_t slot) {
	MiqtVirtualQwtRasterData* self_cast = dynamic_cast<MiqtVirtualQwtRasterData*>( (QwtRasterData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pixelHint = slot;
	return true;
}

QRectF* QwtRasterData_virtualbase_pixelHint(const void* self, QRectF* param1) {
	return new QRectF(static_cast<const MiqtVirtualQwtRasterData*>(self)->QwtRasterData::pixelHint(*param1));
}

bool QwtRasterData_override_virtual_initRaster(void* self, intptr_t slot) {
	MiqtVirtualQwtRasterData* self_cast = dynamic_cast<MiqtVirtualQwtRasterData*>( (QwtRasterData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initRaster = slot;
	return true;
}

void QwtRasterData_virtualbase_initRaster(void* self, QRectF* param1, QSize* raster) {
	static_cast<MiqtVirtualQwtRasterData*>(self)->QwtRasterData::initRaster(*param1, *raster);
}

bool QwtRasterData_override_virtual_discardRaster(void* self, intptr_t slot) {
	MiqtVirtualQwtRasterData* self_cast = dynamic_cast<MiqtVirtualQwtRasterData*>( (QwtRasterData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__discardRaster = slot;
	return true;
}

void QwtRasterData_virtualbase_discardRaster(void* self) {
	static_cast<MiqtVirtualQwtRasterData*>(self)->QwtRasterData::discardRaster();
}

bool QwtRasterData_override_virtual_value(void* self, intptr_t slot) {
	MiqtVirtualQwtRasterData* self_cast = dynamic_cast<MiqtVirtualQwtRasterData*>( (QwtRasterData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__value = slot;
	return true;
}

void QwtRasterData_delete(QwtRasterData* self) {
	delete self;
}

