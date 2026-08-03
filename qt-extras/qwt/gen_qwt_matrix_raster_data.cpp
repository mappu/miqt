#include <QRectF>
#include <QSize>
#include <QVector>
#include <qwt_matrix_raster_data.h>
#include "gen_qwt_matrix_raster_data.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QwtMatrixRasterData_setInterval(QwtMatrixRasterData*, intptr_t, int, QwtInterval*);
QRectF* miqt_exec_callback_QwtMatrixRasterData_pixelHint(const QwtMatrixRasterData*, intptr_t, QRectF*);
double miqt_exec_callback_QwtMatrixRasterData_value(const QwtMatrixRasterData*, intptr_t, double, double);
void miqt_exec_callback_QwtMatrixRasterData_initRaster(QwtMatrixRasterData*, intptr_t, QRectF*, QSize*);
void miqt_exec_callback_QwtMatrixRasterData_discardRaster(QwtMatrixRasterData*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtMatrixRasterData final : public QwtMatrixRasterData {
public:

	MiqtVirtualQwtMatrixRasterData(): QwtMatrixRasterData() {}

	virtual ~MiqtVirtualQwtMatrixRasterData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setInterval = 0;

	// Subclass to allow providing a Go implementation
	virtual void setInterval(Qt::Axis param1, const QwtInterval& param2) override {
		if (handle__setInterval == 0) {
			QwtMatrixRasterData::setInterval(param1, param2);
			return;
		}

		Qt::Axis param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		const QwtInterval& param2_ret = param2;
		// Cast returned reference into pointer
		QwtInterval* sigval2 = const_cast<QwtInterval*>(&param2_ret);
		miqt_exec_callback_QwtMatrixRasterData_setInterval(this, handle__setInterval, sigval1, sigval2);

	}

	friend void QwtMatrixRasterData_virtualbase_setInterval(void* self, int param1, QwtInterval* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pixelHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QRectF pixelHint(const QRectF& param1) const override {
		if (handle__pixelHint == 0) {
			return QwtMatrixRasterData::pixelHint(param1);
		}

		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		QRectF* callback_return_value = miqt_exec_callback_QwtMatrixRasterData_pixelHint(this, handle__pixelHint, sigval1);
		return *callback_return_value;
	}

	friend QRectF* QwtMatrixRasterData_virtualbase_pixelHint(const void* self, QRectF* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__value = 0;

	// Subclass to allow providing a Go implementation
	virtual double value(double x, double y) const override {
		if (handle__value == 0) {
			return QwtMatrixRasterData::value(x, y);
		}

		double sigval1 = x;
		double sigval2 = y;
		double callback_return_value = miqt_exec_callback_QwtMatrixRasterData_value(this, handle__value, sigval1, sigval2);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtMatrixRasterData_virtualbase_value(const void* self, double x, double y);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initRaster = 0;

	// Subclass to allow providing a Go implementation
	virtual void initRaster(const QRectF& param1, const QSize& raster) override {
		if (handle__initRaster == 0) {
			QwtMatrixRasterData::initRaster(param1, raster);
			return;
		}

		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		const QSize& raster_ret = raster;
		// Cast returned reference into pointer
		QSize* sigval2 = const_cast<QSize*>(&raster_ret);
		miqt_exec_callback_QwtMatrixRasterData_initRaster(this, handle__initRaster, sigval1, sigval2);

	}

	friend void QwtMatrixRasterData_virtualbase_initRaster(void* self, QRectF* param1, QSize* raster);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__discardRaster = 0;

	// Subclass to allow providing a Go implementation
	virtual void discardRaster() override {
		if (handle__discardRaster == 0) {
			QwtMatrixRasterData::discardRaster();
			return;
		}

		miqt_exec_callback_QwtMatrixRasterData_discardRaster(this, handle__discardRaster);

	}

	friend void QwtMatrixRasterData_virtualbase_discardRaster(void* self);

};

QwtMatrixRasterData* QwtMatrixRasterData_new() {
	return new (std::nothrow) MiqtVirtualQwtMatrixRasterData();
}

void QwtMatrixRasterData_virtbase(QwtMatrixRasterData* src, QwtRasterData** outptr_QwtRasterData) {
	*outptr_QwtRasterData = static_cast<QwtRasterData*>(src);
}

void QwtMatrixRasterData_setResampleMode(QwtMatrixRasterData* self, int mode) {
	self->setResampleMode(static_cast<QwtMatrixRasterData::ResampleMode>(mode));
}

int QwtMatrixRasterData_resampleMode(const QwtMatrixRasterData* self) {
	QwtMatrixRasterData::ResampleMode _ret = self->resampleMode();
	return static_cast<int>(_ret);
}

void QwtMatrixRasterData_setInterval(QwtMatrixRasterData* self, int param1, QwtInterval* param2) {
	self->setInterval(static_cast<Qt::Axis>(param1), *param2);
}

void QwtMatrixRasterData_setValueMatrix(QwtMatrixRasterData* self, struct miqt_array /* of double */  values, int numColumns) {
	QVector<double> values_QList;
	values_QList.reserve(values.len);
	double* values_arr = static_cast<double*>(values.data);
	for(size_t i = 0; i < values.len; ++i) {
		values_QList.push_back(static_cast<double>(values_arr[i]));
	}
	self->setValueMatrix(values_QList, static_cast<int>(numColumns));
}

struct miqt_array /* of double */  QwtMatrixRasterData_valueMatrix(const QwtMatrixRasterData* self) {
	const QVector<double> _ret = self->valueMatrix();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtMatrixRasterData_setValue(QwtMatrixRasterData* self, int row, int col, double value) {
	self->setValue(static_cast<int>(row), static_cast<int>(col), static_cast<double>(value));
}

int QwtMatrixRasterData_numColumns(const QwtMatrixRasterData* self) {
	return self->numColumns();
}

int QwtMatrixRasterData_numRows(const QwtMatrixRasterData* self) {
	return self->numRows();
}

QRectF* QwtMatrixRasterData_pixelHint(const QwtMatrixRasterData* self, QRectF* param1) {
	return new QRectF(self->pixelHint(*param1));
}

double QwtMatrixRasterData_value(const QwtMatrixRasterData* self, double x, double y) {
	return self->value(static_cast<double>(x), static_cast<double>(y));
}

bool QwtMatrixRasterData_override_virtual_setInterval(void* self, intptr_t slot) {
	MiqtVirtualQwtMatrixRasterData* self_cast = dynamic_cast<MiqtVirtualQwtMatrixRasterData*>( (QwtMatrixRasterData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setInterval = slot;
	return true;
}

void QwtMatrixRasterData_virtualbase_setInterval(void* self, int param1, QwtInterval* param2) {
	static_cast<MiqtVirtualQwtMatrixRasterData*>(self)->QwtMatrixRasterData::setInterval(static_cast<Qt::Axis>(param1), *param2);
}

bool QwtMatrixRasterData_override_virtual_pixelHint(void* self, intptr_t slot) {
	MiqtVirtualQwtMatrixRasterData* self_cast = dynamic_cast<MiqtVirtualQwtMatrixRasterData*>( (QwtMatrixRasterData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pixelHint = slot;
	return true;
}

QRectF* QwtMatrixRasterData_virtualbase_pixelHint(const void* self, QRectF* param1) {
	return new QRectF(static_cast<const MiqtVirtualQwtMatrixRasterData*>(self)->QwtMatrixRasterData::pixelHint(*param1));
}

bool QwtMatrixRasterData_override_virtual_value(void* self, intptr_t slot) {
	MiqtVirtualQwtMatrixRasterData* self_cast = dynamic_cast<MiqtVirtualQwtMatrixRasterData*>( (QwtMatrixRasterData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__value = slot;
	return true;
}

double QwtMatrixRasterData_virtualbase_value(const void* self, double x, double y) {
	return static_cast<const MiqtVirtualQwtMatrixRasterData*>(self)->QwtMatrixRasterData::value(static_cast<double>(x), static_cast<double>(y));
}

bool QwtMatrixRasterData_override_virtual_initRaster(void* self, intptr_t slot) {
	MiqtVirtualQwtMatrixRasterData* self_cast = dynamic_cast<MiqtVirtualQwtMatrixRasterData*>( (QwtMatrixRasterData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initRaster = slot;
	return true;
}

void QwtMatrixRasterData_virtualbase_initRaster(void* self, QRectF* param1, QSize* raster) {
	static_cast<MiqtVirtualQwtMatrixRasterData*>(self)->QwtMatrixRasterData::initRaster(*param1, *raster);
}

bool QwtMatrixRasterData_override_virtual_discardRaster(void* self, intptr_t slot) {
	MiqtVirtualQwtMatrixRasterData* self_cast = dynamic_cast<MiqtVirtualQwtMatrixRasterData*>( (QwtMatrixRasterData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__discardRaster = slot;
	return true;
}

void QwtMatrixRasterData_virtualbase_discardRaster(void* self) {
	static_cast<MiqtVirtualQwtMatrixRasterData*>(self)->QwtMatrixRasterData::discardRaster();
}

void QwtMatrixRasterData_delete(QwtMatrixRasterData* self) {
	delete self;
}

